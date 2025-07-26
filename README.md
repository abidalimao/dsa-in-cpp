# Data Structures and Algorithms in C++

This project implements various data structures and algorithms in C++. Currently featuring a Singly Linked List with comprehensive operations.

## Data Structures Implemented

### 1. Singly Linked List
A linked list implementation with a tail pointer optimization for O(1) insertions at the back.

#### Features
- Dynamic memory management
- Tail pointer optimization
- Comprehensive error handling

#### Operations and Time Complexities
- **Insertions**
  - `insertFront(value)` - O(1)
  - `insertBack(value)` - O(1) with tail pointer
  - `insertAt(value, position)` - O(n)

- **Deletions**
  - `removeFront()` - O(1)
  - `removeBack()` - O(n)
  - `removeAt(position)` - O(n)

- **Search Operations**
  - `search(value)` - O(n)
  - `indexOf(value)` - O(n)
  - `kthFromEnd(k)` - O(n)

- **Utility Operations**
  - `isEmpty()` - O(1)
  - `getSize()` - O(1)
  - `display()` - O(n)
  - `reverse()` - O(n)

## Project Structure
```
.
├── header/             # Header files
│   ├── Array.h        # Dynamic Array implementation
│   └── LinkedList.h   # Singly Linked List header
├── src/               # Source files
│   ├── Array.cpp      # Dynamic Array implementation
│   └── LinkedList.cpp # Singly Linked List implementation
├── main.cpp           # Main test file
├── CMakeLists.txt    # CMake configuration
└── CMakePresets.json # CMake presets configuration
```

## Building the Project

This project uses CMake and can be built using:

```bash
# Configure
cmake --preset=ninja-default

# Build
cmake --build --preset=ninja-default
```

## Data Structures Implemented

### Dynamic Array
- Supports dynamic resizing
- Basic operations: insert, remove, find
- Time Complexities:
  - Insert: O(1) amortized
  - Remove: O(n)
  - Find: O(n)

### Coming Soon
- Linked List
- Stack
- Queue
- Binary Search Tree
- Hash Table

## Building the Project

### Prerequisites
- C++17 compiler (GCC/G++)
- CMake 3.10 or higher
- Ninja build system

### Build Commands
```bash
# Configure the project
cmake --preset=ninja-default

# Build the project
cmake --build --preset=ninja-default

# Run the executable
./build/LearningCMake.exe
```

## Usage Example
```cpp
LinkedList list;

// Insert elements
list.insertFront(10);
list.insertBack(20);
list.insertAt(15, 1);

// Display the list
list.display();  // Output: 10 -> 15 -> 20

// Remove elements
list.removeFront();
list.removeBack();

// Search operations
bool found = list.search(15);
int index = list.indexOf(15);

// Advanced operations
list.reverse();
int kth = list.kthFromEnd(1);  // Get 1st element from end
```

## Contributing
Feel free to contribute to this project by:
1. Fork the repository
2. Create your feature branch (`git checkout -b feature/NewDataStructure`)
3. Commit your changes (`git commit -am 'Add new data structure'`)
4. Push to the branch (`git push origin feature/NewDataStructure`)
5. Create a Pull Request

## Next Steps
- Implement Stack data structure
- Implement Queue data structure
- Add template support for generic types
- Implement Doubly Linked List
- Add comprehensive unit tests
