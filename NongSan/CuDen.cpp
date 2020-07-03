#include "CuDen.h"
#include<iostream>
using namespace std;
CuDen::CuDen()
{
	this->Han = 35;
	this->Thoi_gian = 7;
	this->Ti_le_tang = 0.1;
	this->Ti_le_giam = 0.1;
}
void CuDen::Nhap()
{
	cout << "Cu den" << endl;
	NongSan::Nhap();
}
bool CuDen::KiemTra(ThoiGian b)
{
	int giaihan = 0;

}S