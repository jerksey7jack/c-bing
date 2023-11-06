#include <iostream>
using namespace std;

int main() {
    int pilihmenu;

    while (true) {
        cout << "====Pilih Menu====" << endl;
        cout << "1. Nilai Rata-rata Mahasiswa" << endl;
        cout << "2. Daftar Pemesanan Kamar" << endl;
        cout << "3. Exit" << endl;
        cout << "Pilih Menu (1/2/3) : ";
        cin >> pilihmenu;

        switch (pilihmenu) {
            case 1:
                int pilih, jumlah;

                cout << "=====DAFTAR KAMAR=====" << endl;
                cout << "1. Family Room" << endl;
                cout << "2. 1 Bed Room Bungalow" << endl;
                cout << "3. Duluxe Bungalow" << endl;
                cout << "4. River View Bungalow" << endl;
                cout << "--------------------------------------------" << endl;

                cout << "Masukan Pilihan : ";
                cin >> pilih;

                switch (pilih) {
                    case 1:
                        cout << "Harga kamar Rp.1.099.000/malam" << endl;
                        cout << "Masukan jumlah : ";
                        cin >> jumlah;
                        cout << "Total bayar : " << jumlah * 1099000 << endl;
                        break;
                    case 2:
                        cout << "Harga kamar Rp.850.000/malam" << endl;
                        cout << "Masukan jumlah : ";
                        cin >> jumlah;
                        cout << "Total bayar : " << jumlah * 850000 << endl;
                        break;
                    case 3:
                        cout << "Harga kamar Rp.988.000/malam" << endl;
                        cout << "Masukan jumlah : ";
                        cin >> jumlah;
                        cout << "Total bayar : " << jumlah * 988000 << endl;
                        break;
                    case 4:
                        cout << "Harga kamar Rp.1.299.000/malam" << endl;
                        cout << "Masukan jumlah : ";
                        cin >> jumlah;
                        cout << "Total bayar : " << jumlah * 1299000 << endl;
                        break;
                    default:
                        cout << "Kamar tidak tersedia" << endl;
                }

                break;

            case 2:
                int na, nb, nc, nd;
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
                double rerata = (na + nb + nc + nd) / 4.0;
                cout << "Rata-rata nilai : " << rerata << endl;

                if (rerata >= 80 && rerata <= 100) {
                    grade = "Selamat anda mendapat grade A!";
                } else if (rerata >= 70 && rerata <= 79) {
                    grade = "Cukup baik. Anda mendapat grade B";
                } else if (rerata >= 60 && rerata <= 69) {
                    grade = "Anda mendapat grade C. Ayo belajar lebih giat lagi!";
                } else if (rerata < 50) {
                    grade = "Anda mendapat grade D. Ayo jangan pantang menyerah. Anda harus belajar lebih giat lagi!";
                } else {
                    grade = "Tidak ada grade yang sesuai.";
                }

                cout << grade << endl;

                break;

            case 3:
                cout << "Program telah berakhir.." << endl;
                return 0;

            default:
                cout << "Pilihan Menu Tak Tersedia. Terima kasih." << endl;
                return 0;
        }
    }

    return 0;
}