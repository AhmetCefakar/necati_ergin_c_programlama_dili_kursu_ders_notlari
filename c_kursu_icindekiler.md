1. Ders
    1. Kurs Hakkında Bilgi
        - **Algoritmik Training**
        - **Undefined behavior**
    2. Giriş Konuları
        - **Imperative**
        - **Procedurel**
        - **Sistem Programlama**
        - **Imperative/Declerative**
        - **Tiobe sitesi**
        - **Programing Pradigm**
        - **Object Oriantid Programming**
        - **Multi Paradigm**
        - **Generic Programming**
        - **Procedural programlama**
        - **Functional decomposition**
        - **Comity Driven Languages**
        - **Assambler Program**
        - **Portable Assembly**
        - **Static typing/Dynamic typing**
        - **Algorithm**
        - **C language Standard(Specification)**
        - **Standard Comformad**
    3. Dillerin Standart(Draft, Specification) Dokümanları Önemlidir
        - **C Standart(Draft, Specification) Dokümanları**
2. Ders
    1. C Dilinin Tarihi
        - **Weak type checking** ve **Strong type checking**
        - **Fortran**, **Cobol**, **Algol(IBM'in geliştirdiği ve C'nin atası kabul edilen bir dil)**, **BCPL**, 
        - **Ken Thompson** ve **Dennis Ritchie**
        - **The C Programming Language** kitabı
        - **Clacick C** ya da **Traditional C**
        - C dilinin **K & R** dönemi ve **ANSI-ISO C89** standardı
        - **Algol --> BCPL --> B Language --> New B Language(Ara bir dil denilebilir) --> C Language**
        - **Ana akım derleyiciler(main stream compiler)[GCC, Clang, Microsolf C ve C++ compiler, IBM compiler, ARM temelli derleyiciler]**
    2. Temeller
        - **source file**, **.c file**, **implementetion file**, **code file**
        - **Translator**, **Compiler**
        - **Preprocessing-time**, **compile-time**, **link-time**, **run-time**
        - **compile-time error**, **link-time error**, **run-time error**
        - **C öğrenmek demek Ön İşlemci komutlarını da öğrenmeyi gerektiriyor**
        - **Token**, **Lexical Analysis**, **Diagnostic(Bulgu iletisi)**
        - **Visual Studio**, **Qt creator**, **Eclipse**, **Xcode**, **C lion(Jetbrains)**, **Dev-C++**, **Code::Blocks**
        - **Well-Formd**, **Ill-Formd**
        - **Invalid(code)**, **Illegal(code)**
        - **Valid(code)**, **Legal(code)**
        - **Static Code Analysis(Linter)**
        - **As-if rule(sanki)[C standardı bu terimi kullanmamaktadır]**
        - **Observable Behavior(Gözlenebilir Davranış)**
    3. Terminoloji Terimleri
        - **Token(Atom)**
        - **Tokenizing(Atomlarına ayrıştırma)** ya da **Lexical Analyzer**
        1. Token türleri
3. Ders
    1. Token Türleri Devam
    2. C Dilinin Sözdiziminde(Syntax) En Çok Kullanılan Terimler
        1. Statement(Deyim)
            - **Declaration Statement(Bildirim Olan Deyimler)**
            - **Non Declaration Statement(Executable Statement)(Bildirim Olmayan Deyimler)**
            - **Name lookup**
            - **Context control**
        2. Expression(İfade)
        3. Deyimler(statement) Devam
            1. Expression Statement(İfade Deyimi)
            2. Compound Statement(Bileşik Deyim, Bloklu Deyim)
            3. Null Statement(Boş Deyim)
            4. Control Flow Statement(Akış Kontrol Deyimi)
        4. C dilindeki Object(Nesne) Kavramı
            - **Type System**
            - **Basic Types**, **Fundamentals Types**, **Build-in Types**, **Default Types**, **Primitive Types**
            - **Tam sayı(Naturel Number)** ve **Rasyonel sayı(Rational number)**
            - **User Defined Types**, **struct**, **union**, **enum**
    3. Expression Types(ifade Türleri)
        - **L value expression** ve **R value expression**
    4. Sayı Sistemleri
        - **Taban Aritmetiği**
        -  **sayı tabanı(base)** ve **sayı basamağı(digit)**
        - **ikilik(binary)**, **sekizlik(octal)**, **onluk(decimal)**, **onaltılık(hexadecimal)**
        - **Bit**, **Binary digit** 
