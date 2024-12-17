#include<iostream>
using namespace std;
int main()
{
	int a;
	int x;
	int b;
	int y;
	cout << "Enter the length\n";
	cin >> a;
	cout << " and width of rectangle\n";
	cin >> b ;
	x = a*b;
	y = 2* (a + b);
	cout  << "Area is"<< x << "\n ";
	cout  << "perimeter is" << y <<" \n";
	return 0;
}