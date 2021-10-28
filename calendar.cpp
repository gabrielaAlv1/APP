//main 
#include <iostream>
#include <string>
#include "calendar.h"

using namespace std;

class Date : public Calendar  {
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
}
	


