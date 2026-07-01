CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

all: test_linkedlist

test_linkedlist: tests/test_linkedlist.cpp include/LinkedList.h
	$(CXX) $(CXXFLAGS) tests/test_linkedlist.cpp -o test_linkedlist

run: test_linkedlist
	./test_linkedlist

clean:
	rm -f test_linkedlist test_stack test_queue test_bst

.PHONY: all run clean
