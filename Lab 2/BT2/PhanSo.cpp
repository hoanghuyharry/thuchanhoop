#include <iostream>
#include "PhanSo.h"
using namespace std;

// Hàm tìm UCLN
int UCLN(int a, int b)
{
    if(b == 0)
       return a;
    return UCLN(b, a % b);
}

// Hàm nhập phân số
void PhanSo::Nhap()
{
    cout << "Nhap tu: ";
    cin >> iTu;
    do{
        cout << "Nhap mau (khac 0): ";
        cin >> iMau;
    } while(iMau == 0);
}

// Hàm xuất phân số
void PhanSo::Xuat()
{
    if(iMau == 0)
       cout << "Phan so khong ton tai.";
    // Với t/h mẫu bằng 1
    else
       if(iMau == 1)
          cout << iTu;
       else
          // Với t/h tử bằng 0
          if(iTu == 0)
             cout << 0;
          else
             cout << iTu << "/" << iMau;
}

// Hàm rút gọn phân số
void PhanSo::RutGon()
{
    int ucln = UCLN(abs(iTu), abs(iMau));
    iTu /= ucln;
    iMau /= ucln;

    // Đưa dấu về tử
    if(iMau < 0){
       iTu = -iTu;
       iMau = -iMau;
    }
}

// Hàm tính Tổng
PhanSo PhanSo::Tong(PhanSo ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

// Hàm tính Hiệu
PhanSo PhanSo::Hieu(PhanSo ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

// Hàm tính Tích
PhanSo PhanSo::Tich(PhanSo ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iTu;
    kq.iMau = iMau * ps.iMau;
    kq.RutGon();
    return kq;
}

// Hàm tính Thương
PhanSo PhanSo::Thuong(PhanSo ps)
{
    PhanSo kq;
    kq.iTu = iTu * ps.iMau;
    kq.iMau = iMau * ps.iTu;
    kq.RutGon();
    return kq;
}

// Hàm so sánh 2 phân số
int PhanSo::SoSanh(PhanSo ps)
{
    int left = iTu * ps.iMau;
    int right = ps.iTu * iMau;

    if (left > right) return 1;
    if (left == right) return 0;
    return -1;
}
