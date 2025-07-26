#include <iostream>
#include "../header/Array.h"

Array::Array(int size) : size(size), capacity(0) {
    data = new int[size];
}

Array::~Array() {
    delete[] data;
}

void Array::insert(int value) {
    if (capacity >= size) {
        // Create a new array with double the size
        int newSize = size * 2;
        int* newData = new int[newSize];
        
        // Copy existing elements
        for (int i = 0; i < capacity; i++) {
            newData[i] = data[i];
        }
        
        // Delete old array and update pointers and size
        delete[] data;
        data = newData;
        size = newSize;
    }
    
    // Insert the new value
    data[capacity++] = value;
}

void Array::removeAt(int index) {
    if (index >= 0 && index < capacity) {
        for (int i = index; i < capacity - 1; i++) {
            data[i] = data[i + 1];
        }
        capacity--;
    } else {
        std::cout << "Invalid index!" << std::endl;
    }
}

int Array::indexOf(int value) const {
    for (int i = 0; i < capacity; i++) {
        if (data[i] == value) {
            return i;
        }
    }
    return -1;
}

void Array::display() const {
    for (int i = 0; i < capacity; i++) {
        std::cout << data[i] << " ";
    }
    std::cout << std::endl;
}

