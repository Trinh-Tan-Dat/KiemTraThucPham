#pragma once
#include "SanPham.h"
#include <iostream>
class QuanLiXuatKho : public SanPham
{
	int ngayXK, thangXK, namXK;
public:
	QuanLiXuatKho();
	void set();
	void get();
};

