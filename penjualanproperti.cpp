#include<stdio.h>
#include<windows.h>
#include<iostream>
#include<conio.h>

using namespace std;

class Akun {
    public:
    string id, nama, pw, hp, tgl,email;
    Akun(string newid, string newnama, string newpw, string newhp, string newemail){
    id  = newid;
    nama = newnama;
    pw = newpw;
    hp = newhp;
    email = newemail;
    }
    string getid(){
    return id;
    }
    string getnama(){
    return nama;
    }
    string getpw(){
    return pw;
    }
};

void login();
void reg();
void Awal();
void judul();
void listrumah();
void belirumah();
void tipe21();
void tipe36();
void tipe45();
void tipe54();
void tipe60();
void yakin();
void yakin2();
void beli();
void form();
void kontak();
void aboutus();
void garis();

string email;
char h, id[10], pw[8], nama[30], hp[13], tgl[20];
Akun *A= NULL;
Akun A1 = Akun("tanditan", "Tandi Septana Taniawan", "123456", "085887008531", "tandiisptn26@gmail.com");
Akun A2 = Akun("rizalv","Muhammad Rizal Vahlevi", "123456", "081289369590", "rizalvahlevi@gmail.com");
Akun A3 = Akun("","","","","");


main()
{
    system("cls");
    system("color 0F");
   cout<<"\t\t\t\tLOADING . . ."<<endl;

   for (int i=0;i<80;i++)
   {
       Sleep(12);
       printf("%c",219);
   }
   cout<<"\n\t\t\t      Tekan Enter";
   getch();
    system("cls");
        login:
    char loop;
    double cp;
        judul();
      a:
    garis();
    system("cls");judul();
    garis();
    cout<<"\n\n\n\t         1. Login\n\t         2. Register\n\t         3. Keluar\n\n\t         Pilihan Anda : "; cin>>h;
    switch(h)
    {
    case '1':
        login();
        break;
    case '2':
        reg();
        break;
    case '3':
        getch();
        return 0;
    default:
    cout<<"\n\n\t   (Maaf, huruf yang Anda masukkan salah! (Masukan Y atau T)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
    getch();
    system("cls");
    goto a;
    }

    system("cls");judul();
    awal:
    menu:
        int pm;
        char ps, yn;
        cout<<"\t\t\t         = MENU ="<<endl;

        Awal();
        cout<<"\nPilih Menu : ";cin>>pm;
        //UTAMA
        if (pm==1)
            plh1:
            {system("cls");judul();
                    cout<<"         = MENU ="<<endl;
                    cout<<"\n1. List Rumah :"<<endl;
                    listrumah();
                    cout<<"\nPilih Salah satu :";
                    cin>>ps;
                    //KEDUA
                if ((ps=='G')||(ps=='g'))
                    {
                        system("cls");judul();goto awal;
                    }
                else if ((ps=='A')||(ps=='a'))
                    {
                        system("cls");judul();
                        tipe21();
                        getch();
                        goto plh1;
                    }
                else if ((ps=='B')||(ps=='b'))
                    {
                        system("cls");judul();
                        tipe36();
                        getch();
                        goto plh1;
                    }
                else if ((ps=='C')||(ps=='c'))
                    {
                        system("cls");judul();
                        tipe45();
                        getch();
                        goto plh1;
                    }
                else if ((ps=='D')||(ps=='d'))
                    {
                        system("cls");judul();
                        tipe54();
                        getch();
                        goto plh1;
                    }
                else if ((ps=='E')||(ps=='e'))
                    {
                        system("cls");judul();
                        tipe60();
                        getch();
                        goto plh1;
                    }
                else
                    {
                        system("cls");
                        cout<<"\n\n Pilihan Tidak Ada, Anda Kembali Ke Menu Utama\n\n"<<endl;
                        getch;
                        judul();
                        goto menu;
                    }
            }
        //UTAMA
        else if (pm==2) {system("cls");judul();
                    cout<<"         = MENU ="<<endl;
                    cout<<"\n2. Beli Rumah"<<endl<<endl;
                    cout<<"Pastikan Anda Telah Melihat Spesifikasi & Harga Yang Tertera Pada Menu List Rumah"<<endl<<endl;
                    cout<<"Type Rumah yang Tersedia : "<<endl;
                    listrumah();
                    cout<<"\nPilih Salah satu :";
                    cin>>ps;
                    //KEDUA
                if ((ps=='G')||(ps=='g'))
                    {
                        system("cls");judul();goto awal;
                    }
                else if ((ps=='A')||(ps=='a'))
                    {
                        system("cls");judul();
                        yakin();cout<<"21";yakin2();beli();
                        cin>>yn;
                        if ((yn=='y')||(yn=='Y'))
                        {
                           system("cls");judul();
                           form();
                            system("cls");judul();
                            cout<<"Ingin Melakukan Transaksi Kembali? [Y/N]";cin>>loop;
                            while ((loop=='y')||(loop=='Y'))
                                {
                                system("cls");judul();
                                goto awal;
                                }
                            cout<<"\nTerima Kasih Telah Menggunakan Aplikasi BliRumahKuy";

                        }
                        else
                        {
                            system("cls");judul();
                            goto awal;
                        }
                    }
                else if ((ps=='B')||(ps=='b'))
                    {
                        system("cls");judul();
                        yakin();cout<<"36";yakin2();beli();
                        cin>>yn;
                        if ((yn=='y')||(yn=='Y'))
                        {
                           system("cls");judul();
                           form();
                            system("cls");judul();
                            cout<<"Ingin Melakukan Transaksi Kembali? [Y/N]";cin>>loop;
                            while ((loop=='y')||(loop=='Y'))
                                {
                                system("cls");judul();
                                goto awal;
                                }
                            cout<<"\nTerima Kasih Telah Menggunakan Aplikasi BliRumahKuy";
                        }
                        else
                        {
                            system("cls");judul();
                            goto awal;
                        }
                    }
                     else if ((ps=='C')||(ps=='c'))
                    {
                        system("cls");judul();
                        yakin();cout<<"45";yakin2();beli();
                        cin>>yn;
                        if ((yn=='y')||(yn=='Y'))
                        {
                           system("cls");judul();
                           form();
                            system("cls");judul();
                            cout<<"Ingin Melakukan Transaksi Kembali? [Y/N]";cin>>loop;
                            while ((loop=='y')||(loop=='Y'))
                                {
                                system("cls");judul();
                                goto awal;
                                }
                            cout<<"\nTerima Kasih Telah Menggunakan Aplikasi BliRumahKuy";
                        }
                        else
                        {
                            system("cls");judul();
                            goto awal;
                        }
                    }
                     else if ((ps=='D')||(ps=='d'))
                    {
                        system("cls");judul();
                        yakin();cout<<"54";yakin2();beli();
                        cin>>yn;
                        if ((yn=='y')||(yn=='Y'))
                        {
                           system("cls");judul();
                           form();
                            system("cls");judul();
                            cout<<"Ingin Melakukan Transaksi Kembali? [Y/N]";cin>>loop;
                            while ((loop=='y')||(loop=='Y'))
                                {
                                system("cls");judul();
                                goto awal;
                                }
                            cout<<"\nTerima Kasih Telah Menggunakan Aplikasi BliRumahKuy";
                        }
                        else
                        {
                            system("cls");judul();
                            goto awal;
                        }
                    }
                     else if ((ps=='E')||(ps=='e'))
                    {
                        system("cls");judul();
                        yakin();cout<<"60";yakin2();beli();
                        cin>>yn;
                        if ((yn=='y')||(yn=='Y'))
                        {
                           system("cls");judul();
                           form();
                            system("cls");judul();
                            cout<<"Ingin Melakukan Transaksi Kembali? [Y/N]";cin>>loop;
                            while ((loop=='y')||(loop=='Y'))
                                {
                                system("cls");judul();
                                goto awal;
                                }
                            cout<<"\nTerima Kasih Telah Menggunakan Aplikasi BliRumahKuy";
                        }
                        else
                        {
                            system("cls");judul();
                            goto awal;
                        }
                    }
                    }
        else if (pm==3)
            {
            system("cls");judul();
            kontak();
            getch();
            system("cls");judul();
            goto menu;
            }
        else if (pm==4)
            {
            system("cls");judul();
            aboutus();
            getch();
            system("cls");judul();
            goto menu;
            }
                    //UTAMA
        else
                    {

                        system("cls");
                        cout<<"\n\n Pilihan Tidak Ada, Anda Kembali Ke Menu Utama\n\n"<<endl;
                        getch;
                        judul();
                        goto menu;
                    }

                     getch();
}


