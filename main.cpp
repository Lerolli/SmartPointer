#include <iostream>
#include "SmartPointer.h"

int main() {
    int MAX_SIZE = 100;
    SmartPointer ptr1 = SmartPointer(MAX_SIZE);
    SmartPointer ptr2 = ptr1;
    std::cout << "links count ptr 1- " << ptr1.get_count() << std::endl;
    std::cout << "links count ptr 2- " << ptr2.get_count() << std::endl;
    ptr1.Free(ptr1);
    std::cout << "links count ptr 2- " << ptr2.get_count() << std::endl;
    return 0;
}
