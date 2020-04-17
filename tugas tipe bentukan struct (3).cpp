#include <iostream>
#include <string>
using namespace std;
 
struct siswa{
    int no_induk ;
    string nama;
    float nilai ;
}; 
 
int main(){
    siswa yuslan, maul; //deklarasi object di luar struct
 
    yuslan.no_induk = 1;
    yuslan.nama = "Yuslandik";
    yuslan.nilai = 90.5;
 
    maul.no_induk = 2;
    maul.nama = "Syach maulana rauf";
    maul.nilai = 89.9;
 
    cout<<yuslan.nama<<" mendapatkan nilai "<<yuslan.nilai<<endl;
    cout<<maul.nama<<" mendapatkan nilai "<<maul.nilai<<endl;
 
    return 0;
}

