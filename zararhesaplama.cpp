#include <iostream>
using namespace std;
int main(){
int aliş,satiş;
cout << "Lütfen alış fiyatını giriniz::. "; cin >> aliş;
cout << "Lütfen Satış fiyatını giriniz::. "; cin >> satiş;
if(satiş>aliş){
cout << "Kâr'ınız: "<< satiş-aliş<<"tl\n";
}

else{
cout << "Zararınız: "<< aliş-satiş<< "tl\n";
}


    return 0;
}