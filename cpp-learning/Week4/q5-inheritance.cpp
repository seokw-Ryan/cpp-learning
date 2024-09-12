/*If a class equalPair is derived from the above base class (but specializes it by adding a single boolean "isequal" member variable) then which one of the options below is a proper declaration of a constructor for equalPair?

(As a side note: Although the member variables are of type double, for the sake of this question, we are not concerned about making approximate comparisons of floating-point types, only exact comparisons. Usually, in practical usage, when you compare floating-point values, you should write a function for approximate comparison. That is, you should allow numbers to be considered equal if they have a very small absolute difference, even if they are not exactly the same.)*/
#include <iostream>
using namespace std;

// Assuming a Pair class exists
class Pair {
protected:
    double first;
    double second;

public:
    Pair(double a, double b) : first(a), second(b) {}
    
    void display() const {
        cout << "Pair: (" << first << ", " << second << ")" << endl;
    }
};

// equalPair class inheriting from Pair
class equalPair : public Pair {
    bool isequal;

public:
    // Constructor for equalPair, calling the base Pair constructor
    equalPair(double a, double b) : Pair(a, b) {
        isequal = (a == b);
    }

    // Method to check if the pair is equal
    bool isEqual() const {
        return isequal;
    }

    // Override the display function to include equality status
    void display() const {
        Pair::display();
        cout << "Is Equal: " << (isequal ? "True" : "False") << endl;
    }
};

int main() {
    // Create an equalPair object
    equalPair ep(5.0, 5.0);

    // Display the pair and equality status
    ep.display();

    return 0;
}
