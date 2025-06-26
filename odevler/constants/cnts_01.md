#### _int_ türünün _2_ byte _long_ türünün _4_ byte olduğu bir derleyicide aşağıdaki sabitlerin türünü yazınız:

C dilinde bir tam sayı türünün varsayılan türü **int** türüdür bu şu anlama gelir, eğer sayı **int** türünde tutulabiliyorsa türü **int** olacaktır eğer **int** türünün tutabileceği değerden büyük bir sayıysa kapasitesi **int** türünden daha büyük en küçük boyutlu veri tür kullanılacaktır.

- 'A'  → 1 byte ile temsil edilebildiği için _int_ türündedir.
- 32767  → Bu sayı 2 byte ile işaretli tam sayılar en fazla **32,767** değerini alabilir bu nedenle _int_ türündedir.
- 32768  → Bu sayı 2 byte ile işaretli tam sayı olarak tutulabilecek değerden bir fazla olduğu için _long_ türündedir.
- 50000  →  Bu sayı 4 byte ile temsil edilebilir bu nedenle _long_ türündedir.
- 0x7000  → Bu sayı ikilik sayı tabanında **0111 0000 0000 0000** olacaktır, bu nedenle de 4 byte ile temsil edilebilir ve _long_ türündedir.
- 0xFFFF  → Bu sayı ikilik sayı tabanında **1111 1111 1111 1111** olacaktır, bu nedenle de 4 byte ile temsil edilebilir ve _long_ türündedir.
- 50000U  → Bu sayı on tabanında işaretsiz sayıdır, işaretsiz sayılar 2 byte boyutunda en fazla **65,536** sayısı tutulabildiği için _int_ türündedir.
- 10000U  → Bu sayı on tabanında işaretsiz sayıdır, işaretsiz sayılar 2 byte boyutunda en fazla **65,536** sayısı tutulabildiği için _int_ türündedir.
- '\x1A'  → ?


