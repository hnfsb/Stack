#include <iostream>
#include<stdlib.h>
#include<cstring>
#include <string.h>
#include<windows.h>
#define MAX 10

#define K "Kaos"
#define T "Training"
#define C "Celana Pendek" 
#define P "Piyama"
#define D "Daster"

#define J "Kemeja"
#define S "Dasi"
#define B "Blazer"
#define A "Jas"

using namespace std;

int Achmad; //menentukan posisi 1,2,3 dll

struct Stack {
	int napi; // menentukan posisi top -1
	char ratih[MAX]; //kode yang dimasukan (Hanapi K,T,C,P,D)(kerja J,S,B,A)
	char napirat[20][MAX]; //menampilkan kata dari kode di atas ("ratih" K="napirat" kaos)
} Tumpukan;

void init() {
	Tumpukan.napi = -1;
}

bool isEmpty() {
	return Tumpukan.napi == -1;
}

bool isFull() {
	return Tumpukan.napi == MAX - 1;
}

void pushhanapi() {
	if (isFull()) {
		cout << "\nTumpukan penuh" << endl;
	} else {
		Tumpukan.napi++;
		cout << "\nMasukkan data = ";
		cin >> Tumpukan.ratih[Tumpukan.napi];
		
		if (Tumpukan.ratih[Tumpukan.napi] == 'K') {
				strcpy(Tumpukan.napirat[Tumpukan.napi], K);
		}
		else if (Tumpukan.ratih[Tumpukan.napi] == 'T') {
				strcpy(Tumpukan.napirat[Tumpukan.napi], T);
		}
		else if (Tumpukan.ratih[Tumpukan.napi] == 'C') {
				strcpy(Tumpukan.napirat[Tumpukan.napi], C);
		}
		else if (Tumpukan.ratih[Tumpukan.napi] == 'P') {
				strcpy(Tumpukan.napirat[Tumpukan.napi], P);
		}
		else if (Tumpukan.ratih[Tumpukan.napi] == 'D') {
				strcpy(Tumpukan.napirat[Tumpukan.napi], D);
		}
		else {
			strcpy(Tumpukan.napirat[Tumpukan.napi], "Tidak Diketahui");
		}
		cout << "Data " << Tumpukan.ratih[Tumpukan.napi] << " masuk ke stack"
			 << endl;
	}
}

void pushkerja() {
	if (isFull()) {
		cout << "\nTumpukan penuh" << endl;
	} else {
		Tumpukan.napi++;
		cout << "\nMasukkan data = ";
		cin >> Tumpukan.ratih[Tumpukan.napi];
		
		if (Tumpukan.ratih[Tumpukan.napi] == 'J') {
				strcpy(Tumpukan.napirat[Tumpukan.napi], J);
		}
		else if (Tumpukan.ratih[Tumpukan.napi] == 'S') {
				strcpy(Tumpukan.napirat[Tumpukan.napi], S);
		}
		else if (Tumpukan.ratih[Tumpukan.napi] == 'B') {
				strcpy(Tumpukan.napirat[Tumpukan.napi], B);
		}
		else if (Tumpukan.ratih[Tumpukan.napi] == 'A') {
				strcpy(Tumpukan.napirat[Tumpukan.napi], A);
		}
		else {
			strcpy(Tumpukan.napirat[Tumpukan.napi], "Tidak Diketahui");
		}

		cout << "Data " << Tumpukan.ratih[Tumpukan.napi] << " masuk ke stack"
			 << endl;
	}
}



void pop() {
	if (isEmpty()) {
		cout << "\nData kosong\n" << endl;
	} else {
		cout << "\nData " << Tumpukan.ratih[Tumpukan.napi] << " sudah terambil"
			 << endl;
		Tumpukan.napi--;
	}
}

void printStack() {
	if (isEmpty()) {
		cout << "Tumpukan kosong";
	} else {
		cout << "\nTumpukan : ";
		for (Achmad = Tumpukan.napi; Achmad >= 0; Achmad--)
		
			cout<<"\n ["<<Tumpukan.napirat[Achmad]<<"]";
	}
}





int main() {
	
	int pilihan, ratih, lemari;
	
	
		
	cout << "\nDaftar Kode Pakaian Hanapi \n"
						 << "1. Kaos -> 'K' \n"
					 	 << "2. Training -> 'T' \n"
					 	 << "3. Celana Pendek -> 'C'\n"
						 << "4. Piyama -> 'P'\n"
					 	 << "5. Jaket -> 'D'\n";
					 	 
	cout << "\nDaftar Kode Pakaian Ratih \n"
						 << "1. Kemeja -> 'J' \n"
					 	 << "2. Dress -> 'S' \n"
					 	 << "3. Blazer -> 'B'\n"
						 << "4. Jeans -> 'A'\n";
		cout<<endl;
		
		awal:

	
	cout<< "1. Lemari Pakaian Hanapi\n"
		<< "2. Lemari Pakaian Ratih\n"
		<< "3. Keluar\n"
		<< "Masukkan Pilihan: ";
	cin>>lemari;
	switch (lemari) {
		case 1: 
				init();
			do {
				printStack();
				
				cout << "\n1. Input (Push)\n"
					 << "2. Hapus (Pop)\n"
					 << "3. Keluar\n"
					 << "Masukkan Pilihan: ";
				cin >> pilihan;
				switch (pilihan) {
				case 1:
					pushhanapi();
					break;
				case 2:
					pop();
					break;
				default:
					goto awal;
				}
			} while (pilihan != 3);
			
		case 2: 
				init();
			do {
				printStack();
				cout << "\n1. Input (Push)\n"
					 << "2. Hapus (Pop)\n"
					 << "3. Keluar\n"
					 << "Masukkan Pilihan: ";
				cin >> pilihan;
				switch (pilihan) {
				case 1:
					pushkerja();
					break;
				case 2:
					pop();
					break;
				default:
					goto awal;
				}
			} while (pilihan != 3);
			
		default:
					exit(0);
			
	}
}

