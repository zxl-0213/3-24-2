#include"class.h"

int main()
{
	Date d1(2021, 3, 24);
	//d1.print();
	Date d2;
	//d2.print();
	Date d3(d1);
	d3.print();

	d2 = d3;
	d2.print();

	d2 += 365;
	d2.print();
	Date ret = d3 + 365;
	ret.print();
	d2 -= 365;
	d2.print();
	Date d4 = d2 - 365;
	d4.print();
	++d4;
	d4.print();
	Date d5 = d4++;
	d5.print();
	d4.print();
	--d4;
	d4.print();
	bool x = d5 > d4;
	cout << x << endl;
	bool y = d5 == d4;
	cout << y << endl;

	bool z = d5 >= d4;
	cout << z << endl;

	bool h = d5 < d4;
	cout << h << endl;

	bool r = d5 <= d4;
	cout << r << endl;

	bool g = d5 != d4;
	cout << g << endl;

	
	int l = d4 - d5;
	cout << l << endl;


	return 0;
	
	
}