#include<iostream>
using namespace std;
int main()
{
	float π=3.1415;
	int area,radius,circum;
	cout <<"Enter the radius of circle=";
	cin >> radius;
	area =π*radius*radius;
	circum =2*π*radius;
	cout << "Area of circle is=" << area <<"\n";
	cout << "Circum of circle is=" << circum;
	return 0;
}