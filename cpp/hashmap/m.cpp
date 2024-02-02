#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
  unordered_map<int, int> hm;
  cout << "Hello haspmaps...\n";

  hm[20] = 23;
  hm[21] = 23;
  hm[203] = 23;
  hm[202] = 23;
  hm[24] = 23;

  cout << hm[203] << endl;
  hm.find(21);

  return 0;
}