#ifndef __MPEG_MP4_OBJECT_DESCRIPTOR_BOX__
#define __MPEG_MP4_OBJECT_DESCRIPTOR_BOX__

#include <mpeg-isobase/box/full.h>
#include <mpeg-isobase/parser.h>
#include <mpeg-isobase/composer.h>


namespace mpeg {
namespace mp4 {


struct ObjectDescriptorBox: mpeg::isobase::FullBox {

    static constexpr Type container_type = 'moov';
    static constexpr Type box_type = 'iods';
    static constexpr const char *box_name = "ObjectDescriptorBox";


    ObjectDescriptorBox(Composer &composer, uint32_t entry_count, Version version = 0, bool largesize = false): mpeg::isobase::FullBox(composer, box_type, version, Flags(0), largesize) {
    }

    ObjectDescriptorBox(Parser &parser): mpeg::isobase::FullBox(parser, Flags(0)) {
    }
};

}} // namespace mpeg::mp4

#endif // __MPEG_MP4_OBJECT_DESCRIPTOR_BOX__

