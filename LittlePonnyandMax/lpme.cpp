#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int solve(vector<int>& A, int B) {
  int ans = -1;
  sort(A.begin(), A.end());
  int s = 0, e = A.size() - 1, mid = -1;
  while (s <= e)
  {
	mid = (s + e) / 2;
	if (A[mid] == B) {
	  ans = mid;
	  break;
	}
	if (A[mid] > B)
	{
	  e = mid - 1;
	}
	else {
	  s = mid + 1;
	}
  }
  if (ans >= 0) {
	ans = 0;
	for (int i = 0; i < A.size(); i++)
	{
	  if (A[i] > B)
		ans++;
	}
  }  
  return ans > 0 ? ans : -1;
}

int main()
{
  vector<int>A = { 2, 4, 3, 1, 5 };
  vector<int>B = { 1, 4, 2 };

  cout << "Little Ponny mximum value\n";

  cout << "Ponny Value: " << solve(A, 3) << endl;
  cout << "Ponny Value: " << solve(B, 3)<< endl;
  return 0;
}