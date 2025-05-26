#include"events.h"
#include<string>
#include"PC.h"
#include<vector>
//studyevents
extern player pc0;
void inevent::operating()
{
	if (attribute!=NULL)//
	{
			*attribute = *attribute+addpoint;
			//outtextxy(155, 135, *attribute);
	}
}
extern vector <inevent*> aa;
void aaa()//程序结束时自动析构
{
	aa[0] = new inevent("1", "认真地上课", 2, pc0.Setedu);//是否需要delete？
	aa[1] = new inevent("2", "昏睡了一节课", -1, pc0.Setedu);
	aa[2] = new inevent("3", "逼自己起来晨跑", -1, pc0.Setheal);
	aa[3] = new inevent("4", "昏睡过打卡时间", -1, pc0.Setmor);
	aa[4] = new inevent("5", "很不幸外卖被偷了", -1, pc0.Setluk);
	aa[5] = new inevent("6", "普通地吃普通的学校食堂", 0, NULL);
	aa[6] = new inevent("7", "吃食堂吃出了虫子", -1, pc0.Setluk);
	aa[7] = new inevent("8", "走路看手机差点被车创", -1, pc0.Setsan);
	aa[8] = new inevent("9", "生病差点错过考试", -1, pc0.Setsan);
	aa[9] = new inevent("10", "太忙了只好翘课", -1, pc0.Setmor);
	aa[10] = new inevent("11", "写作业时灵光一闪", 1, pc0.Setint);
	aa[11] = new inevent("12", "忘记物理选做实验", -1, pc0.Setsan);
	aa[12] = new inevent("13", "被数电实验折磨", -1, pc0.Setsan);
	aa[13] = new inevent("14", "竟然不是很忙有空打游戏", 1, pc0.Setsan);
	aa[14] = new inevent("15", "数学物理太难死活都不会做", -1, pc0.Setsan);
	aa[15] = new inevent("16", "生活压力太大形容憔悴", -1, pc0.Setapp);
	aa[16] = new inevent("17", "月考及格了", 1, pc0.Setsan);
	aa[17] = new inevent("18", "作业太多还不会做只好疯狂搜题", -1, pc0.Setmor);
	aa[18] = new inevent("19", "晚上失眠精神衰弱", -1, pc0.Setheal);
	aa[19] = new inevent("20", "参加抽奖结果中奖了", 1, pc0.Setluk);
	aa[20] = new inevent("21", "和朋友出去玩", 2, pc0.Setsan);
	aa[21] = new inevent("22", "“找不到标识符”", -1, pc0.Setsan);
	aa[22] = new inevent("23", "捡到了来历不明的魔法棒", 1, pc0.Setluk);
	aa[23] = new inevent("24", "?/~//&&* @###", 0, NULL);
	aa[24] = new inevent("25", "做了个被黑暗吞噬的噩梦", 0, NULL);
	aa[25] = new inevent("26", "试图和AI谈恋爱", -1, pc0.Setsan);
	aa[26] = new inevent("27", "怀念高中时光", 1, pc0.Setsan);
	aa[27] = new inevent("28", "走夜路没灯摔了一跤", -1, pc0.Setsan);
	aa[28] = new inevent("29", "连体床晃得太厉害睡眠质量堪忧", -1, pc0.Setheal);
	aa[29] = new inevent("30", "你没有这段记忆", 0, NULL);
	aa[30] = new inevent("31", "永远年轻永远周日晚上补作业", 0, NULL);
	aa[31] = new inevent("32", "拖延症发作欠了好多作业", -1, pc0.Setmor);
	aa[32] = new inevent("33", "上体育课累得半死", -1, pc0.Setsan);
	aa[33] = new inevent("34", "遇到了楼下的猫", 1, pc0.Setsan);
	aa[34] = new inevent("35", "同学太卷了心情复杂", -1, pc0.Setsan);
	aa[35] = new inevent("36", "图书馆没开空调学习效率低下", 0, NULL);
	aa[36] = new inevent("37", "熬夜赶论文", -1, pc0.Setheal);
	aa[37] = new inevent("38", "拼命写实验报告还是得了个低分", 0, NULL);
	aa[38] = new inevent("39", "得到了老师的指点", 1, pc0.Setedu);
	aa[39] = new inevent("40", "绝望无助的时节", -1, pc0.Setsan);
	aa[40] = new inevent("41", "在学校里闲逛", 0, NULL);
	aa[41] = new inevent("42", "认真学习，感觉良好", 1, pc0.Setint);
	aa[42] = new inevent("43", "在寝室睡了一整天精神状态稳定", 2, pc0.Setsan);
	aa[43] = new inevent("44", "雨天骑车车锁却怎么也打不开", -1, pc0.Setsan);
	aa[44] = new inevent("45", "小组作业一盘散沙", 0, NULL);
	aa[45] = new inevent("46", "看了场电影感觉被治愈了", 1, pc0.Setsan);
	aa[46] = new inevent("47", "点外卖犒劳自己", 1, pc0.Setsan);
	aa[47] = new inevent("48", "反复自问上大学的意义是什么", 1, pc0.Setint);
	aa[48] = new inevent("49", "为了延长生命试图运动", 1, pc0.Setheal);
	aa[49] = new inevent("50", "语及怪力乱神", -1, pc0.Setmor);
}
