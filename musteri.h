#ifndef MUSTERI_H
#define MUSTERI_H
#include <iostream>
#include <string>
#include "Oda.h"
class Musteri {
private:
    string ad;
    string soyad;
    string telefon_no;
    string tc_kimlik_no;
    time_t kayit_zamani;
    static int sonraki_no;

public:

    Musteri(string ad = "", string soyad = "", string telefon_no = "", string tc_kimlik_no = "", time_t kayit_zamani = 0);
    Musteri(const Musteri& other); 
    ~Musteri(); 
    
   
    string getAd() const { return ad; }
    string getSoyad() const { return soyad; }
    string getTelefonNo() const { return telefon_no; }
    string getTcKimlikNo() const { return tc_kimlik_no; }
    time_t getKayitZamani() const { return kayit_zamani; }

  
    Musteri& operator=(const Musteri& other); 
    bool operator==(const Musteri& other) const; 
    bool operator!=(const Musteri& other) const; 
    Musteri operator+(const Musteri& other) const; 

  
    static int getSonrakiNo() { return sonraki_no; }
};
#endif