void login()
{
    system ("cls");
    x:
    garis();
    system("cls");judul();
    garis();
    cout<<"\n\n\n\n\t\t\t\t Silahkan Login"<<endl<<endl<<endl;
    cout<<"\t\t       Masukkan ID Username dan Password"<<endl;
    cout<<"\t\t    --------------------------------------";
    cout<<"\n\t\t       ID Username   :  "; cin>>id;
    cout<<"\n\n\t\t       Password      :  "; cin>>pw;
    cout<<"\t\t    --------------------------------------";
    if (id==A1.id)
    {
        if (pw==A1.pw)
        {
            A=&A1;
            getch();
        }
    else
        {
    cout<<"\n\n\n\n\t         (Maaf, ID Username atau Password Anda salah)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
            getch();
            system("cls");
            goto x;
        }
    } else if (id==A2.id)
    {
        if (pw==A2.pw)
        {
            A=&A2;
            getch();
        }
        else
        {
    cout<<"\n\n\n\n\t         (Maaf, ID Username atau Password Anda salah)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
            getch();
            system("cls");
            goto x;
        }
    } else if (id==A3.id)
    {
        if (pw==A3.pw)
        {
            A=&A3;
            getch();

        }
        else
        {
    cout<<"\n\n\n\n\t         (Maaf, ID Username atau Password Anda salah)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
            getch();
            system("cls");
            goto x;
        }
        }
    else
        {
    cout<<"\n\n\n\n\t         (Maaf, ID Username atau Password Anda salah)";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
            getch();
            system("cls");
            goto x;
        }
}

