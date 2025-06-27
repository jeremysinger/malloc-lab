/*******************
 * CSC1107 Operating Systems
 * Lab 2: Memory
 *
 * my_memory_allocator.h
 * 
 * version 0: simply call C library malloc/free
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/mman.h>


/////////////////////////
// VERSION 0
/////////////////////////

void init_mem_pool() {
  // do nothing
  return;
}

// v1: malloc simply wraps mmap
void *my_malloc(size_t num_bytes) {
  return malloc(num_bytes);;
}

// v1: free routine could be no-op,
// or could do an munmap
// (dual of mmap, to release mapping back to OS)
// The key challenge is that munmap
// requires a `size` parameter, which we can't
// get directly from the `free` context, so we
// would need to store in runtime metadata, somewhere.
void my_free(void *ptr) {
  return free(ptr);;
}


