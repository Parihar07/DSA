#pragma once

#define SIZE_OF_ARRAY(arr) (sizeof(arr)/sizeof(arr[0]))

void print_array(int a[], int sz);
void swap(int i, int j);
void swap(int* pi, int* pj);

