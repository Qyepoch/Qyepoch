//function.cpp
#include<iostream>
using namespace std;
#include "function.h"
void test01()
{
	bool v;
	int a=10,b=9;

	
	v = a>b;
	cout<<"bool的值为："<<v<<" and  "<<sizeof(bool)<<endl;
}
void test02()
{
	int a,b;
    while(cin>>a>>b)cout<<(a+b)<<endl;
}
double calc()
{
	double a;
	cin>>a;
	if(a<1)
	{
		return a;
	}
	else if(a>=1 && a<10)
	{
		return 2*a-1;
	}
	else if(a>=10)
	{
		return 3*a-11;
	}
}
//bool
void bol()
{
	bool a=true;
	bool b=false;
	cout<<a<<endl<<b<<endl;
}
//n以内求和
void sum()
{
	int n,i,sum=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum  =sum+ i;
	}
	cout<<sum<<endl;
}
//模板实例化

		