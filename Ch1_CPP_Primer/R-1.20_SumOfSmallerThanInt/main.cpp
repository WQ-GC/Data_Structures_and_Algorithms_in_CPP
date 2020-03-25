#include <vector>
#include <string>
#include <iostream>
#include <math.h>
using namespace std;

int sumOfIntSmallerThan(int getVar) {
  int count = 0;
  int sum = 0;
  while (count < getVar) {
    sum += count;
    count++;
  }
  return sum;
}

int main(void) {
  string getInput = " ";

  while(getInput != "") {
    cout << "\n\nQ/q to quit or\n";
    cout << "Input value to find sum smaller than: ";
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

    cout << "Sum: " << sumOfIntSmallerThan(getInt);
  }

  return 0;
}
