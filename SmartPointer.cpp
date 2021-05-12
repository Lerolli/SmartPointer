#include <iostream>
#include "SmartPointer.h"


SmartPointer::SmartPointer(int MAX_SIZE)
{
    memory = new int[MAX_SIZE];
    links_counter = new int;
    *links_counter = 1;
}

SmartPointer::~SmartPointer() {

    if (links_counter == 0)
    {
        if (nullptr != memory)
            delete memory;
    }
}

SmartPointer& SmartPointer::operator=(const SmartPointer& obj) {
    if (this == &obj)
    {
        return *this;
    }

    atach(obj);
    return *this;
}

int SmartPointer::get_count() const {
    return *links_counter;
}

void SmartPointer::Free(SmartPointer smartPointer) {
    if (SmartPointer::memory)
    {
        (*links_counter)--;
        if ((*links_counter) == 0)
        {
            delete memory;
            delete links_counter;
        }
        memory = 0;
        links_counter = 0;
    }
}

void SmartPointer::atach(const SmartPointer &other) {
        links_counter = other.links_counter;
        (*links_counter)++;
        memory = other.memory;
}

SmartPointer::SmartPointer(const SmartPointer &ptr)
{
    links_counter = ptr.links_counter;
    (*links_counter)++;
    memory = ptr.memory;
}