void reg()
{
    system ("cls");
    garis();
    system("cls");judul();
    garis();
    cout<<"\n\n\n\n\t\t\t Silahkan Lakukan Registrasi"<<endl;
    cin.ignore();
    cout<<"\t   -------------------------------------------------------------";
    cout<<"\n\n\n\t    Nama Lengkap  : "; cin.getline(nama,30);
    cout<<"\n\t    Nomor HP/Telp : "; cin>>hp;
    cout<<"\n\t    ID Username   : "; cin>>id;
    cout<<"\n\t    Password      : "; cin>>pw;
    A3.nama=nama;
    A3.id=id;
    A3.hp=hp;
    A3.email=email;
    A3.pw=pw;
    system("cls");
    garis();
    cout<<"\n\n\t  =============== Selamat Datang di BliRumahKuy ==============="<<endl;
    garis();
    cout<<endl<<endl<<endl<<endl;
    cout<<"\n\n\t ***Selamat! akun anda telah dibuat, silahkan login kembali***";
    cout<<"\n\n\t            Silahkan tekan enter untuk melanjutkan";
    getch();
    login();
}

void Awal()
{
        cout<<"\n1. List Rumah"<<endl;
        cout<<"2. Beli Rumah"<<endl;
        cout<<"3. Kontak Kami"<<endl;
        cout<<"4. Tentang Kami"<<endl;
}

void judul()
{

    system("color 0B");
    cout<<"\t\t\t==========================="<<endl;
    cout<<"\t\t\tAPLIKASI PENJUALAN PROPERTI"<<endl;
    cout<<"\t\t\t        BliRumahKuy        "<<endl;
    cout<<"\t\t\t==========================="<<endl<<endl;
}

void listrumah()
{
    system("color 0B");
    cout<<"\n\tA. Tipe 21"<<endl;
    cout<<"\tB. Tipe 36"<<endl;
    cout<<"\tC. Tipe 45"<<endl;
    cout<<"\tD. Tipe 54"<<endl;
    cout<<"\tE. Tipe 60"<<endl;
    cout<<"\tG. Kembali ke menu utama"<<endl;
    cout<<"\n\nSemua Properti Diatas Dimiliki Oleh BliRumahKuy\nUntuk Alamat Perumahan Tersebut Terletak Di\nPerum BliRumahKuy Bougenville Jl.Keadilan Timur No.69 Wakanda Barat Daya"<<endl;
}

void tipe21()
{
    cout<<"\n\t\t\t Spesifikasi & Harga \n\nTersedia : \n\n\t- 1 Kamar Tidur\n\t- 1 Kamar Mandi\n\t- 1 Ruang Tamu & Dapur"<<endl;
    cout<<"\nHarga    : \n\n\t- Rp. 80.000.000,00 (delapan puluh juta rupiah)"<<endl;
}

void tipe36()
{
    cout<<"\n\t\t\t Spesifikasi & Harga \n\nTersedia : \n\n\t- 2 Kamar Tidur\n\t- 1 Kamar Mandi\n\t- 1 Ruang Tamu & Dapur\n\t- Garasi"<<endl;
    cout<<"\nHarga    : \n\n\t- Rp. 100.000.000,00 (seratus juta rupiah)"<<endl;
}

void tipe45()
{
    cout<<"\n\t\t\t Spesifikasi & Harga \n\nTersedia : \n\n\t- 2 Kamar Tidur\n\t- 1 Ruang Keluarga\n\t- 1 Kamar Mandi\n\t- 1 Ruang Tamu & Dapur\n\t- Garasi\n\t- Taman Minimalis Depan & Belakang Rumah"<<endl;
    cout<<"\nHarga    : \n\n\t- Rp. 200.000.000,00 (dua ratus juta rupiah)"<<endl;
}

