#ifndef LINKEDLIST_H
#define LINKEDLIST_H

/**
 * @brief Singly Linked List implementation with tail pointer optimization
 * 
 * This class implements a singly linked list with a tail pointer for O(1)
 * insertions at the back. The list maintains a size counter and provides
 * various operations for insertion, deletion, and searching.
 */
class LinkedList {
private:
    /**
     * @brief Node structure for the linked list
     */
    struct Node {
        int data;      ///< Data stored in the node
        Node* next;    ///< Pointer to the next node
        Node(int value) : data(value), next(nullptr) {}
    };
    
    Node* head;    ///< Pointer to the first node
    Node* tail;    ///< Pointer to the last node (for O(1) back insertion)
    int size;      ///< Number of elements in the list

public:
    LinkedList();
    ~LinkedList();
    
    // Basic operations
    void insertFront(int value);    // O(1)
    void insertBack(int value);     // O(1) with tail pointer, O(n) without
    void insertAt(int value, int position); // O(n)
    
    void removeFront();    // O(1)
    void removeBack();     // O(n)
    void removeAt(int position); // O(n)
    
    bool isEmpty() const;  // O(1)
    int getSize() const;   // O(1)
    
    // Search operations
    bool search(int value) const;  // O(n)
    int indexOf(int value) const;   // O(n)
    
    // Display
    void display() const;  // O(n)
    
    // Additional operations
    void reverse();        // O(n) - Reverses the linked list in-place
    int kthFromEnd(int k) const;  // O(n) - Returns the kth node from end (1-based indexing)
};

#endif // LINKEDLIST_H
