# Data Structures and Algorithms in C++

This project contains implementations of various data structures and algorithms in C++.

## Project Structure

```
├── header/             # Header files for all data structures
│   ├── Array.h        # Dynamic array implementation
│   ├── LinkedList.h   # (Coming soon)
│   ├── Stack.h        # (Coming soon)
│   └── Queue.h        # (Coming soon)
├── src/               # Implementation files
│   ├── Array.cpp
│   ├── LinkedList.cpp # (Coming soon)
│   ├── Stack.cpp      # (Coming soon)
│   └── Queue.cpp      # (Coming soon)
└── main.cpp           # Main file with usage examples
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

## Requirements
- C++17 or higher
- CMake 3.10 or higher
- Ninja build system
- GCC/G++ compiler
