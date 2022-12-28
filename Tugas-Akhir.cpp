#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;

int b,c,d,pilihan;
int a = 1;
int t = 1;
char yn;

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
    int tanggalp,tanggalk,kodepinjam,kodebuku,status;
    };
    tanggal tgl[100000];
 
void input_buku();
void lihat_list_buku();
void edit_buku();
void delete_buku();
void borrow_buku();
void return_buku();
void laporan_buku();
 
int main(){
    menu:
    cout<<"---- Aplikasi Perpustakaan ----"<<endl;
    cout<<"-------- Menu ----------\n";
    cout<<" 1. Input Buku        \n";
    cout<<" 2. Edit Buku        \n";
    cout<<" 3. Delete Buku        \n";
    cout<<" 4. Daftar Buku       \n";
    cout<<" 5. Peminjaman      \n";
    cout<<" 6. Pengembalian    \n";
    cout<<" 7. Laporan   \n";
    cout<<" 8. Exit                \n";
    cout<<"----------------------\n";
    cout<<"Masukan Pilihan anda[ 1 s.d. 8 ] = "; cin >> pilihan;
 
    switch(pilihan){
        case 1:
            cout << " Input Buku " << endl;
            input_buku();
            goto menu;
        break;
        case 2:
            cout << " Edit Buku " << endl;
            edit_buku();
            goto menu;
        break;
        case 3:
            cout << " Delete buku " << endl;
            delete_buku();
            goto menu;
        break;
        case 4:
            cout << " Daftar Buku " << endl;
            lihat_list_buku();
            goto menu;
        break;
        case 5:
            cout << " Peminjaman " << endl;
            borrow_buku();
            goto menu;  
        break;
        case 6:
            cout << " Pengembalian " << endl;
            return_buku();
            goto menu;
        break;
        case 7:
            cout << " Laporan Buku" <<  endl;
            laporan_buku();
            goto menu;
        break;
        case 8:
            cout << "EXIT" << endl;
            return 0;
        break;
        default:
            cout << " Anda Salah Memasukan Pilihan " << endl;
            goto menu;
        break;
    }
}

void input_buku(){
        cout << " Buku ke - " << a << endl;
        cout << "masukan nama buku = ";
        cin >> input[a].judul;
        cout << "masukan nama pengarang = ";
        cin >> input[a].pengarang;
        cout << "masukan nama penerbit = ";
        cin >> input[a].penerbit;
        cout << "masukan tahun terbit = ";
        cin >> input[a].tahun;
        cout << "masukan jumlah buku = ";
        cin >> input[a].jumlah_buku;
        cout << "masukan kode buku = ";
        cin >> input[a].kode;
        a++;
        }

void lihat_list_buku(){
    cout<<"----------------------------------------------------------------------------------\n";
	cout<<"Kode Buku     Judul Buku    Pengarang    Penerbit    Tahun Terbit    Jumlah Buku \n";
	cout<<"----------------------------------------------------------------------------------\n";
    for(int i=1; i<a; i++){
    cout<<setw(3)<<input[i].kode<<setw(15)<<input[i].judul<<setw(15)<<input[i].pengarang<<setw(15);
    cout<<input[i].penerbit<<setw(15)<<input[i].tahun<<setw(15)<<input[i].jumlah_buku<<endl;
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
        break;
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
            break;
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

            cout << "pinjam buku nomor = " << t << endl;
            cout << "masukan kode buku = ";
            cin >> tgl[t].kodebuku; cout << endl;
            if(input[i].kode == tgl[t].kodebuku){
                input[i].jumlah_buku = input[i].jumlah_buku - 1;
            }
            cout << "masukan kode pinjam = ";
            cin >> tgl[t].kodepinjam; cout << endl;
            cout << "masukan nama = ";
            cin >> tgl[t].nama; cout << endl;
            cout << "masukan hari pinjam= ";
            cin >> tgl[t].harip; cout << endl;
            cout << "masukan tanggal pinjam (DDMMYYYY)= ";
            cin >> tgl[t].tanggalp; cout << endl;
            cout << "masukan hari kembali= ";
            cin >> tgl[t].harip; cout << endl;
            cout << "masukan tanggal kembali (DDMMYYYY)= ";
            cin >> tgl[t].tanggalp; cout << endl;
            cout << "masukan status = (1 = dipinjam)";
            cin >> tgl[t].status; cout << endl;
            t++;
            break;
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

            for(int j=1; j<=t; j++){
                if(input[i].kode == tgl[j].kodebuku){
                    cout << "pinjaman buku ke = " << j << endl;
                    cout << "nama = " << tgl[j].nama << endl;
                    cout << "hari pinjam = " << tgl[j].harip << endl;
                    cout << "tanggal pinjam = " << tgl[j].tanggalp << endl;
                    cout << "hari kembali = " << tgl[j].harik << endl;
                    cout << "tanggal kembali = " << tgl[j].tanggalk << endl;
                    if(tgl[j].status == 1){
                        cout << "status = " << "dipinjam" << endl;
                    }
                    else{
                        cout << "status = " << "dikembalikan" << endl;
                    }
                    cout << endl;
                    cout << "sudah dikembalikan? (y/n) = "; cin >> yn;
                    if(yn == 'y' || yn == 'Y'){
                        tgl[i].status = 2;
                        input[i].jumlah_buku = input[i].jumlah_buku + 1;
                        cout << "buku sudah dikembalikan" << endl;
                        break;
                    }
                    else{
                        cout << "buku belum dikembalikan" << endl;
                    }
                    break;
                }
            }
            break;
        }
        else{
            cout << "Kode buku yang anda masukan tidak ditemukan" << endl;
        }
    }
}

void laporan_buku(){
    cout << "NAMA \t\t KODE BUKU \t\t KODE PINJAM \t\t HARI PINJAM \t\t TANGGAL PINJAM \t\t HARI KEMBALI \t\t TANGGAL KEMBALI \t\t STATUS" << endl; 
    for(int i=0; i<=t; i++){
        cout << tgl[i].nama << "\t\t";
        cout << tgl[i].kodebuku << "\t\t";
        cout << tgl[i].kodepinjam << "\t\t";
        cout << tgl[i].harip << "\t\t";
        cout << tgl[i].tanggalp << "\t\t";
        cout << tgl[i].harik << "\t\t";
        cout << tgl[i].tanggalk << "\t\t";
        if(tgl[i].status == 'y'){
            cout << "dipinjam" << endl;
        }
        else{
            cout << "dikembalikan" << endl;
        }
    }
}