// PROG - 21/04/2020 - TP
// 2ªParte - Ficha1 - Ex1
// up201806629
// alínea a não completa - o resto não completo

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


class Date
{
public:
	Date(unsigned int year, unsigned int month, unsigned int day);
	Date(string yearMonthDay); // yearMonthDay must be in format "yyyy/mm/dd"
	void setYear(unsigned int year);
	void setMonth(unsigned int month);
	void setDay(unsigned int day);
	void setDate(unsigned int year, unsigned int month, unsigned int day);
	unsigned int getYear() const;
	unsigned int getMonth() const;
	unsigned int getDay() const;
	string getDate() const; // returns the date in format "yyyy/mm/dd"
	void show() const; // shows the date on the screen in format "yyyy/mm/dd"
private:
	unsigned int year;
	unsigned int month;
	unsigned int day;
};




Date::Date(unsigned int year, unsigned int month, unsigned int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

// alternativa abrevida
/*
Date::Date(unsigned int year, unsigned int month, unsigned int day)
: year(year), month(month), day(day)
{}
*/

Date::Date(string yearMonthDay) // yearMonthDay must be in format "yyyy/mm/dd"
{
	string year = yearMonthDay.substr(0, 4);
	string month = yearMonthDay.substr(5, 2);
	string day = yearMonthDay.substr(8, 2);

	this->year = stoi(year);
	this->month = stoi(month);
	this->day = stoi(day);
}

void Date::setYear(unsigned int year)
{
	this->year = year;
}

void Date::setMonth(unsigned int month)
{
	this->month = month;
}

void Date::setDay(unsigned int day)
{
	this->day = day;
}

void Date::setDate(unsigned int year, unsigned int month, unsigned int day)
{
	this->year = year;
	this->month = month;
	this->day = day;
}

/*unsigned int Date::getYear() const
{

	return()
}

unsigned int Date::getMonth() const
{

}

unsigned int Date::getDay() const
{

}*/
/*
string Date::getDate() const
{
	string date = ;
}*/

void Date::show() const
{
	cout << year << "/" << month << "/" << day << endl;
}

int main()
{
	Date date1(2020, 4, 21);
	Date date2("2020/04/21");

	date1.show();
	date2.show();
}

