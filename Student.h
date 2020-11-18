// Jaewon Park
// jaepark@chapman.edu
// 2328614
// CPSC 350 - 01
// Assignment #4 

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
