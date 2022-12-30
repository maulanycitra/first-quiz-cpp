#include <iostream>

using namespace std;

int main()
{
    char nama_lengkap[50], nomor_hp[20], kategori;
    int harga, total_bayar, kembalian, berat, total;

    //Judul Program
    cout<<"========================================"<<endl;
    cout<<"\tAplikasi Laundry saya"<<endl;
    cout<<"========================================"<<endl;

    //Data Customer
    cout<<"\tData Customer Laundry"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Nama Customer:";cin>>nama_lengkap;
    cout<<"No Handphone:";cin>>nomor_hp;
    cout<<"----------------------------------------"<<endl;

    //Pilih Kategori
    cout<<"\tKategori Cucian"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"1. Reguler (2 hari)"<<endl;
    cout<<"2. Kilat (1 hari)"<<endl;
    cout<<"3. Express (5 jam)"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Pilih No Kategori [1-3] : ";cin>>kategori;

    //Kondisi Switch Case
    switch(kategori)
    {
    case '1' :
        printf("%s", "Paket Reguler Cuci 2 hari\n");
        harga=10000;
        break;
    case '2' :
        printf("%s", "Paket Kilat Cuci 1 hari\n");
        harga=12000;
        break;
    case '3' :
        printf("%s", "Paket Express Cuci 5 jam\n");
        harga=15000;
        break;
    }

    cout<<"Berat Cucian (kg): ";cin>>berat;
    cout<<"----------------------------------------\n"<<endl;

    //Result Pemesanan Jasa Laundry
    cout<<"     Detail Pemesanan Laundry saya"<<endl;
    cout<<"----------------------------------------"<<endl;
    cout<<"Nama Customer: "<<nama_lengkap<<endl;
    cout<<"No. Handphone: "<<nomor_hp<<endl;
    cout<<"Kategori Cucian: "<<kategori<<endl;
    cout<<"Harga per kg: Rp. "<<harga<<endl;

    //Menghitung yang harus dibayarkan
    total=harga*berat;
    cout<<"Total Harga: Rp. "<<total<<endl;
    cout<<"========================================"<<endl;
    cout<<"Total Bayar: Rp. ";cin>>total_bayar;

    //Menghitung Kembalian
    kembalian=total_bayar-total;
    cout<<"Kembalian: Rp. "<<kembalian<<endl;
    cout<<"========================================\n\n"<<endl;

    //Closing
    cout<<"TERIMAKASIH - SELAMAT DATANG KEMBALI"<<endl;

    return 0;
}
