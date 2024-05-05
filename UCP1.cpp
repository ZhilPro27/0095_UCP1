/* 1. int nomorPeserta;
      string namaPeserta;
      float nilai;*/

/* 2. if(nilai % 2 == 0) {
        cout << "Nilainya GENAP" << endl;
      }
      else {
        cout << "Nilainya GANJIL" << endl;
      }*/

/* 3. struct peserta {
        string nama;
        string nomor;
    };*/

/* 4. void input() {
        peserta pst;
        cout << "Masukkan nama peserta = ";
        cin >> pst.nama);
        cout << "Masukkan nomor peserta = ";
        cin >> pst.nomor);
      }
    
      float nilaiPeserta(float a) {
        return (a + 20) / 2;
      }
    */

/* 5. for (int i = 0; i < 5; i++) {
            cout << "aku bisa" << endl;
        }*/

#include <iostream>
using namespace std;

struct Mahasiswa {
    string nama;
    float nilMatematika;
    float nilBasing;
    float rerata;
    string status;
};

    int n;
    Mahasiswa mhs[20];

void input() {
while (true) {		
		cout << "Masukkan jumlah mahasiswa = ";
		cin >> n;
		if (n <= 20) {
			break;
		}
		else {		
			cout << "Jumlah maksimal adalah 20" << endl;
			cout << "Silahkan coba lagi" << endl;
			cout << "=======================================" << endl;
		}
	}

    for (int i = 0; i < n; i++) {
        cout << "Masukkan Nama Peserta = ";
        cin >> mhs[i].nama;
        cout << "Masukkan Nilai Matematika = ";
        cin >> mhs[i].nilMatematika;
        cout << "Masukkan Nilai Bahasa Inggris = ";
        cin >> mhs[i].nilBasing;
        cout << "===============================" << endl;
    }
}

float menghitungRerata(float a, float b) {
        return (a + b) / 2;
}

void Kelulusan() {
    for (int i = 0; i < n; i++){
        if (menghitungRerata(mhs[i].nilBasing, mhs[i].nilMatematika) >= 70 || mhs[i].nilMatematika >= 80){
            mhs[i].status = "Diterima  ";
        }
        else {
            mhs[i].status = "Ditolak   ";
        }
    }
}

void display() {
    cout << "Nama" << "\t" << "Status" << "\t" << "Rata-rata" << endl;

    for (int i = 0; i < n; i++){
        cout << mhs[i].nama << "\t";
        cout << mhs[i].status;
        cout << menghitungRerata(mhs[i].nilBasing, mhs[i].nilMatematika) << endl;
    }
}

int main() {
    char pilihan;
    do {
    input();
    Kelulusan();
    display();

    cout << "ingin mengulangi? (y/n)";
    cin >> pilihan;
    system("cls");
    } while (pilihan == 'y' || pilihan == 'Y');
    return 0;
}