//�ṹ��
struct People
{
	
	int age;
	char score[16];
};

//�ṹ������
struct address
{
    char name[30]; /*�������ַ�������Ϊ�ṹ���еĳ�Ա*/
    char street[40]; /*�ֵ�*/
    unsigned long tel; /*�绰���޷��ų�������Ϊ�ṹ���еĳ�Ա*/
    unsigned long zip; /*��������*/
}student[3]={
    {"Zhang","Road NO.1",111111,4444},
    {"Wang"," Road NO.2",222222,5555},
    {"Li"," Road NO.3",333333,6666}
};
//��ͬ�����
union info
{
	int a;
	int b;
	int c;
};
//��ӡ�ɼ�
struct Student_
{
	char number[16];
	char name_[64];
	int score01;
	int score02;
	int score03;
};
void read_file();