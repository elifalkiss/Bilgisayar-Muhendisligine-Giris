#include<iostream>
using namespace std;

int main(){
	double sayi1, sayi2;
    char islem;

    cout << "Birinci sayiyi giriniz: ";
    cin >> sayi1;

    cout << "ikinci sayiyi giriniz: ";
    cin >> sayi2;

    cout << "islem seciniz (+ - * /): ";
    cin >> islem;

    switch (islem) {
        case '+':
            cout << "Sonuc: " << sayi1 + sayi2 << endl;
            break;
        case '-':
            cout << "Sonuc: " << sayi1 - sayi2 << endl;
            break;
        case '*':
            cout << "Sonuc: " << sayi1 * sayi2 << endl;
            break;
        case '/':
            if (sayi2 != 0)
                cout << "Sonuc: " << sayi1 / sayi2 << endl;
            else
                cout << "Hata: sifira bolme yapilamaz!" << endl;
            break;
        default:
            cout << "Geçersiz iþlem seçtiniz!" << endl;
    }

    return 0;

}
