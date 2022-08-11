# SICIRT
SICIRT: Multiplayer Horror Escape Room


Config/ Burda kontrol ve ayar inileri mevcut, bunları unrealın içinden Project Settings kısmından da düzenleyebiliyoruz

Content/  
SICIRT/ bizim oyuna münhasır dosyaları buraya koyuyorum, şimdilik içinde bitane default map, GM ve KANKA karakter ve controller leri ve de iki tane ui widget mevcut  EasyBuildingSystem/ GM Buildingi için kullanabileceğimizi düşündüğüm bi plugin, kendi karakteri ve controlleri mevcut, GM karakteri de bunun child ı, ayrıca içinde bi miktar kıyak asset de var map yapımı için
HorrorEngine/ malum türk yapımı korku motorumuz, içinden ihtiyacımız kadarını alalım
StarterContent/ unrealın starter contenti, basit testingler ve test mapları için kullanılabilecek ufak tefek assetler var incelersin
TPSStarterContent/ projeyi TPS olarak açtığımda unrealın içine koyduğu default assetler yine, unrealın default karakter dosyaları referans almak için lazım oluyo diye buraya arşivledim
Plugins/ALS-Refactored/ ALS'nin dosyaları için subtree açtım plugin güncellendikçe çekebiliriz, onun için ALS düzenlemelerini plugin dosyalarına değil Content/SICIRT/Karakter içindeki childına yaptım

Source/ Burda C++ kaynaklar mevcut
