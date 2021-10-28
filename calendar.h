#pragma once
#include <iostream>
#include "calendar main.cpp"

using namespace std;

class Calendar {
private:
	int d_year;  //int to store the year
	int d_month;  //variable to store the month
	int d_day;		//int to store the day

public:
	Calendar(int year, int month, int day);
		
	void setCalendar(int year,int month,int day);
	
	//getters
	int getYear() { return d_year;}
	int getMonth() { return d_month;}
	int getDay() { return d_day;}
};
Calendar::Calendar(int year, int month, int day)
{
	setCalendar(year, month, day);
}

//function for the calendar
void Calendar::setCalendar(int year, int month, int day)
{
	d_year = year;  
	d_month = month;
	d_day = day;
}
