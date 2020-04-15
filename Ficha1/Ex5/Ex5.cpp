// PROG - 19/02/2020 - TPC1
// Ficha1 - Exercício 5
// up201806629

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;


int ex_1_5_a()
{
	int hour1, hour2, minute1, minute2, second1, second2, second_sum, minute_sum, hour_sum, days, minute, second, hour;

    cout << "Time1 (hour minutes seconds)? ";
	cin >> hour1 >> minute1 >> second1;
	cout << "Time2 (hour minutes seconds)? ";
	cin >> hour2 >> minute2 >> second2;

	second_sum = second1 + second2;
	minute_sum = minute1 + minute2 + (second_sum / 60);
	hour_sum = hour1 + hour2 + (minute_sum / 60);
	days = hour_sum / 24;
	minute = minute_sum % 60;
	second = second_sum % 60;
	hour = hour_sum % 24;

	cout << "\n Time1 + Time2 = " << days << " day, " << hour << " hours, " << minute << " minutes and " << second << " seconds \n";

	return 0;
}




int ex_1_5_b()
{
	string time1, time2;
	int second_sum, minute_sum, hour_sum, days, minute, second, hour, hour1, hour2, minute1, minute2, second1, second2;

	cout << "Time1 (HH:MM:SS)? ";
	cin >> time1;
	cout << "Time2 (hour minutes seconds)? ";
	cin >> time2;

	hour1 = stoi(time1.substr(0, 3));
	hour2 = stoi(time2.substr(0, 3));
	minute1 = stoi(time1.substr(3, 6));
	minute2 = stoi(time2.substr(3, 6));
	second1 = stoi(time1.substr(6));
	second2 = stoi(time2.substr(6));

	second_sum = second1 + second2;
	minute_sum = minute1 + minute2 + (second_sum / 60);
	hour_sum = hour1 + hour2 + (minute_sum / 60);
	days = hour_sum / 24;
	minute = minute_sum % 60;
	second = second_sum % 60;
	hour = hour_sum % 24;

	cout << "\n Time1 + Time2 = " << days << " day, " << hour << " hours, " << minute << " minutes and " << second << " seconds \n";

	return 0;
}


int main()
{
	//ex_1_5_a();
	ex_1_5_b();
	return 0;
}
