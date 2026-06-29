# cpp-datastructures

Core data structures implemented from scratch in C++ to deepen understanding
of memory management, pointers, and algorithmic fundamentals.

## Build & Run

```bash
make run
```

or directly:

```bash
g++ -std=c++17 -Wall tests/test_linkedlist.cpp -o test_linkedlist
./test_linkedlist
```

## Structure

```
cpp-datastructures/
├── include/        # Header-only implementations (templates)
├── tests/          # Test drivers for each data structure
└── Makefile
```

## Why this project

Built to reinforce data structure fundamentals — pointer manipulation, memory
management (RAII, manual delete), and templates — with working test coverage
for each structure rather than relying on STL containers.
