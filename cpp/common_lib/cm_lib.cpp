#include<iostream>
#include "cm_lib.h"

using namespace std;

void print_array(int a[], int sz)
{
  for (int i = 0; i < sz; i += 1)
	cout << a[i] << " ";
  cout << endl;
  return;
}

void swap(int i, int j)
{
  int tmp = i;
  i = j;
  j = tmp;
  return;
}
void swap(int* pi, int* pj)
{
  int tmp = *pi;
  *pi = *pj;
  *pj = tmp;
  return;
}
