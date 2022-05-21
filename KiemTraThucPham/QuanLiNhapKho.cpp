#include "QuanLiNhapKho.h"
#include "SanPham.h"
using namespace std;
QuanLiNhapKho::QuanLiNhapKho() {
	ngayNK = thangNK = namNK = 0;
}
void QuanLiNhapKho::set() {
	SanPham::set();
	cout << "Nhap ngay, thang, nam nhap kho: ";
	cin >> ngayNK >> thangNK >> namNK;
}
void QuanLiNhapKho::get() {
	SanPham::get();
	cout << "Ngay thang nam nhap kho: " << ngayNK << "/" << thangNK << "/" << namNK;
}