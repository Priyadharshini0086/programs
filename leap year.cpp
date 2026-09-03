#include<iostream>
using namespace std;
int main()
{
	int year,result;
	cout<<"enter a year";
	cin>>year;
	result= (year%400==0)||(year%4==0 && year%100!=0);
	switch(result)
	{
		case 1:
			cout<<"leap year";
			break;
		default:
			cout<<"Not leap year";
	}
	return 0;
}
