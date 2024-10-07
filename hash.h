#ifndef DJB2_HASH_INCLUDED
#define DJB2_HASH_INCLUDED

#include <stdlib.h>
#include <math.h>

#ifndef NDEBUG
typedef size_t hash_t;
#endif

hash_t hash(const void* data, size_t size);

#endif