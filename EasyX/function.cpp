#include <graphics.h>        // ����ͼ�ο�ͷ�ļ�
#include <conio.h>
#include<iostream>
using namespace std;

//��Բ
void test01(void)
{
	
	/*circleԲ	fillcircle���Բ	solidcircle�ޱ߿����Բ*/
	POINT points[] ={{100,0},{41,181},{195,69},{5,69},{159,181}};
	
	//��һ��Բ
    initgraph(640, 480);   // ������ͼ���ڣ���СΪ 640x480 ����
	setcolor(RED);		//����������ɫΪ��ɫ
    setfillcolor(RED);   //�������ɫΪ��ɫ
    fillcircle(200, 200, 100);    // ��Բ��Բ��(200, 200)���뾶Ϊ100


	//�������
	fillpolygon(points,5);


	getch();
	//�ڶ�����Բ
	setcolor(LIGHTRED);
	setfillcolor(LIGHTRED);
	fillcircle(400,200,50);

	getch();
	//���ߺ���
	line(20,200,90,200);	//line(x1,y1,x2,y2)


	//���㺯��putpixel(x,y,color);
	putpixel(100,400,RED);

	getch();
	//������
	setlinecolor(CYAN);
	rectangle(50,50,100,100);	//���Ͻǣ����½�
	rectangle(52,52,98,98);


    getch();            // �����������
	setbkcolor(GREEN);	//���ƿ���̨����

	setcolor(BLACK);
	settextstyle(50,0,"Consolas");	// height width style
    outtextxy(200,200,"www.dotcpp.com");	//ָ��λ���������
	//cleardevice();

	//������
	getch();
	setfillcolor(WHITE);
	//fillrectangle(300,300,400,400);	//�б߿�
	solidrectangle(200,300,400,500);

	getch();
    closegraph();           // �رջ�ͼ����
	
}
//test01()
void test02()
{
    initgraph(640, 480);   // ������ͼ���ڣ���СΪ 640x480 ����
    setcolor(LIGHTBLUE);
    settextstyle(50,0,"Consolas");
    outtextxy(100,100,"www.cnblogs.com/QYepoch");
    getch();            // �����������
    closegraph();           // �رջ�ͼ����
}
//ָ�������������
void test03()
{
	int a;
    char str[100]="����Գ���䲻ס�������ѹ�����ɽ";
    initgraph(640, 480);   // ������ͼ���ڣ���СΪ 640x480 ����
    RECT r = {100, 200  , 400, 480};	//���Ͻ�λ�ú����½�λ��
    setbkcolor(LIGHTRED);
    drawtext(str, &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    getch();            // �����������
    closegraph();           // �رջ�ͼ����
}