#define _GL_USE_STDLIB_ALLOC 1
#include <iconvconf.h>
#include "allocator.h"
#include <stdlib.h>
struct allocator const stdlib_allocator = { malloc, realloc, free, NULL };
