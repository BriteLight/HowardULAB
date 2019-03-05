#include <iostream>
#include <fstream>
#include <string> 
#include <iomanip> 
using namespace std; 
using std::setw;
using std::right;
using std::left;


struct Messages 
{
  string messageTime;
  string messageText;

  string *nextMessage; 
};

int main() {

  string content1;
  string content2;


  Messages person1; 
  person1.messageText = content1;
  person1.messageTime = " 1:30"; 

  Messages person2; 
  person2.messageText = content2;
  person2.messageTime = " 1:31"; 


  ifstream TEXTConvo ("TEXTConvo.txt"); //Call the text file

  while (getline (TEXTConvo, content1)){

      cout << setw(100);
      cout << content1 << person1.messageTime << right << endl; 
      cout << content2 << person2.messageTime << left << endl;
  }

}
