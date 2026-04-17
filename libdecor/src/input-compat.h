#ifndef LIBDECOR_INPUT_COMPAT_H
#define LIBDECOR_INPUT_COMPAT_H

#if defined(__QNX__)
/* Minimal subset of Linux input-event button codes used by FLTK/libdecor. */
#ifndef BTN_LEFT
#define BTN_LEFT 0x110
#endif
#ifndef BTN_RIGHT
#define BTN_RIGHT 0x111
#endif
#ifndef BTN_MIDDLE
#define BTN_MIDDLE 0x112
#endif
#ifndef BTN_SIDE
#define BTN_SIDE 0x113
#endif
#ifndef BTN_EXTRA
#define BTN_EXTRA 0x114
#endif
#ifndef BTN_FORWARD
#define BTN_FORWARD 0x115
#endif
#ifndef BTN_BACK
#define BTN_BACK 0x116
#endif
#else
#include <linux/input.h>
#endif

#endif
