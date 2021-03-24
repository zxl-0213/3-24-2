#pragma once
#include<iostream>
using namespace std;
class Date
{
public:
	//ÿ��������
	int GetMonthDay[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	//��ȡÿ��������
	int GetDay(int year, int month)
	{
		return GetMonthDay[month];
	}
	//���캯��
	Date(int year = 0, int month = 1, int day = 1)
	{
		_year = year;
		_month = month;
		_day = day;
	}
	//�������캯��
	Date(const Date& d)
	{
		_year = d._year;
		_month = d._month;
		_day = d._day;
	}
	//��ֵ���������
	Date& operator=(const Date& d);
	
	//+=���������
	Date& operator+=(int day);

	//+���������
	Date operator+(int day);


	//-=���������
	Date& operator-=(int day);

	//-���������
	Date operator-(int day);
	
	//++��ǰ
	Date& operator++();

	//++�ں�
	Date operator++(int);

	//--��ǰ
	Date& operator--();

	//>����
	bool operator>(const Date& d);

	//==����
	bool operator==(const Date& d);

	//>=����
	bool operator>=(const Date& d);

	//<����
	bool operator<(const Date& d);

	//<=����
	bool operator<=(const Date& d);

	//!=����
	bool operator!=(const Date d);

	//����-����
	int operator-(const Date& d);
	//��������
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


