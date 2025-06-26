#### İşaretsiz 2'lik sayı sisteminde _(unsigned binary system)_ 8 bitlik alanda aşağıdaki tam sayıları ifade ediniz:

- 255
- 15
- 48
- 65
- 129

#### Cevap;

İkilik sayı sisteminde sayıları ifade edebilmek için sadece iki tane sayı mevcuttur, bunlar 0 ve 1 sayılarıdır. İkilik sayı tabanında taban değeri ikidir bu da basamak ağırlıklarının ikinin katları olarak ilerlediği anlamına gelir, decimal(onluk sayı sistemi) sistemde basamak ağırlıkları on sayısının katları şeklinde ilerler.

Yukarıda decimal olarak verilen sayıları aşağıdaki şekilde işaretsiz olarak ikilik tabandaki karşılıklarını yazabiliriz;

Aşağıdaki her bir gesterimdeki ikilik tabanda yer alan sekiz bitlik bloğun her bir dört bitlik parçasına **limble** adı verilmektedir ve bu bloklar hexdecimal(16 tabanı gösterimi) sayı gösteriminde bir sakama karşılık gelmektedir.

- 255 : 1111 1111  → $1 . 2^{7} + 1 . 2^{6} + 1 . 2^{5} + 1 . 2^{4} + 1 . 2^{3} + 1 . 2^{2} + 1 . 2^{1} + 1 . 2^{0}$ 
- 15&nbsp;: 0000 1111  → $0 . 2^{7} + 0 . 2^{6} + 0 . 2^{5} + 0 . 2^{4} + 1 . 2^{3} + 1 . 2^{2} + 1 . 2^{1} + 1 . 2^{0}$
- 48&nbsp; : 0011 0000  → $0 . 2^{7} + 0 . 2^{6} + 1 . 2^{5} + 1 . 2^{4} + 0 . 2^{3} + 0 . 2^{2} + 0 . 2^{1} + 0 . 2^{0}$
- 65&nbsp; : 0100 0001  → $0 . 2^{7} + 1 . 2^{6} + 0 . 2^{5} + 0 . 2^{4} + 0 . 2^{3} + 0 . 2^{2} + 0 . 2^{1} + 0 . 2^{0}$
- 129 : 1000 0001  → $1 . 2^{7} + 0 . 2^{6} + 0 . 2^{5} + 0 . 2^{4} + 0 . 2^{3} + 0 . 2^{2} + 0 . 2^{1} + 1 . 2^{0}$
