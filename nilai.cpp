#include <iostream>
#include <cstdlib>
using namespace std;

int main (){
    int na, nb, nc, nd;
    float rerata;
    string nama, kelas, nim, grade;

    cout << "Nama  : " << endl;
    cin >> nama;
    cout << "NIM : " << endl;
    cin >> nim;
    cout << "Kelas : " << endl;
    cin >> kelas;
    cout << "Masukan data nilai" << endl;
    cout << "Masukan data nilai mapel a : "
    cin >> na;
    cout << "Masukan data nilai mapel b : "
    cin >> nb;
    cout << "Masukan data nilai mapel c : "
    cin >> nc;
    cout << "Masukan data nilai mapel d : "
    cin >> nd;
    rerata = (na+nb+nc+nd)/4;
    cout << "Rata - rata nilai : " << rerata << endl;

    switch (true){\
    case : rerata
        case rerata >= 80 :
        grade = "Selamat anda mendapat grade A!";
        break;
         case rerata >= 70 :
        grade = "Cukup baik. Anda mendapat grade B";
        break;
         case  rerata >= 50 :
        grade = "Anda mendapat grade C. Ayo belajar lebih giat lagi!";
        break;
         case rerata < 50 :
        grade = "Anda mendapat grade D. Ayo jangan pantang menyerah. Anda harus belajar lebih giat lagi!";
        break;
    }
return 0;
}