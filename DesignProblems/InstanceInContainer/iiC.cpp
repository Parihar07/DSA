#include<iostream>
#include<algorithm>
#include<list>
using namespace std;

class MyClass {
private:
  int val;
public:
  static list<MyClass*> instance;
  MyClass(int valu);
  ~MyClass();
  static void showList();
};

list<MyClass*> MyClass::instance;

MyClass::MyClass(int valu)
{
  instance.push_back(this);
  val = valu;
}

MyClass::~MyClass()
{
  list<MyClass*>::iterator p = find(instance.begin(), instance.end(), this);
  if (p != instance.end())
	instance.erase(p);
}

void MyClass::showList()
{
  for (list<MyClass*>::iterator a = instance.begin(); a != instance.end(); a++)
  {
	cout << (*a)->val << " ";
  }
  cout << endl;
}

int main()
{
  cout << "Instances in container\n";
  MyClass a(1);
  MyClass b(11);
  MyClass c(12);
  MyClass d(13);

  MyClass::showList();

  return 0;
}


