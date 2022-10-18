#include <iostream>
using namespace std;
int main(){
int c=0;
cout << "Bu uygulama girilen bir sayıya kadar olan çift ve tek sayıları listeler\n" << "Lütfen sayıyı giriniz: ";
cin >> c;
for(int i=0; i<=c; i+=2){
cout << "Çift sayılar: "<< i << endl;

}
cout << endl;
for(int b=0; b<=c; b++ ){
if(b%2!=0){
cout << "Tek sayılar: " << b << endl ;
}

}

return 0;
}