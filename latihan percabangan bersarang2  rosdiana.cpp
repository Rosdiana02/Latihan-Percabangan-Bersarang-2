#include <iostream>
#include <string>

using namespace std;

int main() {
    string status, alamat;
    int belanja, diskon, diskon1, diskon2, bayar;
    cout << "===PROGRAM PERCABANGAN BERSARANG==="  << endl << endl;
    cout << "Masukkan Total Belanja Anda : " ;
    cin >> belanja;  
	cout << endl;  	
    if (belanja > 1102019) {
        cout << "Masukkan Status Anda: \n 1. Menikah Sudah Punya Anak \n 2. Menikah Belum Punya Anak \n 3. Belum Menikah tapi Memiliki Kartu Anggota \n 4. Tidak Punya Kartu Anggota" << endl;
        cout << "==========================================================" << endl;
	    cout << "Tuliskan Pilihan Anda dalam Angka " ;
        cin >> status;
        cout  << endl;
        if (status == "1") {
            diskon = belanja * 0.75;
            bayar = belanja - diskon;
            cout << "Anda Mendapatkan Diskon Sebesar 75%" << endl;
            cout << "Hasil Kalkulasi " << bayar << endl;
            cout << "==========================================================" << endl;
            cout << "Masukkan Alamat KTP Anda untuk Mendapatkan Diskon Tambahan : ";
            cin >> alamat;
            if (alamat == "makassar") {
                cout << "Total Yang Harus Anda Bayar " << bayar << endl << endl;
                cout << "Anda Tidak Mendapat Tambahan Diskon" << endl;
            } else {
                diskon1 = bayar * 0.1;
                diskon2 = bayar - diskon1;
                cout << "Total Yang Harus Anda Bayar Adalah " << diskon2 << endl;
                cout << "Selamat Anda Mendapatkan Diskon Tambahan" << endl;
            }
        } else {
            if (status == "2") {
                diskon = belanja * 0.5;
                bayar = belanja - diskon;
                cout << "Anda Mendapatkan Diskon Sebesar 50%" << endl;
                cout << "Hasil Kalkulasi " << bayar << endl;
                cout << "==========================================================" << endl;
                cout << "Masukkan Alamat KTP Anda untuk Mendapatkan Diskon Tambahan : " ;
                cin >> alamat;
                if (alamat == "makassar") {
                    cout << "Total Yang Harus Anda Bayar" << bayar << endl << endl;
                    cout << "Anda Tidak Mendapat Tambahan Diskon" << endl;
                } else {
                    diskon1 = bayar * 0.1;
                    diskon2 = bayar - diskon1;
                    cout << "Total Yang Harus Anda Bayar adalah " << diskon2 << endl << endl;
                    cout << "Selamat Anda Mendapatkan Diskon Tambahan" << endl;
                }
            } else {
                if (status == "3") {
                    diskon = belanja * 0.25;
                    bayar = belanja - diskon;
                    cout << "Anda Mendapatkan Diskon Sebesar 25%" << endl;
                    cout << "Hasil Kalkulasi " << bayar << endl;
                    cout << "==========================================================" << endl;
                    cout << "Masukkan Alamat KTP Anda untuk Mendapatkan Diskon Tambahan : " ;
                    cin >> alamat;
                    if (alamat == "makassar") {
                        cout << "Total Yang Harus Anda Bayar " << bayar << endl << endl;
                        cout << "Anda Tidak Mendapat Tambahan Diskon" << endl;
                    } else {
                        diskon1 = bayar * 0.1;
                        diskon2 = bayar - diskon1;
                        cout << "Total Yang Harus Anda Bayar adalah " << diskon2 << endl << endl;
                        cout << "Selamat Anda Mendapatkan Diskon Tambahan" << endl;
                    }
                } else {
                    if (status == "4") {
                        diskon = belanja * 0.1;
                        bayar = belanja - diskon;
                        cout << "Anda Mendapatkan Diskon Sebesar 10%" << endl;
                        cout << "Hasil Kalkulasi " << bayar << endl;
                        cout << "==========================================================" << endl;
                        cout << "Masukkan Alamat KTP Anda untuk Mendapatkan Diskon Tambahan : ";
                        cin >> alamat;
                        if (alamat == "makassar") {
                            cout << "Total Yang Harus Anda Bayar " << bayar << endl << endl;
                            cout << "Anda Tidak Mendapat Tambahan Diskon" << endl;
                        } else {
                            diskon1 = bayar * 0.1;
                            diskon2 = bayar - diskon1;
                            cout << "Total yang Harus Anda Bayar " << diskon2 << endl << endl;
                            cout << "Selamat Anda Mendapatkan Diskon Tambahan" << endl;
                        }
                    } else {
                        cout << "===Tidak Ada Dalam Pilihan===" << endl;
                    }
                }
            }
        }
      
    } else {
        cout << "===Anda Tidak Mendapatkan Diskon===" << endl;
    }  
    return 0;
}


