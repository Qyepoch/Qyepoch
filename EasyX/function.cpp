#include <graphics.h>        // 引用图形库头文件
#include <conio.h>
#include<iostream>
using namespace std;

//画圆
void test01(void)
{
	
	/*circle圆	fillcircle填充圆	solidcircle无边框填充圆*/
	POINT points[] ={{100,0},{41,181},{195,69},{5,69},{159,181}};
	
	//第一个圆
    initgraph(640, 480);   // 创建绘图窗口，大小为 640x480 像素
	setcolor(RED);		//设置线条颜色为红色
    setfillcolor(RED);   //设置填充色为黄色
    fillcircle(200, 200, 100);    // 画圆，圆心(200, 200)，半径为100


	//画五角星
	fillpolygon(points,5);


	getch();
	//第二个亮圆
	setcolor(LIGHTRED);
	setfillcolor(LIGHTRED);
	fillcircle(400,200,50);

	getch();
	//划线函数
	line(20,200,90,200);	//line(x1,y1,x2,y2)


	//画点函数putpixel(x,y,color);
	putpixel(100,400,RED);

	getch();
	//画矩形
	setlinecolor(CYAN);
	rectangle(50,50,100,100);	//左上角，右下角
	rectangle(52,52,98,98);


    getch();            // 按任意键继续
	setbkcolor(GREEN);	//绘制控制台窗口

	setcolor(BLACK);
	settextstyle(50,0,"Consolas");	// height width style
    outtextxy(200,200,"www.dotcpp.com");	//指定位置输出文字
	//cleardevice();

	//填充矩形
	getch();
	setfillcolor(WHITE);
	//fillrectangle(300,300,400,400);	//有边框
	solidrectangle(200,300,400,500);

	getch();
    closegraph();           // 关闭绘图窗口
	
}
//test01()
void test02()
{
    initgraph(640, 480);   // 创建绘图窗口，大小为 640x480 像素
    setcolor(LIGHTBLUE);
    settextstyle(50,0,"Consolas");
    outtextxy(100,100,"www.cnblogs.com/QYepoch");
    getch();            // 按任意键继续
    closegraph();           // 关闭绘图窗口
}
//指定区域输出内容
void test03()
{
	int a;
    char str[100]="两岸猿声啼不住，轻舟已过万重山";
    initgraph(640, 480);   // 创建绘图窗口，大小为 640x480 像素
    RECT r = {100, 200  , 400, 480};	//左上角位置和左下角位置
    setbkcolor(LIGHTRED);
    drawtext(str, &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
    getch();            // 按任意键继续
    closegraph();           // 关闭绘图窗口
}