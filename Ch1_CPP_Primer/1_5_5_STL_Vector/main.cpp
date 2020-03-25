//Test STL Vector Template
//STL vector is without caps
//STL vectors allow random access using at()
//at() performs range checking






#include <vector>
#include <string>
#include <iostream>
#include "TestFunctions.h"
using namespace std;

struct Passengers {
  string  name;
  int     age;
};

//declare 100 vector int
static vector<int> scores(100);

//declare a buffer of 500 char
static vector<char> charBuff(500);

//declare a List of 100 Passengers
static vector<Passengers> passList(100);

void TestVectorOutOfRange();

int main(void) {

  TestVectorOutOfRange();
  
  TestFunc();

  return 0;
}

void TestVectorOutOfRange() {
  //Access each score
  int addErrorSize = 10;
  for(int i = 0; i < (int)scores.size() + addErrorSize; i++) {
    int tempVar = scores.at(i);
  //  cout << i << ": " << scores.at(i) << endl;
  }
}