#include"graphics.h"
#include<iostream>
using namespace std;
MOUSEMSG msg;//Mouse Message
void next()
{
	//if (msg.uMsg)//�ж��Ƿ��������Ϣ
	//{
		msg = GetMouseMsg();
		if (msg.uMsg == WM_MOUSEWHEEL)//���ֲ���ʱ
		{
			cout << msg.x << endl << msg.y;
		}

		WORD  LOWORD(-120);
	//}
}