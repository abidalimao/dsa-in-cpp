#include <iostream>
#include <LinkedList.h>

int main() {
    LinkedList list;
    
    std::cout << "Testing insertions:" << std::endl;
    std::cout << "Inserting at front: 30, 20, 10" << std::endl;
    list.insertFront(30);
    list.insertFront(20);
    list.insertFront(10);
    list.display();
    
    std::cout << "\nInserting at back: 40, 50" << std::endl;
    list.insertBack(40);
    list.insertBack(50);
    list.display();
    
    std::cout << "\nInserting 25 at position 2:" << std::endl;
    list.insertAt(25, 2);
    list.display();
    
    std::cout << "\nTesting removals:" << std::endl;
    std::cout << "Removing front element:" << std::endl;
    list.removeFront();
    list.display();
    
    std::cout << "Removing back element:" << std::endl;
    list.removeBack();
    list.display();
    
    std::cout << "Removing element at position 2:" << std::endl;
    list.removeAt(2);
    list.display();
    
    std::cout << "\nTesting search operations:" << std::endl;
    std::cout << "Searching for 30: " << (list.search(30) ? "Found" : "Not found") << std::endl;
    std::cout << "Index of 20: " << list.indexOf(20) << std::endl;
    std::cout << "Size of list: " << list.getSize() << std::endl;

    // Test reverse operation
    std::cout << "\nTesting reverse operation:" << std::endl;
    std::cout << "Before reverse: ";
    list.display();
    list.reverse();
    std::cout << "After reverse:  ";
    list.display();

    // Test kthFromEnd operation
    std::cout << "\nTesting kthFromEnd operation:" << std::endl;
    std::cout << "1st from end: " << list.kthFromEnd(1) << std::endl;
    std::cout << "2nd from end: " << list.kthFromEnd(2) << std::endl;
    std::cout << "3rd from end: " << list.kthFromEnd(3) << std::endl;
    std::cout << "Invalid (4th) from end: " << list.kthFromEnd(4) << std::endl;
    
    return 0;
}
