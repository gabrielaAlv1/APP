//main 
#include <iostream>
#include <string>
#include "calendar.h"

using namespace std;

//class to print the calendar
void printCalendar(int year)
	{
	int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
	int mDays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	string monthList[12] = { "January", "February", "March", "April", "May", "June",
						"July", "August", "September", "October", "November", "December"
	};

class Date : public Calendar {
public:
	void setCalendar()
	{
		cout << "The birthday date is" << endl;
	}

};


int main()
{
	Calendar c;

	c.setCalendar;

	return 0;
};

