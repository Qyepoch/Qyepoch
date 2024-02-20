//结构体
struct People
{
	
	int age;
	char score[16];
};

//结构体数组
struct address
{
    char name[30]; /*姓名，字符数组作为结构体中的成员*/
    char street[40]; /*街道*/
    unsigned long tel; /*电话，无符号长整型作为结构体中的成员*/
    unsigned long zip; /*邮政编码*/
}student[3]={
    {"Zhang","Road NO.1",111111,4444},
    {"Wang"," Road NO.2",222222,5555},
    {"Li"," Road NO.3",333333,6666}
};
//共同体变量
union info
{
	int a;
	int b;
	int c;
};
//打印成绩
struct Student_
{
	char number[16];
	char name_[64];
	int score01;
	int score02;
	int score03;
};
void read_file();