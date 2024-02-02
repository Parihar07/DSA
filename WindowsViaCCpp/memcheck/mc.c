#include<stdio.h>
#include<stdlib.h>;
int main()
{
  char** v = NULL;
  char* a[2] = { "hello","world" };
  v = a;

  printf("%s %s", *(v), *(v + 1));

  return 0;
}