#include <iostream>
using namespace std;
int main(){
int Buyuk,Kucuk,toplam=0;
cout << "Bu program iki sayı arasındaki sayıları toplar"<< "\nLütfen büyük sayıyı giriniz : "; cin >> Buyuk;
cout << "Lütfen küçük sayıyı giriniz sayıyı giriniz : "; cin >> Kucuk;
for(; Kucuk<=Buyuk; Kucuk++ ){
toplam+=Kucuk;
cout << toplam<< "\t";
}
cout << "\nToplam : "<< toplam;


    return 0;
}