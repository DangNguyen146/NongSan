#include "NongSan.h"
#include<iostream>
using namespace std;
void NongSan::Nhap()
{
	do
	{
		cout << "Nhap khoi luong(kg): ";
		cin >> this->KhoiLuong;
	} while (this->KhoiLuong > 100);

	cout << "Nhan nuoc dung:";
	cin >> this->NuocDung;
	cout << "Nhap ngay nhap vao kho";
	Thoi_gian_thu_hoach.Nhap();
}