#include <iostream>

using namespace std;

int main() {
    char islem;
    double sayi1, sayi2, sonuc;
    bool devam = true;
    char secim;

    cout << "=== C++ HESAP MAKINESI ===" << endl;

    while (devam) {
        // Kullanıcıdan işlem türünü alma
        cout << "\nYapmak istediginiz islemi secin (+, -, *, /): ";
        cin >> islem;

        // Kullanıcıdan sayıları alma
        cout << "Birinci sayiyi girin: ";
        cin >> sayi1;
        cout << "Ikinci sayiyi girin: ";
        cin >> sayi2;

        // İşlemi gerçekleştirme
        switch (islem) {
            case '+':
                sonuc = sayi1 + sayi2;
                cout << "Sonuc: " << sayi1 << " + " << sayi2 << " = " << sonuc << endl;
                break;
            case '-':
                sonuc = sayi1 - sayi2;
                cout << "Sonuc: " << sayi1 << " - " << sayi2 << " = " << sonuc << endl;
                break;
            case '*':
                sonuc = sayi1 * sayi2;
                cout << "Sonuc: " << sayi1 << " * " << sayi2 << " = " << sonuc << endl;
                break;
            case '/':
                if (sayi2 != 0) {
                    sonuc = sayi1 / sayi2;
                    cout << "Sonuc: " << sayi1 << " / " << sayi2 << " = " << sonuc << endl;
                } else {
                    cout << "Hata: Bir sayi 0'a bolunemez!" << endl;
                }
                break;
            default:
                cout << "Hata: Gecersiz bir islem girdiniz!" << endl;
                break;
        }

        // Başka işlem yapılıp yapılmayacağını sorma
        cout << "\nBaska bir islem yapmak istiyor musunuz? (e/h): ";
        cin >> secim;

        if (secim == 'h' || secim == 'H') {
            devam = false;
            cout << "Hesap makinesi kapatiliyor. Iyi gunler!" << endl;
        }
    }

    return 0;
}