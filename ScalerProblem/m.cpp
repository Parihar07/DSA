#include<iostream>
#include<vector>

using namespace std;
int _max(int a, int b);
int _min(int a, int b);


int _max(int a, int b)
{
  return a > b ? a : b;
}
int _min(int a, int b)
{
  return a < b ? a : b;
}

int trap(const vector<int>& A) {
  int ans=0;
  vector<int> leftMax = A, rightMax = A;
  
  leftMax[0] = A[0];
  int n = A.size();

  for (int i = 1; i < A.size(); i++)
  {
	leftMax[i] = _max(leftMax[i - 1], A[i]);
  }

  rightMax[n - 1] = A[n - 1];
  for (int i = n - 2; i >= 0; --i)
  {
	rightMax[i] = _max(rightMax[i + 1], A[i]);
  }
  int unit = 0;
  for (int i = 1; i < A.size()-1; i++)
  {
	unit = _min(leftMax[i - 1], rightMax[i + 1]) - A[i];
	ans += unit > 0 ? unit : 0;
  }

  return ans;
}

int main()
{
  vector<int> A = { 1, 2 };
  cout << "Water Trapped " << trap(A) << endl;

  return 0;
}