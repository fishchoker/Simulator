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
	bb[1] = new endevent("1", "��Ǯ��������ɹ�������˵���ֿɵã�������ˡ�", "��Խ���ࣺ", pointer, r, p); reset();
	r[0] = 1; r[1] = 1; r[2] = 1; r[4] = 1; r[6] = 1;
	p[0] = 6; p[1] = 7; p[2] = 8; p[4] = 5; p[6] = 5;
	bb[2] = new endevent("2", "�ɹ����Ϲ���Ա���Ӵ���ʳ����", "����Ŀ�����", pointer, r, p); reset();
	r[6] = 2;
	p[6] = 0;
	bb[3] = new endevent("3", "��������ֻ֢����ѧ", "����Ĵ��ۣ�", pointer, r, p); reset();
	r[5] = 1;
	p[5] = 12;
	bb[4] = new endevent("4", "���Ʊ�н�����ѧ���ܸ�������", "����Ӯ�ң�", pointer, r, p); reset();
	r[0] = 1; r[1] = 1; r[5] = 1; r[6] = 1;
	p[0] = 5; p[1] = 5; p[5] = 6; p[6] = 8;
	bb[5] = new endevent("5", "�齨�Ŷӿ�ʼ��ҵ", "ǰ·������", pointer, r, p); reset();
	r[0] = 1; r[1] = 1; r[4] = 1; r[5] = 1;
	p[0] = 8; p[1] = 9; p[4] = 5; p[5] = 7;
	bb[6] = new endevent("6", "�õ�������У��offer,��������", "�µĿ�ʼ��", pointer, r, p); reset();
	r[5] = 2;
	p[5] = 1;
	bb[7] = new endevent("7", "���󿨳�ײ�ˣ�ǰ���������硭", "�����е����ң�", pointer, r, p); reset(); 
	r[0] = 1; r[1] = 1; r[5] = 1;
	p[0] = 6; p[1] = 8; p[5] = 7;
	bb[8] = new endevent("8", "���гɹ�����ʱ����ຣ", "ʤ���ߣ�", pointer, r, p); reset();
	r[0] = 1; r[1] = 1;
	p[0] = 5; p[1] = 8;
	bb[9] = new endevent("9", "���гɹ�����ʱ����ຣ", "�ϰ���", pointer, r, p); reset();
	r[1] = 1; r[6] = 1;
	p[1] = 5; p[6] = 5;
	bb[10] = new endevent("10", "������һ�ҹ�˾ʵϰ", "ƽӹ�����", pointer, r, p); reset();
	r[0] = 1; r[4] = 1; r[6] = 2;
	p[0] = 7; p[4] = 0; p[6] = 3;
	bb[11] = new endevent("11", "��ѧ�ٴβμӸ߿�", "����һ����ø��ã�", pointer, r, p); reset();
	r[4] = 2; r[6] = 2;
	p[4] = 4; p[6] = 2;
	bb[12] = new endevent("12", "��ѧ�ڼ�����", "ҽ���Ľ��飺", pointer, r, p); reset();
	r[3] = 1; r[5] = 1;
	p[3] = 7; p[5] = 7;
	bb[13] = new endevent("13", "��Ϊ���쿿�����Է�", "��������", pointer, r, p); reset();
	r[0] = 2; r[1] = 2;
	p[0] = 2; p[5] = 2;
	bb[14] = new endevent("14", "�ҿƴ���̫�౻��ѧ", "�ź��볡��", pointer, r, p); reset();
	r[6] = 1; r[5] = 2;
	p[6] = 6; p[5] = 3;
	bb[15] = new endevent("15", "û�ҵ�������ѡ���ȥ��������", "�����ǿ�Ұ��", pointer, r, p); reset();
	r[2] = 2; r[5] = 2;
	p[6] = 0; p[5] = 3;
	bb[16] = new endevent("16", "���˲��������±���ѧ", "��˭�Ĵ���", pointer, r, p); reset();
	r[6] = 2;
	p[6] = -5;
	bb[17] = new endevent("17", "�Ӹ�¥��һԾ����", "ϣ����һ�λ���ã�", pointer, r, p); reset(); r[6] = 2;
	r[4] = 2;
	p[4] = -5;
	bb[18] = new endevent("18", "�����ز�������ʱ���޶�", "͸֧�Ľ�����", pointer, r, p); reset();
	r[6] = 1;
	p[6] = 8;
	bb[19] = new endevent("19", "��Ϊ������ְҵ��", "�Ҳ��Ầ�£�", pointer, r, p); reset();
	r[1] = 1;
	p[1] = 10;
	bb[20] = new endevent("20", "���˽�ʦ�ʸ�֤��ȥ��һ����ѧ����ʦ", "�ط�6��8�գ�", pointer, r, p); reset();
	r[0] = 1;
	p[0] = 12;
	bb[21] = new endevent("21", "��֪����ֻӵ�б�ģ�������", "VR��", pointer, r, p); reset();
	bb[22] = new endevent("22", "�������Ǳ����������", "�ƻõ�Ӱ:", pointer, r, p); reset();
	bb[23] = new endevent("23", "ʹ��ħ������������ͨ�˿������Ĺ���ս����", "ħ����Ů?:", pointer, r, p); reset();
	bb[24] = new endevent("24", "Ҳ���Ҽ����˲��ü����Ķ�����", "����³:", pointer, r, p); reset();
	bb[25] = new endevent("25", "��Ӳ��ڴ˴����������ǡ�", "�����ڵ�����:", pointer, r, p); reset();
	bb[26] = new endevent("26", "˼�뷽�������ⱻԼ̸�ˡ�", "�ط���а��:", pointer, r, p); reset();
}

