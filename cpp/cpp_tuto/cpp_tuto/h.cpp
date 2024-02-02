#include<iostream>
using namespace std;
int* PrefixSum(int A[], int n);
int solve(int* A, int n1, int B);
int max(int a, int b);

int main()
{
  std::cout << "hello world\n";

  int A[6] = { 2, 3, -1, 4, 2, 1};
  cout << "MaxNum : " << solve(A, 6, 4);
  return 0;
}

/**
 * @input A : Integer array
 * @input n1 : Integer array's ( A ) length
 * @input B : Integer
 *
 * @Output Integer
 */

int* PrefixSum(int A[], int n)
{
  int* ps = (int*)malloc(sizeof(int) * n);
  if (ps == NULL)
  {
	printf("Moemory not allocated!!\n");
	return NULL;
  }

  ps[0] = A[0];
  for (int i = 1; i < n; i++)
  {
	ps[i] = ps[i - 1] + A[i];
  }
  return ps;
}

int max(int a, int b)
{
  return a > b ? a : b;
}

int solve(int* A, int n1, int B) {

  int* PS = PrefixSum(A, n1);
  for (int i = 0; i < n1; i++)
  {
	cout << " " << PS[i] <<endl;
  }
  int mSum = PS[0];
  int k;
  for (k = 0; k < B; k++)
  {
	if (k == 0)
	{
	  mSum = max(mSum, PS[B - 1]);
	  continue;
	}
	if (k == B)
	{
	  mSum = max(mSum, PS[n1 - 1]-PS[(n1-1) - B]);
	  continue;
	}

	//mSum = max(mSum, (PS[B-1-k] + (PS[n1 - 1] - PS[(n1 - 1) - k])));
	mSum = max(mSum, (PS[B - 1 - k] + (PS[n1 - 1] - PS[(n1 - 1) - k])));
  }
  return mSum;
}

