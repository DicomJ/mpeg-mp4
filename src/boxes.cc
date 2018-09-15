#include <mpeg-mp4/boxes.h>

#include <mpeg-mp4/box/object_descriptor.h>


namespace mpeg {
namespace mp4 {


const mpeg::isobase::Box::Map &Parser::all_boxes = RegisterBoxes();

RegisterBoxes::RegisterBoxes() {
    add<ObjectDescriptorBox>();
}


}} // namespace mpeg::mp4

