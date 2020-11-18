// Jaewon Park
// jaepark@chapman.edu
// 2328614
// CPSC 350 - 01
// Assignment #4 

#include "Student.h"
#include <iostream>

using namespace std;

class Window
{
	public:
		Window(Student stud);
		Window();
		~Window();
		void setToUnOccupied();
		void setToOccupied();
		bool getOccupiedBool();

		void setIdleTime(int idleTime);
		int getIdleTime();
		Student student;

		bool Occupied;
		bool free;
		int idleT;

};
