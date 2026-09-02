#include<iostream>
using namespace std;
int main()
{
	int num;
	cout<<"enter a number";
	cin>>num;
	if(num%5==0 && num%11==0)
	cout<<"it is divisivble by 5 and 11";
	else
	cout<<"it is not divisible by 5 and 11";
	return 0;
}
