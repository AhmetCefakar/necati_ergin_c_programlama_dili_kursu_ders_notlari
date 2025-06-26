#### Aşağıda tanımlanan sayıları _16_'lık sayı sisteminde ifade ediniz:

- İşaretli ikilik sayı sisteminde _2 byte_'lık alanda yazılabilecek en küçük tam sayı
- İşaretli ikilik sayı sisteminde _2 byte_'lık alanda yazılabilecek en büyük tam sayı
- İşaretli ikilik sayı sisteminde _2 byte_'lık alanda yazılan -1 değeri


#### Cevap;

İşaretli ikilik sayı sisteminde $2^{16}$ adet sayı temsil edilebilir, bu sayıların yarısı pozitif yarısı negatif olacaktır.
Yazılabilecek en büyük sayı $2^{15} - 1$ ve en küçük sayı $-2^{15}$ olacaktır.

Hesaplamalar genellikle en yüksek anlamlı bit "0" ise pozitif sayı, "1" ise negatif sayı olarak kabul edilerek yapılır;

- $2^{15} - 1$ = 32,767 : 0111 1111 1111 1111 → _2 byte_'lık alanda yazılabilecek en büyük tam sayı
- $-2^{15}$: -32,768 : 1000 0000 0000 0000 → _2 byte_'lık alanda yazılabilecek en küçük tam sayı
- -1: 1111 1111 1111 1111 → Eksi bir sayısının gösterimi.
