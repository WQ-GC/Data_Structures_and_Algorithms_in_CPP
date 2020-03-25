#include <vector>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

bool isTwoPower(int getVar) {
  int count = 0;
  while (getVar > pow(2,count)) {
    //cout << "  getVar: " << getVar << endl;
    //cout << "  pow(2," << count << "): " << pow(2,count) << endl;    
    count++;
  }

  if(getVar == pow(2,count))
    return true;
  else
    return false;
}

int main(void) {
  string getInput = " ";

  while(getInput != "") {
    cout << "\n\nQ/q to quit or\n";
    cout << "Input value to be tested for Pow 2: ";
    cin >> getInput;

    if(getInput == "Q" || getInput == "q")
      return 0;


    int getInt = 0;    
    try {
      getInt = stoi(getInput);    
    } catch(std::invalid_argument const &e) {
      cout << "Invalid input\nTerminating" << endl;
      return 0;
    }

    if(isTwoPower(getInt)) {
      cout << getInput << " is power of 2";
    } else {
      cout << getInput << " is NOT power of 2";
    }
  }

  return 0;
}
