#include<iostream>
#include<thread>
#include<mutex>
using namespace std;

int gK = 0;
mutex m;
void foo(int k)
{
  while (k-- > 0)
  {
	if(m.try_lock())
	{
	  gK += 1;
	  m.unlock();
	}

	cout << gK << " ";
	if (gK % 5 == 0) cout << endl;
  }
}

int main()
{
  cout << "using mutes\n";

  thread t1(foo, 11);
  thread t2(foo, 11);

  t1.join();
  t2.join();
  cout << gK << endl;
  return 0;
}