4. Ders
    1. Sayı sistemleri
        - **Word**, **Dword(double word)**, **Nibble**
        - **MSD(Most Significant Digit/Bit)** ve **LSD(List Significant Digit/Bit)**
        1. Bire tümleyen işlemi(One's complement)
            - **Bitwise Not Operant**
        2. İkiye tümleyen işlemi(Two's complement)
            - **Sign Bit**
        3. Diğer Sayı tabanları
            - **Hexedecimal system**
    2. C'deki Punctuation Character
    3. C Dili'ne Giriş
        1. C'de Function Yapısı
    4. Data Types in C
        - **Static type** ve **Dynamic type**
        - **Basic Data Types** ve **User defined Data Types**
        1. C Dilindeki Basic Data Types
            1. Integer Types(Tamsayı Türleri)
            2. Floating Types(Kesirli Sayı Türleri)
    5. Değişkenlerin Bildirilmesi ve Tanımlanması
        - "**Declaration(bildirim)**" ve "**Definition(tanımlama)**" terimleri
        - **Pure Syntax** ve **Initialization(Initializing) Syntax**
        1. Veri Türleri Kullanımı
5. Ders
    1. Değişken Adlarının Bildirilmesi
        - **Pure Syntax**
        - **Initializing Expression(Initializer)**
        1. Adlandırmalarda Dikkat Edilmesi Gereken Durumlar
            - **Coding Convention**, **Coding Style**, **Naming Conventions**
            - **Name Collision(ad Çakışması)** ve **name lookup** kavramları
            - **Block Scope**, **File Scope**
            - **Storage duration(Ömür)**
            - **Global Variable**, **Local Variable**
            - **Global name space** ve **Local name space**
    2. Alttaki Tanımlamaları Bilmemek C Dilini Hiç Bilmemek Demektir
        1. Undefined behavior(tanımsız davranış)["ub" diye kısaltılıyor]
        2. Unspecified behavior(belirsiz davranış)
        3. Implementation defined behavior(derleyiciye bağımlı)
    3. C Dilinde Scope(Kapsam) Kavramı
        - **Scope(Kapsam)**, **Identifier(ad)**
        - **File scope(Dosya kapsamı)**
        - **Block scope(Blok kapsamı)**
        - **Function Prototype scope(Fonksiyon prototip kapsamı)**
        - **Function scope(Fonksiyon kapsamı)**
        - **Nested block**
6. Ders
    1. Varlık Tanımlama Kapsamları(scope)
        - **Name Collagen**
        - **Name Lookup**
        - **Nested Block**, **Enclosing Block**
    2. Functions(Kursun 1. Çeyreğinin en önemli konusu)
        1. Implicit int(Default-int) Rule
            - **backwards compatible**
        2. Fonksiyonların Bildirimleri ve Tanımları
            - **Void Function**
            - **Function Call Chair**
        3. Fonksiyonların Geri Değer Döndürmesi
            - **Pure Function**
            - **Unreachable Code**
            1. Fonksiyonların Geri Dönüş Değerleri Ne Olabilir
                - **Test Function**, **Query Function**, **Pradicate Function(özellikle C++ dilinde bu şekilde adlandırılıyor)**
7. Ders
    1. Functions Devam(Kursun 1. Çeyreğinin en önemli konusu)
        1. İş Yapan Türden Fonksiyonlar
            - **Function overloading**
            - **Template** aracı
            - **Generic Programming**
        2. C Dilinde Fonksiyon Tanımlama Sözdizimi
            - **Old-Style Function Definition**
            - **Implicit int rule(gizli int)**
        3. Fonksiyon Çağrıları
    2. Variadic Function
        - **Ellipsis**
    3. Function Call Types
        - **Call by Value(Pass by Value)**
        - **Call by reference(Pass by reference)**
8. Ders
    1. Dün Fonksiyonlar Konusuyla İlgili İşlenenlerin Özeti
    2. Constants(Sabitler)
        - **Integer Constants**
        - **Floating Constants**
    3. Character Literals(Karakter Sabitleri)
        - **ASCII**
        - **Alphabetic characters(Harf karakterleri)**
        - **Numeric characters(Rakam karakterleri)**
        - **Alphanumeric characters(Harf veya Rakam karakterleri)**
        - **Control characters(Görüntüsü olmayan karakterlerlerdir)**
        - **Printable/graphic characters(Yazdırılabilir/grafig karakterlerleri)**
        - **Punctuation characters**
        - **Escape Sequence**
        - **Formatting Output**
    4. C Standart Library
        - **C Dilinin Standart Belgesi(Dokümanı)**
        - **Standard C Functions**
        - **Marcos**
        - **User-defined data types**
        - **Type alias(Tür eş adları)(int32_t, int16_t vb.)**
    5. C Standart Library printf ve scanf Fonksiyonları
        - **Program**
        - **Process**
        - **Input Stream**
        - **Output Stream**
        - **Standart Input Stream(Standart Input)**
        - **Standart Output Stream(Standart Output)**
        - **Standart Error Stream(Error Output)**
        - **Formatted Output**
        - **Unformatted Output**
9. Ders
    1. Standart I/O(Input/Output) İşlemleri
        - **Fixed notation**
        - **Scientific notation**
    2. C Dilinde Yazı Verilerin İşlenmesi
        - **Null Terminated Byte Stream**
        - **Null Character**
    3. Standart `printf` Fonksiyonu
        - **Conversion specifier** ya da **Formatting sequence** 
        1. printf Fonksiyonunun Geri Dönüş Değeri
    4. Standart `scanf` Fonksiyonu
        1. Standard Input Stream and Buffer
            - **Buffer(Tampon)**
            - **Standard Input stream**
            - **Standard Input Buffer**
            - **Line Buffered Function**
            - **Whitespace skipping**
        2. The Return Value of scanf Function
    5. `(void)` Kullanımı
10. Ders
    1. Operators
        1. Operatör Terimleri
        2. Operator Priority/Precedence(Operatör Önceliği)
            1. Operatör öncelik tablosu
        3. Operatör Türleri
    2. Idiom/Pattern(Dile Özgü Yapılar)
    3. Operatörlerin Detaylı İncelenmesi
        1. `+`(addition) and `-`(subtraction) Operands(Toplama/Çıkartma Operatörleri)
        2. `+`(sign operator plus) and `-`(sign operator minus) Operands(`+` ve `-` İşaret Operatörleri)
        3. `*` `/` `%` Multiplicative Operators
        4. `++`(increment) and `--`(decrement) Operands
11. Ders
    1. Operatörlerin Detaylı İncelenmesi Devam
        1. Comparison Operators(Karşılaştırma Operatörleri)
            - **Code Snipped(Değinildi)**
            1. Karşılaştırma Operatörlerinde Tipik hatalar ve İdiyomatik yapılar
                1. Matematiksel İfadelerin Aynen Kullanılmasından Kaynaklanan Hatalar
                2. Karşılaştırma Operatörü(`==`) Yerine Atama(`=`) Operatörünün Kullanılmasından Kaynaklanan Hatalar
                3. Ondalıklı Sayıların Karşılaştırılması İşlemlerinde Eşittir Operatörü İle Karşılaştırılmasından Kaynaklanan Hatalar
    2. Maximal Munch(En Büyük Lokma)
    3. Operatörlerin Detaylı İncelenmesi Devam
        1. Logical Operators(Mantıksal Operatörler)
            1. `!` Operator
            2. `&&` `||` Operands
                - **De morgan**
    4. Short Circuit Behavior(Kısa devre davranışı)
12. Ders
    1. Assignment Operators(Atama Operatörleri)
        1. Assignment Operator(`=` Operatörü)
        2. Compound Assignment Operators(İşlemli atama operatörleri)
    2. Sequence Point(Yan etki noktası)
    3. Comma Operator(`,` Operatörü)
13. Ders
    1. Öncelik Parantezi
    2. Control Statements(Kontrol Deyimleri)
        1. if Statement(if Deyimi)
            1. if Statement ile Yapılan Tipik Hatalar
                1. Static Code Analyzer()
            2. if Statement(if Deyimi) ile kullanılan Idiomatic Yapılar
                1. xor Swap(İki değişkenin değerinin üçüncü bir değişken kullanmadan değiştirme işlemi)
                2. Dangling else
            3. Hidden else(Gizli else)
    3. C Dilinin Sık Kullanılan Standart Fonksiyonu Olan `getchar` Fonksiyonu
14. Ders
    1. `getchar` Fonksiyonu
    2. `putchar` Fonksiyonu
    3. Test Fonksiyonları
        1. One-liner Functions(Tek satırlık Fonksiyonlar)
        2. isleap Function(Artık yıl Bulma Fonksiyonu)
        3. Armstrong Number
    4. Factoriyel Hesaplama
        1. Lookup Table Kullanımı
    5. Standart `ctype.h` Başlık Dosyasının Detaylı İncelenmesi
        1. Standart `ctype.h` Başlık Dosyası Karakter test fonksiyonları
        2. Standart `ctype.h` Başlık Dosyası Karakter dönüşüm fonksiyonları
    6. Ternary(Conditionla) Operator
        1. Ternary(Conditionla) Operator Ne İçin Kullanılır
        2. Ternary(Conditionla) Operator İle İlgili Bazı Detaylar 
    7. Loop Statements(Döngü İfadeleri)
        1. while Loop Statement
15. Ders
    1. while Loop Statement
        - **Brute force**
        1. while Deyimiyle Kullanılan Idiomatic Yapılar
            1. while(n--) Idiomatic Kullanımı
                - **Bad Argument**
            2. Döngü Gövdesindeki Deyimin NULL Statement Olduğu Idiomatic Kullanım
    2. Bir Döngüden Nasıl Çıkılır
    3. C ve C++ Dilleri ve Sektörle İlgili Bazı Bilgiler
        - **Standard Conformant Compiler**
    4. Infinite Loop(Sonsuz Döngü)
        - **Busy Loop**
    5. break Statement
        - **False Positive**
        - **Unit Test Tool**
    6. Algoritmalarla İlgili Programlar
        - **Collatz serisi**
    7. continue Statement
    8. do while Loop Statement
16. Ders
    1. for Loop Statement
        - **Scope Leakage**
        - **Name hiding(Name shadowing, Name masking)**
        1. for Döngüsü Kullanılarak Yazılan Bazı Programlar**
            - **Özyinelemeli olmayan faktöriyel hesabı yapan program**
            - **Kombinasyon ve permutasyon hesabı yapan program**
            - **"**e**" sayısına yakınsayan dizi toplamını hesaplayan program**
            - **Taylor serisini hesaplayan program**
            - **Asal sayıları bulan program**
            - **Perfect numbers**
        2. Nested loop(İç İçe Döngü)
17. Ders
    1. Function Declaration(Function Prototype, Function Prototype Declaration)
        - **Fonksiyon çağrılarının nasıl makine komutlarına dönüştürdüğü yüzeysel olarak anlatıldı**
        1. Default Function Declaration(Varsayılan Fonksiyon Bildirimi)
    2. Fonksiyon Prototip Bildirimi Sözdizimi
        - **Default Function Declaration**
        - **Default Argument Conversion**
    3. Büyük Resim(C Dilinde Kaynak Dosyalar Hakkında)
        - **Module**
        - **Seperate Compilation Module**
    4. Compiler Optimization(Derleyici Optimizasyonu)
        - **Observable Behavior(Gözlenebilir Davranış)**
        - **Compiler Switches(Derleyicilerin Özellilerini Açma Kapama Düğmeleri)**
        - **As If Rule**
        - **Derleyicilerin yaptığı optimizasyonlardan bazıları**
            - **Loop Reversal Optimization**
            - **Loop Unrolling Optimization**
            - **Inline Expansion Optimization**
    5. Header Files(Başlık Dosyaları)
    6. Preprocessor & Preprocessor Directives(Ön-işlemci ve Ön-işlemci Buyrukları)
        1. `#include` Komutu
            - `#include <file_name.h>` ve `#include "file_name.h"` farkı
18. Ders
    1. Preprocessor & Preprocessor Directives Continue(Ön-işlemci ve Ön-işlemci Buyrukları Devam)
        1. `#include` Komutu Devam
            - **Conditional Compiling(koşullu derleme)**
        2. `#define` Komutu
            1. Object-like Macro(Nesne Benzeri Makro)
            2. Function-like Macro(Fonksiyon Benzeri Makro)
        3. Preprocessor Operators
            1. `#` Operator 
            2. `##` Operator
                1. `##` Operatörünün Kod Yazdırmayla Olan İlişkisi
19. Ders
    1. Preprocessor Operators Devam
    2. Function-like Makro ve Fonksiyon Kıyaslaması
        - **Generic programlama**
        - **Trade-off(Ödünleşim)**
        - **Call chain**
    3. Conditional Compiling(Koşullu Derleme)
        - **Run-time errors, expextions**
        - **Assertion Code(Doğrulama Kodları)**
        1. `#defined` Operatörü
    4. Makro'lar Neden Kullanılır
        - **Multiple Inclusion**
        - **Multiple Inclusion Guard**
    5. `#undef` Ön-işlemci Komutu
    6. Predefined Makro Or Predefined Sembolic Constands(Ön Tanımlı Sembolik Makrolar)
    7. `#line` Ön-işlemci Komutu
        - **Code generation programları**
    8. `#error` Ön-işlemci Komutu
    9. `#pragma` Ön-işlemci Komutu
20. Ders
    1. `#pragma` Ön-işlemci Komutu Devam
    2. `switch` Statement
        - **Obfuscate** ve **Obfuscation** terimleri
        1. `switch` İfadesi(Statement) Kullanımıyla İlgili Bazı Misal Programlar
    3. `goto` statement
        - **Local jump(near jump)** ve **Long jump**
21. Ders
    1. Kendi Başlık Dosyamızı Oluşturalım
        - **Multiple inclusion guard** 
        - **Client(Müşteri)**
        - **Server Code**
        - **Client Code**
        - **Tomohiko Sakamoto’s Algorithm**
    2. Type Conversions(Tür Dönüşümleri)
        - **Assignment Conversions**
        1. Arithmetic Conversions
            1. İfadelerde Tür Dönüşümüne Yönelik Sık Yapılan Kodlama Hataları
        2. Atama Tür Dönüşümleri
        3. Ondalıklı Sayılardan Tam Sayılara Yapılan Dönüşümler
            - **Taruncate**
            - **Ieee 754**
        4. Tam Sayıdan Ondalıklı Sayılara Yapılan Dönüşümler
        5. Ondalık Sayılar Arasında Yapılan Tür Dönüşümleri
22. Ders
    1. Arrays(Diziler) [Bu konu 8-10 saat sürecek]
        - **Absract data type(Soyut veri yapısı)**
        - **Data Structure(Veri yapısı)**
        - **Algorithm**
        - **fixed array(static array)**
        - **Dynamic array(değişken dizi)**
    2. Complexity of an Algorithm(Algoritmanın karmaşıklığı)
        - **Algoritmanın karmaşıklığı(Complexity of an algorithm)**
        - **Computational complexity(Hesaplama karmaşıklığı)**
        - **Big O Notation**
    3. C Dilinde Diziler
        1. Dizinin Elemanlarına Erişim İşlemi
            - **VLA(variable length array)**
            - **Traversa(Traversal Operation)**
        2. C Dilinde Dizilere İlk Değer Verilmesi(Initialization of Array)
            - **Aggregate Type**
            - **Trailing Comma**
            - **Designated Initializer**
    4. `sizeof` Operatörü
        - **Unveriabilty Context(İşlem kodu üretilmeyen bağlam)**
        - **Array Decay(Array to pointer conversion)**
        - **asize Makro**
23. Ders
    1. Arrays(Diziler) Devam
    2. Random Number Generation (Rastgele Sayı Üretimi)
        - **True Random Number Generation(Gerçek Rastgele Sayı Üretimi)**
        - **Pseudo Random Number Generation(Sözde Rastgele Sayı Üretimi)**
        - **Üretilen rastgele sayı zinciri**
        1. Rastgele Sayı Üretimi Nerelerde Kullanılır
            - **Mersenne-Twister Algorithim**
            - **Uniform distribution(Dağılım)**
            - **Gauss distribution(Normal Dağılım)**
        2. C Dilindeki Rastgele Sayı Üretimiyle İlgili Fonksiyonlar
            - **Tohum Değeri(Seed Value)**
            - **Monte Carlo Simulation**
            - **Craps Casino Game**
    3. Diziler konusuna Geri Dönüldü
        - **Accumulate Algorithm**
        - **Max elemant/min elemant algorithm**
        - **Runner-up**
        - **Linear Search**
        - **Donald Knuth**
        - **Unsuccesful Search**
24. Ders
    1. Diziler Konusuna Devam
        - **Standart Sapma(Standard Deviation)**
    2. Sorting and Sorting Algorithms(Sıralama ve Sıralama Algiritmaları)
        - **Computational Complexity** ya da **Time Complexity**
        - **Space Complexity**
        - **In-Place Algorithm**
        - **Stable(kararlı)/Anstable(kararsız) Algorithm**
        1. Bubble Sort Algorithm
            - **Boble Sort**
            - **Quick Sort**
        2. Selection Sort Algorithm
    3. Searching and Searching Algorithms(Arama ve Arama Algoritmaları)
        1. Binary Search Algorithm
            - **Sub Array(Subsquance)**
            - **Maximum Subsquance Problem**
        2. Merge Algorithm
        3. Ducth flag problem(Hollanda bayrağı problemi)
    4. Strings in C (C dilinde Yazılar)
        - **NTBS(Null Terminated Byte Stream)**
        - **Null character**
        - **Null Stream**
        - **Inditormenet Value(Garbage Value)**
25. Ders
    1. Strings in C Continue(C dilinde Yazılar Devam)
        - `puts` fonksiyonu
        - **VLA(Variable Length Array)(Değişken uzunluklu dizi)**
        - `getchar()` fonksiyonu
        - **boş yazı(empty string, null string)**
    2. Dizilerle İligli Verilen Bazı Ödevlerin Çözümleri
    3. Strings in C Continue(C dilinde Yazılar Devam)
        - **Remove Copy**
        - **flag variables(bayrak değişkenler)**
26. Ders
    1. Strings in C Continue(C dilinde Yazılar Devam)
        - **State Machine**
    2. Pointers (Kursun İkinci Yarısının başlangıcı)
        1. Pointer Operators
            1. Address Of Operator(`&` Operator)
            2. Dereferencing Operand(`*` Operand) (İçerik Operatörü)
                - **Örtülü(implicit) Tür Dönüşümü** durumlarının incelenişi
                - **Array Decay** işleminin tekrardan hatırlanışı
                - **Pointee**
27. Ders
    1. Pointers Devam
        - **Call by Reference(Pass by Reference)**
        - **Call by Value(Pass by Value)**
        - **Operatör(operator)** ve **Dekleratördür(declerator)** farkı
        1. Bir Fonksiyonun Parametresi Neden "Call By Reference" Yapılır
            - **Pure function**
            - **Input parameter** ve **Output parameter**
        2. Pointer Aritmetiği
            - **MISRA** Kuralları
        3. Subscript(Index) Operantor(`[]` operatörü)
28. Ders
    1. Pointers Devam
        1. Invalid State Pointers
            - **Invalid State**
            - **Valid State**
            - **Dangling Pointer**
        2. Valid State Pointers
    2. Const Qualifier(Const Niteleyicisi)
        - **Mutable Object**
        - **Inmutable Object**
        - **const variable**
        1. const Anahtar Kelimesini Kullanım Durumlarıyla İlgili Son Bilgiler
            - C standardında **const pointer to type** ve C++ standardında **top-level const** terimleri(standart dışı **rigth const** ya da **east const** terimleri de kullanılıyor)
            - C standardında **pointer to const type** ve C++ standardında **low-level const** terimleri(standart dışı **left const** ya da **west const** terimleri de kullanılıyor)
            - **const pointer to const type**
        2. `const` Anahtar sözcüğünün Kullanım Durumlarıyla İlgili Son Bilgiler
            - `set function`, `mutator function`, `setter function`
    3. Adresler(pointer) ve Karşılaştırma İşlemleri
29. Ders
    1. Pointers Devam
        1. Adresler(pointer) ve Karşılaştırma İşlemleri Devam
        2. Göstericilerle Birlikte Kullanılabilen Bazı Operatörlerin Tekraredilmesi
        3. Pointer Idioms
            1. `*ptr = value; ptr++;` Gibi İki Statement'ın `*ptr++;` Şeklinde Tek Statement Olarak Kullanıldığı Idiomatic Yapı
            2. `++ptr; *ptr = value;` Gibi İki Statement'ın `*++ptr` Şeklinde Tek Statement Olarak Kullanıldığı Idiomatic Yapı
            3. `++*ptr;` Şeklinde Kullanılan Idiomatic Yapı
        4. Fonksiyonların Geri Dönüş Değeri Olarak Pointer'lar
            - **Otomatic Storage Duration**
            - **Dangling Pointer**
            - **Const Cast**
30. Ders
    1. Pointers Devam
        1. Fonksiyonların Geri Dönüş Değeri Olarak Pointer'lar Devam
        2. NULL Pointer
            1. NULL Pointer Kullanılan Durumlar 
                - **NULL Pointer Conversion** 
                - "**Doxygene**" formatında dokümantasyon
31. Ders
    1. Typedef Declerations-1 (Tür Eş Adı Bildirimleri)
        1. Typedef Declerations Syntax
        2. Neden `typedef` Bildirimi Yapılır?
            1. Varolan Bir Türü Daha Daraltılmış Bir Bağlamda Kullanıldığını Vurgulamak İçin `typedef` Kullanılabilir
            2. Özel Bir Amaç İçin Birçok Yerde Kullanılan Türlerin Türü Değiştirilmesi Gerektiğinde Kolaylık Sağlanması İçin `typedef` Kullanılabilir
                1. Döngülerde Kullanılan Sayaç Değişkenlerin Türleri İçin Kullanılabilir
            3. Bildirimleri karmaşık olan Tür Bildirimlerini Basitleştirmek için "Typedef Declerations" Kullanılır
            4. Farklı Derleyiciler Kullanıldığında Basit(Primitive) Türlerin Byte Boyutları aynı olması İçin Kullanılır
        3. `size_t` Tür Eş Adı
        4. `ptrdiff_t` Tür Eş Adı
        5. `int8_t` `int16_t` `int32_t` `int64_t` `uint8_t` `uint16_t` `uint32_t` `uint64_t` vb. Tür Eş Adları
        6. `int_least8_t` `int_least16_t` `int_least32_t` `uint_least8_t` `uint_least16_t` `uint_least32_t` vb. Tür Eş Adları
        7. `int_fast8_t` `int_fast16_t` `int_fast32_t` `uint_fast8_t` `uint_fast16_t` `uint_fast32_t` vb. Tür Eş Adları
    2. `string.h` Standar Kütüphanesi
        - **Intrinsic Function**
        - **SIMD(Single Instruction Multiple Data)**
        - **Generic Programing**
        - C ve C++ ile ilgili yazılım sektörüyle ilgili sorulan bazı sorulara cevap verildi
        1. Yazıyla İlgili İşlem Yapan Fonksiyonlar
            - **NULL Terminated Byte Streams**
            1. `puts` Fonksiyonu
            2. `gets` Fonksiyonu
            3. `strlen` Fonksiyonu
            4. İki Tane(`strchr`,`strrchr`) Çok Sık Kullanılan Standart Kütüphanedeki Arama Fonksiyonları
32. Ders
    1. Standart C Kütüphasindeki Fonksiyonlar
        1. Dört Tane Çok Sık Kullanılan Standart C Kütüphasindeki Arama Fonksiyonu
            1. Standart C fonksiyonu Olan `strchr` ve `strrchr` Fonksiyonları
            2. Standart C fonksiyonu Olan `strstr` Fonksiyonu
            3. Standart C fonksiyonu Olan `strpbrk` Fonksiyonu
        2. Standart C fonksiyonu Olan `strcpy` Fonksiyonu
            - **Overlapped Block**
            - `restrict` anahtar sözcüğünün değinildi
            - **Pointer Aliasing**
        3. Standart C fonksiyonu Olan `strcat` Fonksiyonu
    2. Yazıların Karşılaştırılması
        - **Lexicographical Compare Algorithm**
        1. `strcmp` Fonksiyonu
            - **Local**, **Local Dependet(Locale bağımlı)**, **Local Independet(Localden bağımsız)** kavramlarına değinildi
33. Ders
    1. Standart C Kütüphasindeki Fonksiyonlar Devam
        1. `strcmp` Fonksiyonu Devam
        2. Regex(Regular Expression)(Düzenli İfadeler)
            - **Regex Gramer(notation)**
            - **Regex String**
            - **Regex Engine**
        3. Standart C Kütüphenesinde Olmayan Bazı Yazılarla İlgili Fonksiyonların Yazılması
    2. C Dilinde Zor Konu Zinciri Başlangıcı(Ön Bilgi)
        1. **String Literals**
        2. **Pointer Arrays**
        3. **Pointer to Pointer**
        4. **Void Pointers**
        5. **Function Pointers**
        6. **Multi-dimensional Arrays**
        7. **Dynamic Memory Managament**
    3. String Literals
        - **Array to pointer conversion(array decay)**
        - **NULL terminated byte stream**
        - **static storage duration** ve **otomatic storage duration**
        1. String Literal Ne İşe Yarar
            - **Implemantation Specified** ve **Implemantation defined** arasındaki fark
            - `sizeof` operatörünün kullanımıyla ilgili detaylar
            - **Short circuit behavior**
    4. String Literal Varlıkları Birden Fazla Satırda Gösterme İşlemi
34. Ders
    1. Pointer Arrays(Gösterici Dizileri)
        - **Lookup Table**
        - **Trailing Comma**
    2. Pointer To Pointer(Gösterici Gösteren Göstericiler)
35. Ders **(Bu derste zor konular var)**
    1. Pointer To Pointer Devam
        - **Değişkenlerin türü(decleration type)** ve **İfadelerin türü(expression type)** kavramları
        - **integral promotion**
        - **Value Category**, **R-value** ve **L-value**
        - **Double dereferencing** ya da **Double indirection**
        1. Pointer To Pointer Ne İşe Yarar
        2. Pointer To Pointer And const
    2. void Pointers
        1. `void` Type
            - **Complate Type(Eksik olmayan, Tamamlanmış tür)**
            - **Incomplate Type(Tamamlanmamış, Eksik olan tür)**
        2. void Pointer Type(`void*` Türü)
        3. Generic Function
            - **Generic programlama paradigması**
36. Ders **(Bu derste zor konular var)**
    1. void Pointers Devam
        1. `string.h` Başlık dosyası Generic Fonksiyonları
            1. `memset` Generic Fonksiyonu
                - **To Clear a Memory Block**
            2. `memcpy` Generic Fonksiyonu
                - **Overlapped bellek blokları**
                - **restrict anahtar sözcüğü**
            3. `memmove` Generic Fonksiyonu
            4. `memchr` Generic Fonksiyonu
            5. `memcmp` Generic Fonksiyonu
                - **Lexicographical compare**
                - **Endianness(Big-Endian & Little-Endian)**
    2. Pointer Konusunun 2. Kısmı(İlk Kısımdakinden Daha Zor Konular İçermektedir)
        - **Callback Function**
        1. `void**` Türü
    3. Function Pointers Giriş
37. Ders **(Bu derste zor konular var)**
    1. Function Pointers
        - **Function to Pointer Conversion(Fonksiyondan Fonksiyon Adresine Dönüşüm)**
        1. Fonksiyon Çağrı Operatörü(Function Call Operator)
        2. `qsort` Fonksiyonu
        3. `binary` Fonksiyonu
    2. Function Pointers Arrays
        - **Jump Table**
        - **Lookup Table**
        1. **Function Pointer Array** Değişkenler Hangi Temalarda Kullanılıyor
            - **Mapping**
38. Ders **(Bu derste zor konular var)**
    1. Function Pointers Array Devam
        1. Function Pointer İle Sık Kullanılan Yöntemler
            1. En Sık Kullanılan İlk Yöntem
            2. En Sık Kullanılan İkinci Yöntem
    2. Multi Dimensional Arrays(Çok Boyutlu Diziler)
        1. Multi Dimensional Arrays Initialization(Çok Boyutlu Dizilere İlk Değer Verilmesi)
            - **Designated Initializer**
            - **Indetermined value(garbage value)**
39. Ders
    1. Multi Dimensional Arrays Continues(Çok Boyutlu Diziler Devam)
        - C++ **Type Deduction**
        - **Lexicographical compare**
    2. Yazılarla İlgili İşlemler
        1. Adları `ato` İle Başlayan Fonksiyonlar
        2. Adları `ato` İle Başlayan Fonksiyonlarının Zayıf Olduğu Durumlar
        3. Adları `strto` İle Başlayan Fonksiyonlar
    3. Formated Input/Output(Formatlı Giriş/Çıkış)
        - **In-Memory**
        - `printf` fonksiyonu
        - `sprintf` fonksiyonu
        - `fprintf` fonksiyonu
        - `scanf` fonksiyonu 
        - `sscanf` fonksiyonu 
        - `fscanf`  fonksiyon
        - **In-memory read**
40. Ders **(Bu derste özümsemesi biraz zor konular var)**
    - **Scansets** kısaca bahsedildi
    1. `snprintf` Fonksiyonu
    2. Process Sonlandıran Fonksiyonlar
        1. `exit` Fonksiyonu
            - **Normal Termination**
            - **Abnormal Termination**
        2. `abort` Fonksiyonu
    3. Dynamic Memory Managament
        - **Life Spent**
        - **Dynamic Life Time(Dinamik ömür)**
        - **Memory allocation**
        - **Heap**
        - **Free Storage**
        - **C Abstract Machine**, **C++ Abstract Machine**
        - **Garbage Collection** ve **Garbage Collector**
        - **Memory Leak**
        - **Dangling Pointer**
        - **Otomatic storage duration** ve **Dynamic storage duration** Kavramları
        - **Heap** ya da **Free Store** Kavramı
        1. `malloc` Fonksiyonu
            - **Indeterminate value(garbage value)**
            - **Function wrapper**
            - **Augmentation**
            - **Posix Function**
            - **Valgrind Programı**
        2. `free` Fonksiyonu
            - **Free the memory block** ya da **Deallocate** Kavramı
            1. `free` Fonksiyonunun Kullanımında Sık Yapılan Hatalar
41. Ders **(Bu derste özümsemesi biraz zor konular var)**
    1. Dynamic Memory Managament Devam
        1. `free` Fonksiyonu Devam
            1. `free` Fonksiyonunun Kullanımında Sık Yapılan Hatalar Devam
                - **Dangling pointer**
                - **Double deletion** ya da **Double free**
            2. `free` Fonksiyonuna NULL Pointer Geçilmesi
                - **NULL Pointer Conversion**
            3. `free` Fonksiyonu ve Adres Döndüren Fonksiyonlar
                - **Memory leak**
                - **Backward compatibility(Geriye doğru uyumluluk)**
                - **Core Syntax**
                - **Deprecate(Deprecation)**
        2. `calloc` Fonksiyonu
        3. `realloc` Fonksiyonu
    2. Fragmentation
        - **Heap(C++ dünyasında Free Store)**
    3. Dynamic Arrays(Dinamik diziler)
42. Ders
    1. Dynamic Arrays(Dinamik diziler)
        - **Amortised constand time**
        - **Cache friendly(önbellek dostu)**
        - **Cache miss(Önbelleği ıskalamak)**, **Cache hit(İsabetli Önbellek)**
        - **Vectorization(SIMD)**
        - **Push Front**, **Push Back**, **Pop Front**, **Pop Back**, **Insert**, **Erase** ya da **Remove** terimleri
    2. C Dilindeki Kullanılan Bazı Önemli Anahtar Sözcükler
        1. `auto` Anahta Sözcüğü
            1. `auto` Anahta Sözcüğü ve Type Deduction Kullanımı
        2. `register` Anahtar Sözcüğü
            - **Register(Yazmaç)**
        3. `static` Anahtar Sözcüğü
            1. `static` Anahtar Sözcüğünün Kullanıldığı Yerler
                1. İlk Kullanım Yeri
                2. İkinci Kullanım Yeri
                3. Üçünü Kullanım Yeri
                    - **Lookup table**
        4. `static` Anahtar Sözcüğünün Global Değişkenlerde Kullanılması ve `extern` Anahtar Sözcüğü
            - **Module**
            - **Scope**
            - **Storage Duration**
            - **Linkage(bağlantı)**, **Extern Linkage(Dış Bağlantı)**, **Intern Linkage(İç Bağlantı)**, **No Linkage(Bağlantısız)**
            - **Extern decleration**
43. Ders
    1. C Dilindeki Kullanılan Bazı Önemli Anahtar Sözcükler Devam
        1. `static` Anahtar Sözcüğünün Global Değişkenlerde Kullanılması ve `extern` Anahtar Sözcüğü Devam
            - **Kapsam(Scope)**, **Linkage(bağlantı)**
            - **Unresolved external symbol error**
            - **Global namespace pollution Problem**
            - **Decleration** ve **Defination** farkı
            - **Bağlantı(Linkage)**
        2. Type Qualifiers(Tür Niteleyicileri)
            1. `const` Anahta Sözcüğü
                - **Const Correctness** ve **Const Incorrectness** terimleri
                - **Mutable** ve **Immutable** terimleri
                - **Our parameter**, **In parameter** ve **In-out parameter** kavramları
                - **Mutater** ya da  **Set function** ya da **Setter** kavramı
            2. `volatile` Anahta Sözcüğü
                - **Program için kaynak** ve **program dışı kaynak** kavramları
                - **Memory mapped I/O**
                - **Donanım yazmaçları(hardware register)**
                - **Interrupt Service Rutine(ISR)**
            3. `restrict` Anahtar sözcüğü
                - **Pointer Aliasing**
                - **Toolkit**
44. Ders
    - **Basic Types**, 
    - **User Defined Types**
    1. User Defined Types
        - **Abstraction(Soyutlama)**
        - **Data Abstraction(Veri soyutlama)**
        - **C++ template aracı**
        1. `struct` Aracı
            1. `struct` Türünün Yüzeysel İncelenişi
                - **Alignment(hizalama)** ve **Pedding bytes** kavramı
            2. Yapı Nesnesinin Elemanlarına Erişim
                - **member selection dot(nokta eleman seçme) operatörü(`.`)** ve **member selection arrow(ok eleman seçme) operatörü(`->`)** operatörü
            3. `.` Member Selection Dot Operator
            4. Structure Initialization
                - **Trailing comma** kullanımı
                1. **Designated initializer** Aracının Yapılarla Kullanılışı
45. Ders
    1. Structor Objects and Addresses(Yapı Nesneleri ve Adresler)
        - **Array to pointer conversion**
    2. Yapı Nesneleriyle İlgili İşlem Yapan Fonksiyonlar
        1. Bir Fonksiyonun Parametrelerinin Bir Yapı Nesnesi Olduğu Durumlar
        2. Bir Fonksiyonun Geri Dönüş Değerinin Bir Yapı Nesnesi Olduğu Durumlar
            - **Factory Function**
            - **Excepsion**, **Error handing** nedir
            - **Programing errors** kavramı
            - **Static assertion** ve **Runtime assertion** kavramları
            - **Runtime errors** kavramı
            - **Function call chain** kavramı
        3. Yapıları Kullanan Kütüphenelerin Özellikleri
            - **C tarzı kütüphaneler** ve **OOP tarzı kütüpheneler**
    3. Yapı Değişkenlerinin Tanımlanmasında Kullanılan Sözdizimi
        - **Structure tag** 
        - **Anonymous structure**
46. Ders
    1. Standart C Kütüphanesinin `time` Modülü(time Library)
        - **Epoch** kavramı
        - **Time-point(Zaman noktası)** kavramı
        - **Calender Time(Takvim Zamanı)** kavramı
        - **Broken-down time** kavramı
        - **Timestamp(Zaman Damgası)** kavramı
        - **Calendar Time(Takvim Zamanı)** ve **Broken-down time(Ayrıştırılmış zaman bilgisi)** kavramlarının kullanımı
    2. Yapılar ve Tür Eş Adı(`typedef`) Bildirimleri
        - **Unevaluated context(İşlem kodu üretilmeyen bağlam)**
    3. `time` Başlık Dosysındaki Fonksiyonlar
        1. `time` Fonksiyonu
        2. `localtime` ve `gmtime` Fonksiyonları
        3. `ctime`, `asctime`, `strftime` Fonksiyonları
            1. `ctime`, `asctime` Fonksiyonlarının Kullanımı
            2. `strftime` Fonksiyonunun Kullanımı
                - **MFC(Microsoft Fundation Classes)**
        4. `mktime` Fonksiyonu
        5. `diftime` Fonksiyonu
        6. `clock` Fonksiyonu
    4. Complete Types and Incomplate Types Kavramları 🌟
47. Ders **(Bu derste özümsemesi biraz zor konular var)**
    1. Complete Types and Incomplate Types Kavramları Tekrar 🌟
        - **Non-defined decleration**
    2. C++ ya da OOP Tarzı Kütüphene Kullanımı
        - **Yeniden derlenmesi(Recompile)** kavramı
    3. Kendi `date` Kütüphanemizi C Tarzı Bir Kütüphane Olarak Oluşturalım 🌟
        - **Yeniden kullanılabilirlik(reuseable)** kavramı
        - **Multiple Include Guards(Header Include Guards)**
        - **Set function**, **Setter**, **Mutater(daha çok C++ tarafında)** olarak tanımlanan fonksiyonlar
        - **Self explanatory**
        - **Refactoring(Kodun iyileştirilmesi)**
        - **Reusability(Takrar kullanılabilirlik)**
48. Ders **(Bu derste özümsemesi biraz zor konular var)**
    1. Kendi `date` Kütüphanemizi C Tarzı Bir Kütüphane Olarak Oluşturalım Devam 🌟
    2. Yapıların Elemanlarının Yapı Türlerinden Olması
        - **Composition**
        - **Self Referential Structures**
        - **Node(Düğüm)**
        - **Alignment(hizalama)**
        - **Padding Bytes or Hole Bytes**
    3. Bir Yapının Elemanının Başka Bir Türden Yapı Olması Durumu
        - **composition**
    4. Bağlı Listeler Veri Yapısı(Linklist Data Structure) 🌟
        - **Linked List(Bağlı liste)**
        - **Signly Linked List(Tekli Bağlı Liste)**
        - **Doubly Linked List(Çifte Bağlı Liste)**
        - **Rotating Linked List(dairesel bağlı liste)** ya da **Circular Linked List(dairesel bağlı liste)**
        - **Traverse** ya da **Navigate**  ya da **Itarete** kayramı(tek bir kavramı belirtmek için üç farklı terim kullanılabiliyor)
49. Ders **(Bu derste özümsemesi biraz zor konular var)**
    1. Bağlı Listeler Veri Yapısı Devam (Linklist Data Structure) 🌟
        - **Benchmarker** or **Profiler** programları
        - **Cache friendly** kavramı
        - **SIMD(Single Instruction, Multiple Data)**
    2. Bağlı Listelerin Olabilecek Yararları
        - **constan-time($O(1)$)** karmaşıklık
        - **Fragmentation** kavramı
        - **Değiş tokuş(swap)** işlemi
        - **Splice** işlemi
    3. `personlist` Modülünün Gerçekleştirimi
    4. Handle Tekniği 🌟
        - **Cleanup Code** kavramı
    5. Alignment(Hizalama) 🌟
        - **Alignment Requirement(Hizalama gereksinimleri)** kavramı
        - **Absract Binary Interface** nedir
        - **Padding Bytes or Hole Bytes** kavramı
        1. **Padding Bytes** Bizi Neden İlgilendiriyor
50. Ders
    1. `offsetof` Function Like Makro 🌟
    2. Unions(Birlikler) 🌟
        - **Memory layout** kavramı
    3. Unions(Birlikler) Kullanın Nedenleri
        1. Bellekten Tasarruf İçin Kullanılır
            - **Anonymous Union** aracı
        2. Bir Veri Türünün Farklı iki Biçimde Temsil Edilmesi
        3. Discriminated union(tagged union) Kullanım Biçimi
            - **Discriminated union** ya da **Tagged union** kullanımı
    4. Enumarations(Numaralandırmalar) 🌟
        - **State machine**
        -  **Enumaration constands** ya da **Enumarator**
    5. Endianness Kavramı 🌟
        - "**Little endian**" ve "**Big endian**" kavramları
    6. Bitsel Operatörler(Bitwise Operations)
        - **Bitsel Operatörler(Bitwise Operators)**
51. Ders
    1. Bitsel Operatörler(Bitwise Operations)
        1. `~` Bitwise Not Operator
        2. `>>` and `<<` Bitwise Right Shift Operator and Bitwise Left Shift Operator
            1. `>>` Operatörünün İncelenişi
            2. `>>` Operatörünün İncelenişi
        3. `&` `|`  `^` Operators
            1. `&` Operatörünün İncelenişi
            2. `|` Operatörünün İncelenişi
            3. `^` Operatörünün İncelenişi
                - **Xor swap**
    2. Bitsel Operatörler Hangi Amaçlarla Kullanılıyor
        1. Bir tam sayının bir bitini belirlemek(**To set the bit**, **To turn the bit**)
            - **Bitmask**
        2. Bir tam sayının bir bitini sıfırlamak(**To reset the bit**, **To clear the bit**)
        3. Bir tam sayının bir bitini değiştirmek(**To tootgle the bit**, **To flip the bit**)
        4. Bir tam sayının bir bitini sınamak yani 1 mi yoksa 0 mı olduğunu öğrenmek(**To get the bit**, **To test the bit**)
    3. Bitsel Operatörlerdeki Dört Temel İşlemden Haraketle Daha Karşaşık İşlemlerin Yapılması  
52. Ders
    1. Bitsel Operatörler(Bitwise Operations) Devam
        1. Neden Bitsel İşlemleri Kullanıyoruz
    2. Yapıların Bit Alanı Elemanları(Bitfield Members)
        - **Storage Unit** değeri 
    3. Bit Alanı Elemanların Kullanılma Nedenleri
        1. Bellek alanından tasarruf sağlanması
        2. Birlikler ile Bit Alanı Üyelerine Sahip Yapıların Birlikte Kullanılması
53. Ders
    1. Command Line Arguments
        - **Command Line Environment**
    2. Dosyalar ve Dosya İşlemleri
        1. **Bir dosya nedir(what is a file)**
            - **File Format**
            - **Function wrapper**
        2. `fopen` Fonksiyonu
        3. `fclose` Fonksiyonu
        4. Standart Olmayan `fcloseall` Fonksiyonu
        5. Dosya İşlemlerinin Yapılmasının İncelenmesi
            - **Dosya göstericisi(file pointer)**
            - **Offset** değeri
            - **Sequential Access**     
            - **Random Access** ya da **Direct Access**
        6. **Text mode** ve **Binary mode** İşlemlerinin Detayları
        7. `fputc` Fonksiyonu
54. Ders
    1. `remove` ve `rename` Fonksiyonları
    2. Basit Bir Şifreleme Algoritması Kullanımı
    3. `fprintf` Fonksiyonu ile Dosyadan Formatlı Okuma ve Yazma İşlemleri
    4. `fscanf` Fonksiyonu
    5. `fgetc` ve `fgets` Fonksiyonu ile Dosyadan Okuma İşlemleri
    6. `fputs` Fonksiyonu
    7. Formatsız Okuma Yazma İşlemleri 🌟
        1. `fread` ve `fwrite` Fonksiyonları
55. Ders
    1. Dosya Konum Göstericisi(File Pointer) Üzerinde İşlem Yapan Fonksiyonlar 🌟
        1. `fseek`, `rewind` ve `ftell` Fonksiyonları
        2. `fsetpos` ve `fgetpos` Fonksiyonları
        3. Eof and Error Flag
        4. `foef`, `ferror`, `clearerr` Fonksiyonları
        5. `fflush` Fonksiyonu
            - **File buffer(bir bellek alanı)**
56. Ders
    1. `stdout`, `stdin`, `stderr` Kullanımı
    2. `freopen` Fonksiyonu
    3. `setbuf` ve `setvbuf` Fonksiyonları
    4. `ungetc` Fonksiyonu
    5. C Dilinde Hatalar
        1. C Dilinde Runtime errors
        2. `errno` Değişkeni İle Hata Yönetimi
            - **Thread safe**
            1. `perror` ve `strerror` Fonksiyonları
        3. `assert` Function-like Makrosu
            - **Assertion Code** kavramı
            - **Static Assertions** ya da **Compile Time Assertions** kullanımı
            - **Dynamic Assertions** ya da **Run Time Assertions**
        4. Dynamic Assertion İle Yapılan Çalışma Zamanı Hatalarınınn Yakalanması
    6. C99 Standardı ve Bu Standart ile Gelen Eklemeler
        1. VLA(Varible length array)
57. Ek Ders
    1. C Dilinde Hatalar Tekrar
        1. Hata Durumlarının Bildirilmesi
         1. `errno.h` Başlık Dosyasındaki Araçları Kullanarak Hata Kontrolü
         2. `setjmp.h` Başlık Dosyasındaki `setjmp` ve `longjmp` Fonksiyonları
    2. Variadic Fonksiyonlar 🌟
58. Ek Ders
    1. Type Qualifiers (Tür Niteleyicileri)
        - **Memory map input output**
        - **Kesmeler(interrupt)**
        1. `volatile` Anahtar Sözcüğü
        2. `restrict` Anahtar Sözcüğü
            - **Pointer aliasing**
    2. C99 Standardıyla Dile Eklenen Özellikler
        1. VLA(Variable Length Array)
        2. Compound Literals
        3. Flexible Array Member(Esnek Dizi Elemanı)
59. Ek Ders
    1. C99 Standardıyla Dile Eklenen Özellikler Devam
        1. Inline Functions
        2. Variadic Macros
        3. `//` Biçiminde Tek Satırlık Yorum Satırları Kullanabilme
        4. `for` Döngüsü Deyiminde Değişken Tanımlayabilme
        5. Executable statement Kullanımından Sonra Değişken Tanımlayabilme
        6. Implicity Function Decleration Kullanımı Dilden Kaldırıldı
        7. Designated Initialisers Özelliği
        8. C Dilinde Olan Dizilerin Fonksiyonların Argümanı Olması Durumlarındaki Bazı İlginç Kullanımlar
    2. Önceden İncelenmeyen Bazı Özenmli Standart C Fonksiyonları 
        1. `fropen` Fonkiyonu
        2. `mktime` Fonksiyonu
        3. `mktime`, `difftime`, `strftime` Fonksiyonları
    3. Çevresel Değişkenler(Enviroment Variables)
    4. Pointer Hataları
60. Ek Ders **(Bu derste özümsemesi biraz zor konular var)**
    1. Pointer Hataları Devam
        - **Shallow Copy** ve **Deep Copy** kavramları
    2. Dinamik Dizi Veri Yapısı Gerçekleştirimi(Daynamic Array Data Structure Implementation) 🌟
        - **Amortised constand time**
61. Ek Ders **(Bu derste özümsemesi biraz zor konular var)**
    1. Bağlı Liste Veri Yapısı Gerçekleştirimi(Liked List Data Structure Implementation) 🌟
        - **Çapa(anchor)**, **Baş(head)**, **Kuyruk(tail)** kavramları
        - **SIMD(Simgle Istruction Multiple Data)** özelliği
        - **Profiling** araçları
        - **Takas(swap)**, **Splice** işlemleri
62. Ek Ders **(Bu derste özümsemesi biraz zor konular var)**
    1. Abstract Data Structure(Soyut Veri Yapıları) 🌟
        - **Kuyruk(queue)** ve **Yığın(stack)** soyut veri yapıları
        - **FIFO(Fist in fist out)** ve **LIFO(Last in first out)** kavramları
        - **Öncelik kuyruğu(priority queue)** soyut veri yapısı nedir
        - **Özyinelemeli(recursion)** algoritma kavramı
        1. **Kuyruk(queue)** Veri Yapısı
            - **Enqueue**, **Dequeue** terimleri
            - **Deque** soyut veri yapısı nedir
        2. Soyut Kuyruk Veri Yapısının Dizi ile Gerçekleştirimi(Abstract Queue Data Structure Implementation with Array) 🌟
        3. Soyut Kuyruk Veri Yapısının Bağlı Liste ile Gerçekleştirimi(Abstract Queue Data Structure Implementation with Linked List) 🌟
        4. Soyut Yığın Veri Yapısının Dizi ile Gerçekleştirimi(Abstract Stack Data Structure Implementation with Array) 🌟
        5. Soyut Yığın Veri Yapısının Bağlı Liste ile Gerçekleştirimi(Abstract Stack Data Structure Implementation with Linked List) 🌟
63. Ek Ders
    1. `scanf` Fonksiyonunun Kullanımı
    2. `printf` Fonksiyonunun Kullanımı
    3. `system` Fonksiyonunun Kullanımı
    4. `X macro` Kullanımı
    5. Generic Selection Aracı
    6. C++ içindeki C
