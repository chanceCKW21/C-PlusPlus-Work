//Name: Chance Williams
//Course: CS109 Spring 2024
//Date: 1/23/2024
//Assignment: Lab 1
//Description: This program will read a file for all temperatures, print those that are greater than 50, keep track of how many are above 50, then calculate the average temp overall
//######################################################//

#include <fstream> //allows for file opening and use
#include <iostream> //allows for console output
using namespace std;//allows code to run without using std:: 

int main() {//Holds the main program 
  ifstream inputFile("InputFile.txt"); //Opens File
  int temperature, sum = 0, count = 0, high_temp = 0;
  //Declares 4 varibles, temperature, sum, count, and high_temp

  while (inputFile >> temperature) {//Reads file for as much data is present
    sum += temperature; //adds the current instance of temp to sum
    count++; // keeps track of how many temps we've gone through
    if (temperature > 50) {//evaulates if the current temp is above 50
      high_temp++;//keeps track of temps above 50
      cout << temperature << " ";//prints if temp is above 50
    }
  }
  inputFile.close();//closes file

  cout << "\nThere are " << high_temp
       << " temperatures in the file that are higher than 50" << endl; //Prints the amount of temps above 50

  double averageTemperature = static_cast<double>(sum) / count;//calculates the average temp
  cout << "Average Temperature: " << averageTemperature << endl;//prints the average temp

  return 0;//closes the program
}