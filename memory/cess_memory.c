#include <stdbool.h>
#include "cess_memory.h"

bool cess_create_arena(cess_arena* arena, size_t size) {
    arena->used = 0;
    arena->buffer = malloc(size);
    
    if (arena == 0) {
        arena->size = 0;
        arena->buffer = 0;
        return false;
    }

    arena->size = size;
    return true;
}
void cess_destroy_arena(cess_arena *arena) {
    free(arena->buffer);
    arena->buffer = 0;
    arena->size = 0;
    arena->used = 0;
}

bool cess_alloc_on_arena(cess_arena* arena, void** pointer, size_t size) {
    if (size > arena->size - arena->used)
        return false;

    *pointer = arena->buffer + arena->used;
    arena->used += size;
    
    return true;
}
