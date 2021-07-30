#include "be_constobj.h"

static be_define_const_map_slots(be_class_audio_generator_wav_map) {
    { be_const_key(close, -1), be_const_func(i2s_generator_wav_deinit) },
    { be_const_key(stop, -1), be_const_func(i2s_generator_wav_stop) },
    { be_const_key(loop, 0), be_const_func(i2s_generator_wav_loop) },
    { be_const_key(isrunning, 1), be_const_func(i2s_generator_wav_isrunning) },
    { be_const_key(begin, -1), be_const_func(i2s_generator_wav_begin) },
    { be_const_key(deinit, 6), be_const_func(i2s_generator_wav_deinit) },
    { be_const_key(init, -1), be_const_func(i2s_generator_wav_init) },
};

static be_define_const_map(
    be_class_audio_generator_wav_map,
    7
);

BE_EXPORT_VARIABLE be_define_const_class(
    be_class_audio_generator_wav,
    0,
    (bclass *)&be_class_audio_generator,
    AudioGeneratorWAV
);