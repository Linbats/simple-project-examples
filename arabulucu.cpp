#include <iostream>
using namespace std;
int main(){
int b=0,k=0,a=1;
cout << "Bu program girilen iki sayı arasındaki sayıları listeler\n"<< "Lütfen küçük sayıyı giriniz::. "; cin >> k;
cout << "Lütfen büyük sayıyı giriniz::. "; cin >> b;
for(; k<=b; k++){
cout <<a<< ":" << k << endl;
a++;
}

    return 0;
}