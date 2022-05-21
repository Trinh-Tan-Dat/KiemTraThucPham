#include "QuanLiXuatKho.h"
#include "SanPham.h"
#include <iostream>
using namespace std;
QuanLiXuatKho::QuanLiXuatKho() {
	ngayXK = thangXK = namXK = 0;
}
void QuanLiXuatKho::set() {
	SanPham::set();
	cout << "Nhap ngay, thang, nam xuat kho: ";
	cin >> ngayXK >> thangXK >> namXK;
}
void QuanLiXuatKho::get() {
	SanPham::get();
	cout << "Ngay, thang, nam xuat kho: " << ngayXK << "/" << thangXK << "/" << namXK << endl;
}