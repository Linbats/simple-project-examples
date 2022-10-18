#include <iostream>
using namespace std;
int main(){
int hiz;
float yol,zaman;
cout << " Bu program Hız Hesaplama işlemi yapar \n"<< "Lütfen gittiğiniz yolu metre cinsinden giriniz::."; cin >> yol;
cout << "Lütfen gittiğiniz yolu ne kadar sürede gittiğinizi saniye cinsinden yazınız::. "; cin >> zaman;

cout << "Kaydettiğiniz hız: " << yol/zaman << "\n";


    return 0;
}