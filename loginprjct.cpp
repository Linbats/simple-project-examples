#include <iostream>
using namespace std;

int main(){
    int i=2;
    int inpass,truepass=2005;
    cout << "Lütfen şifrenizi giriniz" << endl << ">"; cin >> inpass;

        if(inpass!=truepass){

            for(; i>0; ){
                i--;
                
                cout << "Şifreniz yanlış " << i << " deneme hakkınız kaldı ,lütfen şifrenizi bidaha giriniz\n >";
                cin >> inpass;
                    if(i==0){
                        cout << "Maalesef tüm haklarınız bitti";
                        break;
                    }
                
            }
            

        }


        else{
            cout << "Şifreniz doğru sisteme girildi";
        }



    return 0;
}
