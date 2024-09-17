#include "test1.hpp"
#include "test2.hpp"
#include <iostream>
using namespace std;

class person {
public:
  person(int age1, string name1) {
    name = name1;
    age = age1;
  }
  string name;
  int age;
};

class Cat : public Animal {
public:
  Cat(int age, string name) : age(age), name(name) {}

  void speakMyname() override { cout << "My Name is: " << name << endl; }

  void speakMyage() override { cout << "My Age is: " << age << endl; }

private:
  string name;
  int age;
};

int main(int argc, char *argv[]) {
  string newtest;
  Animal *a = new Cat(2, "Monday");
  Person *b = new Student("Xyh", 25, 20000727);
  a->speakMyname();
  a->speakMyage();
  b->introduceMyself();
  cout << "test success";
  return 0;
}
