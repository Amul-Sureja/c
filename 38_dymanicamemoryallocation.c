// function of dynamic memory allocation
/*
1. MALLOC() = memory allocation
            ptr = (ptr-type*) malloc(size_in_bytes);
            initialized to garbage values

2. CALLOC() = contiguous allocation
            ptr = (ptr-type*) calloc(n, size_in_bytes);
            initialized to 0

3. REALLOC() = reallocation
            ptr = (ptr-type*) realloc(ptr, new_size_in_bytes);

4. FREE() 
            free(ptr);
*/
