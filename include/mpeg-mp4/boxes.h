#ifndef __MPEG_MP4_BOXES__
#define __MPEG_MP4_BOXES__

#include <mpeg-isobase/boxes.h>
#include <mpeg-mp4/parser.h>


namespace mpeg {
namespace mp4 {


struct Boxes: virtual mpeg::isobase::Boxes {
    template <typename Box, typename ...Args>
    void add(const Args &...args) { mpeg::isobase::Box::Map::template add<Box, mpeg::mp4::Parser>(args...); }
};


struct RegisterBoxes: virtual Boxes, mpeg::isobase::RegisterBoxes  {
    RegisterBoxes();
};


}} // namespace mpeg::mp4


#endif // __MPEG_MP4_BOXES__

