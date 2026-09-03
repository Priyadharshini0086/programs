#include<iostream>
using namespace std;
int main()
{
	int mark;
	cout<<"enter a mark";
	cin>>mark;
	if(mark>=80)
	cout<<"Grade A";
	else if(mark>=70)
	cout<<"Grade B";
	else if(mark>=60)
	cout<<"Grade C";
	else
	cout<<"Fail";
	return 0;
}
