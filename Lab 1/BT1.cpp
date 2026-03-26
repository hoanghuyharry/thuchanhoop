#include <bits/stdc++.h>
using namespace std;

int a, b;

int main()
{
    do{
       cin >> a >> b;                               //Nhap a (tu) va b (mau)
    }
    while(b == 0);                                  //Su dung ham do-while de nhap lai a va b khi b (mau) = 0
    if(a == 0){
       cout << 0 << endl;
       return 0;                                    //Khi a (tu) = 0 thi in ra 0 va ket thuc ctrinh
    }
    else{
       int uc = __gcd(a, b);                        //Tim uoc chung lon nhat
       a /= uc;
       b /= uc;                                     //Chia lan luot a va b cho ucln de rut gon phan so
       if(b < 0){                                   //Kiem tra b (mau) co phai la so am ko
          a = -a;
          b = -b;
          cout << a << "/" << b << endl;            //Bien doi dua dau tru len a (tu) de triet di dau tru o b (mau) va in ra kqua
       }
       else{
          if(b > 0){
             if(b == 1)
                cout << a << endl;                  //Voi b (mau) = 1 thi in moi a (tu)
             else
                cout << a << "/" << b << endl;      //Voi a va b la cac so khac thi in ra kqua bthg
          }
       }
    }
    return 0;
}
