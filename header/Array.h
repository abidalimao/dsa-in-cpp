#pragma once

class Array {
    public:
        Array(int size);
        ~Array();
       
        void insert(int value);
        void removeAt(int index);
        int indexOf(int value) const;
        void display() const;

    private:
        int* data;
        int size;
        int capacity;
};