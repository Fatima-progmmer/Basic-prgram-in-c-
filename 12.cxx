#include<iostream>
using namespace std;
int main()
{
	int val1,val2;
	float percent;
	cout <<"enter val1=";
	cin >> val1;
	cout <<"enter val2=";
	cin >> val2;
	percent =(val1*100)/val2;
	cout << "percentage is=" << percent;
	return 0;
}