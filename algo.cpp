#include <iostream>
using namespace std;

int main() {

    int pilih;

    while (true) {
        cout << "=====DAFTAR MENU PROGRAM=====" << endl;
        cout << "1. Menghitung Berat Badan ideal" << endl;
        cout << "2. Tabel perkalian" << endl;
        cout << "3. Tampilkan matriks" << endl;
        cout << "pilih menu pemograman (1/2/3): ";
        cin >> pilih;

        switch (pilih) {
            case 1: {
            int berat;
            double tinggi, kalkulasi;
            string gender, hasil;

            cout << "masukan gender (p/l): ";
            cin >> gender;
            
            if (gender == "p") {
                cout << "masukan berat badan : ";
                cin >> berat;
                cout << "masukan tinggi badan : ";
                cin >> tinggi;
                kalkulasi = berat/(tinggi*tinggi);
                 if (kalkulasi < 18.5){
                    cout << "anda termasuk kategori kurus" << endl;
                    }
                    else if (kalkulasi == 18.5 && 22.9){
                        cout << "anda termasuk kategori normal" << endl;
                        }
                         else if (kalkulasi == 23 && 24.9){
                            cout << " anda termasuk kategori kelebihan berat badan" << endl;
                            } else if (kalkulasi > 30){
                                cout << "anda termasuk kategori obesitas" << endl;
                                }
            }
            if (gender == "l") {
              cout << "masukan berat badan : ";
              cin >> berat;
              cout << "masukan tinggi badan : ";
              cin >> tinggi;
              kalkulasi = berat/(tinggi*tinggi);
               if (kalkulasi < 18.5){
               cout << "anda termasuk kategori kurus" << endl;
               }
                else if (kalkulasi == 18.5 && 22.9){
                    cout << "anda termasuk kategori normal" << endl;
                    }
                     else if (kalkulasi == 23 && 24.9){
                        cout << " anda termasuk kategori kelebihan berat badan" << endl;
                        }
                        else{
                            cout << "anda termasuk kategori obesitas" << endl;
                            }
            }

 
            } 
            break;

            case 2: {
                int i;
                cout << "masukan angka :";
                cin >> i;
                for (int a = 1; a <= i; a++) {
                    for (int b = 1; b<= i; b++) {
                        cout << a*b << " ";
                    }
                    cout << endl;
                }
                break;
            }

            case 3: {
                int A[3][7]={{1,2,13,9,5,3,4},{2,4,6,9,0,10,8},{11,7,9,2,3,5,7}}; 
                for (int m = 0; m < 3; m++) {
                    for (int j = 0; j < 7; j++) {
                        cout << A[m][j] << "  ";
                    }
                    cout << endl;
                }
            }
            break;

        }
    }


}
