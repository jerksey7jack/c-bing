#include <iostream>
using namespace std;

int main() {

    int pilih;

    while (true) {
        cout << "=====DAFTAR MENU PROGRAM=====" << endl;
        cout << "1. Menghitung Berat Badan ideal" << endl;
        cout << "2. " << endl;
        cout << "gugu" << endl;
        cout << "pilih menu pemograman (1/2/3): ";
        cin >> pilih;

        switch (pilih) {
            case 1:
            int berat;
            double tinggi, kalkulasi;
            string gender, hasil;

            cout << "masukan gender (p/l): " << endl;
            cin >> gender;
            
            if (gender == "p") {
            cout << "masukan berat badan : ";
            cin >> berat;
            cout << "masukan tinggi badan : ";
            cin >> tinggi;
            kalkulasi = berat/(tinggi*tinggi);
            if (kalkulasi < 18.5)
            {cout << "anda termasuk kategori kurus" << endl;}
            if (kalkulasi == 18.5 && 22.9)
            {cout << "anda termasuk kategori normal" << endl;}
            if (kalkulasi == 23 && 24.9)
            {cout << " anda termasuk kategori kelebihan berat badan" << endl;}
            if (kalkulasi > 30)
            {cout << "anda termasuk kategori obesitas" << endl;}
            else if (gender == "l")
            cout << "masukan berat badan : ";
            cin >> berat;
            cout << "masukan tinggi badan : ";
            cin >> tinggi;
            kalkulasi = berat/(tinggi*tinggi);
            if (kalkulasi < 18.5)
            {cout << "anda termasuk kategori kurus" << endl;}
            if (kalkulasi == 18.5 && 22.9)
            {cout << "anda termasuk kategori normal" << endl;}
            if (kalkulasi == 23 && 24.9)
            {cout << " anda termasuk kategori kelebihan berat badan" << endl;}
            
            {cout << "anda termasuk kategori obesitas" << endl;}


            }
            break;

            case 2:
            int a,b,i;
            cout << "masukan angka : ";
            cin >> i;
            for (a=1; a<=i; a++){
              for (b=1; b<=i; b++){
              cout<<a*b;}
            }
            cout<<endl;

            case 3:
            int A[3][7]={{1,2,13,9,5,3,4},{2,4,6,9,0,10,8},{11,7,9,2,3,5,7}}; 
             int *B[3]; 
             int **C; 
             int i,j;
	
             B[0]=(int *)malloc(4*sizeof(int)); 
             B[1]=(int *)malloc(4*sizeof(int));
             B[2]=(int *)malloc(4*sizeof(int));

             C=(int **)malloc(3*sizeof(int*));
             C[0]=(int *)malloc(4*sizeof(int));
             C[1]=(int *)malloc(4*sizeof(int));
             C[2]=(int *)malloc(4*sizeof(int));
             C[3]=(int *)malloc(4*sizeof(int));
             C[4]=(int *)malloc(4*sizeof(int));
             C[5]=(int *)malloc(4*sizeof(int));

             for (i=0;i<3;i++)
             {
             for (j=0;j<4;j++)
             printf("%d ",A[i][j]);
             printf("\n");
             }

             break;

        }
    }


}