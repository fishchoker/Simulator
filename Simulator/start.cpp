#include"pc.h"
#include<iostream>
#include<cstdlib>
#include<windows.h>
#include<easyx.h>
#include<string>
#include"events.h"
#include<vector>
#include<fstream>
void windowcreating();//其他cpp文件中的函数需要声明
void start();
void randomplayer();
void maininterface();
void printAttribute();
void newattribute();
void aaa();
void bbb();
void endinterface();
void saving();
void reading();
void readingR();
extern endevent test;
//extern vector <inevent*> aa;//去掉(30) 构造函数定义？
//extern inevent a1;
//开始时生成一个默认的玩家对象（自定义属性
player pc0;
//MouseMessage
#include"graphics.h"
MOUSEMSG msg;
//事件运行次数
int times= 0;
//程序运行次数
int runtimes = 0;
//inevents
static const int numbers = 50;
vector <inevent*> aa(numbers);
//endevents
static const int numbersb = 27;
vector <endevent*> bb(numbersb);
int* pointer[7] = { pc0.Setint,pc0.Setedu,pc0.Setmor,pc0.Setapp,pc0.Setheal,pc0.Setluk,pc0.Setsan };
int r[7] = { 0 };
int p[7] = { 0 };
//
void resetR()
{
	ofstream record("records.txt", ios::out | ios::app);
	if (runtimes == 0)
	{
		for (int i = 0; i < numbersb; i++)
		{
			record.seekp(i* sizeof(endevent));
			record.write("NULL", sizeof(endevent));
		}
	}
}
char* trans(int x);
int main()
{
	bool home = 1;
	srand(time(0));
	windowcreating();
	cleardevice();
	settextstyle(40, 0, "幼圆");
	char title[] = "大学重开模拟器";
	outtextxy(250, 275, title);
	Sleep(450);
	setlinecolor(WHITE);
	rectangle(340, 350, 450, 400);
	settextstyle(35, 0, "Times New Roman");
	outtextxy(347, 356,"START");
	while(1)//开始判断鼠标消息
	{ 
		msg = GetMouseMsg();
		if (msg.x >= 340 && msg.x <= 450 && msg.y >= 350 && msg.y <= 400)
		{
			setlinecolor(WHITE);
			rectangle(335, 345, 455, 405);
			if (msg.uMsg == WM_LBUTTONDOWN)//消息分发
			{
				cleardevice();
				break;
			}
		}
		else
		{
			setlinecolor(BLACK);
			rectangle(335, 345, 455, 405);
		}
	}
	while (home)
	{
		reading();
		//resetR();
		runtimes++;
		saving();
		home = 0;
		times = 0;
		int totaltimes = rand() % 10 + 20;// 二十到三十次之后结束
		aaa();bbb();//events
		start();//界面2
		while (1)
		{
			msg = GetMouseMsg();
			if (msg.x >= 600 && msg.x <= 720 && msg.y >= 300 && msg.y <= 340)
			{
				setlinecolor(WHITE);
				rectangle(595, 295, 725, 345);
				if (msg.uMsg == WM_LBUTTONDOWN)//消息分发
				{
					randomplayer();
					settextstyle(27, 0, "幼圆");
					outtextxy(155, 135, 48 + (*pc0.Setint));
					outtextxy(155, 215, 48 + (*pc0.Setapp));
					outtextxy(155, 295, 48 + (*pc0.Setedu));
					outtextxy(155, 375, 48 + (*pc0.Setheal));
					outtextxy(155, 455, 48 + (*pc0.Setluk));
					outtextxy(155, 535, 48 + (*pc0.Setsan));
				}
			}
			else
			{
				setlinecolor(BLACK);
				rectangle(595, 295, 725, 345);
			}
			if (msg.x >= 600 && msg.x <= 720 && msg.y >= 450 && msg.y <= 490)
			{
				setlinecolor(WHITE);
				rectangle(595, 445, 725, 495);
				if (msg.uMsg == WM_LBUTTONDOWN)
				{
					cleardevice();
					break;
				}
			}
			else
			{
				setlinecolor(BLACK);
				rectangle(595, 445, 725, 495);
			}
		}
		maininterface();
		printAttribute();
		rectangle(10, 35, 00, 500);
		rectangle(305, 35, 315, 500);
		do {
			int i = rand() % numbers;
			aa[i]->display();
			aa[i]->operating();
			newattribute();//数字闪动
			printAttribute();
			times++;
			if(i>=23&&i<=26)
				bb[i]->specialtrigger();
			else if(i==49)
				bb[22]->specialtrigger();
			Sleep(300);
		} while (times <= totaltimes);
		settextstyle(27, 0, "Times New Roman");
		rectangle(650, 450, 710, 485);
		outtextxy(656, 455, "END");
		while (1)
		{
			msg = GetMouseMsg();
			if (msg.x >= 650 && msg.x <= 710 && msg.y >= 450 && msg.y <= 485)
			{
				setlinecolor(WHITE);
				rectangle(645, 445, 715, 490);
				if (msg.uMsg == WM_LBUTTONDOWN)//消息分发
				{
					cleardevice();
					break;
				}
			}
			else
			{
				setlinecolor(BLACK);
				rectangle(645, 445, 715, 490);
			}
		}
		int i = 1;
		for (; i < numbersb; i++)
		{
			bb[i]->trigger0();
			if (bb[i]->GetT())
				break;
		}
		if (i == numbersb - 1 && bb[i]->GetT() == 0)//其他结局
		{
			bb[0]->display();
			bb[0]->savingR();
		}
		else
		{
			bb[i]->display();
			bb[i]->savingR();
		}
		if (runtimes == 100)
		{
			settextstyle(20, 0, "幼圆");
			outtextxy(55, 170, "就算重开一百次，现实依然不会改变。");
		}
		endinterface();
		readingR();
		while (1)
		{
			msg = GetMouseMsg();
			if (msg.x >= 675 && msg.x <= 740 && msg.y >= 480 && msg.y <= 515)//exit
			{
				setlinecolor(WHITE);
				rectangle(670, 475, 745, 520);
				if (msg.uMsg == WM_LBUTTONDOWN)//消息分发
				{
					cleardevice();
					break;
				}
			}
			else
			{
				setlinecolor(BLACK);
				rectangle(670, 475, 745, 520);
			}
			if (msg.x >= 675 && msg.x <= 750 && msg.y >= 530 && msg.y <= 565)//back
			{
				setlinecolor(WHITE);
				rectangle(670, 525, 755, 570);
				if (msg.uMsg == WM_LBUTTONDOWN)//消息分发
				{
					cleardevice();
					home = 1;//回到界面2
					break;
				}
			}
			else
			{
				setlinecolor(BLACK);
				rectangle(670, 525, 755, 570);
			}
		}
	}
	Sleep(20000);
	return 0;
}
