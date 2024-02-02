#include<iostream>
#include"../common_lib/cm_lib.h"
using namespace std;

/*
* A -list of integer array
* n -size of array
*/
void revArray(int A[], int n);

/*
* A -list of integer array
* n -size of array
* k -num of rotations
*/
void rotateArray(int A[], int n, int k);

/*
* Given an array A and an integer B. A pair(i, j) in the array is a good pair if i != j and (A[i] + A[j] == B).
* Check if any good pair exist or not.
*/
int goodPair(int A[], int n, int B);


/*
* Array of evevn indexes sum
*
*/
int* PrefixEvenSum(int A[], int n);

/*
* Prefix Sum
*/

int* PrefixSum(int A[], int n);


/*
You are given an integer array A of size N.
You have to perform B operations. In one operation, you can remove either the leftmost or the rightmost element of the array A.
Find and return the maximum possible sum of the elements that were removed after B operations.
NOTE: Suppose B = 4, and array A contains 10 elements, then
You can remove the first four elements or can remove the last four elements, or can remove 1 from front and 3 from the back, etc.
You need to return the maximum possible sum of elements you can remove.
*/
int MaxPossibleSum(int A[], int n, int b);

int main()
{
  int A[] = { 2,1,3,5,-1,4,6,12,56 };

  //revArray(A,SIZE_OF_ARRAY(A));
  //rotateArray(A, SIZE_OF_ARRAY(A), 4);

  //cout << goodPair(A, SIZE_OF_ARRAY(A), 10) << endl;
  //int* PE = PrefixEvenSum(A, SIZE_OF_ARRAY(A));

  /*int* PS = PrefixSum(A, SIZE_OF_ARRAY(A));

  print_array(PS, SIZE_OF_ARRAY(A));*/

  cout << "Max possible sum : " << MaxPossibleSum(A, SIZE_OF_ARRAY(A), 4);

  return 0;
}

int MaxPossibleSum(int A[], int n, int b)
{
  int k = 0;
  int* ps = PrefixSum(A, n);
  int t = 0;
  print_array(ps, n);
  int mSum = ps[0];
  for (k = 0; k<=b; k++)
  {
	if (k == 0)
	{
	  t = ps[n - 1] - ps[n - 1 - b + k];
	  if (mSum < t)
		mSum = t;
	}
	else if (k == 4)
	{
	  t = ps[k - 1];
	  if(mSum <t)
		mSum = t;
	}
	t = ps[k - 1] + (ps[n - 1] - ps[n - 1 - b + k]);
	if (mSum < t)
	  mSum = t;
  }
  return mSum;
}

int* PrefixSum(int A[], int n)
{
  print_array(A, n);
  int* ps = (int*)malloc(sizeof(int) * n);
  if (ps == NULL)
  {
	cout << "Moemory not allocated!!\n";
	return NULL;
  }

  ps[0] = A[0];
  for (int i = 1; i < n; i++)
  {
	ps[i] = ps[i - 1] + A[i];
  }
  return ps;
}


int* PrefixEvenSum(int A[], int n)
{
  print_array(A, n);
  int* pe = (int*)malloc(sizeof(int) * n);
  if (pe == NULL)
  {
	cout << "Moemory not allocated!!\n";
	return NULL;
  }
  pe[0] = A[0];
  for (int i = 1; i < n; i++)
  {
	if (i % 2)
	{
	  pe[i] = pe[i - 1];
	}
	else {
	  pe[i] = pe[i - 1] + A[i];
	}
  }
  cout << "Prefix Even Sum..\n";
  print_array(pe, n);
  return pe;
}

int goodPair(int A[], int n, int b)
{
  int ans = A[0];
  print_array(A, n);
  for (size_t i = 1; i < n; i++)
  {
	if ((b - ans) == A[i])
	{
	  cout << "true\n";
	  return true;
	}
	ans = A[i];
  }
  cout << "false\n";
  return false;
}

void rotateArray(int A[], int n, int k)
{
  print_array(A, n);

  revArray(A, n);
  int nxt = 0;
  nxt = (nxt + k) % n;

  revArray(A, nxt);
  revArray((A + nxt), n - nxt);

  print_array(A, n);
  return;
}

void revArray(int A[], int sz)
{
  print_array(A, sz);
  int l = 0, r = sz - 1;
  while (l < r)
  {
	swap((A + l), (A + r));
	l += 1;
	r = (sz - 1) - l;
  }
  cout << "Reversed : ";
  print_array(A, sz);
  cout << endl;
  return;
}