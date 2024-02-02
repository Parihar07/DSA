#include<iostream>

using namespace std;



class node {
public:
  int data;
  node* pNxt;

  node(int k)
  {
	this->data = k;
	this->pNxt = NULL;
  }

};


int main()
{
  cout << "hello Linked Lists\n";
  node* head = new node(1);
  node* pHead = head;

  for (int i = 2; i < 10; i++)
  {
	node* tmp = new node(i);
	pHead->pNxt = tmp;
	pHead = tmp;
  }

  pHead = head;

  //insert node at 4;
  // 1-2-3-4-5-6-7-8-9, 4th position ptr should be moved to k-2 position


  for (int i = 0; i < (4-2); i++)
	pHead = pHead->pNxt;

  node* tmp = new node(33);
  tmp->pNxt = pHead->pNxt;
  pHead->pNxt = tmp;

  ///////////////////////////////////////

  pHead = head;

  while (pHead != NULL)
  {
	cout << pHead->data << endl;

	pHead = pHead->pNxt;
  }
  pHead = head;

  int cnt = 0;
  while (pHead != NULL)
  {
	cnt += 1;
	pHead = pHead->pNxt;
  }

  cout << "length of LL " << cnt << endl;
  return 0;
}