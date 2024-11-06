#ifndef CESS_MEMORY_H
#define CESS_MEMORY_H

#include <stdbool.h>
#include <stdlib.h>

//    ____  ____     ___  ____    ____
//   /    ||    \   /  _]|    \  /    |
//  |  o  ||  D  ) /  [_ |  _  ||  o  |
//  |     ||    / |    _]|  |  ||     |
//  |  _  ||    \ |   [_ |  |  ||  _  |
//  |  |  ||  .  \|     ||  |  ||  |  |
//  |__|__||__|\_||_____||__|__||__|__|

typedef struct {
    void* buffer;
    size_t used;
    size_t size;
} cess_arena;

bool  cess_create_arena(cess_arena* arena, size_t size);
void  cess_destroy_arena(cess_arena* arena);
bool cess_alloc_on_arena(cess_arena* arena, void** pointer, size_t size);


#endif

// fonts by: https://patorjk.com/software/taag/#p=display&f=Crawford2&t=Arena
// font: Crawford2
