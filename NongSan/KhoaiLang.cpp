#include "KhoaiLang.h"
#include<iostream>
using namespace std;
KhoaiLang::KhoaiLang()
{
	this->Han = 35;
	this->Thoi_gian = 7;
	this->Ti_le_tang = 0.2;
	this->Ti_le_giam = 0;
}
void KhoaiLang::Nhap()
{
	cout << "Khoai lang" << endl;
	NongSan::Nhap();
}
void KhoaiLang::KiemTra()
{

}