#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <cstdio>
using namespace std;

int b,c,d,pilihan;
int a = 1;
int t = 1;
int k = 1;
struct buku{
    string judul;
    string pengarang;
    string penerbit;
    int tahun,jumlah_buku,kode;
    };
    buku input[100];
 
struct tanggal{
    string harip;
    string harik;
    string nama;
    int tanggalp,bulanp,tahunp;
    int tanggalk,bulank,tahunk;
    };
    tanggal tgl[100];
 
void input_buku();
void lihat_list_buku();
void edit_buku();
void delete_buku();
void borrow_buku();
void return_buku();
void laporan_buku();
 
int main(){
    menu:
    cout << "TUGAS AKHIR - MANAJEMEN BUKU" << endl;
    cout << "1. Tambahkan buku" << endl;
    cout << "2. Edit buku" << endl;
    cout << "3. Delete buku" << endl;
    cout << "4. lihat list buku" << endl;
    cout << "5. meminjam buku" << endl;
    cout << "6. mengembalikan buku" << endl;
    cout << "7. Laporan Buku" << endl;
    cout << "8. keluar program " << endl;
    cout << "masukan pilihan anda = "; cin >> pilihan;
 
    switch(pilihan){
        case 1:
            cout << "Anda memilih tambahkan buku" << endl;
            input_buku();
            goto menu;
        break;
        case 2:
            cout << "Anda memilih Edit Buku" << endl;
            edit_buku();
            goto menu;
        break;
        case 3:
            cout << "Anda memilih Delete buku" << endl;
            delete_buku();
            goto menu;
        break;
        case 4:
            cout << "Anda memilih lihat list buku" << endl;
            lihat_list_buku();
            goto menu;
        break;
        case 5:
            cout << "Anda memilih meminjam buku" << endl;
            borrow_buku();
            goto menu;  
        break;
        case 6:
            cout << "Anda memilih mengembalikan buku" << endl;
            return_buku();
            goto menu;
        break;
        case 7:
            cout << "Anda memilih laporan perpustakaan" <<  endl;
            laporan_buku();
            goto menu;
        break;
        case 8:
            cout << "Anda memilih keluar program" << endl;
            return 0;
        break;
        default:
            cout << "anda salah memasukan nomor diatas silahkan input ulang" << endl;
            goto menu;
        break;
    }
}

void input_buku(){
        cout << "buku ke = " << a << endl;
        cout << "masukan nama buku = " << endl;
        cin >> input[a].judul;
        cout << "masukan nama pengarang = " << endl;
        cin >> input[a].pengarang;
        cout << "masukan nama penerbit = " << endl;
        cin >> input[a].penerbit;
        cout << "masukan tahun terbit = " << endl;
        cin >> input[a].tahun;
        cout << "masukan jumlah buku = " << endl;
        cin >> input[a].jumlah_buku;
        cout << "masukan kode buku = " << endl;
        cin >> input[a].kode;
        a = a + 1;
        cout << a << endl;
        }

void lihat_list_buku(){
    cout << "JUDUL BUKU" << "\t";
    cout << "PENGARANG" << "\t";
    cout << "PENERBIT" << "\t";
    cout << "TAHUN TERBIT" << "\t";
    cout << "JUMLAH BUKU" << "\t";
    cout << "KODE" << endl;

    for(int i=1; i<a; i++){
        cout << input[i].judul << "\t\t";
        cout << input[i].pengarang << "\t\t";
        cout << input[i].penerbit << "\t\t";
        cout << input[i].tahun << "\t\t";
        cout << input[i].jumlah_buku << "\t\t";
        cout << input[i].kode << endl;
    }
}

void edit_buku(){
cout << "masukan kode buku yang ingin di edit = " << endl;
cin >> b;
    for(int i=0; i<=a; i++){
        if(b == input[i].kode){
            cout << input[i].judul << "\t\t";
            cout << input[i].pengarang << "\t\t";
            cout << input[i].penerbit << "\t\t";
            cout << input[i].tahun << "\t\t";
            cout << input[i].jumlah_buku << "\t\t";
            cout << input[i].kode << endl;

        cout << "masukan nama buku = " << endl;
        cin >> input[i].judul;
        cout << "masukan nama pengarang = " << endl;
        cin >> input[i].pengarang;
        cout << "masukan nama penerbit = " << endl;
        cin >> input[i].penerbit;
        cout << "masukan tahun terbit = " << endl;
        cin >> input[i].tahun;
        cout << "masukan jumlah buku = " << endl;
        cin >> input[i].jumlah_buku;
        cout << "masukan kode buku = " << endl;
        cin >> input[i].kode;
        }
        else{
            cout << "Kode buku yang anda masukan tidak ditemukan" << endl;
        }
    }
}

