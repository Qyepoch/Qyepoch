//main()
#include<iostream>
#include<Cstring>
using namespace std;
#include"function.h"
#define PI 3.1415



template<class T1,class T2>//类模板
T1 add(T1 x,T2 y)
{
	return x+y;
}

足够的内存空间
//main()
int main()
{
	//test01();
	//test02();
	//cout<<calc()<<endl;
	//bol(); 
	//sum();
	//cout<<add(3.13,3)<<endl;
	Circle A(5,"NO.1 Old class");
    Circle B(A);
	return 0;
}