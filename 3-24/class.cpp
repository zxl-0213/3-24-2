#include"class.h"

void Date::print()
{
	cout << _year << "-" << _month << "-" << _day << endl;
}

Date& Date::operator=(const Date& d)
{
	_year = d._year;
	_month = d._month;
	_day = d._day;
	return *this;
}

Date& Date:: operator+=(int day)
{
	_day += day;
	while (_day > GetDay(_year, _month))
	{
		_day -= GetDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}

	}
	return *this;
}

Date Date:: operator+(int day)
{
	Date ret(*this);
	ret._day += day;
	while (ret._day > GetDay(ret._year, ret._month))
	{
		ret._day -= GetDay(ret._year, ret._month);
		ret._month++;
		if (ret._month == 13)
		{
			ret._year++;
			ret._month = 1;
		}
	}
	return ret;
}

Date& Date::operator-=(int day)
{
	_day -= day;
	while (_day < 0)
	{
		_day += GetDay(_year, _month);
		_month--;
		if (_month == 0)
		{
			_year--;
			_month = 12;
		}
	}
	return *this;
}

Date Date::operator-(int day)
{
	Date ret(*this);
	ret._day -= day;
	while(ret._day < 0)
	{
		ret._day += GetDay(ret._year, ret._month);
		ret._month--;
		if (ret._month == 0)
		{
			ret._year--;
			ret._month = 12;
		}
	}
	return ret;
}

Date& Date::operator++()
{
	_day += 1;
	while (_day > GetDay(_year, _month))
	{
		_day -= GetDay(_year, _month);
		_month++;
		if (_month == 13)
		{
			_year++;
			_month = 1;
		}
	}
	return *this;
}


Date Date::operator++(int)
{
	Date ret(*this);
	ret._day += 1;
	while (ret._day > GetDay(ret._year, ret._month))
	{
		ret._day -= GetDay(ret._year, ret._month);
		ret._month++;
		if (ret._month == 13)
		{
			ret._year++;
			ret._month = 1;
		}
	}
	return ret;
}

Date& Date:: operator--()
{
	_day -= 1;
	if (_day == 0)
	{
		_day + GetDay(_year, _month);
		_month--;
		if (_month == 0)
		{
			_year--;
			_month = 12;
		}
	}
	return *this;
}

bool Date::operator>(const Date& d)
{
	if (_year >= d._year)
	{
		if (_month >= d._month)
		{
			if (_day > d._day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator==(const Date& d)
{
	return _year == d._year && _month == d._month && _day == d._day;
}


bool Date:: operator>=(const Date& d)
{
	if (_year >= d._year)
	{
		if (_month >= d._month)
		{
			if (_day >= d._day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator<(const Date& d)
{
	return !(*this >= d);
}


bool Date::operator<=(const Date& d)
{
	return !(*this > d);
}

bool Date:: operator!=(const Date d)
{
	return !(*this == d);
}

int Date::operator-(const Date& d)
{
	Date max = *this;
	Date min = d;
	if (*this < d)
	{
		max = d;
		min = *this;
	}
	int n = 0;

	while (min != max)
	{
		++min;
		n++;
	}
	return n;
}