void delete_buku(){
    cout << "masukan kode buku yang ingin di hapus = " << endl;
    cin >> c;
    for(int i=1; i<a; i++){
        if(c == input[i].kode){
                cout << input[i].judul << "\t\t";
            cout << input[i].pengarang << "\t\t";
            cout << input[i].penerbit << "\t\t";
            cout << input[i].tahun << "\t\t";
            cout << input[i].jumlah_buku << "\t\t";
            cout << input[i].kode << endl;

            input[i].judul = input[a-1].judul;
            input[i].pengarang = input[a-1].pengarang;
            input[i].penerbit = input[a-1].penerbit;
            input[i].tahun = input[a-1].tahun;
            input[i].jumlah_buku = input[a-1].jumlah_buku;
            input[i].kode = input[a-1].kode;
            a--;
        }
        else{
            cout << "Kode buku yang anda masukan tidak ditemukan" << endl;
        }
    }
}

void borrow_buku(){
    cout << "masukan kode buku yang ingin di pinjam = " << endl;
    cin >> d;
    for(int i=0; i<=a; i++){
        if(d == input[i].kode){
                cout << input[i].judul << "\t\t";
            cout << input[i].pengarang << "\t\t";
            cout << input[i].penerbit << "\t\t";
            cout << input[i].tahun << "\t\t";
            cout << input[i].jumlah_buku << "\t\t";
            cout << input[i].kode << endl;

            cout << "masukan nama = " << endl;
            cin >> tgl[t].nama;
            cout << "masukan hari = " << endl;
            cin >> tgl[t].harip;
            cout << "masukan tanggal = " << endl;
            cin >> tgl[t].tanggalp;
            cout << "masukan bulan = " << endl;
            cin >> tgl[t].bulanp;
            cout << "masukan tahun = " << endl;
            cin >> tgl[t].tahunp;
            t++;
            input[i].jumlah_buku = input[i].jumlah_buku - 1;
            break;
        }
        else{
            cout << "Kode buku yang anda masukan tidak ditemukan" << endl;
        }
    }
}

void return_buku(){
    cout << "masukan kode buku yang ingin di kembalikan = " << endl;
    cin >> d;
    for(int i=0; i<=a; i++){
        if(d == input[i].kode){
                cout << input[i].judul << "\t\t";
            cout << input[i].pengarang << "\t\t";
            cout << input[i].penerbit << "\t\t";
            cout << input[i].tahun << "\t\t";
            cout << input[i].jumlah_buku << "\t\t";
            cout << input[i].kode << endl;

            cout << "masukan hari = " << endl;
            cin >> tgl[k].harik;
            cout << "masukan tanggal = " << endl;
            cin >> tgl[k].tanggalk;
            cout << "masukan bulan = " << endl;
            cin >> tgl[k].bulank;
            cout << "masukan tahun = " << endl;
            cin >> tgl[k].tahunk;
            k++;
            input[i].jumlah_buku = input[i].jumlah_buku + 1;
        }
        else{
            cout << "Kode buku yang anda masukan tidak ditemukan" << endl;
        }
    }
}

void laporan_buku(){
    cout << "JUDUL BUKU" << "\t";
    cout << "JUMLAH BUKU" << "\t";
    cout << "KODE" << "\t";
    cout << "NAMA" << "\t\t";
    cout << "HARI PINJAM" << "\t";
    cout << "TGL PINJAM" << "\t";
    cout << "HARI KEMBALI" << "\t";
    cout << "TGL KEMBALI" << endl;

    for(int i=1; i<a; i++){
        cout << input[i].judul << "\t\t";
        cout << input[i].jumlah_buku << "\t\t";
        cout << input[i].kode << "\t";
    }

    for(int i=1; i<=t; i++){
        cout << tgl[i].nama << "\t\t";
        cout << tgl[i].harip << "\t\t";
        cout << tgl[i].tanggalp << tgl[i].bulanp << tgl[i].tahunp << "\t";
    }

    for(int i=1; i<=k; i++){
        cout << tgl[i].harik << "\t";
        cout << tgl[i].tanggalk << tgl[i].bulank << tgl[i].tahunk << endl;
    }
}