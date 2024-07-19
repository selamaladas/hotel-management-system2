#include <iostream>
#include <ctime>
#include "Oda.h"
#include "Musteri.h" 
using namespace std;
int main() {
	setlocale(LC_ALL,"Turkish");
    Oda oda1(101, "standart", 150.0 );
    Oda oda2(102, "aile", 200.0);
    Oda oda3(103, "vip", 300.0);
    
 
    cout << "Hos geldiniz \n";
    cout << "Otel Hizmetleri:\n";
    cout << "----------------\n";
    cout << "1. Y�ksek hizli internet hizmeti\n";
    cout << "2. 7/24 oda servisi\n";
    cout << "3. Y�zme havuzu ve spa\n";
    cout << "Mevcut odalar:\n";
    cout << "1. Oda 1\n";
    cout << "2. Oda 2\n";
    cout << "3. Oda 3\n\n";

   
    string ad, soyad, telefon_no, tc_kimlik_no;
    cout << "Adinizi giriniz: ";
    cin >> ad;
    cout << "Soyadinizi giriniz: ";
    cin >> soyad;
    cout << "Telefon numaranizi giriniz: ";
    cin >> telefon_no;
    cout << "TC Kimlik No'nuzu giriniz: ";
    cin >> tc_kimlik_no;

  
    time_t simdi = time(0);
    Musteri musteri(ad, soyad, telefon_no, tc_kimlik_no, simdi);

   
    int secim;
    cout << "Rezerve etmek i�in bir oda se�iniz :";
    cin >> secim;

    Oda *secilenOda;
    switch(secim) {
        case 1:
            secilenOda = &oda1;
            break;
        case 2:
            secilenOda = &oda2;
            break;
        case 3:
            secilenOda = &oda3;
            break;
        default:
            cout << "Ge�ersiz se�im. �ikiliyor.\n";
            return 1;
    }

   
    int gunSayisi;
    cout << "Ka� gece kalacaginizi giriniz: ";
    cin >> gunSayisi;

    
    int kisi_sayisi;
    cout << "Ka� ki�i kalacaginiz giriniz: ";
    cin >> kisi_sayisi;
    secilenOda->setKisiSayisi(kisi_sayisi);

    double toplamUcret = secilenOda->getFiyat() * gunSayisi;

    
    cout << "\nSe�ilen Oda Detaylar�\n";
    cout << "Numara: " << secilenOda->getNumara() << "\n";
    cout << "Tip: " << secilenOda->getTip() << "\n";
    cout << "Fiyat: " << secilenOda->getFiyat() << "\n";
    cout << "Ki�i Say�s�: " << secilenOda->getKisiSayisi() << "\n";
    cout << "Kalma S�resi: " << gunSayisi << " gece\n";
    cout << musteri.getAd() << " " << musteri.getSoyad() << "\t�demeniz para: "<< toplamUcret << " TL\n";
    cout << "Toplam Oda Sayisi: " << Oda::getOdaSayisi() << "\n";


    if (oda1 == oda2) {
        cout << "Oda 1 ve Oda 2 ayni.\n\n";
    } else {
        cout << "Oda 1 ve Oda 2 farkli.\n\n";
    }

    
    cout << "M�steri Bilgi: \n";
    cout << "adSoyad: " << musteri.getAd() << " " << musteri.getSoyad() << "\n";
    cout << "Telefon No: " << musteri.getTelefonNo() << "\n";
    cout << "TC Kimlik No: " << musteri.getTcKimlikNo() << "\n";
    cout << "Sonraki M��teri No: " << Musteri::getSonrakiNo() << "\n";

    return 0;
}
