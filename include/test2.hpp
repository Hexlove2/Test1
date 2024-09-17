#include <iostream>
class Person {
private:
  int age;
  int id;
  std::string name;

public:
  virtual void introduceMyself() = 0;
  Person(std::string name, int age, int id);
  int getAge() const { return age; }
  int getId() const { return id; }
  std::string getName() const { return name; }
};

class Student : public Person {
public:
  Student(std::string name, int age, int id);
  void introduceMyself() override;
};
