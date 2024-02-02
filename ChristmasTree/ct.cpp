#include<iostream>
#include<vector>

using namespace std;

int solve(vector<int>& A, vector<int>& B) {
  int ans = INT_MAX;
  for (int i = 1; i < A.size(); i++)
  {
	int q = B[i];
	int p = INT_MAX, r = INT_MAX;
	for (int j = i - 1; j >= 0; j--)
	{
	  if (A[j] < A[i])
	  {
		p = min(p, B[j]);
	  }
	}
	for (int k = i + 1; k < A.size(); k++)
	{
	  if (A[k] > A[i])
	  {
		r = min(r, B[k]);
	  }
	}
	if (p!= INT_MAX && r != INT_MAX)
	{
	  ans = min(ans, (p + q + r));
	}
  }
  return ans == INT_MAX ? -1 : ans;
}

int main()
{
  cout << "christmas tree\n";
  vector<int> A = { 802030518,598196518,640274071,983359971,71550121,96204862,799843967,446173607,796619138,402690754 };
  vector<int> B = { 23219513,68171337,12183499,5549873,73542337,66661387,79397647,34495917,31413076,50918417 };
  cout << "MinCostforTree: " << solve(A, B) << endl;
  return 0;
}