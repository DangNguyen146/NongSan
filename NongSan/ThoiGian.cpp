#include "ThoiGian.h"
#include<iostream>
using namespace std;
void ThoiGian::Nhap()
{
	cout << "Nhap Ngay/Thang/Nam: " << endl;
	cin >> this->Ngay >> this->Thang >> this->Nam;
}
