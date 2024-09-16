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

int main(int argc, char *argv[]) {
  string newtest;
  cout << "test success";
  return 0;
}
