int _max(int a, int b)
{
  return a > b ? a : b;
}
long _max(long a, long b)
{
  return a > b ? a : b;
}
int _min(int a, int b)
{
  return a < b ? a : b;
}
long _min(long a, long b)
{
  return a < b ? a : b;
}
void _swap(int& a, int& b) {
  int tmp = a;
  a = b;
  b = tmp;
}

int getMSB(int A)
{
  for (int b = 30; b >= 0; b--)
  {
	if (A & (1 << b))
	  return b;
  }
  return 0;
}

