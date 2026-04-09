#ifndef GIOPHUTGIAY_H
#define GIOPHUTGIAY_H

// Khởi tạo lớp giờ phút giây
class GioPhutGiay
{
private:
    int iGiay, iPhut, iGio;
    bool XetHopLe();

public:
    void Nhap();
    void Xuat();
    void TinhCongThemMotGiay();
};

#endif
