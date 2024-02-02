#ifndef _SCALER_PROBLEM_COMMON_H_
#define _SCALER_PROBLEM_COMMON_H_

struct ListNode {
  int val;
  ListNode* next;
  ListNode(int x) : val(x), next(NULL) {}
};

int _max(int a, int b);
long _max(long a, long b);
int _min(int a, int b);
void _swap(int& a, int& b);
int getMSB(int A);
long _min(long a, long b);


#endif // !_SCALER_PROBLEM_COMMON_H_
