# OS-CSD

## Introduction
This repo consist of two modules.

1. Miniature version of map using simple arrays
2. Heap and process memory allocation using linked list ( the memory allocated for this is 
not allocated in the own heap but rather in a small chunk of memory at end the of the disk space)
(See main readme for more details)

> Syntaxes are limited to our own language and not C++ or C

## Map
The map is a miniature version using simple arrays. This supports the following functions

1. Insert
2. Delete
3. Search
4. Display

> Each individual component is unit tested using `map_test.c` file

# Random Number Generator
This is a random number generator which uses the linear congruential method to generate random numbers.
We also used a random engine to introduce randomness in the seed value.

The formula is as follows

setting seed
```
rand_engine = (((seed | rand_engine) * 7621) + 1) % 32768;
rand_lfsr = rand_engine;
```

generating random number
```
rand_bit = ((rand_lfsr >> 0) ^ (rand_lfsr >> 2) ^ (rand_lfsr >> 3) ^ (rand_lfsr >> 5)) & 1;
rand_lfsr = (rand_lfsr >> 1) | (rand_bit << 15);

rand_number = rand_lfsr % 100;
```

> Sample output for this random number generator is in the file `random_number_generator_output.txt`

## How to evaluate random number generator
I used approach similar to chi-square test to evaluate the random number generator. I generated 1000 random numbers and then divided them into their own bucket (we can optimize by allocated single bucket for 10 values ).

Then I calculated the expected value for each bucket and then calculated the chi-square value for each bucket. Then I summed up all product of chi-square and difference between the running and old value. We ideally want the graph to be as straight as possible. The graph for this random number generator is as follows

> The trace files used for this is in the folder `./traces`

![output](./traces/rand_runmean.png)