#pragma once
#include<iostream>
#include"graphics.h"
#include<conio.h>
#include<easyx.h>
#include"PC.h"
using namespace std;
class event
{
public:
	event(const char* id,const char* d)
	{
		ID = id; description = d;
	}
	virtual ~event() {  }
	void setID(const char* id)
	{ID = id;}
	void setD(const char* d)
	{description = d;}
	virtual void display()=0;//abstract class
	const char* getD()
	{return description;}
	int getID()
	{return atoi(ID);}
	const char* GetID()
	{return ID;}
protected:
	const char* ID;
	const char* description;//delete?
};
class inevent:public event
{
public:
	inevent(const char* id, const char* d, int ap, int* a):event(id, d)//引用？
	{

		addpoint = ap; attribute = a;
	}
	~inevent(){}
	void operating();//events.cpp
	virtual void display();//window.cpp
//private:
	int addpoint;
	int* attribute;
};
//specicalevents? inevent派生 属性达标时触发的特殊事件
enum requirement{none,bigger,smaller};
class endevent :public event
{
public:
	endevent(const char* id, const char* d,const char* t, int* ptr[],int r[], int p[]) :event(id, d)//传一个指针数组 每个指针有对应值
	{
		trigger = 0;
		titles = t;
		for (int i = 0; i < 7; i++)
		{
			pointer[i] = ptr[i];
			points[i] = p[i];
			end[i] = (requirement)r[i];
		}
	};
	~endevent() {};
	void trigger0()
	{
		bool t = 1;
		for (int i = 0; i < 7; i++)
		{
			if (end[i] == 1)
			{
				if (*pointer[i] < points[i])
				{
					t = 0;
					break;
				}
			}
			else if(end[i]==2)
			{
				if (*pointer[i] > points[i])
				{
					t = 0;
					break;
				}
			}
		}
		trigger=t;
	}
	void specialtrigger()
	{
		trigger = 1;
	}
	bool GetT() { return trigger; }
	const char* getTitle()
	{
		return titles;
	}
	virtual void display();
	void savingR();//window.cpp
private:
	bool trigger;
	const char* titles;
	int* pointer[7];//存pc0
	requirement end[7];//触发要求 0无1>2<
	int points[7];//数值要求
};