#pragma once
#include<iostream>
#include<cstdlib>
using namespace std;
class player
{
public:
	player(int I=5, int M=5, int E=5,int H=5,int A=5,int L=5,int S=5)
	{
		Int = I;
		Mor = M;
		Edu = E;
		Health = H;
		App = A;
		Luck = L;
		San = S;
		Setint = &(Int);
		Setmor = &(Mor);
		Setedu = &(Edu);
		Setapp = &(App);
		Setluk = &(Luck);
		Setheal = &(Health);
		Setsan = &(San);
	}
	~player(){}
	int* Setint;//�ƻ���װ
	int* Setmor;
	int* Setedu;
	int* Setapp;
	int* Setluk;
	int* Setheal;
	int* Setsan;
	//��Ϊ���ݳ�Ա�����ڹ��캯���ڳ�ʼ��
private:
	int Int;
	int Mor;//morality//��������
	int Edu;
	int App;
	int Luck;
	int San;
	int Health;
};
