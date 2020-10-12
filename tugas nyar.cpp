#include<iostream>
using namespace std;
int main()
{
    char nomer[20];
    int totW;
    int jam,totJ;
    int w;
  system ("color 02") 
    ;cout<<"+++++ Selamat datang di Joni Net +++++"<<endl<<endl;
 
 
    cout<<"--------------------------------------------------------------\n";
    cout<<"                   Tarif Rp 5000 per 1 jam \n\n";
    cout<<"              Nomer PC :  ";cin>>nomer;
    cout<<"--------------------------------------------------------------\n\n\n";
    cout<<"Berapa Lama Kamu Bermain :   \n";
    cout<<"masukkan jam :";
    cin>>jam;
   
 
    totJ=jam*1*5000;
 
 
    cout<<" Harus Membayar Sebesar :   Rp. ";
    totW=totJ;
    cout<<totW<<endl<<endl;
    cout<<"--------------- Terima Kasih ----------------\n";
    cin>>w;
   return 0;
}
