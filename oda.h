#ifndef ODA_H
#define ODA_H
#include <iostream>
#include <string>
using namespace std;

class Oda {
private:
    int numara;
    string tip;
    double fiyat;
    int kisi_sayisi;
    static int oda_sayisi;

public:
    
    Oda(int numara, string tip, double fiyat, int kisi_sayisi);
    Oda(int numara, string tip, double fiyat);

    
    int getNumara() const { return numara; }
    string getTip() const { return tip; }
    double getFiyat() const { return fiyat; }
    int getKisiSayisi() const { return kisi_sayisi; }

    
    void setKisiSayisi(int kisi_sayisi) { this->kisi_sayisi = kisi_sayisi; }

    
    static int getOdaSayisi() { return oda_sayisi; }

    bool operator==(const Oda& other) const;
    Oda operator+(double value) const;
};
#endif
