#include <iostream>
#include "PhanSo.h"
using namespace std;

int main()
{
    PhanSo a, b;

    // Nhập phân số A
    cout << "Nhap phan so A:\n";
    a.Nhap();

    // Nhập phân số B
    cout << "Nhap phan so B:\n";
    b.Nhap();

    // Rút gọn và xuất phân số A
    cout << "\nPhan so A: ";
    a.RutGon();
    a.Xuat();

    // Rút gọn và xuất phân số B
    cout << "\nPhan so B: ";
    b.RutGon();
    b.Xuat();

    // Tính toán
    PhanSo tong = a.Tong(b);
    PhanSo hieu = a.Hieu(b);
    PhanSo tich = a.Tich(b);
    PhanSo thuong = a.Thuong(b);

    // Xuất Tổng
    cout << "\n\nTong: ";
    tong.Xuat();

    // Xuất Hiệu
    cout << "\nHieu: ";
    hieu.Xuat();

    // Xuất Tích
    cout << "\nTich: ";
    tich.Xuat();

    // Xuất Thương
    cout << "\nThuong: ";
    thuong.Xuat();

    // So sánh
    int cmp = a.SoSanh(b);

    //Xuất so sánh
    if(cmp == 1)
       cout << "\nA > B";
    else
       if(cmp == 0)
          cout << "\nA = B";
       else
          cout << "\nA < B";
    return 0;
}

