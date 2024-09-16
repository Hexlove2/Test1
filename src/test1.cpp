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
  person person1(20, "项云辉");
  cout << "名字：" << person1.name << endl << "年龄: " << person1.age << endl;
  return 0;
}
