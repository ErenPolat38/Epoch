Epoch Kullanımı
Bu proje, kullanıcının girdiği iki farklı tarih ve saat arasındaki zaman farkını epoch zamanı üzerinden hesaplayan bir C programıdır.

Epoch Zamanı Nedir?
Epoch, 1 Ocak 1970 UTC 00:00:00'dan itibaren geçen toplam saniyeyi ifade eder. Birçok sistem ve programlama dili, tarih hesaplamalarını epoch zamanı üzerinden yapar.

Özellikler
Kullanıcıdan iki farklı tarih ve saat bilgisi alır.
Girilen tarihleri epoch zamanına çevirir.
İki tarih arasındaki zaman farkını saniye cinsinden hesaplar.
Kullanıcıya epoch zamanı ile birlikte farkı gösterir.
Kurulum ve Kullanım
1. Kaynak Kodun İndirilmesi
Aşağıdaki komutları kullanarak projeyi klonlayabilirsiniz:

sh
Kopyala
Düzenle
git clone https://github.com/kullaniciadi/tarih-farki-epoch.git
cd tarih-farki-epoch
2. Programın Derlenmesi ve Çalıştırılması
sh
Kopyala
Düzenle
gcc tarih_farki.c -o tarih_farki
./tarih_farki
3. Program Kullanımı
Program, kullanıcıdan YYYY AA GG SS DD ss formatında iki tarih ve saat bilgisi alır.
Tarihler epoch zamanına çevrilir.
İki tarih arasındaki fark saniye cinsinden ekrana yazdırılır.
Örnek Kullanım
Aşağıdaki giriş verileri kullanıldığında program şu şekilde çalışır:

sh
Kopyala
Düzenle
Ilk tarih ve saati girin (YYYY AA GG SS DD ss): 2024 02 11 14 30 00  
Ikinci tarih ve saati girin (YYYY AA GG SS DD ss): 2024 02 12 16 45 30  
Çıktı:

sh
Kopyala
Düzenle
Ilk tarihin epoch zamani: 1707658200  
Ikinci tarihin epoch zamani: 1707746730  
Saniye cinsinden fark: 88530
Sonuç olarak iki tarih arasındaki fark 88.530 saniye (yaklaşık 24 saat 35 dakika 30 saniye) olarak hesaplanmıştır.

Kullanılan Teknolojiler
C Programlama Dili
time.h kütüphanesi (Zaman hesaplamaları için)
Günlük Hayatta Kullanım Alanları
Bu program, aşağıdaki gibi birçok alanda kullanılabilir:

Çalışma süresi takibi
Uçuş ve tren yolculuk sürelerinin hesaplanması
Sistem log analizleri
Spor ve egzersiz sürelerinin hesaplanması
