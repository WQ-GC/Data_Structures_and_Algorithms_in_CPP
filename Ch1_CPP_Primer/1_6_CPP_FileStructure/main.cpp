#include <vector>
#include <string>
#include <iostream>
using namespace std;

#include "TestClass.h"
#include "TestFunctions.h"


int main(void) {
  string s = "abc";
  string t = "cde";

  //abcabcdabc
  s += s + t[1] + s;
  cout << s << endl;




  TestClass myObj1;
  TestClass myObj2(123,"Hello World");

  cout << "\nmyObj1" << endl;
  myObj1.printInfo();

  cout << "\nmyObj2" << endl;
  myObj2.printInfo();


  return 0;
}
