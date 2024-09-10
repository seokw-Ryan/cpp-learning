#pragma once

#include <vector>
#include "uiuc/Cube.h"
using uiuc::Cube;

class Stack{
    public:
        void push_back(const Cube & cube);
        Cube removeTop();
        Cube & peekTop();
        unsigned size() const;

        // An overloaded operator<<, allowing us to print the stack via `cout<<`:
        friend std::ostream& operator<<(std::ostream & os, const Stack & stack);

    private:
        std::vector<Cube> cubes_;
};

         
