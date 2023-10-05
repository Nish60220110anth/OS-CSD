#include "heap.h"


// 1 if not tag found, 0 is found
int free_block_init(struct free_block* free_head, int tag) {
    struct free_block* pre = free_head;

    while (pre != 0 && pre -> tag != tag) {
        pre = pre -> next;
    }

    if(pre == 0) return 1;
    
}

void free_block_insert(struct free_block* free_head, int size) {

}

void free_block_delete(struct free_block* free_head, int tag) {

}

struct free_block* _free_block_finder(struct free_block* free_head, int size) {
    // return 0, if no block found , else return that  block
    // best fit algorithm
    struct free_block* pre = free_head;
    int best_size = __INT32_MAX__;
    struct free_block* best_block = 0;
    while (pre != 0) {
        if (pre->size >= size) {
            int diff = pre->size - size;
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
 * \brief allocates size in free block
 *
 * \note return address(>=0) if successful, (<0) else fail
*/
int free_block_alloc(struct free_block* free_head, int size) {
    struct free_block* _alloted_block = _free_block_finder(free_head, size);
    if(size == 0) return -1;

    if (_alloted_block == 0) return -1;

    int address = _alloted_block->address;
    _alloted_block->address += size; // size blocks got alloted 
    _alloted_block->size -= size;
    _alloted_block->num_procs++;

    return address;
}

struct free_block* free_block_at(struct free_block* free_head, int tag) {
    if (free_head == 0) return 0;

    struct free_block* pre = free_head;

    while (pre != 0 && pre->tag != tag) {
        pre = pre->next;
    }

    if (pre == 0) return 0;
    return pre;
}

int free_block_size(struct free_block* free_head) {
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