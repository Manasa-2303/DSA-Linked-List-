# cpp-datastructures

Core data structures implemented from scratch in C++ to deepen understanding
of memory management, pointers, and algorithmic fundamentals

## Implemented so far
- **LinkedList** — singly linked list with push front/back, remove, search, and in-place reverse

## Build & Run

```bash
make run
```

or directly:

```bash
g++ -std=c++17 -Wall tests/test_linkedlist.cpp -o test_linkedlist
./test_linkedlist
```




## Why this project

Built to reinforce data structure fundamentals — pointer manipulation, memory
management (RAII, manual delete), and templates — with working test coverage
for each structure rather than relying on STL containers.
