#pragma once
#include<iostream>
using namespace std;
class Date
{
public:
	//每个月天数
	int GetMonthDay[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	//获取每个月天数
	int GetDay(int year, int month)
	{
		return GetMonthDay[month];
	}
	//构造函数
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//拷贝构造函数
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	//赋值运算符重载
	Date& operator=(const Date& d);
	
	//+=运算符重载
	Date& operator+=(int day);

	//+运算符重载
	Date operator+(int day);


	//-=运算符重载
	Date& operator-=(int day);

	//-运算符重载
	Date operator-(int day);
	
	//++在前
	Date& operator++();

	//++在后
	Date operator++(int);

	//--在前
	Date& operator--();

	//>重载
	bool operator>(const Date& d);

	//==重载
	bool operator==(const Date& d);

	//>=重载
	bool operator>=(const Date& d);

	//<重载
	bool operator<(const Date& d);

	//<=重载
	bool operator<=(const Date& d);

	//!=重载
	bool operator!=(const Date d);

	//日期-日期
	int operator-(const Date& d);
	//析构函数
	/*~Date()
	{
		cout << "~Date()" << endl;
	}*/


	void print();
private:
	int _year;
	int _month;
	int _day;

};


