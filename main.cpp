// Jaewon Park / Meghana Shastri
// jaepark@chapman.edu / shastri@chapman.edu
// 2328614     / 2317343
// CPSC 350 - 02 / CPSC 350 - 02
// Assignment #4 / Assignment #4

#include <iostream>
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include "Queue.h"
#include "Student.h"
#include "Window.h"

using namespace std;

int main(int argc, char** argv){

  int time = 0;
  string fileName;
  string line;
  //string that contains contents of file
  string info = "";
  int numLines = 0;
  int numWindows = 0;
  int avStudentWT = 0;
  int medStudentWT = 0;
  int maxStudentWT = 0;
  int studOverTen = 0;
  int meanWinIT = 0;
  int maxWinWT = 0;
  int idleOverFive = 0;


//used for adding file info to array so we can index it later extract information needed to build queue of students
  string *collectInfo;
  Window *windows;
  Queue<Student> newStudents;

  cout << "input a file to analyze" << endl;
  cin >> fileName;
  ifstream file(fileName);
  if (file.is_open()) {
      while (getline(file, line)) {
        info += line + '\n';
        numLines += 1;
      }
      file.close();
      cout << "there are " << numLines <<  " lines" << endl;

      //instantiate array for each number in the file
      collectInfo = new string[numLines];

      /*for (int i = 0; i < numLines; ++i){
        while (getline(file, line)) {
          collectInfo[i] = stoi(line);
        }
      }*/

      //build array of file contents
      int index = 0;
      for (int i = 0; i < numLines; ++i){
        collectInfo[i] = "";
        while (line[index] != '\n') {
          collectInfo[i] += line[index];
          index += 1;
        }
        index += 1;
      }

      //
      // numWindows = stoi(collectInfo[0].c_str());
      // windows = new Window[numWindows];
      // for (int i = 0; i < numWindows; ++i){
      //   windows[i].Occupied = false;
      // }
			//
      // //iterate over array to pick out arrival times and number to students to build our queue
      // for (int i = 1; i < numLines-1; ++i){ //disregard index 0 because that is number of windows
      //   int numStudents = stoi(collectInfo[i].c_str());
      //   int timeArrived = stoi(collectInfo[++i].c_str());
      //   //nested for loop for inserting multiple students in queue
      //   for (int j = 0; j < numStudents; ++j){
      //     //check next index in array
      //     ++i;
      //     Student student(timeArrived, stoi(collectInfo[i].c_str()));
      //     newStudents.insert(student);
      //   }
      // }

      /*while (getline(file, line)) {
        for (int i = 0; i < numLines; ++i) {
          collectInfo[i] = stoi(line);
        }
      }*/

      //starting simulation
      // while(!newStudents.isEmpty()) {
      //   cout << "time is starting at 0 minutes" << endl;
      //   for (int i = 0; i < numWindows; ++i) {
      //     if (windows[i].Occupied){
      //       cout << "true" << endl;
      //     }
      //   }
      //   time += 1;
      // }

      //file.close();
      //testing
      cout << "number of windows = " << numWindows << endl;

  }
  else cout << "unable to open file" << endl;

  return 0;
}
