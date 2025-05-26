#include"PC.h"
#include<cstdlib>
extern player pc0;
void randomplayer()
{
	*(pc0.Setint) = rand() % 9 + 1;
	*(pc0.Setedu) = rand() % 9 + 1; 
	*(pc0.Setapp) = rand() % 9 + 1;
	*(pc0.Setheal) = rand() % 9 + 1;
	*(pc0.Setluk) = rand() % 9 + 1;
	*(pc0.Setsan) = rand() % 9 + 1;
}

