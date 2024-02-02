#include<iostream>
#include<list>
#include<vector>

using namespace std;

int main()
{

  vector<int> A = { 1,2,3,4,5,6 };

  int L = 10;

  list<int> *li = new list<int>[L];

  li[0].push_back(20);
  li[1].push_back(21);
  li[2].push_back(22);
  li[3].push_back(23);

  li[0].push_back(202);
  li[1].push_back(212);
  li[2].push_back(222);
  li[3].push_back(232);
  cout << "debug\n";

  return 0;
}