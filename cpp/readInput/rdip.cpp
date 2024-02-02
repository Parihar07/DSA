#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
  fstream ipF;
  string str;
  cout << "hello\n";

  ipF.open("inputArray.txt");

  if (ipF.is_open())
  {
	while (getline(ipF, str))
	{
	  cout << str << endl;
	}
  }
  else {
	cout << "some error\n";
  }


  return 0;
}