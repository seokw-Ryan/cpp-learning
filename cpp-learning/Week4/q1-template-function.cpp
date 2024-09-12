/*
Which one of the following exampled is a proper way to call the max function declared above in template form?
1. max(5.0,10.0)
2. <Type = double>max(5.0,10.0)
3. max<Type = double>(5.0,10.0)
4. max<double>(5.0,10.0)
*/
#include <iostream>

template <typename Type>
Type max(Type a, Type b) {
    return (a > b) ? a : b;
}

int main() {
    // Calling the max template function with double values
    double result = max(5.0, 10.0);
    
    // Displaying the result
    std::cout << "The maximum value is: " << result << std::endl;

    return 0;
}