#ifndef INTERNAL_HEAP 
#define INTERNAL_HEAP

int alloc_last = 0, free_last = 0; // tag id's
int last_address = 0; // this is address size that free blocks are using 
// remember to use this address with the base address

struct free_block {
    int address; // initial location of the address of the block
    int size_free; // size left free in the block
    int capactity; // capactity of the  block
    int tag; // tag id of the block
    int num_procs; // number of processes using the block
    struct free_block* next;
} *free_head = nullptr, *free_prev = nullptr;

struct proc_block {
    int address; // initial location of the  address of the  block
    int size; // size taken by the process
    int tag; // tag of the block
    int block_id;
    struct proc_block* next;
}*proc_head = nullptr, *proc_prev= nullptr;

#endif 