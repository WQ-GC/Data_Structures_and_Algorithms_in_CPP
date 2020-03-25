#include <string>
#include <iostream>
using namespace std;

static string testStr = "Hello World";

int main(void) {

  //returns index of first occurence of string in testStr
  cout << "First of Hello: [" << testStr.find("Hello") << "]" << endl;
  cout << "First of World: [" << testStr.find("World") << "]" << endl;

  //find index of first occurrence at or after index j
  //string::npos == 0xFFFF FFFF
  int j = 3;
  if(testStr.find("Hello", j) == string::npos) {
    cout << "  String not found: " << endl;
    cout << "  string::npos value: " << string::npos << endl;
  } else {
    cout << "First of Hello: [" << testStr.find("Hello", j) << "]" << endl;
  }

  if(testStr.find("World", j) == string::npos) {
    cout << "  String not found: " << endl;
    cout << "  string::npos value: " << string::npos << endl;  
  } else {
    cout << "First of World: [" << testStr.find("World", j) << "]" << endl;
  }
  

  //Get substring
  int startIdx = 6;
  int subStrSize = 5;
  cout << "SubString: " << testStr.substr(startIdx,subStrSize) << endl;

  //Insert string between testStr
  string addStr = "Great ";
  int insertIdx = 6;
  testStr.insert(insertIdx, addStr);
  cout << "Extended String: " << testStr << endl;

  //Remove string between testStr
  int startRemoveIdx = 6;
  int eraseSize = 6;
  testStr.erase(startRemoveIdx, eraseSize);
  cout << "Erased String: " << testStr << endl;

  //Replace string between testStr
  int startReplaceIdx = 6;
  string replaceStr = "Everyone";
  int replaceSize = replaceStr.size();
  testStr.replace(startReplaceIdx, replaceSize, replaceStr);
  cout << "Replaced String: " << testStr << endl;


  //Read single line from input stream and store in str
  cout << "Get Input Text (string): ";
  string readStr;
  getline(cin, readStr);
  cout << "Input Text: " << readStr << endl;

  //Read single line from input stream and store in str
  cout << "Get Input Text (char[100]):";
  char getText[100];
  cin.getline(getText, 100-1);
  cout << "Input Text (char[100]): " << getText << endl;
  

  return 0;
}
