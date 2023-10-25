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

> Note: Aspect ratio of the images are preserved and also while maintaining the screen size to be 16x16 (translates to 128x128 pixels in our screen)

> The trace files used for this is in the folder `./traces`

![output](./traces/rand_runmean.png)

## About other scripts

### face/img.py

This script is used to generate the array in c structure for the face image. This script looks into all the images in the folder `./images` and then generates the array in c structure in dimension 128*16(translates to `128x128` pixels in our screen). This is then used in the file `face_{}.h` to display the face. The display driver have inbuilt function to display the face. The output image and c structure array generated are in folder `./out`.

##### Example output
> Input image
![input](./face/images/Thalapathy.jpg)

> Final image

![output](./face/out/face_0.jpg)

> C structure array
```c
char font_0[128][16] = {
	{0, 6, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0},
	{0, 3, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 7, 144, 0, 0},
	{0, 1, 16, 0, 96, 0, 0, 0, 0, 0, 0, 0, 120, 16, 0, 0},
	{0, 1, 24, 0, 128, 0, 0, 0, 0, 0, 0, 1, 128, 16, 0, 0},
	{0, 1, 8, 0, 128, 0, 0, 0, 0, 0, 0, 14, 0, 48, 0, 0},
	{0, 3, 8, 0, 128, 0, 0, 0, 0, 0, 0, 48, 0, 16, 0, 0},
	{0, 2, 8, 0, 128, 0, 0, 0, 0, 240, 0, 192, 0, 16, 0, 0},
	{224, 14, 4, 0, 128, 0, 0, 0, 3, 15, 225, 128, 0, 16, 0, 0},
	{48, 56, 4, 64, 128, 0, 0, 0, 30, 0, 95, 64, 0, 16, 0, 0},
	{15, 192, 4, 192, 128, 0, 0, 0, 16, 223, 128, 96, 0, 16, 0, 0},
	{0, 0, 4, 192, 128, 0, 0, 0, 14, 32, 140, 56, 0, 16, 0, 0},
	{0, 0, 7, 128, 128, 0, 1, 192, 33, 138, 34, 13, 224, 16, 0, 0},
	{0, 0, 2, 64, 128, 0, 1, 96, 24, 172, 253, 134, 48, 16, 0, 0},
	{0, 0, 0, 64, 128, 0, 1, 51, 240, 116, 128, 241, 16, 16, 0, 0},
	{0, 0, 8, 128, 128, 0, 0, 153, 16, 7, 128, 29, 0, 16, 0, 0},
	{0, 0, 14, 128, 128, 0, 0, 141, 240, 0, 0, 19, 0, 16, 0, 0},
	{0, 0, 25, 0, 128, 0, 0, 132, 80, 0, 0, 17, 0, 48, 0, 0},
	{0, 0, 17, 1, 128, 0, 0, 132, 80, 0, 0, 28, 128, 16, 0, 0},
	{0, 0, 16, 129, 0, 0, 0, 132, 80, 0, 0, 10, 128, 16, 0, 0},
	{0, 0, 16, 129, 0, 0, 0, 132, 136, 0, 0, 2, 0, 16, 0, 0},
	{0, 0, 17, 1, 0, 0, 0, 132, 176, 0, 0, 2, 0, 16, 0, 0},
	{0, 0, 1, 1, 0, 0, 0, 132, 176, 0, 0, 2, 64, 16, 0, 0},
	{0, 0, 0, 129, 0, 0, 60, 132, 139, 0, 0, 3, 64, 16, 0, 0},
	{0, 0, 0, 129, 0, 0, 231, 133, 74, 128, 0, 1, 0, 16, 0, 0},
	{0, 0, 0, 129, 0, 0, 160, 5, 106, 128, 0, 1, 0, 16, 0, 0},
	{0, 0, 0, 129, 0, 0, 144, 5, 74, 128, 0, 1, 0, 8, 0, 0},
	{0, 0, 1, 1, 0, 7, 144, 0, 138, 0, 0, 1, 0, 16, 0, 0},
	{0, 0, 1, 1, 0, 60, 28, 0, 137, 0, 0, 7, 0, 16, 0, 0},
	{0, 0, 1, 1, 0, 192, 0, 0, 137, 32, 0, 4, 128, 16, 0, 0},
	{0, 0, 2, 2, 191, 0, 0, 0, 131, 32, 0, 5, 0, 16, 0, 0},
	{0, 0, 2, 2, 68, 0, 0, 2, 80, 32, 0, 1, 0, 16, 0, 0},
	{0, 0, 2, 2, 0, 0, 0, 2, 100, 192, 0, 2, 0, 16, 0, 0},
	{0, 0, 2, 2, 0, 0, 0, 2, 137, 64, 0, 2, 0, 16, 0, 0},
	{0, 0, 2, 2, 0, 0, 0, 2, 146, 96, 0, 2, 0, 16, 0, 0},
	{0, 0, 2, 2, 0, 0, 0, 2, 179, 207, 0, 2, 0, 16, 0, 0},
	{0, 0, 1, 4, 0, 0, 0, 2, 98, 121, 0, 2, 0, 16, 0, 0},
	{0, 0, 1, 4, 0, 0, 0, 0, 194, 3, 0, 2, 0, 16, 0, 0},
	{0, 0, 1, 2, 0, 0, 0, 1, 132, 36, 0, 6, 0, 16, 0, 0},
	{0, 0, 2, 2, 0, 0, 0, 3, 4, 96, 0, 4, 0, 16, 0, 0},
	{0, 0, 2, 2, 0, 0, 0, 2, 230, 16, 0, 8, 0, 16, 0, 0},
	{0, 0, 2, 2, 0, 0, 0, 2, 179, 16, 0, 8, 0, 16, 0, 0},
	{0, 0, 2, 2, 0, 0, 0, 3, 121, 16, 0, 24, 0, 16, 0, 0},
	{0, 0, 2, 2, 0, 0, 0, 1, 137, 48, 0, 16, 0, 16, 0, 0},
	{0, 0, 2, 3, 0, 0, 0, 0, 181, 96, 0, 32, 0, 16, 0, 0},
	{0, 0, 2, 2, 224, 124, 0, 0, 164, 192, 0, 32, 0, 16, 0, 0},
	{0, 0, 2, 2, 48, 132, 15, 0, 156, 0, 3, 96, 0, 16, 0, 0},
	{0, 0, 2, 2, 17, 52, 18, 1, 192, 0, 2, 64, 0, 8, 0, 0},
	{0, 0, 2, 4, 23, 84, 39, 0, 48, 0, 3, 128, 0, 8, 0, 0},
	{0, 0, 2, 4, 28, 82, 44, 0, 128, 0, 1, 0, 0, 8, 0, 0},
	{0, 0, 2, 0, 19, 74, 42, 0, 28, 0, 1, 192, 0, 8, 0, 0},
	{0, 0, 4, 7, 36, 82, 42, 1, 213, 0, 8, 254, 0, 8, 0, 0},
	{0, 0, 4, 5, 138, 148, 42, 0, 1, 240, 48, 17, 0, 8, 0, 0},
	{0, 0, 4, 6, 206, 139, 234, 51, 152, 30, 104, 28, 0, 8, 0, 0},
	{0, 0, 4, 4, 104, 60, 10, 204, 72, 2, 200, 0, 128, 8, 0, 0},
	{0, 0, 8, 6, 8, 39, 209, 24, 148, 3, 144, 15, 224, 8, 0, 0},
	{0, 0, 120, 3, 97, 224, 105, 247, 39, 28, 40, 24, 24, 16, 0, 0},
	{0, 0, 8, 5, 27, 0, 42, 8, 40, 224, 196, 200, 4, 16, 0, 0},
	{0, 0, 4, 4, 130, 0, 34, 70, 160, 9, 129, 143, 240, 16, 0, 0},
	{0, 248, 4, 5, 96, 0, 4, 146, 80, 51, 59, 0, 24, 16, 0, 0},
	{0, 136, 4, 4, 36, 0, 4, 53, 209, 226, 6, 0, 13, 16, 0, 0},
	{0, 220, 4, 4, 34, 0, 5, 36, 83, 20, 4, 0, 7, 16, 0, 0},
	{0, 112, 4, 4, 35, 128, 4, 40, 92, 0, 12, 0, 2, 16, 0, 0},
	{0, 0, 4, 4, 96, 192, 4, 40, 194, 56, 8, 0, 2, 8, 0, 0},
	{0, 0, 8, 5, 192, 112, 0, 40, 136, 32, 24, 3, 2, 8, 0, 0},
	{0, 56, 8, 12, 0, 24, 4, 41, 144, 96, 16, 6, 1, 8, 0, 0},
	{0, 102, 8, 8, 1, 108, 2, 5, 33, 192, 16, 4, 1, 8, 0, 0},
	{0, 67, 8, 8, 1, 70, 3, 4, 162, 0, 144, 8, 1, 8, 0, 0},
	{0, 89, 16, 16, 2, 56, 1, 134, 36, 0, 144, 24, 1, 8, 0, 0},
	{0, 105, 16, 16, 90, 145, 128, 195, 24, 0, 160, 16, 2, 8, 0, 0},
	{0, 101, 16, 8, 162, 250, 128, 97, 48, 0, 96, 48, 2, 8, 0, 0},
	{0, 40, 8, 8, 162, 10, 192, 49, 64, 0, 64, 224, 2, 8, 0, 0},
	{0, 20, 8, 8, 162, 10, 161, 25, 64, 0, 193, 128, 2, 8, 0, 0},
	{0, 4, 8, 9, 19, 115, 160, 137, 64, 1, 134, 0, 2, 16, 0, 0},
	{0, 2, 8, 15, 8, 193, 48, 76, 64, 1, 4, 0, 2, 16, 0, 0},
	{0, 2, 8, 8, 12, 65, 16, 54, 192, 3, 8, 0, 2, 16, 0, 0},
	{0, 2, 8, 16, 20, 67, 40, 3, 0, 2, 24, 0, 2, 8, 0, 0},
	{0, 14, 8, 4, 180, 67, 20, 1, 128, 6, 48, 0, 2, 8, 0, 0},
	{0, 8, 8, 20, 228, 65, 20, 0, 144, 4, 32, 0, 2, 8, 0, 0},
	{128, 58, 16, 20, 0, 66, 16, 0, 192, 4, 64, 0, 4, 8, 0, 0},
	{101, 66, 16, 18, 3, 6, 16, 0, 120, 4, 64, 0, 4, 8, 0, 0},
	{37, 67, 16, 50, 4, 68, 16, 0, 6, 4, 64, 0, 8, 8, 0, 0},
	{37, 33, 16, 34, 15, 68, 16, 0, 3, 7, 64, 0, 8, 8, 0, 0},
	{39, 193, 16, 34, 24, 132, 16, 0, 1, 133, 192, 0, 8, 16, 0, 0},
	{36, 129, 144, 10, 16, 76, 16, 0, 0, 228, 0, 0, 16, 16, 0, 0},
	{95, 224, 80, 59, 124, 76, 16, 0, 0, 48, 0, 0, 16, 16, 0, 0},
	{192, 65, 16, 38, 4, 64, 16, 0, 0, 16, 0, 0, 16, 16, 0, 0},
	{16, 121, 96, 48, 124, 64, 32, 0, 0, 0, 0, 0, 32, 16, 0, 0},
	{32, 73, 192, 143, 130, 192, 32, 0, 0, 0, 0, 0, 32, 16, 0, 0},
	{240, 126, 63, 128, 25, 0, 64, 0, 0, 0, 0, 0, 32, 16, 0, 0},
	{16, 0, 0, 15, 128, 0, 192, 0, 0, 0, 0, 0, 32, 16, 0, 0},
	{11, 63, 192, 49, 0, 16, 128, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{144, 192, 48, 65, 160, 41, 128, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{80, 64, 16, 64, 224, 42, 128, 0, 0, 0, 0, 0, 32, 16, 0, 0},
	{48, 64, 48, 64, 0, 72, 128, 0, 0, 0, 0, 0, 32, 16, 0, 0},
	{0, 144, 32, 64, 0, 210, 128, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{0, 144, 32, 104, 1, 147, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{0, 230, 32, 72, 3, 33, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{0, 56, 32, 120, 4, 64, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{0, 8, 16, 64, 9, 128, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{0, 8, 32, 0, 51, 0, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{0, 8, 224, 57, 198, 0, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{0, 8, 160, 70, 28, 0, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{0, 8, 224, 53, 224, 0, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{128, 8, 0, 15, 0, 0, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{192, 11, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{126, 10, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{17, 202, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{16, 50, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 64, 16, 0, 0},
	{224, 0, 0, 0, 0, 11, 128, 0, 0, 0, 0, 0, 96, 16, 0, 0},
	{0, 0, 0, 0, 0, 4, 64, 0, 0, 0, 0, 0, 31, 240, 0, 0},
	{0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 16, 0, 0},
	{0, 0, 0, 2, 0, 0, 64, 0, 0, 0, 0, 0, 63, 240, 0, 0},
	{0, 0, 0, 125, 255, 255, 192, 0, 0, 0, 0, 0, 0, 16, 0, 0},
	{0, 0, 0, 81, 0, 0, 64, 0, 0, 0, 0, 0, 63, 240, 0, 0},
	{0, 0, 0, 127, 255, 255, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{31, 192, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{2, 64, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 192, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{1, 128, 0, 0, 0, 1, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{254, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{128, 0, 0, 0, 0, 3, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 2, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 4, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
};
```

### Memory visualizer

This is a simple memory visualizer which takes the memory dump and then displays the memory in the screen. The memory dump is in the file `./memory.txt`. The memory visualizer is in the file `./memory_vis.cpp`. The output of the memory visualizer is in the file `./memory_out.txt`. The output is as follows

[link to memory output text file](./mem_vis/memory_out.txt)

> Here, the we can see the complete image but only to look into display segment of the memory segment, we have another script `./script/mem_conv.py` which takes the output of the memory visualizer and then displays the memory segment. The output of this is as follows

![memory output](./script/memory.png)

### File Watcher

File watches the memory in the core constantly until any error occurs. Once any change is made in the file, then this watcher runs shell script which runs all necessary commands to change the output in the final output display.

We can also attack this watcher to the environment of the memory (ex. `./dev/faces`) which can affect the final output but presently it is confied only to the core `memory.txt`.