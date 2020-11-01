//Program rata-rata nilai dan status kelulusan, dicompile dengan Dev-C++ (tidak diketahui apa bisa dicompile dengan Borland C++ dan Geany)
#include <iostream>
using namespace std;

int main ()
{
    string username,password,nilai;
    int menu,a,b,c,d;

    {
        cout << "Masukkan nama pengguna Anda: ";
        cin >> username;
        cout << "Masukkan kata sandi Anda: ";
        cin >> password;

       if (username == "Bruh")
{
if (password == "180618")
{
printf ("\nSelamat datang di program ini!");
menu:
printf ("\n\n====================================================");
printf ("\n          Program Input Nilai Mata Kuliah						 ");
printf ("\n====================================================");
printf ("\n(1) Algoritma dan Pemrograman	");
printf ("\n(2) Kalkulus");
printf ("\n");
printf ("\nMasukkan pilihan Anda: ");
cin>>menu;
switch(menu)
{
	case 1:
		printf ("\nMasukkan nilai-nilai Anda!");
		printf ("\n\nNilai harian: ");
		cin>>a;
		printf ("Nilai UTS: ");
		cin>>b;
		printf ("Nilai UAS: ");
		cin>>c;
		d=(a+b+c)/3;
		cout<<"\nAnda "<<nilai;
		if (d <=80) printf("tidak lulus"); 
         else printf("lulus");
        cout<<" Algoritma dan Pemrograman, dengan nilai "<<d<<"."<<endl;
		break;
    case 2:
		printf ("\nMasukkan nilai-nilai Anda!");
		printf ("\n\nNilai harian: ");
		cin>>a;
		printf ("Nilai UTS: ");
		cin>>b;
		printf ("Nilai UAS: ");
		cin>>c;
		d=(a+b+c)/3;
		cout<<"\nAnda "<<nilai;
		if (d <=80) printf("tidak lulus"); 
         else printf("lulus");
        cout<<" Kalkulus, dengan nilai "<<d<<"."<<endl;
		break;
}
}
else printf ("Kata sandi Anda salah!");
}
else if (password == "180618")
{
printf ("Nama pengguna Anda salah!");
}
else printf ("Nama pengguna dan kata sandi Anda salah!");
    }
}
