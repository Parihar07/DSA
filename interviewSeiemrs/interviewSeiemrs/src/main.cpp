#include<iostream>
#include<string>
#include"A.h"
#include"../../st_lib/st_lib.h"
#include<thread>
#include<mutex>
#include"../../dll2/dll2.h"

using namespace std;

void printHelloDll(std::string str);

int main(int argc, char *argv[])
{
  printHelloDll("helloform main");
  A oa("hello");
  if (argc > 1)
  {
	cout << argv[1] << endl;
  }
  oa.display();



  printSomething("hello Cpp\n");
  return 0;
}