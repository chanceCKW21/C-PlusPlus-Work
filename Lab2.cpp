//################################################################################//
// Name: Chance Williams
// Course: CS-109 Spring 2024
// Date: 2/1/2024
// Assignment: Lab 2
// Description: This program will read four values of score, match them to their Letter grade range, and print the letter grade with the score.
//################################################################################//
#include <iostream> //Heade file for input and output
#include <string> //Allows for simplier use of strings

char scoreToGrade(int score); // Initializes scoreToGrade function
using namespace std; //So you don't have to type std:: every time

int main() { // Operator function, "Main" program
  int score1, score2, score3, score4; //initilizes 4 score variables
  score1 = 90;
  score2 = 85;
  score3 = 75;
  score4 = 65;
  cout << "Score 1: " << score1 << " Grade: " << scoreToGrade(score1)<<endl; //Prints score1, Calls the scoreToGrade function and prints its grade
  cout << "Score 2: " << score2 << " Grade: " << scoreToGrade(score2)<<endl;//Prints score2, Calls the scoreToGrade function and prints its grade
  cout << "Score 3: " << score3 << " Grade: " << scoreToGrade(score3)<<endl;//Prints score3, Calls the scoreToGrade function and prints its grade
  cout << "Score 4: " << score4 << " Grade: " << scoreToGrade(score4)<<endl;//Prints score4, Calls the scoreToGrade function and prints its grade
    }

char scoreToGrade(int score){//Uses your inputed score to return a letter grade
  if (score >= 90)
    return 'A';
  else if (score >= 80)
    return 'B';
  else if (score >= 70)
    return'C';
  else if (score >= 60)
    return 'D';
  else
    return 'F';
}
