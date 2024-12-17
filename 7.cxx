#include<iostream>
using namespace std;
int main()
{
	int num1,num2,num3,num4;
	int sum,product;
	float average;
	cout<<"Enter number1=";
	cin >> num1;
	cout <<"Enter number2 =";
	cin >> num2;
	cout <<"Enter number3 =";
	cin >> num3;
	cout <<"Enter number4 =";
	cin >> num4;
	sum = num1+num2+num3+num4;
	product = num1*num2*num3*num4;
	average = num1+num2+num3+num4/2;
	cout  <<"sum is =" << sum <<"\n";
	cout <<"product is =" << product <<"\n";
	cout <<"average is =" << average <<"\n";
	return 0;
}