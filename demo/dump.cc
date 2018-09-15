#include <iostream>
#include <bitstream/ifstream.h>
#include <bitstream/opstream.h>
#include <mpeg-mp4/parser.h>
#include <mpeg-mp4/boxes.h>

int main(int argc, const char **argv) {
    for (int i = 1; i < argc; ++i) {
        try {
            bitstream::input::file::Stream stream(argv[i]);
            mpeg::mp4::Parser parser(stream, bitstream::output::print::to_stdout);
            parser.parse();
        } catch (const std::exception &e) {
            std::cerr << e.what() << std::endl;
        }
    }
}

