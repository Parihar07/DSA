#pragma once
#include<iostream>
#include<string>
using namespace std;

class Pen {
public:
  string name;
  string brand;
  string modelName;
  int price;
private:
  void write();
};

class Refillable {
  virtual void refillMe();
};