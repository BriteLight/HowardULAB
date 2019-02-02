/*
 * Hannah Leonard
 * 02903539
 *
 * Create the program to read in the file Lab01222019.txt into a 2D Array

Step 1: Create Variable for the dimensions of the array
Step 2: Take data from provided text file to build array
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int totalRow = 2;
int totalColumn = 50;
char[][] myArray = new char[totalRow][totalColumn];
File file = new File("Lab01222019.txt");
Scanner scanner = new Scanner(file);


for (int row = 0; scanner.hasNextLine() && row < totalRow; row++) {
    char* chars = scanner.nextLine().toCharArray();
    for (int i = 0; i < totalColumn && i < chars.length; i++) {
        myArray[row][i] = chars[i];
    }
}
