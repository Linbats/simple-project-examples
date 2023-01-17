#include <iostream>
#include <string>
using namespace std;
int main(){

    string input;
    cout << "Lütfen ters çevrilmesi istenen değeri giriniz: "; cin >> input;

    int lenin=input.length();
    
        for(; lenin>=0; --lenin){
            cout << input[lenin] ;
        }

        cout << endl;






    return 0;
}