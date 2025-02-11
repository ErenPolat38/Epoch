#include <stdio.h>
#include <time.h>

// Tarih ve saat bilgisini tutan struct
struct TarihSaat {
    int yil;
    int ay;
    int gun;
    int saat;
    int dakika;
    int saniye;
};

// Epoch zamanini tutan union
union EpochZaman {
    time_t epoch;
};

// TarihSaat'i epoch zamanina ceviren fonksiyon
time_t epochZamaninaCevir(struct TarihSaat ts) {
    struct tm t;
    t.tm_year = ts.yil - 1900; // tm_year 1900'dan itibaren yillari tutar
    t.tm_mon = ts.ay - 1;      // tm_mon Ocak'tan itibaren aylar
    t.tm_mday = ts.gun;
    t.tm_hour = ts.saat;
    t.tm_min = ts.dakika;
    t.tm_sec = ts.saniye;
    t.tm_isdst = -1; // Yaz saati uygulamasi dikkate alinmiyor
    return mktime(&t);
}

// Iki epoch zamani arasindaki farki hesaplayan fonksiyon
double farkiHesapla(time_t baslangic, time_t bitis) {
    return difftime(bitis, baslangic);
}

int main() {
    struct TarihSaat ts1, ts2;
    union EpochZaman epoch1, epoch2;

    // Ilk tarih ve saat icin kullanici girdisi al
    printf("Ilk tarih ve saati girin (YYYY AA GG SS DD ss): ");
    scanf("%d %d %d %d %d %d", &ts1.yil, &ts1.ay, &ts1.gun, &ts1.saat, &ts1.dakika, &ts1.saniye);

    // Ikinci tarih ve saat icin kullanici girdisi al
    printf("Ikinci tarih ve saati girin (YYYY AA GG SS DD ss): ");
    scanf("%d %d %d %d %d %d", &ts2.yil, &ts2.ay, &ts2.gun, &ts2.saat, &ts2.dakika, &ts2.saniye);

    // Epoch zamanina cevir
    epoch1.epoch = epochZamaninaCevir(ts1);
    epoch2.epoch = epochZamaninaCevir(ts2);

    // Farki hesapla
    double fark = farkiHesapla(epoch1.epoch, epoch2.epoch);

    // Sonuclari yazdir
    printf("Ilk tarihin epoch zamani: %ld\n", epoch1.epoch);
    printf("Ikinci tarihin epoch zamani: %ld\n", epoch2.epoch);
    printf("Saniye cinsinden fark: %.0f\n", fark);

    return 0;
}
