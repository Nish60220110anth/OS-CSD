# OS

##  Heap (Dynamic memory allocation)
The heap and process memory allocation is done using linked list. The memory allocated for this is
not allocated in the own heap but rather in a small chunk of memory at end the of the disk space.

The free heap supports the following functions

1. Insert
2. Delete
3. Find
4. Allocate
5. Deallocate (Delete the process memory allocated in the free block)

> Note: The free memory is not deleted if all the process memory chunks used deallocates from the free block. 
>
> The size of free chunks is alowed to be modifieds by the user, but make sure that the size of the block varies between some uniform range. This is done to avoid fragmentation.
>
> The memory allocation algorithm used is best fit.

The process memory allocation supports the following functions

1. Insert
2. Delete (Deallocate is also done here)
3. Find
4. Allocate