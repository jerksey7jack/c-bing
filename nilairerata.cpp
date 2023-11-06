#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    int na, nb, nc, nd, rerata;
    string nama, kelas, nim, grade;

    cout << "Nama  : ";
    cin >> nama;
    cout << "NIM : ";
    cin >> nim;
    cout << "Kelas : ";
    cin >> kelas;
    cout << "Masukan data nilai" << endl;
    cout << "Masukan data nilai mapel a : ";
    cin >> na;
    cout << "Masukan data nilai mapel b : ";
    cin >> nb;
    cout << "Masukan data nilai mapel c : ";
    cin >> nc;
    cout << "Masukan data nilai mapel d : ";
    cin >> nd;
    rerata = (na + nb + nc + nd) / 4;
    cout << "Rata - rata nilai : " << rerata << endl;

    switch (rerata) {
        case 80 ... 100:
            grade = "Selamat anda mendapat grade A!";
            break;
        case 70 ... 79:
            grade = "Cukup baik. Anda mendapat grade B";
            break;
        case 60 ... 69:
            grade = "Anda mendapat grade C. Ayo belajar lebih giat lagi!";
            break;
        default:
            if (rerata < 50) {
                grade = "Anda mendapat grade D. Ayo jangan pantang menyerah. Anda harus belajar lebih giat lagi!";
            } else {
                grade = "Tidak ada grade yang sesuai.";
            }
    }

    cout << grade << endl;

    return 0;
}