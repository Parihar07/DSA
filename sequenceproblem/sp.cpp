#include<iostream>

using namespace std;

int solve(int A) {
  if (A <= 1)
	return 1;
  if (A == 2)
	return 2;
  return solve(A - 1) + solve(A - 2) + solve(A - 3) + A;
}

int main()
{
  cout << "hello sequence problem\n";
  cout << "Sequence : " << solve(3) << endl;
  cout << "Sequence : " << solve(2) << endl;

  return 0;
}