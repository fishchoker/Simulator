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
	int* Setint;//破坏封装
	int* Setmor;
	int* Setedu;
	int* Setapp;
	int* Setluk;
	int* Setheal;
	int* Setsan;
	//作为数据成员必须在构造函数内初始化
private:
	int Int;
	int Mor;//morality//隐藏属性
	int Edu;
	int App;
	int Luck;
	int San;
	int Health;
};
