#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector <int> v;
  cout << "hello vectors\n";

  for (int i = 0; i < 20; i++)
  {
	v.push_back(i);
  }

  for (auto i = v.begin(); i != v.end(); i++)
  {
	cout << *i << " ";
  }
  cout << endl;

  v.insert(v.begin() + 3, 100);
  v.insert(v.begin(), 101);

  for (int i = 0; i < v.size(); i++)
  {
	cout << v[i] << " ";
  }
  cout << endl;
}