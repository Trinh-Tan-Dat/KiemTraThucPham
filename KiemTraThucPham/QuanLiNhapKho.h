#pragma once
#include "SanPham.h"
#include <iostream>
class QuanLiNhapKho : public SanPham 
{
	int ngayNK, thangNK, namNK;
public:
	QuanLiNhapKho();
	void set();
	void get();
};

