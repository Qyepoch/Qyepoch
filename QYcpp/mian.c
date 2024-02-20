//main.c
#include<stdio.h>
#include<string.h>
#include"function.h"
#define MAX(a,b) (a>b) ? a:b	//带参宏定义,宏替换相当于实现了一个函数调用的功能


int main()
{
	/*
	struct People z;
	z.age = 23;
	strcpy(z.score,"100");//给字符串赋值
	printf("age = %d\nscore = %s\n",z.age,z.score);
	
	*/
	/*

	int i;		//vc6.0中定义变量要在开头处
	struct address *p;
	p = &student[0];

	
	for(i=0;i<3;i++)
	{
		printf("%s %s %u %u\n",p->name,p->street,p->tel,p->zip);
		p++;
	}
	
	union info A;
	A.a = 23;
	A.b = 23;
	A.c = 24;
	printf("union is %d %d %d\n",A.a,A.b,A.c);
	*/
	/*
	enum_();
	strcpy_();
	Print_score();//第十章
	ad_file();
	printf("8 and 9 the max is : %d\n",MAX(8,9));
	*/
	return 0;
}