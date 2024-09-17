#include "test2.hpp"

Person::Person(std::string name, int age, int id)
    : name(name), age(age), id(id) {}

Student::Student(std::string name, int age, int id) : Person(name, age, id) {}

void Student::introduceMyself() {
  std::cout << "Hello, guys, My name is:" << getName() << "  My age is"
            << getAge() << "  My id number is:" << getId() << std::endl;
}
