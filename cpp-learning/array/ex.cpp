#include <iostream>

int main(){
    //create arrays
    int values[3] = {0, 1, 2};

    std::cout << sizeof(int) << std::endl;

    int offset = (long)&(values[2]) - (long)&(values[0]);
    std::cout << offset << std::endl;
    std::cout << "Address of values[0]: " << &values[0] << std::endl;
    std::cout << "Address of values[0] with long: " << (long)&values[0] << std::endl;

}