// Jaewon Park / Meghana Shastri
// jaepark@chapman.edu / shastri@chapman.edu
// 2328614     / 2317343
// CPSC 350 - 02 / CPSC 350 - 02
// Assignment #4 / Assignment #4

#include <iostream>
using namespace std;

#ifndef STUDENT_H
#define STUDENT_H
class Student {
	public:
		Student(int waitTime, int arrivalTime);
		Student();
		~Student();

		int getWaitTime();
		int getArrivalTime();

		void setWaitTime(int waiTime);
		void setArrivalTime(int arrivalTime);

		int waitT;
		int arrivalT;
		int timeLeft;

};


#endif
