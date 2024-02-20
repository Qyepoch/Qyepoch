//function.c
#include<stdio.h>
#include<string.h>
#include "function.h"
#include "struct.h"


int day01()
{
    printf("%d\n",3>=2);
    printf("%d\n",5>=5);
    printf("%d\n",10!=10);
}
int day02()
{
    printf("%d\n",3 && 5);
    printf("%d\n",10&&0);
    printf("%d\n",2>=3 || 10);
    printf("%d\n",5>=5 || !0);
}
//温度转换函数
double trstemp(double c){
	c = 5*(c - 32)/9;
	printf("c=%.2lf\n",c);
} 
//小九九
int multi()
{
	int i,j;
	for(i=1;i<10;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d*%d=%-3d",j,i,i*j);
		}
		printf("\n");
	}
}
//12345
int revers()
{
	char str[5];
	int len,j;
	scanf("%s",&str);//输入字符串
	len = strlen(str);
	printf("%d\n",len);
	for(j=0;j<len;j++){
		//printf("%s ",str[j]);
		putchar(str[j]);
		if(j!=len-1){
			putchar(' ');
		}
	}
	putchar('\n');
	for(j=len-1;j>=0;j--){
		putchar(str[j]);
	}
	 
}
//奖金提成
int get_money()
{
	float money,get_money;
	scanf("%f",&money);
	if(money<=100000)
	{
		get_money = 0.1*money;
	}
	else if(money>100000 && money <=200000)
	{
		get_money = 100000*0.1 + (money-100000)*0.075;
	}
	else if(money>200000 && money<=400000)
	{
		get_money = 100000*0.1 + 100000 * 0.075 + (money-200000)*0.05;
	}
	else if(money>400000 && money<=600000)
	{
		get_money = 100000*0.1 + 100000 * 0.075 + 200000*0.05 + (money - 400000)*0.03;
	}
	else if(money>600000 && money<=1000000)
	{
		get_money = 100000*0.1 + 100000 * 0.075 + 200000*0.05 + 200000*0.03 + (money - 600000)*0.015;
	}
	else if(money>1000000)
	{
		get_money = 100000*0.1 + 100000 * 0.075 + 200000*0.05 + 400000*0.03 + (money - 1000000)*0.01;
	}
	printf("%.0f\n",get_money);
}
//短除法求最小公倍数和最大公约数
int short_div()
{
	int m,n;
	int i,gcd=1;
	scanf("%d %d",&m,&n);
	for(i=2;i<=m && i<=	n;i++)
	{
		while(m%i==0 && n%i==0)
		{
			m=m/i;
			n=n/i;
			gcd=gcd * i;
		}
	}
	printf("%d %d",gcd,m*n*gcd);
}
//字符分类
int sort(void)
{
    char str[200];//声明一个数组用于存储输入的字符
    int i,letter = 0, number = 0, space = 0, other, n;
    gets(str); //获取输入并存储到数组里，gets会把输入的换行符\n丢弃
    n = strlen (str); //获取输入的字符长度
    for(i = 0; i < n; i++)//for循环可以声明变量同时初始化，多个声明用 , 逗号隔开
    {
        if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
            letter += 1;
        if (str[i] == ' ')
            space += 1;
        if (str[i] >= '0' && str[i] <= '9')
            number += 1;       
    }
    other = n - space - number - letter; //把整个字符长度减去字母数、空格、数字得出其他字符的数量
     
    printf("%d %d %d %d", letter, number, space, other);

}
//static()
int static_a()
{
	static a = 10;
	a = 20;
	printf("%d\n",a);
}
//求和
int sum_get()
{
	int a,i,sum=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		sum = sum*10;
		sum = sum+2*(i+1);
	}
	printf("2+22+222+...+ 22....222 = %d\n",sum);
}
/*
//阶乘求和
long long int fac(int n)
{
	long long int sum=1;
	if(n>1)
	{
		sum = n*fac(n-1);
		return sum;
	}else
	{
		return sum;
	}
}

long long int factoral()
{
	int n,i;
	long long int sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum = sum+fac(i);
	}
	return sum;
}*/
//求和
double sum_a_c()
{
	double i;
	double sum=0;
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	for(i=1;i<=a;i++)
	{
		sum = sum+i;
	}
	for(i=1;i<=b;i++)
	{
		sum = sum+i*i;
	}
	for(i=1;i<=c;i++)
	{
		sum = sum+(1/i);
	}
	return sum;
}
//水仙花
int water_flour()
{
	int i=100;
	for(i;i<=999;i++)
	{
		if((i/100)*(i/100)*(i/100)+(i%100/10)*(i%100/10)*(i%100/10)+(i%10)*(i%10)*(i%10) == i)
		{
			printf("%d\n",i);
		}
	}
}
//完数判断
int wanshu()
{
	int n,i,j;
	int sum,tal[1000],k,s;
	scanf("%d",&n);
	for(i=3;i<=n;i++)
	{
		sum = 0,s=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				sum = sum+j;
				tal[s++] = j;
			}
		}
		if(sum == i)
		{
			printf("its factor are: %d\n",i);
			for(k=0;k<j;k++)
			{
				printf(" %d",tal[k]);
			}
			printf("\n");
		}
	}
}
//enum
void enum_(void)
{
	enum Week{MON,TUE=5,WED,THU,FRI,SAD,WEE};			//enum是从0开始的
	enum Week A=WED;      //A是enum Week类型的！！！
	printf("%d\n",A);
}
//strcpy_
void strcpy_(void)
{
	int n,m,j;
	char str[256];
	scanf("%d",&n);
	scanf("%s",str);
	scanf("%d",&m);
	for(j=m-1;j<n;j++)
	{
		putchar(str[j]);
	}
	puts("\n");
}
//打印学生成绩
void Print_score()
{
	int n,j,k;
	float aver01,aver02,aver03,tol=0;
	float sum01=0,sum02=0,sum03=0;
	struct Student_ S[1000];
	scanf("%d",&n);
	for(j=0;j<n;j++)
	{
		scanf("%s %s %d %d %d",&S[j].number,&S[j].name_,&S[j].score01,&S[j].score02,&S[j].score03);
		if(S[j].score01+S[j].score02+S[j].score03>tol)
		{
			tol=S[j].score01+S[j].score02+S[j].score03;
			k=j;
		}
		sum01 = sum01+S[j].score01;
		sum02 = sum02+S[j].score02;
		sum03 = sum03+S[j].score03;
	}
	aver01 = sum01/n;
	aver02 = sum02/n;
	aver03 = sum03/n;
	printf("%.0f %.0f %.0f\n",aver01,aver02,aver03);
	printf("%s %s %d %d %d",S[k].number,S[k].name_,S[k].score01,S[k].score02,S[k].score03);
}
//读文件
void read_file()
{
	char buffer[100];
	FILE *fp;
	fp = fopen("text.txt","r");
	while(!feof(fp))
	{
		fread(buffer,sizeof(buffer),15,fp);
	}
	
	printf("%s\n",buffer);
	fclose(fp);
}
//通过异或运算交换两个整数的值
int swap(int *a,int *b)
{
    if (*a!=*b)
    {
        *a=*a^*b;
        *b=*b^*a;
        *a=*a^*b;
    }
	else return 0;
}

	

		
