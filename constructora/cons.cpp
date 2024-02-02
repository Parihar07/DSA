#include<iostream>
using namespace std;
class base {
  int bA;
public:
  base():bA(777) {}
  base(int k) :bA(k) {}
  void Printoo();
  int getBa() { return bA; }
  void setVal(int v);
};
class A :public base {
  int val;
public:
  A() :val(11){ cout << "default constructor\n"; }
  A(int v) :val(v){ cout << "parameterised constructor\n"; };
  A(const A& other) /*: base(42*)*/ 
  {
	cout << "default copy constructor\n"; 
	val = other.val;
  };

  //operator overloading

  A& operator=(const A& oldy)
  {
	cout << "operator Overloading\n";
	return *this;
  }

  void setVal(int k) { val = k; }
  void Printoo() { cout << "class value : " << val << " value form base: " << getBa() << endl; }

};

int main()
{
  A o;
  o.Printoo();

  A* pO = new A(17);
  pO->Printoo();

  o = *pO;
  o.Printoo();

  return 0;
}