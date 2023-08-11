// C++ program to demonstrate inheritance
#include <iostream>
using namespace std;

// base class
class Animal {
   public:
    void eat() {
        cout << "I can eat!" << endl;
    }

    void sleep() {
        cout << "I can sleep!" << endl;
    }
};
// derived class               // := Inherits Base Class
class Dog : public Animal {
 
   public:
    void bark() {
        cout << "I can bark! Woof woof!!" << endl;
    }
};
class cat : public Dog{
    public:
       void meow(){
        cout << "I am a cat";
       }
};

int main() {
    // Create object of the Dog class
    cat dog1;

    // Calling members of the base class
    dog1.eat();
    dog1.sleep();

    // Calling member of the derived class
    dog1.bark();
    dog1.meow();
    return 0;
}