### İşaretli ikilik sayı sisteminde *(signed binary system)*

- 1 byte'lık alanda yazılabilecek en küçük tamsayı nedir? 
- 1 byte'lık alanda yazılabilecek en büyük tamsayı nedir?
- 2 byte'lık alanda yazılabilecek en küçük tamsayı nedir?
- 2 byte'lık alanda yazılabilecek en büyük tamsayı nedir?
- 4 byte'lık alanda yazılabilecek en küçük tamsayı nedir?
- 4 byte'lık alanda yazılabilecek en büyük tamsayı nedir?
- 8 byte'lık alanda yazılabilecek en küçük tamsayı nedir? (Yaklaşık bir sayı yazabilirsiniz.)
- 8 byte'lık alanda yazılabilecek en büyük tamsayı nedir? (Yaklaşık bir sayı yazabilirsiniz.)

#### Cevap;

İşaretli tam sayı sisteminde bir sayıyı göstermek için kullanılan toplam alanın yarısını pozitif ve yarısını negatif sayıları göstermek için ayırırız, bu ayrımı yaparken **0** rakamının çoğunlukla pozitif olarak gösterilmesi tercih edilir bu nedenle pozitif tarafta işaret değerindne bağımsız gösterilebilecek sayı adedi negatif tarafta gösterilebilecek sayı adatinden bir eksik olur. 
İşaretli sayıları göstermek istediğimizde en anlamlı biti(en sol bit) işaret biti olarak ayırırız, çoğunlukla bu bit **0** ise sayının işareti pozitif, **1** ise sayının işareti negatif kabul edilir. Mesala 1 byte 8 bit'ten oluşur ve 1 bayte'lık alanda işaretli tam sayı gösteriminde en büyük pozitif sayı **"0111 1111"** şeklinde olacaktır bu sayı **"$0 . 2^{7} + 1 . 2^{6} + 1 . 2^{5} + 1 . 2^{4} + 1 . 2^{3} + 1 . 2^{2} + 1 . 2^{1} + 1 . 2^{0}$"** şeklinde hesaplanırsa **127** olduğu görülecektir.

- 1 byte'lık alanda yazılabilecek en küçük tamsayı nedir?  →  $-\frac{2^{8}}{2} = -2^{8 - 1}$ hesaplamasından **-128** olduğu bulunur. 
- 1 byte'lık alanda yazılabilecek en büyük tamsayı nedir?  →  $\frac{2^{8}}{2} - 1 = 2^{8 - 1} - 1$ hesaplamasından **127** olduğu bulunur.
- 2 byte'lık alanda yazılabilecek en küçük tamsayı nedir?  →  $-\frac{2^{16}}{2} = -2^{16 - 1}$ hesaplamasından **-32,768** olduğu bulunur.
- 2 byte'lık alanda yazılabilecek en büyük tamsayı nedir?  →  $\frac{2^{16}}{2} - 1 = 2^{16 - 1} - 1$ hesaplamasından **32,767** olduğu bulunur.
- 4 byte'lık alanda yazılabilecek en küçük tamsayı nedir?  →  $-\frac{2^{32}}{2} = -2^{32 - 1}$ hesaplamasından **-2,147,483,648** olduğu bulunur.
- 4 byte'lık alanda yazılabilecek en büyük tamsayı nedir?  →  $\frac{2^{32}}{2} - 1 = 2^{32 - 1} - 1$ hesaplamasından **2,147,483,647** olduğu bulunur.
- 8 byte'lık alanda yazılabilecek en küçük tamsayı nedir?  →  $-\frac{2^{64}}{2} = -2^{64 - 1}$ hesaplamasından **-9,223,372,036,854,775,808** olduğu bulunur.
- 8 byte'lık alanda yazılabilecek en büyük tamsayı nedir?  →  $\frac{2^{64}}{2} - 1 = 2^{64 - 1} - 1$ hesaplamasından **9,223,372,036,854,775,807** olduğu bulunur.
