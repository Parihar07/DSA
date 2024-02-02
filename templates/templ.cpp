#include<iostream>

using namespace std;

int incrementN(int x);

template<typename T>
T increment(T x)
{
  static int v = 12;
  v++;
  return x + v;
}

int incrementN(int x)
{
  static int v = 12;
  v++;
  return x + v;
}

int incremen(int x)
{
  int v = 12;
  v++;
  return x + v;
}

template<class T>
T _max(T a, T b)
{
  return a > b ? a : b;
}

int main()
{
  cout<< "Hello template\n";

  cout << _max(24, 56)<< endl;
  return 0;
}