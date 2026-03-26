#include <bits/stdc++.h>
using namespace std;

int a, b, c, d;
double ps1, ps2;

int main()
{
    do{
        cin >> a >> b >> c >> d;                                                    //Nhap p/so 1 a/b va p/so 2 c/d
    } while(b == 0 || d == 0);                                                      //Nhap lai cac p/so khi b hoac d bang 0
    ps1 = (double) a / b;                                                           //Tinh p/so 1
    ps2 = (double) c / d;                                                           //Tinh p/so 2
    if(ps1 == ps2){                                                                 //Neu 2 p/so bang nhau
       cout << "Khong co phan so nao lon hon." << endl;
       return 0;                                                                    //In ra "Khong co phan so nao lon hon"
    }
    else{                                                                           //Neu 2 p/so khac nhau
       if(ps1 < ps2){                                                               //Voi p/so 1 < p/so 2
          cout << "Phan so " << c << "/" << d << " la phan so lon hon" << endl;
          return 0;                                                                 //In ra p/so 2 va kthuc ctrinh
       }
       else{                                                                        //Voi p/so 1 > p/so 2
          cout << "Phan so " << a << "/" << b << " la phan so lon hon" << endl;
          return 0;                                                                 //In ra p/so 1 va kthuc ctrinh
       }
    }
    return 0;
}
