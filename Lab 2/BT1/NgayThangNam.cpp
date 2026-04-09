#include <bits/stdc++.h>
#include "NgayThangNam.h"
using namespace std;

// Hàm kiểm tra năm nhuận
bool NgayThangNam::laNamNhuan() const
{
    return (iNam % 4 == 0 && iNam % 100 != 0) || (iNam % 400 == 0);
}

// Hàm kiểm tra ngày có hợp lệ hay không
bool NgayThangNam::XetHopLe()
{
    if(iNam < 1 || iThang < 1 || iThang > 12)
       return false;
    if(iNgay < 1 || iNgay > SoNgay())
       return false;
    return true;
}

// Hàm số ngày trong tháng
int NgayThangNam::SoNgay() const
{
    int d[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if(iThang == 2 && laNamNhuan())
       return 29;
    return d[iThang];
}

// Hàm nhập
void NgayThangNam::Nhap()
{
    do{
        cout << "Nhap ngay, thang, nam: ";
        cin >> iNgay >> iThang >> iNam;

        // Xét ngày có hợp lệ hay không
        if(!XetHopLe())
           cout << "Ngay thang nam khong hop le.\n";
    }while(!XetHopLe());
}

// Hàm xuất
void NgayThangNam::Xuat()
{
    cout << iNgay << "/" << iThang << "/" << iNam;
}

// Hàm viết ngày tháng năm tiếp theo
void NgayThangNam::NgayThangNamTiepTheo()
{
    iNgay++;
    if(iNgay > SoNgay()){
       iNgay = 1;
       iThang++;
       if(iThang > 12){
          iThang = 1;
          iNam++;
       }
    }
}
