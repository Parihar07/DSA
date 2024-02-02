#include<iostream>
#include"AllPens_h.h"
using namespace std;

int main()
{
  cout << "desiging pen problem\n";
  GelPen oGp;
  oGp.setModelName("RotoMax");
  BallPen oBp;
  oBp.setModelName("CellPoint");

  oGp.write();
  oBp.write();
  return 0;
}