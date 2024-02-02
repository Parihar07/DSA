#include<iostream>
#include<Windows.h>
#include<tchar.h>

using namespace std;
DWORD WINAPI threadFunction(LPVOID lpParam);
DWORD WINAPI threadFunction1(LPVOID lpParam);
DWORD WINAPI threadFunction2(LPVOID lpParam);

struct MyData {
  int val;
  int val2;
} *pMyData;

DWORD WINAPI threadFunction(LPVOID lpParam)
{
  cout << "This is thread function\n";
  return 0;
}
DWORD WINAPI threadFunction1(LPVOID lpParam)
{
  cout << "This is thread function2\n";
  return 0;
}
DWORD WINAPI threadFunction2(LPVOID lpParam)
{
  cout << "This is thread function3\n";
  return 0;
}

int main()
{
  MyData pDataArray[3] = { 0 };
  DWORD dwThreadId[3];
  HANDLE hThreadArray[3];

  cout << "Creating theads\n";

  MyData threadSpecificData;
  threadSpecificData.val = 100;
  threadSpecificData.val2 = 1001;

  hThreadArray[0] = CreateThread(
	NULL,
	0,
	threadFunction,
	&threadSpecificData,
	0,
	&dwThreadId[0]
  );

  hThreadArray[1] = CreateThread(
	NULL,
	0,
	threadFunction1,
	&threadSpecificData,
	0,
	&dwThreadId[1]
  );

  hThreadArray[2] = CreateThread(
	NULL,
	0,
	threadFunction2,
	&threadSpecificData,
	0,
	&dwThreadId[2]
  );

  WaitForMultipleObjects(3,hThreadArray,TRUE,INFINITE);

  return 0;
}