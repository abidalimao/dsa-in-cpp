#include <iostream>
#include <Array.h>

int main() {
    Array arr(3);  // Start with a small array size
    
    // Insert more elements than initial size to test resizing
    std::cout << "Inserting 6 elements into array of initial size 3:" << std::endl;
    arr.insert(10);
    arr.insert(20);
    arr.insert(30);
    std::cout << "After first 3 insertions: ";
    arr.display();
    
    arr.insert(40);  // This should trigger resize
    arr.insert(50);
    arr.insert(60);
    std::cout << "After 3 more insertions: ";
    arr.display();
    
    std::cout << "\nRemoving element at index 2:" << std::endl;
    arr.removeAt(2);
    arr.display();
    
    std::cout << "\nTesting indexOf:" << std::endl;
    std::cout << "Index of 40: " << arr.indexOf(40) << std::endl;
    std::cout << "Index of 30: " << arr.indexOf(30) << std::endl;  // Should be -1 as we removed it
    
    return 0;
}
