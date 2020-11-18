// Jaewon Park
// jaepark@chapman.edu
// 2328614
// CPSC 350 - 01
// Assignment #4 

#include <iostream>
#include "Student.h"
using namespace std;


Student::Student(int arrivalTime, int duration)
{
	waitT = 0;
	arrivalT = arrivalTime;
  timeLeft = duration;

}

Student::Student()
{
	waitT = 0;
	arrivalT = 0;
}

Student::~Student()
{
}

int Student::getWaitTime()
{
	return waitT;
}

int Student::getArrivalTime()
{
	return arrivalT;
}

void Student::setWaitTime(int waitTime)
{
	waitT=waitTime;
}

void Student::setArrivalTime(int arrivalTime)
{
	arrivalT=arrivalTime;
}
