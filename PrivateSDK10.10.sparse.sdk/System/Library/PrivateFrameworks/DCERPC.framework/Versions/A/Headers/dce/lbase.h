/* Generated by IDL compiler version FreeDCE 1.1.0.7 with GNU Flex/Bison */
#ifndef lbase_v0_0_included
#define lbase_v0_0_included
#ifndef IDLBASE_H
#include <dce/idlbase.h>
#endif

#ifdef __cplusplus
    extern "C" {
#endif

#ifndef nbase_v0_0_included
#include <dce/nbase.h>
#endif
typedef idl_char unsigned_char_t;
typedef idl_short_float *short_float_p_t;
typedef idl_long_float *long_float_p_t;
typedef idl_char *char_p_t;
typedef idl_char *unsigned_char_p_t;
typedef idl_byte *byte_p_t;
typedef struct  {
unsigned8 length;
unsigned8 family;
unsigned8 data[1];
} sockaddr_t;
typedef sockaddr_t *sockaddr_p_t;

#ifdef __cplusplus
    }
#endif

#endif
