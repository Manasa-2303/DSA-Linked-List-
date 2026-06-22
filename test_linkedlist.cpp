#include "../include/LinkedList.h"
#include <cassert> 
#include <iostream>

void test_push_and_size() {
    LinkedList<int> list;
    list.pushBack(1);
    list.pushBack(2);
    list.pushFront(0);
    assert(list.size() == 3);
    list.print(); // expect [ 0 1 2 ]
    std::cout << "test_push_and_size PASSED\n";
}

void test_remove() {
    LinkedList<int> list;
    list.pushBack(10);
    list.pushBack(20);
    list.pushBack(30);
    bool removed = list.remove(20);
    assert(removed == true);
    assert(list.size() == 2);
    assert(list.contains(20) == false);
    std::cout << "test_remove PASSED\n";
}

void test_contains() {
    LinkedList<std::string> list;
    list.pushBack("apple");
    list.pushBack("banana");
    assert(list.contains("apple") == true);
    assert(list.contains("cherry") == false);
    std::cout << "test_contains PASSED\n";
}

void test_reverse() {
    LinkedList<int> list;
    list.pushBack(1);
    list.pushBack(2);
    list.pushBack(3);
    list.reverse();
    list.print(); // expect [ 3 2 1 ]
    std::cout << "test_reverse PASSED\n";
}

int main() {
    test_push_and_size();
    test_remove();
    test_contains();
    test_reverse();
    std::cout << "\nAll LinkedList tests passed!\n";
    return 0;
}
