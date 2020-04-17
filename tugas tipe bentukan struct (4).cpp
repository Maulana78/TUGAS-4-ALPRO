#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

using namespace std;

//Struct pertama
struct data_tanggal
{
    int tanggal;
    int bulan;
    int tahun;
};

//Struct dalam struct
struct data_mahasiswa
{

    long int nim;
    char nama[100];
    char fakultas[100];
   
};

