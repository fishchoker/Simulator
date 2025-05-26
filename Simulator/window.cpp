#include"graphics.h"
#include<conio.h>
#include"events.h"
#include<fstream>
#include<cstdlib>
#include<vector>
#define WIDTH 800//不能加;(没有语义检查直接替换
#define HEIGHT 600
void windowcreating()
{
	initgraph(WIDTH,HEIGHT,NULL);
	HWND title = GetHWnd();//获取窗口标题句柄
	SetWindowText(title, "Simulator");//unicode字符集转为多字节字符集 解决lpcwstr形参问题
}
#include"PC.h"
extern player pc0;
void start()
{
	settextstyle(35, 0, "幼圆");
	outtextxy(20, 30, "点击生成您的各项属性(1~9)： ");
	//属性
	//要不要添加属性介绍？
	outtextxy(20, 130, "智力： ");
	outtextxy(20, 210, "外貌： ");
	outtextxy(20, 290, "教育： ");
	outtextxy(20, 370, "健康： ");
	outtextxy(20, 450, "幸运： ");
	outtextxy(20, 530, "精神： ");
	rectangle(120, 130, 200, 170);
	rectangle(120, 210, 200, 250);
	rectangle(120, 290, 200, 330);
	rectangle(120, 370, 200, 410);
	rectangle(120, 450, 200, 490);
	rectangle(120, 530, 200, 570);
	//data
	settextstyle(27, 0, "幼圆");
	outtextxy(155, 135, "5");
	outtextxy(155, 215, "5");
	outtextxy(155, 295, "5");
	outtextxy(155, 375, "5");
	outtextxy(155, 455, "5");
	outtextxy(155, 535, "5");
	//options
	rectangle(600, 300, 720, 340);
	rectangle(600, 450, 720, 490);
	outtextxy(605, 305, "随机生成");
	outtextxy(605, 455, "开始游戏");
}
void maininterface()
{
	settextstyle(25, 0, "Times New Roman");
	outtextxy(650, 30, "INT： ");
	outtextxy(650, 70, "APP： ");
	outtextxy(650, 110, "EDU： ");
	outtextxy(650, 150, "HEALTH： ");
	outtextxy(650, 190, "LUCK： ");
	outtextxy(650, 230, "SAN： ");
	
}
char* trans(int x)
{
	char temp[10];
	_itoa_s(x,temp, 10, 10);
	return temp;
}
void printAttribute()
{
	settextstyle(25, 0, "Times New Roman");
	outtextxy(705, 30, trans(*pc0.Setint));
	outtextxy(710, 70, trans(*pc0.Setapp));
	outtextxy(710, 110, trans(*pc0.Setedu));
	outtextxy(750, 150, trans(*pc0.Setheal));
	outtextxy(725, 190, trans(*pc0.Setluk));
	outtextxy(710, 230, trans(*pc0.Setsan));
}
void newattribute()
{
	outtextxy(705, 30, "   ");
	outtextxy(710, 70, "   ");
	outtextxy(710, 110,"   ");
	outtextxy(750, 150,"   ");
	outtextxy(725, 190,"   ");
	outtextxy(710, 230,"   ");
}
extern int times;
void inevent::display()
{
	settextstyle(20, 0, "幼圆");
	if(times<15)
		outtextxy(15, 40+times*30, this->getD());
	else
		outtextxy(320, 40 +( times-15) * 30, this->getD());
}
void endevent::display()
{
	settextstyle(35, 0, "幼圆");
	outtextxy(55, 60, this->getTitle());
	settextstyle(25, 0, "幼圆");
	outtextxy(55, 110, this->getD());

}
extern int runtimes;
void endinterface()
{
	char temp[30] = {0};
	_itoa_s(runtimes, temp,30, 10);//数字转字符串
	rectangle(50, 250, 500, 550);
	settextstyle(30, 0, "Times New Roman");
	outtextxy(65, 210, "HISTORY RECORD");
	settextstyle(27, 0, "幼圆");
	outtextxy(65, 260, "重开次数:");
	outtextxy(65, 295, temp);
	outtextxy(65, 350, "已达成结局ID:");
	settextstyle(27, 0, "Times New Roman");
	rectangle(675, 480, 740, 515);
	outtextxy(681, 485, "EXIT");
	rectangle(675, 530, 750, 565);
	outtextxy(678, 535, "BACK");
	settextstyle(60, 0, "Times New Roman");
	outtextxy(700, 40, "E");
	outtextxy(700, 110, "N");
	outtextxy(700, 180, "D");
}
void saving()
{
	ofstream file("times.txt", ios::out);//需要更新而非追加//用随机访问更好？
	if (!file)
	{
		HWND message = GetHWnd();//获取窗口句柄
		MessageBox(message, "Error!", "文件写入错误", MB_OKCANCEL);
		exit(0);
	}
	else
	{
		file.seekp(ios::beg);//移动写指针
		file << runtimes;
	}
}
extern vector <endevent*> bb;
void endevent:: savingR()
{
	char* temp=(char*)(this->GetID());//write函数实质上接收地址(转换成char*形式）
	ofstream record("records.txt", ios::out | ios::app);//可添加
	//每次运行结束时读当前结局 按ID查询是否存储 若为新结局则存//直接覆写？
	if (!record)
	{
		HWND message = GetHWnd();//获取窗口句柄
		MessageBox(message, "Error!", "文件读取错误", MB_OKCANCEL);
		exit(0);
	}
	else
	{
		record.seekp(this->getID() * sizeof(endevent));
		record.write(temp, sizeof(endevent));
	}
	record.close();
}
void reading()
{
	ifstream file("times.txt", ios::in);
	if (!file)
	{
		HWND message = GetHWnd();//获取窗口句柄
		MessageBox(message, "Error!", "文件读取错误", MB_OKCANCEL);
		exit(0);
	}
	else
	{
		file.seekg(ios::beg);//移动指针
		file >> runtimes;
	}
	file.close();
}
void readingR()
{
	char* temp=new char[100];
	int time = 0;
	ifstream record("records.txt", ios::in);
	record.seekg(ios::beg);
	for (int i = 0,times=0; !record.eof(); i++)
	{
		record.seekg(i * sizeof(endevent));
		record.read(temp, sizeof(endevent));
		if (temp != NULL)
		{
			settextstyle(17, 0, "Times New Roman");
			if(times<=10)
				outtextxy(65+20*times, 385, temp);
			else if(times<=30)
				outtextxy(65+ 20 * (times-10), 400 , temp);
			else
				outtextxy(65 + 20 * (times - 30), 420, temp);
			times++;
		}
	}
}
