#include "SanPham.h"
#include <iostream>
using namespace std;
SanPham::SanPham() {
	maHang = tenHang = maKhoLuuHang = "None";
	donGia = loaiHang = ngayHH = ngaySX = thangHH = thangSX =  namHH = namSX = 1;
}
void SanPham::set() {
	cout << "Ma hang: ";
	fflush(stdin);
	getline(cin, maHang);
	cout << "Ten hang: ";
	getline(cin, tenHang);
	cout << "Don Gia: ";
	cin >> donGia;
	cout << "Loai Hang: ";
	cin >> loaiHang;
}
bool kiemTraDay(int ngay, int thang, int nam) {
	switch (thang)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (ngay < 1 || ngay>31 || nam < 0)
			return false;
		break;
	case 4: case 6: case 9: case 11:
		if (ngay < 1 || ngay>30 || nam < 0)
			return false;
		break;
	case 2:
		if (nam % 4 == 0) {
			if (ngay < 1 || ngay > 28)
				return false;
		}
		else {
			if (ngay < 1 || ngay>29)
				return false;
		}
		break;
	default:
		return false;
		break;
	}
	return true;
}
void SanPham::setdd() {
	cout << "Nhap ngay, thang, nam san xuat: ";
	cin >> ngaySX >> thangSX >> namSX;
	while (!kiemTraDay(ngaySX, thangSX, namSX)) {
		cout << "ngay, thang, nam khong hop le, vui long nhap lai: ";
		cin >> ngaySX >> thangSX >> namSX;
	}
}
bool SanPham::kiemTraNgayHH() {
	if (namHH < namSX)
		return false;
	else if (namHH == namSX) {
		if (thangHH < thangSX)
			return false;
		else if (thangHH == namSX) {
			if (ngayHH < ngaySX)
				return false;
		}
	}
	return true;
}
void SanPham::setHH() {
	cout << "Nhap ngay, thang, nam het han: ";
	cin >> ngayHH >> thangHH >> namHH;
	while (!kiemTraDay(ngayHH, thangHH, namHH)) {
		cout << "Ngay, thang, nam khong hop le, vui long nhap lai: ";
		cin >> ngayHH >> thangHH >> namHH;
	}
	while (!SanPham::kiemTraNgayHH()) {
		cout << "Ngay, thang, nam khong hop le, vui long nhap lai: ";
		cin >> ngayHH >> thangHH >> namHH;
	}
}
void SanPham::get() {
	cout << "Ma hang: " << maHang << endl;
	cout << "Ten hang: " << tenHang << endl;
	cout << "Don gia: " << donGia << endl;
	cout << "Loai hang: " << loaiHang << endl;
	cout << "Ma kho luu hang: " << maKhoLuuHang << endl;
	cout << "Ngay, thang, nam san xuat: " << ngaySX << "/" << thangSX << "/" << namSX << endl;
	cout << "Ngay, thang, nam het han: " << ngayHH << "/" << thangHH << "/" << namHH << endl;
}