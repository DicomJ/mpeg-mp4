#ifndef __MPEG_MP4_PARSER__
#define __MPEG_MP4_PARSER__

#include <mpeg-isobase/parser.h>

namespace mpeg {
namespace mp4 {


struct Parser: mpeg::isobase::Parser {

    static const mpeg::isobase::Box::Map &all_boxes;

    Parser(bitstream::Stream &stream,
           bitstream::Parser::Observer &observer,
           const isobase::Box::Map &boxes = all_boxes)
        : mpeg::isobase::Parser(stream, observer, boxes) {}
};


}} // namespace mpeg::mp4


#endif // __MPEG_MP4_PARSER__

