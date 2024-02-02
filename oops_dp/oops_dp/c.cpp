#include<iostream>

using namespace std;
class A {
private:
  int pri_a;
public:
  A() :pri_a(0) { cout << "--constructor A\n"; }
  ~A() { cout << "--destructor\n"; };
};
int main()
{
  cout << "Hello Cpp\n";
  A a;
  return 0;
}