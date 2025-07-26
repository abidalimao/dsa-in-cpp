#include <iostream>
#include <LinkedList.h>

LinkedList::LinkedList() : head(nullptr), tail(nullptr), size(0) {}

LinkedList::~LinkedList() {
    Node* current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }
    head = nullptr;
    tail = nullptr;
    size = 0;
}

void LinkedList::insertFront(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
    if (tail == nullptr) { // If list was empty
        tail = head;
    }
    size++;
}

void LinkedList::insertBack(int value) {
    Node* newNode = new Node(value);
    
    if (head == nullptr) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    size++;
}

void LinkedList::insertAt(int value, int position) {
    if (position < 0 || position > size) {
        std::cout << "Invalid position!" << std::endl;
        return;
    }
    
    if (position == 0) {
        insertFront(value);
        return;
    }
    
    Node* newNode = new Node(value);
    Node* current = head;
    
    for (int i = 0; i < position - 1; i++) {
        current = current->next;
    }
    
    newNode->next = current->next;
    current->next = newNode;
    size++;
}

void LinkedList::removeFront() {
    if (isEmpty()) {
        std::cout << "List is empty!" << std::endl;
        return;
    }
    
    Node* temp = head;
    head = head->next;
    if (head == nullptr) { // If list becomes empty
        tail = nullptr;
    }
    delete temp;
    size--;
}

void LinkedList::removeBack() {
    if (isEmpty()) {
        std::cout << "List is empty!" << std::endl;
        return;
    }
    
    if (head->next == nullptr) {
        delete head;
        head = nullptr;
        tail = nullptr;
        size--;
        return;
    }
    
    Node* current = head;
    while (current->next->next != nullptr) {
        current = current->next;
    }
    
    delete current->next;
    current->next = nullptr;
    tail = current;
    size--;
}

void LinkedList::removeAt(int position) {
    if (position < 0 || position >= size) {
        std::cout << "Invalid position!" << std::endl;
        return;
    }
    
    if (position == 0) {
        removeFront();
        return;
    }
    
    if (position == size - 1) {
        removeBack();
        return;
    }
    
    Node* current = head;
    for (int i = 0; i < position - 1; i++) {
        current = current->next;
    }
    
    Node* temp = current->next;
    current->next = temp->next;
    delete temp;
    size--;
}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}

int LinkedList::getSize() const {
    return size;
}

bool LinkedList::search(int value) const {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == value) {
            return true;
        }
        current = current->next;
    }
    return false;
}

int LinkedList::indexOf(int value) const {
    Node* current = head;
    int index = 0;
    
    while (current != nullptr) {
        if (current->data == value) {
            return index;
        }
        current = current->next;
        index++;
    }
    
    return -1;
}

void LinkedList::display() const {
    if (isEmpty()) {
        std::cout << "List is empty!" << std::endl;
        return;
    }
    
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data;
        if (current->next != nullptr) {
            std::cout << " -> ";
        }
        current = current->next;
    }
    std::cout << std::endl;
}

void LinkedList::reverse() {
    if (isEmpty() || size == 1) {
        return;  // Empty list or single node, no need to reverse
    }
    
    Node* prev = nullptr;
    Node* current = head;
    Node* next = nullptr;
    
    // Update tail pointer to current head as it will become the last node
    tail = head;
    
    // Reverse the links
    while (current != nullptr) {
        next = current->next;     // Store next node
        current->next = prev;     // Reverse the link
        prev = current;           // Move prev to current
        current = next;           // Move current to next
    }
    
    // Update head to the last node processed (prev)
    head = prev;
}

int LinkedList::kthFromEnd(int k) const {
    if (isEmpty() || k <= 0 || k > size) {
        std::cout << "Invalid k or empty list!" << std::endl;
        return -1;
    }
    
    // Use two pointers: fast and slow
    Node* fast = head;
    Node* slow = head;
    
    // Move fast k nodes ahead
    for (int i = 1; i < k; i++) {
        fast = fast->next;
    }
    
    // Move both pointers until fast reaches the end
    while (fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }
    
    return slow->data;
}