#include"function.h"	//引入的是头文件！！！




// 主函数
int main()
{
// 定义变量
short* zBuffer;
int x, y, z, zBufferIndex;
DOT dot;
// 初始化
initgraph(640, 480);// 创建绘图窗口
setbkcolor(LIGHTBLUE);// 设置背景色为亮蓝色
cleardevice();// 清屏
setcolor(RED);
    setbkmode(TRANSPARENT);
settextstyle(20,0,"楷体");
outtextxy(450, 430, "");
outtextxy(500, 450, "Dotcpp.com");
// 初始化 z-buffer
zBuffer = new short[rosesize * rosesize];
memset(zBuffer, 0, sizeof(short) * rosesize * rosesize);
for (int j = 0; j < 2000 && !_kbhit(); j++)// 按任意键退出
{
for (int i = 0; i < 10000; i++)// 减少是否有按键的判断
if (calc(double(rand()) / RAND_MAX, double(rand()) / RAND_MAX, rand() % 46 / 0.74, dot))
{
z = int(dot.z + 0.5);
x = int(dot.x * rosesize / z - h + 0.5);
y = int(dot.y * rosesize / z - h + 0.5);
if (y >= rosesize) continue;
zBufferIndex = y * rosesize + x;
if (!zBuffer[zBufferIndex] || zBuffer[zBufferIndex] > z)
{
zBuffer[zBufferIndex] = z;
// 画点
int r = ~int((dot.r * h));if (r < 0) r = 0;if (r > 255) r = 255;
int g = ~int((dot.g * h));if (g < 0) g = 0;if (g > 255) g = 255;
int b = ~int((dot.r * dot.r * -80));if (b < 0) b = 0;if (b > 255) b = 255;
putpixel(x + 50, y - 20, RGB(r, g, b));
}
}
Sleep(5);
}
// 退出
delete[]zBuffer;
_getch();
closegraph();
return 0;
}