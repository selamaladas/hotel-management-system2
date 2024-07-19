#include<iostream>
#include "Oda.h"
using namespace std;
int Oda::oda_sayisi = 0;

Oda::Oda(int numara, string tip, double fiyat,  int kisi_sayisi)
    : numara(numara), tip(tip), fiyat(fiyat), kisi_sayisi(kisi_sayisi) {
    oda_sayisi++;
}

Oda::Oda(int numara, string tip, double fiyat)
    : numara(numara), tip(tip), fiyat(fiyat), kisi_sayisi(1) {
    oda_sayisi++;
}

bool Oda::operator==(const Oda& other) const {
    return numara == other.numara && tip == other.tip && fiyat == other.fiyat &&
           kisi_sayisi == other.kisi_sayisi;
}

Oda Oda::operator+(double value) const {
    return Oda(numara, tip, fiyat + value, kisi_sayisi);
}
