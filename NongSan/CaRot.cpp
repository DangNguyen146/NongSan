#include "CaRot.h"
#include<iostream>
using namespace std;
CaRot::CaRot()
{
	this->Han = 16;
	this->Thoi_gian = 6;
	this->Ti_le_tang = 0.1;
	this->Ti_le_giam = 0.2;
}
void CaRot::Nhap()
{
	cout << "Ca rot" << endl;
	NongSan::Nhap();
}
void CaRot::KiemTra()
{

}