#ifndef TESTCLASS_H
#define TESTCLASS_H

#include <string>
#include <iostream>
using namespace std;


class TestClass {

public:
  TestClass();
  TestClass(int setData, string setInfo);
  void printInfo();

private:
  int data;
  string info;

};


#endif