#include <iostream>
#include "DoublyLinkedList.hpp"

int main()
{
    DoublyLinkedList list;

    list.insertFront(5);
    list.insertFront(4);
    list.insertFront(3);
    list.insertFront(2);
    list.insertFront(1);
    list.insertFront(0);
    
    std::cout << std::endl<< "rozm: " << list.size();
}