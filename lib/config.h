#ifndef BASE64_CONFIG_H
#define BASE64_CONFIG_H

#if defined(__x86_64__)
#define HAVE_AVX2 1
#define HAVE_SSSE3 0
#define HAVE_SSE41 0
#define HAVE_SSE42 1
#define HAVE_AVX 0
#elif defined(__aarch64__)
#define HAVE_NEON32 0
#define HAVE_NEON64 1
#endif

#endif
