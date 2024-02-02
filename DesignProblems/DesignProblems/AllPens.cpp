#include"AllPens_h.h"

void GelPen::write()
{
  cout << name << ": I writing smothly\n";
}
void GelPen::setModelName(string str)
{
  this->name = str;
}
void BallPen::write()
{
  cout << name << ": I writing smothly\n";
}
void BallPen::setModelName(string str)
{
  this->name = str;

}