#include<iostream>
#include<string>

using namespace std;

class Student {
  string name;
  int age;
public:
  Student(string name, int age): age(age),name(name){}
  Student(Student& st) {
	this->age = st.age;
	this->name = st.name;
  }
  void print()
  {
	cout << name.c_str() << " " << age << endl;
  }

};

int main()
{
  cout << "Hello copy constructor\n";

  Student student("parihar", 35);
  Student st2(student);

  st2.print();

  return 0;
}