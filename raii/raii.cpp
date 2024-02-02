#include<iostream>
using namespace std;

class Base {};
class Derived :public Base{};
struct StructName {};
int main()
{
  Base b, bb;
  Derived d;
  StructName stn;

  cout << typeid(stn).name();

  if (typeid(b) == typeid(bb))
	cout << "both are same objects"<< typeid(b).name()<<"\n";
  if (typeid(b) == typeid(d))
	cout << "both are same objects\n";
  if (typeid(d) == typeid(d))
	cout << "both are same objects\n";
  if (typeid(b) == typeid(bb))
	cout << "both are same objects\n";
}