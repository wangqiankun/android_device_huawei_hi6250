#include <stdint.h>

/* liblog */
extern int __hi_log_print(){ return 0; }
extern int __android_janklog_print() { return 0; }
extern int __android_logPower_print() { return 0; }
extern int __android_log_exception_write() { return 0; }

/* libexif */
extern int exif_entry_gps_initialize() { return 0; }

/* libcutils */
extern void atrace_async_begin_body_HwCam(const char* name,int32_t cookie) {}

/* libaudio_route */
extern int pop_seq_init(){return 0;};
extern int pop_seq_set(){return 0;};

