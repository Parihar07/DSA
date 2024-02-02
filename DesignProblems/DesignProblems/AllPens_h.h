#pragma once
#include"Pen_h.h"
class GelPen : public Pen {
private:
public:
  GelPen() { cout << "Gel PenConstructor\n"; }
  void write();
  void setModelName(string str);
};

class BallPen : public Pen {
private:
public:
  BallPen() { cout << "BallPen Constructor\n"; };
  void write();
  void setModelName(string str);
};