#pragma once
#include<iostream>
#include<string>

class A {
  std::string str;
public:
  A(std::string s) :str(s) {}
  void display();
};