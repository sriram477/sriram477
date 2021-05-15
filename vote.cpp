#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"enter age of the voter:";
	cin>>age;
	if(age>=18)
	{
		cout<<"your are eligible for voting";
	}
	else
	{
		cout<<"you are not eligible for voting";
	}
	return 0;
}

