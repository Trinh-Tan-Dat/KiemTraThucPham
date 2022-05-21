#pragma once
#include <iostream>
#include <string>
class SanPham
{
	std::string maHang;
	std::string tenHang;
	int donGia;
	int loaiHang;
	std::string maKhoLuuHang;
	int ngaySX, thangSX, namSX;
	int ngayHH, thangHH, namHH;

public:
	SanPham();
	/*SanPham(const SanPham& sp);*/
	virtual void set();
	void setdd();
	void setHH();
	bool kiemTraNgayHH();
	virtual void get();
};

