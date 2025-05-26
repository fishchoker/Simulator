#include"PC.h"
#include<easyx.h>
#include"events.h"
#include<string>
#include<vector>
extern player pc0;
extern vector <endevent*> bb;
extern int* pointer[7];
extern int r[7];
extern int p[7];
void reset()
{
	for (int i = 0; i < 7; i++)
	{r[i] = 0; p[i] = 0;}
}
void bbb()
{
	//int* pointer[7] = { pc0.Setint,pc0.Setedu,pc0.Setmor,pc0.Setapp,pc0.Setheal,pc0.Setluk,pc0.Setsan };
	bb[0] = new endevent("0", "test", "TEST", pointer, r, p);
	r[0] = 1; r[1] = 1; r[2] = 1; r[3] = 1; r[4] = 1; r[5] = 1; r[6] = 1;
	p[0] = 10; p[1] = 10; p[2] = 10; p[3] = 10; p[4] = 10; p[5] = 10; p[6] = 10;
	bb[1] = new endevent("1", "金钱与名誉与成功对我来说唾手可得，理论如此。", "超越人类：", pointer, r, p); reset();
	r[0] = 1; r[1] = 1; r[2] = 1; r[4] = 1; r[6] = 1;
	p[0] = 6; p[1] = 7; p[2] = 8; p[4] = 5; p[6] = 5;
	bb[2] = new endevent("2", "成功考上公务员，从此衣食无忧", "我真的快乐吗：", pointer, r, p); reset();
	r[6] = 2;
	p[6] = 0;
	bb[3] = new endevent("3", "得了抑郁症只能休学", "生存的代价：", pointer, r, p); reset();
	r[5] = 1;
	p[5] = 12;
	bb[4] = new endevent("4", "买彩票中奖，退学享受富人生活", "人生赢家：", pointer, r, p); reset();
	r[0] = 1; r[1] = 1; r[5] = 1; r[6] = 1;
	p[0] = 5; p[1] = 5; p[5] = 6; p[6] = 8;
	bb[5] = new endevent("5", "组建团队开始创业", "前路漫漫：", pointer, r, p); reset();
	r[0] = 1; r[1] = 1; r[4] = 1; r[5] = 1;
	p[0] = 8; p[1] = 9; p[4] = 5; p[5] = 7;
	bb[6] = new endevent("6", "拿到国外名校的offer,出国深造", "新的开始：", pointer, r, p); reset();
	r[5] = 2;
	p[5] = 1;
	bb[7] = new endevent("7", "被大卡车撞了，前往了异世界…", "不幸中的万幸：", pointer, r, p); reset(); 
	r[0] = 1; r[1] = 1; r[5] = 1;
	p[0] = 6; p[1] = 8; p[5] = 7;
	bb[8] = new endevent("8", "考研成功，暂时脱离苦海", "胜利者：", pointer, r, p); reset();
	r[0] = 1; r[1] = 1;
	p[0] = 5; p[1] = 8;
	bb[9] = new endevent("9", "保研成功，暂时脱离苦海", "上岸：", pointer, r, p); reset();
	r[1] = 1; r[6] = 1;
	p[1] = 5; p[6] = 5;
	bb[10] = new endevent("10", "随便进了一家公司实习", "平庸的生活：", pointer, r, p); reset();
	r[0] = 1; r[4] = 1; r[6] = 2;
	p[0] = 7; p[4] = 0; p[6] = 3;
	bb[11] = new endevent("11", "退学再次参加高考", "这次我会做得更好：", pointer, r, p); reset();
	r[4] = 2; r[6] = 2;
	p[4] = 4; p[6] = 2;
	bb[12] = new endevent("12", "休学在家休养", "医生的建议：", pointer, r, p); reset();
	r[3] = 1; r[5] = 1;
	p[3] = 7; p[5] = 7;
	bb[13] = new endevent("13", "成为网红靠流量吃饭", "机遇？：", pointer, r, p); reset();
	r[0] = 2; r[1] = 2;
	p[0] = 2; p[5] = 2;
	bb[14] = new endevent("14", "挂科次数太多被退学", "遗憾离场：", pointer, r, p); reset();
	r[6] = 1; r[5] = 2;
	p[6] = 6; p[5] = 3;
	bb[15] = new endevent("15", "没找到工作，选择出去看看世界", "人生是旷野：", pointer, r, p); reset();
	r[2] = 2; r[5] = 2;
	p[6] = 0; p[5] = 3;
	bb[16] = new endevent("16", "做了不该做的事被退学", "是谁的错？：", pointer, r, p); reset();
	r[6] = 2;
	p[6] = -5;
	bb[17] = new endevent("17", "从高楼上一跃而下", "希望下一次会更好：", pointer, r, p); reset(); r[6] = 2;
	r[4] = 2;
	p[4] = -5;
	bb[18] = new endevent("18", "得了重病，或许时日无多", "透支的健康：", pointer, r, p); reset();
	r[6] = 1;
	p[6] = 8;
	bb[19] = new endevent("19", "成为了自由职业者", "我不会害怕：", pointer, r, p); reset();
	r[1] = 1;
	p[1] = 10;
	bb[20] = new endevent("20", "考了教师资格证，去了一所中学当老师", "重返6月8日：", pointer, r, p); reset();
	r[0] = 1;
	p[0] = 12;
	bb[21] = new endevent("21", "我知道我只拥有被模拟的人生", "VR：", pointer, r, p); reset();
	bb[22] = new endevent("22", "至少它们比人类更友善", "科幻电影:", pointer, r, p); reset();
	bb[23] = new endevent("23", "使用魔法棒变身，与普通人看不见的怪物战斗。", "魔法少女?:", pointer, r, p); reset();
	bb[24] = new endevent("24", "也许我见到了不该见到的东西。", "克苏鲁:", pointer, r, p); reset();
	bb[25] = new endevent("25", "大河不在此处，我亦如是。", "不存在的世界:", pointer, r, p); reset();
	bb[26] = new endevent("26", "思想方向有问题被约谈了。", "秘氛与邪名:", pointer, r, p); reset();
}

