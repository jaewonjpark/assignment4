// Jaewon Park / Meghana Shastri
// jaepark@chapman.edu / shastri@chapman.edu
// 2328614     / 2317343
// CPSC 350 - 02 / CPSC 350 - 02
// Assignment #4 / Assignment #4

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
