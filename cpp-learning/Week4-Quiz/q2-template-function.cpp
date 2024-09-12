#include <iostream>
/*
Given the above code, which one of the expressions below, if used at line 15,  will compile and not generate a compile error?
1. max(a,b)
2. max("five",10.0)
3. max(a.num,b.num)
4. max(a,10.0)
*/
template <typename Type>
Type max(Type a, Type b) {
    return (a > b) ? a : b;
}

class Just_a_double {
public:
    double num;
};

int main() {
    Just_a_double a,b;
    a.num = 5.0;
    b.num = 10.0;
    std::cout << max(a.num, b.num) << std::endl;
}