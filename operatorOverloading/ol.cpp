#include<iostream>
using namespace std;

class A {
public:
  A(int val) :i(val) {};
  void print() { cout << i << endl; };
  void setVal(int data) { i = data; };
private:
  int i;
};


int main()
{
  A oa(2343);
  A oa2(0);

  oa2 = oa;

  oa.print();
  oa2.print();
  oa.setVal(987);
  oa.print();
  oa2.print();


  return 0;
}