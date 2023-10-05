#include "heap.h"

// 1 if not tag found, 0 is found
int free_block_init(struct free_block* free_head, int tag) {
    struct free_block* pre = free_head;

    while (pre != 0 && pre->tag != tag) {
        pre = pre->next;
    }

    if (pre == 0) return 1;

}

/**
 * \brief inserts a new block at the end of the free list with given size
 * 
 * \param free_head the head of the free list
 * \param size the size of the block to be inserted
 * 
 * \returns 0 if successful, 1 else
 * \note the address of the block is set to last_address
 * \note the tag of the block is set to free_last
 * \note the capactity of the block is set to size
*/
int free_block_insert(struct free_block* free_head, int size) {
    if (size == 0) return 1;

    struct free_block* new_blk = (struct free_block*)malloc(sizeof(struct free_block));
    new_blk->size_free = size; // size blocks got alloted
    new_blk->address = last_address;
    last_address += size; // last address got updated for next allocation
    new_blk->num_procs = 0; // no process is using this block
    new_blk->tag = free_last; // tag is set to free_last
    free_last++; // free_last got updated for next allocation
    new_blk->next = 0; // next is set to 0
    new_blk->capactity = size;

    if (free_head == 0) {
        free_head = new_blk;
        return;
    }

    struct free_block* pre = free_head;
    while (pre->next != 0) {
        pre = pre->next;
    }

    pre->next = new_blk;

    return 1;
}

/**
 * \brief deletes a block with given tag
 * 
 * \param free_head the head of the free list
 * \param tag the tag of the block to be deleted
 * 
 * \returns 0 if successful, 1 else
 * \note remember to free the process block tha used this block using the block_id
*/
void free_block_delete(struct free_block* free_head, int tag) {
    if (free_head == 0) return;

    struct free_block* pre = free_head;
    struct free_block* pre_pre = 0;

    while (pre != 0 && pre->tag != tag) {
        pre_pre = pre;
        pre = pre->next;
    }

    if (pre == 0) return;

    if (pre_pre == 0) {
        free_head = pre->next;
        free(pre);
        return;
    }

    pre_pre->next = pre->next;
    pre_pre->capactity += pre->capactity;

    free(pre);
}

struct free_block* _free_block_finder(struct free_block* free_head, int size) {
    // return 0, if no block found , else return that  block
    // best fit algorithm
    struct free_block* pre = free_head;
    int best_size = __INT32_MAX__;
    struct free_block* best_block = 0;
    while (pre != 0) {
        if (pre->size_free >= size) {
            int diff = pre->size_free - size;
            if (diff < best_size) {
                best_size = diff;
                best_block = pre;
            }
        }

        pre = pre->next;
    }

    return best_block;
}

/**
 * \brief allocates size in free block for a process
 * \param free_head the head of the free list
 * \param size the size of the block to be allocated
 * 
 * \returns the address of the block if successful, -1 else
 * \note best fit algorithm is used
*/
int free_block_alloc(struct free_block* free_head, int size) {
    struct free_block* _alloted_block = _free_block_finder(free_head, size);
    
    if (size == 0) return -1;
    if (_alloted_block == 0) return -1;

    int used = _alloted_block->capactity - _alloted_block->size_free;
    int address = _alloted_block->address + used;

    _alloted_block->address += size; // size blocks got alloted 
    _alloted_block->size_free -= size;
    _alloted_block->num_procs++;

    return address;
}

/**
 * \brief deallocates size in free block by a process
 * 
 * \param free_head the head of the free list
 * \param tag the tag of the block to be deallocated
 * \param size the amount of size to be deallocated
 * 
 * \returns 0 if successful, 1 else
*/
int free_block_dealloc(struct free_block* free_head, int tag, int size) {
    if (free_head == 0) return 1;

    struct free_block* pre = free_head;

    while (pre != 0 && pre->tag != tag) {
        pre = pre->next;
    }

    if (pre == 0) return 1;

    if (pre->size_free + size > pre->capactity) return 1;

    pre->size_free += size;
    pre->num_procs--;

    return 0;
}

/**
 * \brief returns the free block with given tag
 * 
 * \param free_head the head of the free list
 * \param tag the tag of the block to be returned
 * 
 * \returns the free block if successful, 0 else
*/
struct free_block* free_block_at(struct free_block* free_head, int tag) {
    if (free_head == 0) return 0;

    struct free_block* pre = free_head;

    while (pre != 0 && pre->tag != tag) {
        pre = pre->next;
    }

    // if (pre == 0) return 0;
    return pre;
}

/**
 * \brief returns the number of free blocks
 * 
 * \param free_head the head of the free list
 * \returns the number of free blocks
*/
int free_block_length(struct free_block* free_head) {
    if (free_head == 0) return 0;
    int c = 0;
    struct free_block* pre = free_head;
    while (pre != 0) {
        c++;
        pre = pre->next;
    }

    return c;
}

// update is disabled to make more use of this small individual components