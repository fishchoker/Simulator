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
void aaa()//�������ʱ�Զ�����
{
	aa[0] = new inevent("1", "������Ͽ�", 2, pc0.Setedu);//�Ƿ���Ҫdelete��
	aa[1] = new inevent("2", "��˯��һ�ڿ�", -1, pc0.Setedu);
	aa[2] = new inevent("3", "���Լ���������", -1, pc0.Setheal);
	aa[3] = new inevent("4", "��˯����ʱ��", -1, pc0.Setmor);
	aa[4] = new inevent("5", "�ܲ���������͵��", -1, pc0.Setluk);
	aa[5] = new inevent("6", "��ͨ�س���ͨ��ѧУʳ��", 0, NULL);
	aa[6] = new inevent("7", "��ʳ�óԳ��˳���", -1, pc0.Setluk);
	aa[7] = new inevent("8", "��·���ֻ���㱻����", -1, pc0.Setsan);
	aa[8] = new inevent("9", "�������������", -1, pc0.Setsan);
	aa[9] = new inevent("10", "̫æ��ֻ���̿�", -1, pc0.Setmor);
	aa[10] = new inevent("11", "д��ҵʱ���һ��", 1, pc0.Setint);
	aa[11] = new inevent("12", "��������ѡ��ʵ��", -1, pc0.Setsan);
	aa[12] = new inevent("13", "������ʵ����ĥ", -1, pc0.Setsan);
	aa[13] = new inevent("14", "��Ȼ���Ǻ�æ�пմ���Ϸ", 1, pc0.Setsan);
	aa[14] = new inevent("15", "��ѧ����̫�����������", -1, pc0.Setsan);
	aa[15] = new inevent("16", "����ѹ��̫��������", -1, pc0.Setapp);
	aa[16] = new inevent("17", "�¿�������", 1, pc0.Setsan);
	aa[17] = new inevent("18", "��ҵ̫�໹������ֻ�÷������", -1, pc0.Setmor);
	aa[18] = new inevent("19", "����ʧ�߾���˥��", -1, pc0.Setheal);
	aa[19] = new inevent("20", "�μӳ齱����н���", 1, pc0.Setluk);
	aa[20] = new inevent("21", "�����ѳ�ȥ��", 2, pc0.Setsan);
	aa[21] = new inevent("22", "���Ҳ�����ʶ����", -1, pc0.Setsan);
	aa[22] = new inevent("23", "��������������ħ����", 1, pc0.Setluk);
	aa[23] = new inevent("24", "?/~//&&* @###", 0, NULL);
	aa[24] = new inevent("25", "���˸����ڰ����ɵ�ج��", 0, NULL);
	aa[25] = new inevent("26", "��ͼ��AI̸����", -1, pc0.Setsan);
	aa[26] = new inevent("27", "�������ʱ��", 1, pc0.Setsan);
	aa[27] = new inevent("28", "��ҹ·û��ˤ��һ��", -1, pc0.Setsan);
	aa[28] = new inevent("29", "���崲�ε�̫����˯����������", -1, pc0.Setheal);
	aa[29] = new inevent("30", "��û����μ���", 0, NULL);
	aa[30] = new inevent("31", "��Զ������Զ�������ϲ���ҵ", 0, NULL);
	aa[31] = new inevent("32", "����֢����Ƿ�˺ö���ҵ", -1, pc0.Setmor);
	aa[32] = new inevent("33", "���������۵ð���", -1, pc0.Setsan);
	aa[33] = new inevent("34", "������¥�µ�è", 1, pc0.Setsan);
	aa[34] = new inevent("35", "ͬѧ̫�������鸴��", -1, pc0.Setsan);
	aa[35] = new inevent("36", "ͼ���û���յ�ѧϰЧ�ʵ���", 0, NULL);
	aa[36] = new inevent("37", "��ҹ������", -1, pc0.Setheal);
	aa[37] = new inevent("38", "ƴ��дʵ�鱨�滹�ǵ��˸��ͷ�", 0, NULL);
	aa[38] = new inevent("39", "�õ�����ʦ��ָ��", 1, pc0.Setedu);
	aa[39] = new inevent("40", "����������ʱ��", -1, pc0.Setsan);
	aa[40] = new inevent("41", "��ѧУ���й�", 0, NULL);
	aa[41] = new inevent("42", "����ѧϰ���о�����", 1, pc0.Setint);
	aa[42] = new inevent("43", "������˯��һ���쾫��״̬�ȶ�", 2, pc0.Setsan);
	aa[43] = new inevent("44", "�����ﳵ����ȴ��ôҲ�򲻿�", -1, pc0.Setsan);
	aa[44] = new inevent("45", "С����ҵһ��ɢɳ", 0, NULL);
	aa[45] = new inevent("46", "���˳���Ӱ�о���������", 1, pc0.Setsan);
	aa[46] = new inevent("47", "�����������Լ�", 1, pc0.Setsan);
	aa[47] = new inevent("48", "���������ϴ�ѧ��������ʲô", 1, pc0.Setint);
	aa[48] = new inevent("49", "Ϊ���ӳ�������ͼ�˶�", 1, pc0.Setheal);
	aa[49] = new inevent("50", "�Ｐ��������", -1, pc0.Setmor);
}
