#include <iostream>
#include <fstream>
#include <istream>
#include <string>
#include<vector>
using namespace std;

class Video{

  private: 

  string Type; 

  public:

  string Name;
  string Duration; 

  // Sets a name for the movie
  string getName();
  
  // Sets the duration of the movie
  string getDuration();

};


int main()
{
    string viDeolist; 

       
    string Name, Duration;
    getline(cin, Name);   // getline reads the respective line (i hope)
    getline(cin, Duration); 
    
    
    Video viDeo;
   
  /*Video  Name = Name;
    Video Duration = Duration;  */


     ifstream playlist ("playlist.txt"); //Call the text file
     playlist.open("playlist.txt");


    // how to show the viDeo's data in a playlist:


      while (getline (playlist, viDeolist))
      {

            cout << "Now Playing My Movie Playlist:" << endl <<

            
             "Title: "
            << viDeo.Name
            << "Type: Movie"
            << "Duration: "
            << viDeo.Duration
            
            << "*******************************************" 
            << endl;

      }

}
