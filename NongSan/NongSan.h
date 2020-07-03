#pragma once
#include"ThoiGian.h"
class NongSan
{
protected:
	float KhoiLuong;
	float NuocDung;
	ThoiGian Thoi_gian_thu_hoach;	//thời gian nhập vào kho
	int Han;	//Hạn sử dụng
	int Thoi_gian;
	float Ti_le_tang;		//tăng nguyên liệu
	float Ti_le_giam;		//giãm nước
	float Nuoc;
public:
	virtual void Nhap();
	virtual void KiemTra() = 0;
};

