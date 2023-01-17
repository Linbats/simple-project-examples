#include <iostream>
using namespace std;
int main(){
    cout << "---- Girdiğiniz sayıya kadar olan 5'e bölünen ve 7'ye bölünemeyen sayıları gösteren ve toplayan programama hoşgeldiniz----\n";
        int i=0,b=0,five,seven;
        cout << "Lütfen bir sayı giriniz\n>";  cin >> b;
        
    
        while(++i<=b){

            if(i%5==0){
                cout << "\t5'e bölünen sayılar:" << i;
                five+=i;
            }
            else if(i%7!=0){
                cout << "\t7'ye bölünemeyen sayılar:" << i;
                seven+=i;
            }
            
                cout << endl;

        }
    
            cout << "Toplam:" << seven+five << endl  ;


    return 0;
}