#include "TestClass.h"

//Default Constructor
TestClass::TestClass() {
  data = 0;
  info = "";
}

TestClass::TestClass(int setData, string setInfo) : data(setData), info(setInfo) {

}

void TestClass::printInfo() {
  cout << "data: " << data << endl;
  cout << "info: " << info << endl;
}
