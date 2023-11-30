#include <iostream>
using namespace std;


// Parent class Pet
class Pet {
protected:
    int _age;       // The underscore is a convention to remind us this is a protected member
    string _name;

public:
    Pet(string name, int age) {
        _age = age;
        _name = name;
        cout << "Constructor for Pet " << _name << endl;
    }

    void setName(string newName) {
        //Update the name, but only if it has changed
        if (newName != _name) {
            cout << "Names changed from << " << _name << " to " << _name << endl;
            _name = newName;
        }
    }

    string getName() {
        //Read only copy returned as = does a copy for string
        return _name;
    }

    int getAge()
    {
        return _age;
    }

    void setAge(int age)
    {
        if (0 <= age && age < 30)
        {
            _age = age;
            cout << "Age changed to " << _age << endl;
        }
        else
        {
            cerr << "Did not change age. " << age << " is out of range." << endl;
        }
    }
};


// Child class Dog
class Dog : public Pet {

public:
    Dog(string name, int age) : Pet(name, age)
    {
        //Further initialisation here
        cout << "Constructor for Dog " << name << endl;
    }

    void bark() {
        cout << _name << " says Woof" << endl;
    }
};


// Child class Cat
class Cat : public Pet {

public:
    Cat(string name, int age) : Pet(name, age) {
        //Further initialisation here
        cout << "Constructor for Cat " << name << endl;
    }

    void meow() {
        cout << _name << " says Woof" << endl;
    }
};



int main()
{
    Pet p1("Carrot", 2); // instantiates an object of class Pet
    Dog d1("Scrapper", 5); // instantiates an object of class Dog, which inherits from Pet
    Cat c1("Furry", 3); // instantiates an object of class Dog, which inherits from Pet

    c1.setAge(0);
    c1.setAge(15);
    c1.setAge(29);
    c1.setAge(30);
}