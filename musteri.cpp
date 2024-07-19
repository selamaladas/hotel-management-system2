#include <iostream>
#include <ctime>
#include "Musteri.h"
#include "Oda.h"
using namespace std;
int Musteri::sonraki_no = 1;

Musteri::Musteri(string ad, string soyad, string telefon_no, string tc_kimlik_no, time_t kayit_zamani)
    : ad(ad), soyad(soyad), telefon_no(telefon_no), tc_kimlik_no(tc_kimlik_no), kayit_zamani(kayit_zamani) {
    sonraki_no++;
}

Musteri::Musteri(const Musteri& other)
    : ad(other.ad), soyad(other.soyad), telefon_no(other.telefon_no), tc_kimlik_no(other.tc_kimlik_no), kayit_zamani(other.kayit_zamani) {}

Musteri::~Musteri() {
    sonraki_no--;
    cout << "Müsteri nesnesi silindi.\n";
}

Musteri& Musteri::operator=(const Musteri& other) {
    if (this != &other) {
        ad = other.ad;
        soyad = other.soyad;
        telefon_no = other.telefon_no;
        tc_kimlik_no = other.tc_kimlik_no;
        kayit_zamani = other.kayit_zamani;
}
return *this;
}

bool Musteri::operator==(const Musteri& other) const {
return ad == other.ad && soyad == other.soyad && telefon_no == other.telefon_no && tc_kimlik_no == other.tc_kimlik_no && kayit_zamani == other.kayit_zamani;
}

bool Musteri::operator!=(const Musteri& other) const {
return !(*this == other);
}

Musteri Musteri::operator+(const Musteri& other) const {
Musteri yeniMusteri;
yeniMusteri.ad = ad + "-" + other.ad;
yeniMusteri.soyad = soyad + "-" + other.soyad;
yeniMusteri.telefon_no = telefon_no + "-" + other.telefon_no;
yeniMusteri.tc_kimlik_no = tc_kimlik_no + "-" + other.tc_kimlik_no;

yeniMusteri.kayit_zamani = time(0);
return yeniMusteri;
}
