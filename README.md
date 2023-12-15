# Distance Measurement with Sharp GP2Y0A02YK0F Infrared Distance Sensor 20-150 cm

Bu proje, bir mesafe sensörü kullanarak analog değeri ölçer, bu değeri gerilime dönüştürür ve ardından belirli bir formülü kullanarak gerçek mesafeyi hesaplar. Bu mesafe, seri monitöre ve bir LED'e yazdırılır. Mesafe belirli bir eşik değerinin altında ise, LED yanar.

## Donanım Gereksinimleri
- Arduino (veya benzeri bir mikrodenetleyici)
- Mesafe Sensörü (örneğin, Sharp GP2Y0A02YK0F)
- Bir LED ve direnç
- Bağlantı kabloları

## Bağlantılar
- Mesafe sensörünü Arduino'nun analog pinine bağlayın (A0 gibi).
- LED'i Arduino'nun bir dijital pinine (örneğin, 13) bağlayın.

## Kullanım
1. Arduino IDE veya uyumlu bir geliştirme ortamında kodu açın.
2. Arduino kartınıza uygun portu ve kartı seçin.
3. Kodu Arduino kartınıza yükleyin.
4. Arduino kartınızı bilgisayarınızdan çıkarın ve bağlantıları yapın.
5. Seri Monitörü açın (Tools > Serial Monitor).
6. Mesafe sensörünü belirli bir nesnenin üzerine yönlendirin.
7. Seri Monitörde ölçülen analog değer, gerilim ve hesaplanan mesafe değerini görebilirsiniz.

## Mesafe Hesaplama Formülü
Mesafe hesaplamak için kullanılan formül:

Mesafe (cm) = 17.493 / (Gerilim - 0.3081)

![Uygulama Ekran Görüntüsü](https://cdn.discordapp.com/attachments/1031646083539021847/1185337653240004759/WhatsApp_Gorsel_2023-12-15_saat_20.42.33_a34b54a6.jpg?ex=658f3eb7&is=657cc9b7&hm=5af747efcf94136b2d16752ab59ef9d1e3a221396a054d6ffb3ef6db16d6579e&)
![Uygulama Ekran Görüntüsü](https://cdn.discordapp.com/attachments/1031646083539021847/1185337693681492028/WhatsApp_Gorsel_2023-12-15_saat_20.42.17_4de1c3fb.jpg?ex=658f3ec0&is=657cc9c0&hm=971e0553a9b36d70fd16ef50867a181d7a31017cb7b1bb469f0151f74f33cadc&)


Bu formül, sensörün çıkış voltajını gerçek mesafeye dönüştürmek için kullanılmaktadır.

# AkarGuard
![AkarGuard Logo](https://media.discordapp.net/attachments/1001593153276624917/1180253591525658825/akarguardyazili1.jpg?ex=658f34d0&is=657cbfd0&hm=1acfeb3ccb7a7cd4546fc1b05ecb9482a4e111124e9d28e56bbae3c08c1f407d&=&format=webp&width=1440&height=480)