#include <iostream>
using namespace std;

string NamaKota, status;
int sensor1, sensor2, sensor3;

void input()
{
    cout << "Masukkan nama kota: " << endl;
    cin >> NamaKota;
    cout << "Sensor pertama: " << endl;
    cin >> sensor1;
    cout << "Sensor kedua: " << endl;
    cin >> sensor2;
    cout << "Sensor ketiga: " << endl;
    cin >> sensor3;


    if (sensor1 + sensor2 + sensor3 >= 75 || sensor1 >= 45 || sensor2 >= 45 || sensor3 >= 45) {
        status = "Tidak Sehat";
    }
    else {
        status = "Sehat";
    }
}

void display()
{
    cout << "Nama kota: " << NamaKota << endl;
    cout << "Status: " << status << endl;
}

int main()
{
    char pilihan;
    do
    {
        input();
        display();

        cout << "Apakah anda ingin mengulangi (y/n) ? ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');
}

// 1) int nim, string nama, float hasil

// 2)   int x, y
//      cout << "Masukkan nilai MTK: " << endl;
//      cin >> x;
//      cout << "Masukkan nilai IPA: " << endl;
//      cin >> y;
// }
// int penjumlahan (int a, int b)
// {
//      return a + b;

// 3)   int bil;
//      srand(time(0));
//      bil = rand() % 100;
//      while (bil > 75) {
//          cout << "Bilangan lebih dari 75" << endl;
//          bilangan = rand() % 100;
//          cout << "Bilangannya = " << bil << endl;
//      }
//      cout << "bilangan terakhir = " << bil << endl;

// 4)	int bil;
//		srand(time(0));

//		bil = rand() % 30;
//		cout << "Angka Awalnya: " << bil << endl;

//		if (bil >= 20)
//		{
//          bil = 2 * bil;
//      }

//      cout << "Angka sekarang: " << bil;

// 5) struct Mahasiswa {
//		string nisn;
//		string nama;
//		string ttl;
// };

//	int main()
//	{
//	Warga wrg;
//	cout << "NISN: ";
//	cin >> wrg.nisn;
//	cout << "Nama: ";
//	cin >> wrg.nama;
//	cout << "Tempat tanggal lahir: "
//	cin >> wrg.ttl;

//	cout << endl;
//	cout << "\n NISN : " << mhs.nim;
//	cout << "\n Nama : " << mhs.nama;
//	cout << "\n Tempat Tanggal Lahir : " << mhs.alamat;
// }

