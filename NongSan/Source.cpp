#include<iostream>
#include"NongSan.h"
#include"ThoiGian.h"
#include"CuDen.h"
#include"CaRot.h"
#include"KhoaiLang.h"
using namespace std;
int main()
{
	NongSan* ns[100];
	int se, n = 0;
	cout << "1/CuDen 2/CaRot 3/Khoailang 0/DungNhap" << endl;
	cin >> se;
	while (se != 0)
	{
		if (se == 0)
			break;
		switch (se)
		{
		case 1:
			ns[n] = new CuDen;
			break;
		case 2:
			ns[n] = new CaRot;
			break;
		case 3:
			ns[n] = new KhoaiLang;
			break;
		}
		ns[n]->Nhap();
		n++;
		cout << "1/CuDen 2/CaRot 3/Khoailang 0/DungNhap" << endl;
		cin >> se;
	}
	ThoiGian thoi_gian_hien_tai;
	thoi_gian_hien_tai.Nhap();
	for (int i = 0; i < n; i++)
	{
		if()
	}
}