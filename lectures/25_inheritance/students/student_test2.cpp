#include <iostream>
#include <string>

class Human {
private:
    std::string name;
    int age;
    int sleep_hours;

public:
    Human(std::string n, int a, int s) : name(n), age(a), sleep_hours(s) {}

    void introduce() {
        std::cout << "Hello, I am " << name << ", and I am " << age << " years old.\n";
    }

    void sleep() {
        std::cout << name << " is " << age << " years old who sleeps " << sleep_hours << " hours a night.\n";
    }
};

class Student : public Human {
public:
    /* in C++, when a derived class inherits from a base class,
    * the base class's constructor must be called to initialize its members.
    * This is because the base class may contain private or protected members
    * that are not directly accessible by the derived class.
    * Therefore, the derived class relies on the base class's constructor to properly initialize these members. */

    Student(std::string n, int a, int s) : Human(n, a, s) {}
};

int main() {
    // Creating instances of each class with member variables
    Human h("Alice", 30, 8);
    Student s("Bob", 20, 5);

    // Introducing Humans
    std::cout << "--- Human introducing ---\n";
    h.introduce();  // Output: Hello, I am Alice, and I am 30 years old.
    
    std::cout << "--- Student introducing ---\n";
    s.introduce();  // Output: I am a student. My name is Bob, and I am 20 years old.

    // Showing sleep behavior
    std::cout << "--- Human sleep ---\n";
    h.sleep();  // Output: Alice is 30 years old and sleeps 8 hours a night.

    std::cout << "--- Student sleep ---\n";
    s.sleep();  // Output: Bob is a student, and they sleep 5 hours a night.

    return 0;
}

