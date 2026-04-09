#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

// Tạo class NgayThangNam
class NgayThangNam
{
private:
    int iNgay, iThang, iNam;
    int SoNgay() const;
    bool laNamNhuan() const;
    bool XetHopLe();

public:
    NgayThangNam(int d = 21, int m = 11, int y = 2007) : iNgay(d), iThang(m), iNam(y) {;}
    void Nhap();
    void Xuat();
    void NgayThangNamTiepTheo();
};

#endif
