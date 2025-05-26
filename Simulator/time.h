#pragma once
#include<iostream>
using namespace std;
class Time//计时器
{
public:
	Time()//constructor
	{
		year = '0';
		Mserial = 8;//Sept.
		day = 1;
		weekday = Mon;
	}
	void addM()//月
	{
		Mserial = Mserial + 1;
		Mserial = Mserial % 12;
	}
	void addW()//星期
	{
		int weekdays = (int)weekday;
		weekdays++;
		//weekdays = (weekdays++) % 7;
		weekdays = weekdays % 7;
		weekday = (week)weekdays;
	}
	void Timefly()//时间流逝
	{
		day++;
		addW();
		if (day > month[Mserial])
		{
			addM();
			day = 1;
			if (Mserial == 0)
				year++;
		}
	}
	const char* transweek()
	{
		const char* w[7] = { "Mon.","Tue.","Wed.","Thu.","Fri.","Sat.","Sun." };
		for (int i = 0; i < 7; i++)
		{
			if ((int)weekday == i)
				return w[i];
		}
	}
	void outputTime()
	{
		cout << "第 " << year << " 年 ";
		cout << Mserial+1<< "." << day;
		cout << endl;
		cout << transweek();
	}
	/*void Timeup()
	{
		if (year == 4 && Mserial == 5 && day == 30)
			goto end();
	}*/
private:
	char year;
	const int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int Mserial;//month serial number
	int day;//date
	enum week { Mon, Tue, Wed, Thu, Fri, Sat, Sun };
	week weekday;
};