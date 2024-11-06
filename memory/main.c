#include "test.h"
#include "cess_memory.h"
#include <stdbool.h>

int main(void) {
    // create arena test
    cess_arena my_arena;
    bool created_arena = cess_create_arena(&my_arena, 1000);
    
    CESS_EQUALS(created_arena, true, "create arena returned true");
    CESS_NOT_NULL(my_arena.buffer, "buffer is not null");
    CESS_EQUALS(my_arena.size, 1000, "size is 1000");
    CESS_EQUALS(my_arena.used, 0, "used is 0");
    CESS_TEST_RESULTS("create arena");
    CESS_RESET_RESULTS();

    // allocate on arena 1
    int* int_in_arena = 0;
    bool allocated_on_arena = cess_alloc_on_arena(&my_arena, (void**)&int_in_arena, sizeof(int));
    
    CESS_EQUALS(allocated_on_arena, true, "arena alloc_on_arena returned true");
    CESS_NOT_NULL(int_in_arena, "int_in_arena is not null");

    // access memory 1
    if (allocated_on_arena == false) {
        perror("couldn't allocate on arena");
        exit(1);
    }
    *int_in_arena = 22;
        
    CESS_EQUALS(*int_in_arena, 22, "*int_in_arena is 22");
    CESS_TEST_RESULTS("allocate and accessing memory 1");
    CESS_RESET_RESULTS();

    // allocate on arena 2
    char* char_in_arena = 0;
    allocated_on_arena = cess_alloc_on_arena(&my_arena, (void**)&char_in_arena, sizeof(float));
    
    CESS_EQUALS(allocated_on_arena, true, "arena alloc_on_arena returned true");
    CESS_NOT_NULL(char_in_arena, "int_in_arena is not null");

    // access memory 2
    if (allocated_on_arena == false) {
        perror("couldn't allocate on arena");
        exit(1);
    }
    *char_in_arena = 'a';
        
    CESS_EQUALS(*char_in_arena, 'a' , "*char_in_arena is 'a'");
    CESS_TEST_RESULTS("allocate and access memory 2");
    CESS_RESET_RESULTS();
    
    // destroy arena test
    cess_destroy_arena(&my_arena);
    
    CESS_EQUALS(my_arena.buffer, 0, "arena buffer is 0");
    CESS_EQUALS(my_arena.size, 0, "arena size is 0");
    CESS_EQUALS(my_arena.used, 0, "arena used is 0");
    CESS_TEST_RESULTS("arena destroyed");
}