void tipe54()
{
    cout<<"\n\t\t\t Spesifikasi & Harga \n\nTersedia : \n\n\t- 3 Kamar Tidur\n\t- 1 Ruang Keluarga\n\t- 1 Kamar Mandi\n\t- 1 Ruang Tamu & Dapur\n\t- Garasi\n\t- Taman Yang Luas Depan & Belakang Rumah"<<endl;
    cout<<"\nHarga    : \n\n\t- Rp. 300.000.000,00 (tiga ratus juta rupiah)"<<endl;
}

void tipe60()
{
    cout<<"\n\t\t\t Spesifikasi & Harga \n\nTersedia : \n\n\t- 2 Lantai\n\t- 4 Kamar Tidur\n\t- 1 Ruang Keluarga\n\t- 2 Kamar Mandi\n\t- 1 Ruang Tamu & Dapur\n\t- Garasi\n\t- Taman Yang Luas Depan & Belakang Rumah"<<endl;
    cout<<"\nHarga    : \n\n\t- Rp. 500.000.000,00 (lima ratus juta rupiah)"<<endl;
}

void yakin()
{
    cout<<"Apakah Anda Yakin Melakukan Pembelian Rumah Tipe ";
}

void yakin2()
{
    cout<<"\nDengan Spesifikasi & Harga Yang Tertera Di List Rumah ?";
}

void beli()
{
    cout<<"\n\nJika Yakin Ketik [Y] Dan Anda Akan Dialihkan Ke Form Pembayaran"<<endl;
    cout<<"Jika Tidak Yakin Ketik [N] Dan Anda Akan Kembali Ke Menu Utama"<<endl;
    cout<<"\nPilihan Anda : ";
}

void form()
{
    char nb[200];
    char nr[200];
    char ana[200];
    char anb[200];
    char anc[200];

    cout<<"Silahkan Masukan Nama Bank & No. Rekening Anda!\nData Ini Akan Digunakan Oleh Sistem Untuk Mendeteksi Secara Otomatis Pembayaran Yang Dilakukan"<<endl;
    cout<<"\nNama Bank (akronim)\t: ";cin>>nb;
    cout<<"No Rekening\t\t: ";cin>>nr;
    cout<<"Atas Nama\t\t: \n";
    cout<<"         Nama Depan        : ";cin>>ana;
    cout<<"         Nama Tengah       : ";cin>>anb;
    cout<<"         Nama Belakang     : ";cin>>anc;

    system("cls");judul();
    cout<<"Silahkan Screenshot Struk Dibawah Ini Sebagai Bukti Rencana Pembelian\n\nStruk Rencana Pembayaran\n"<<endl;
    cout<<"Rencana Pembelian Oleh:\n\tNama Bank\t: "<<nb<<"\n\tNo Rekening\t: "<<nr<<"\n\tAtas Nama\t: "<<ana<<" "<<anb<<" "<<anc<<endl;
    cout<<"Lakukan Pembayaran Ke :\n\tNama Bank\t: BI\n\tNo Rekening\t: 1638725593740173\n\tAtas Nama\t: BliRumahKuy"<<endl<<endl;
    cout<<"Terima Kasih Telah Menggunakan Aplikasi BliRumahKuy";
    getch();
    system("cls");judul();

}

void kontak()
{
    system("color 0B");
    cout<<"Instagram : @BliRumahKuy"<<endl;
    cout<<"WhatsApp  : +62 852 6969 6969"<<endl;
    cout<<"Facebook  : BliRumahKuy"<<endl;
    cout<<"Line      : @bd6jf9"<<endl;
    cout<<"Website   : www.blirumahkuy.com";
}

void aboutus()
{
    system("color 0B");
    cout<<"BliRumahKuy Merupakan Start Up Yang Didirikan\n";
    cout<<"Di Karawang Pada 6 September 2069, Merupakan\n";
    cout<<"Sebuah Start Up Yang Berfokus Terhadap Penjualan\n";
    cout<<"Properti. Semenjak 6 September 2012 BliRumahKuy\n";
    cout<<"Masuk Kedalam Jajaran 10 Unicorn Di Indonesia.\n";
    cout<<"Kami Terus Berupaya Melakukan Yang Terbaik Untuk\n";
    cout<<"Kedepannya. 'Beli Rumah ? BliRumahKuy Aja' ";
}

void garis()
{
    cout<<"\n................................................................................";
}
