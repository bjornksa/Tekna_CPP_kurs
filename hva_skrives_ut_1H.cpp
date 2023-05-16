#include "std_lib_facilities.h"

class Animal {
public:
    string name;
    Animal(string n) : name{n} {}
    virtual string toStr() {
        return "Animal: " + name;
    }
};

class Dog : public Animal {
public:

    Dog(string name) : Animal{name} {}

    string toStr() override { return "Dog: " + name; }
};


int main(){

    Animal cat("Jesperpus");
    Dog dog("Festus");
    Dog dog2("Bob");

    Animal *a = &cat;
    Dog *d = &dog;
    Animal *a2 = &dog2;

    cout << a ->toStr() << ", ";
    cout << d ->toStr() << ", ";
    cout << a2 ->toStr() << ", ";

    cout << (*a2).name;

    cout << endl;
    return 0;
}
