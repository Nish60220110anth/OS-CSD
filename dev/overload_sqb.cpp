#include <iostream>

class MyArray {
public:
    MyArray(int size) : size_(size) {
        data_ = new int[size];
    }

    ~MyArray() {
        delete[] data_;
    }

    int& operator[](int index) {
        return data_[index];
    }

    int operator[](int index) const {
        return data_[index];
    }

private:
    int size_;
    int* data_;
};

int main(int argc, char* argv[]) {
    MyArray arr(10);
    for (int i = 0;i < 10;i++) {
        arr[i] = i;
    }

    for (int i = 0;i < 10;i++) {
        std::cout << arr[i] << std::endl;
    }
}