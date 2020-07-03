#include "NongSan.h"
#include<iostream>
using namespace std;
void NongSan::Nhap()
{
	cout << "Nhap khoi luong: ";
	cin >> this->KhoiLuong;
	cout << "Nhan nuoc dung:";
	cin >> this->NuocDung;
	cout << "Nhap ngay nhap vao kho";
	Thoi_gian_thu_hoach.Nhap();
}