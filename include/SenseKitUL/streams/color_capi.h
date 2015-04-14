#ifndef COLOR_CAPI_H
#define COLOR_CAPI_H

#include <SenseKit/sensekit_types.h>
#include "color_types.h"

SENSEKIT_BEGIN_DECLS

SENSEKIT_API_EX sensekit_status_t sensekit_color_stream_get(sensekit_reader_t reader,
                                                            sensekit_colorstream_t* colorStream);

SENSEKIT_API_EX sensekit_status_t sensekit_color_stream_get_by_type(sensekit_reader_t reader,
                                                                    sensekit_stream_type_t type,
                                                                    sensekit_stream_subtype_t subtype,
                                                                    sensekit_colorstream_t* colorStream);

SENSEKIT_API_EX sensekit_status_t sensekit_color_stream_get_hfov(sensekit_colorstream_t colorStream,
                                                                 float* hFov);

SENSEKIT_API_EX sensekit_status_t sensekit_color_stream_get_vfov(sensekit_colorstream_t colorStream,
                                                                 float* vFov);

SENSEKIT_API_EX sensekit_status_t sensekit_color_frame_get(sensekit_reader_frame_t readerFrame,
                                                           sensekit_colorframe_t* colorFrame);

SENSEKIT_API_EX sensekit_status_t sensekit_colorframe_get_data_length(sensekit_colorframe_t colorFrame,
                                                                      size_t* length);

SENSEKIT_API_EX sensekit_status_t sensekit_colorframe_get_data_ptr(sensekit_colorframe_t colorFrame,
                                                                   uint8_t** data,
                                                                   size_t* length);

SENSEKIT_API_EX sensekit_status_t sensekit_colorframe_copy_data(sensekit_colorframe_t colorFrame,
                                                                uint8_t* data);

SENSEKIT_API_EX sensekit_status_t sensekit_colorframe_get_metadata(sensekit_colorframe_t colorFrame,
                                                                   sensekit_colorframe_metadata_t* metadata);

SENSEKIT_API_EX sensekit_status_t sensekit_colorframe_get_frameindex(sensekit_colorframe_t colorFrame,
                                                                     sensekit_frame_index_t* index);
SENSEKIT_END_DECLS

#endif /* COLOR_CAPI_H */
