#include <iostream>
#include <fstream>
#include <string> 
#include <iomanip> 
#include <stdio.h>
#include <time.h> //A library for the clock
using namespace std; 


class Messages 
{
  private :
  
  int timE;
  
  public:

  string messageText;
  Messages *nextMessage; 

  int hour, min;

  int GettimE(hour,min);

  string Getcontent1();
};


int Messages::GettimE(hour,min){

return timE;

}


int main() {

  string content1;


  Messages text; 
  text.messageText = content1;
  

  Messages time; 
  
  time.hour = 1; 
  time.min = 30; 


  ifstream TEXTConvo ("TEXTConvo.txt"); //Call the text file

  while (getline (TEXTConvo, content1)){


      if(time.min % 2 == 0){

        std::cout << std::setw(100);

        cout << content1 <<  std::right << endl;

        std::cout << std::setw(100);

        cout << " Sent at " << time.hour << ":" << time.min << endl; 
      }
      else {
        std::cout << std::setw(0);

        cout << content1 <<  std::right << endl;

        cout << " Sent at " << time.hour << ":" << time.min << endl; 

      }

      time.min = time.min + 1;

  }

}
