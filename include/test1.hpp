#include <string>
class Animal {
private:
  int age;
  std::string name;

public:
  virtual void speakMyname(){};
  virtual void speakMyage(){};
};
