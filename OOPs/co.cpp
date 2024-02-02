#include<iostream>

using namespace std;

class A {
private:
  int i;
  float f;
  string str;
public:
  A(): i(0),f(1.1),str("null") {
	cout << "constructor\n";
  }
  void printStuff(void)
  {
	cout << i << " " << f << " " << str << endl;
  }
};

int main()
{
  cout << "Hello Opps Calsas and objects\n";
  A obj;
  
  obj.printStuff();


  return 0;
}