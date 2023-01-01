#include <iostream>
#include <conio.h>
#include <string.h>
#include <iomanip>
using namespace std;

int b,c,d,pilihan;
int a = 1;
int t = 1;
string yn;

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
    int status = 0;
    int tanggalp,tanggalk,kodepinjam,kodebuku;
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
    cout<<setw(3)<<input[i].kode<<setw(15)<<input[i].judul<<setw(15)<<input[i].pengarang;
    cout<<setw(15)<<input[i].penerbit<<setw(15)<<input[i].tahun<<setw(15)<<input[i].jumlah_buku<<endl;
    }
    cout<<"----------------------------------------------------------------------------------\n";
}

void edit_buku(){
cout << "masukan kode buku yang ingin di edit = " << endl;
cin >> b;
    for(int i=0; i<=a; i++){
        if(b == input[i].kode){
        cout<<setw(3)<<input[i].kode<<setw(15)<<input[i].judul<<setw(15)<<input[i].pengarang;
        cout<<setw(15)<<input[i].penerbit<<setw(15)<<input[i].tahun<<setw(15)<<input[i].jumlah_buku<<endl;

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
            cout<<setw(3)<<input[i].kode<<setw(15)<<input[i].judul<<setw(15)<<input[i].pengarang;
            cout<<setw(15)<<input[i].penerbit<<setw(15)<<input[i].tahun<<setw(15)<<input[i].jumlah_buku<<endl;

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
    int temp;
    cout << "masukan kode buku ="; cin >> temp;
    for(int i=1; i<=a; i++){
        if(temp == input[i].kode){
            cout<<setw(3)<<input[i].kode<<setw(15)<<input[i].judul<<setw(15)<<input[i].pengarang;
            cout<<setw(15)<<input[i].penerbit<<setw(15)<<input[i].tahun<<setw(15)<<input[i].jumlah_buku<<endl;

            cout << "masukan nama anda ="; cin >> tgl[i].nama;
            cout << "masukan kode pinjam buku ="; cin >> tgl[t].kodepinjam;
            cout << "masukan kode buku ="; cin >> tgl[t].kodebuku;
            cout << "masukan hari pinjam ="; cin >> tgl[t].harip;
            cout << "masukan tanggal pinjam (DDMMYYY) ="; cin >> tgl[t].tanggalp;
            cout << "masukan hari kembali ="; cin >> tgl[t].harik;
            cout << "masukan tanggal kembali ="; cin >> tgl[t].tanggalk;
            tgl[t].status = tgl[t].status + 1;
            input[i].jumlah_buku = input[i].jumlah_buku - 1;
            t++;
            break;
        }else{
            cout << "kode anda tidak ditemukan" << endl;
        }
    }

}

void return_buku(){
    cout << "masukan kode pinjam ="; cin >> d;
    for(int i=1; i<=t; i++){
        if(d == tgl[i].kodepinjam){
            cout<<setw(3)<<tgl[i].kodepinjam<<setw(15)<<tgl[i].nama<<setw(15)<<tgl[i].harip<<setw(15)<<tgl[i].tanggalp;
            cout<<setw(15)<<tgl[i].harik<<setw(15)<<tgl[i].tanggalk<<setw(3)<<tgl[i].kodebuku<<endl;

            cout << "apakah sudah dikembalikan? y/n ="; cin >> yn;
            if(yn == "y" || yn == "Y"){
                cout << "buku sudah dikembalikan & data sudah disimpan" << endl;
                for(int j=1; j<=a; j++){
                    if(input[j].kode == tgl[i].kodebuku){
                        input[j].jumlah_buku = input[j].jumlah_buku + 1;
                    }
                }
                tgl[i].status = tgl[i].status + 1;
                break;
            }else if(yn == "n" || yn == "N"){
                cout << "buku belum dikembalikan & data tidak disimpan" << endl;
                break;
            }else{
                break;
            }

        }else{
            cout << "kode anda tidak ditemukan" << endl;
        }
    }
}

void laporan_buku(){
    cout<<"-------------------------------------------------------------------------------------------------------------------------\n";
	cout<<"Kode pinjam      Nama        Hari Pinjam     Tgl Pinjam      Hari Kembali    Tgl Kembali     Kode Buku       Status\n";
	cout<<"--------------------------------------------------------------------------------------------------------------------------\n";
    for(int i=1; i<=t; i++){
        if(tgl[i].status == 1){
            cout<<setw(6)<<tgl[i].kodepinjam<<setw(17)<<tgl[i].nama<<setw(13)<<tgl[i].harip<<setw(18)<<tgl[i].tanggalp;
            cout<<setw(15)<<tgl[i].harik<<setw(18)<<tgl[i].tanggalk<<setw(13)<<tgl[i].kodebuku<<setw(20)<<"dipinjam"<<endl;
        }else{
            cout<<setw(6)<<tgl[i].kodepinjam<<setw(17)<<tgl[i].nama<<setw(13)<<tgl[i].harip<<setw(18)<<tgl[i].tanggalp;
            cout<<setw(15)<<tgl[i].harik<<setw(18)<<tgl[i].tanggalk<<setw(13)<<tgl[i].kodebuku<<setw(20)<<"dikembalikan"<<endl;
        }
    }
}