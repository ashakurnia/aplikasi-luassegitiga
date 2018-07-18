#include <conio.h>
#include <iostream>
#include <stdio.h>
using namespace std;

class luasSegitia
{
public:
 int alas, tinggi;
 float luas;

 int hitungLuas(){
  luas = 0.5 * alas * tinggi;
 }
 
};

main(){
 luasSegitia st;

 cout<<"Masukan Alas   :";cin>>st.alas;
 cout<<"Masukan Tinggi :";cin>>st.tinggi;

 st.hitungLuas(); // Menghitung Luas Segitiga

 cout<<"Luas Segitiga  :"<<st.luas;

 getch();
}
