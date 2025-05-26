#include"graphics.h"
#include<iostream>
using namespace std;
MOUSEMSG msg;//Mouse Message
void next()
{
	//if (msg.uMsg)//判断是否有鼠标消息
	//{
		msg = GetMouseMsg();
		if (msg.uMsg == WM_MOUSEWHEEL)//滚轮操作时
		{
			cout << msg.x << endl << msg.y;
		}

		WORD  LOWORD(-120);
	//}
}