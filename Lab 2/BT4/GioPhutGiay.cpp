#include <bits/stdc++.h>
#include "GioPhutGiay.h"
using namespace std;

// Hàm xét thời gian hợp lệ
bool GioPhutGiay::XetHopLe()
{
    if(iGio < 0 || iGio > 23 || iPhut < 0 || iPhut > 59 || iGiay < 0 || iGiay > 59)
       return false;
    return true;
}

// Hàm nhập
void GioPhutGiay::Nhap()
{
    do{
        cout << "Nhap gio, phut, giay: ";
        cin >> iGio >> iPhut >> iGiay;

        // Kiểm tra thời gian nhập vào có hợp lệ hay không
        if(!XetHopLe())
           cout << "Thoi gian khong dung.\n";
    }while(!XetHopLe());
}

// Hàm xuất
void GioPhutGiay::Xuat()
{
    cout << iGio << ":" << iPhut << ":" << iGiay;
}

// Hàm tính thời gian khi cộng thêm 1 giây
void GioPhutGiay::TinhCongThemMotGiay()
{
    iGiay++;
    if(iGiay > 59){
       iGiay = 0;
       iPhut++;
       if(iPhut > 59){
          iPhut = 0;
          iGio++;
          if(iGio > 23)
             iGio = 0;
       }
    }
}
