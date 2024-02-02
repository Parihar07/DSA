#include<iostream>
#include<thread>

using namespace std;

int foo(int k)
{
  cout << "-----------\n";
  while (k-- > 0)
	cout << k << endl;
  return 0;
}

class B {
public:
  int foo(int k)
  {
	cout << "-----------\n";
	while (k-- > 0)
	  cout << k << endl;
	return 0;
  }
};

class BB {
public:
  static int fooo(int k)
  {
	cout << "-----------\n";
	while (k-- > 0)
	  cout << k << endl;
	return 0;
  }
};

int main()
{
  auto foo1 = [](int l) {
	cout << "-----------\n";
	while (l-- > 0)
	  cout << l << endl;
	return 0;
	};

  //BB b;
  cout << "Types of create thread\n";
  //thread t(foo, 10);
  //thread t1(foo1, 10);
  //t.join();
  //t1.join();
  //thread t2(&B::foo, &b, 10);
  //t2.join();

  thread t3(&BB::fooo, 10);
  t3.join();

  return 0;
}