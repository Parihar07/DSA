#include<iostream>
#include<thread>
#include<algorithm>
#include<chrono>

using namespace std;
using namespace chrono;
typedef unsigned long long ull;
ull findOddSum(ull start, ull end);
ull findEvenSum(ull start, ull end);

ull evenSum = 0;
ull oddSum = 0;

ull findEvenSum(ull start, ull end)
{
  ull ans = 0;
  for (ull i = start; i < end; i++)
  {
	if (!(i % 2)) ans += i;
  }
  evenSum = ans;
  return ans;
}
ull findOddSum(ull start, ull end)
{
  ull ans = 0;
  for (ull i= start; i < end; i++)
  {
	if (i % 2) ans += i;
  }
  oddSum = ans;
  return ans;
}
int main()
{
  cout << "creating thread\n";
  auto startTime = high_resolution_clock::now();

  thread t1(findEvenSum, 1, 1999990000);
  thread t2(findOddSum, 1, 1999990000);

  //findEvenSum(1, 1999990000);
  //findOddSum(1, 1999990000);

  t1.join();
  t2.join();
  auto endTime = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>(endTime - startTime);

  cout << "Odd Sum : " << oddSum << endl;
  cout << "Even Sum : " << evenSum << endl;
  cout << "TIme : " << duration.count()/1000000 << endl;
  return 0;
}
