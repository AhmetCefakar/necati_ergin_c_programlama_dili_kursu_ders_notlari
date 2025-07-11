
# C Mülakatlarında Sorulan Bazı Sorular 🧠


## 4.Ders

Aşağıdaki sorular sayı tabanları konusunda mülakatlarda sorulabilecek sorulardır.

>❔
> 2 byte'lık alanda işaretli olarak yazılabilecek en büyük tam sayıyı hex olarak ifade ediniz.
> 
> Çözüm;
> 
> En anlamı bit "0" olacaktır ve geriye kalan tüm birler "1" olacaktır.
> 
> Bu sayı ikilik tabanda şu şekilde yazılacaktır "0111 1111 1111 1111" ve hex tabandaki karşılığı "7FFF" şeklinde elde edilecektir.


>❔
> 2 byte'lık alanda işaretli olarak yazılabilecek en küçük tam sayıyı hex olarak ifade ediniz.
> 
> Çözüm;
> 
> İki tabanında yazılabilecek en büyük sayı bulunur ve bunun ikiye tümleyeni alınır bu işlem sonrasında cevabı bulmuş oluruz.
> 
> ikilik tabandaki en büyük sayı "0111 1111 1111 1111" olacaktır.
> 
> Bunun ikiye tümleyeni "1000 0000 0000 0001" olacaktır.
> 
> Bunun bir eksiği olan sayı en küçük sayı olacaktır, o da bu "1000 0000 0000 0000" sayıdır.
> 
> En son hex hesaplanan sayının hex tabandaki karşılığı "8000" şeklinde elde edilecektir.


>❔
> 2 byte'lık alanda işaretli olarak "-1" değerini hex olarak ifade ediniz.
> 
> Çözüm;
> 
> "-1 hepsi bir"den ikilik tabanda "1111 1111 1111 1111" sayısını buluruz ve hex olarak "FFFF" sayısını buluruz.


## 5.Ders

### 5.Ders 1. Mülakat Sorusu

👇 Aşağıdaki programın bir mülakatta yorumlanması istendiğinde verilecek cevap `x` değişkeninin "**indetermined value**" değer alacağı için "**ub**" durumunun oluşacağıdır. </br>
😱 Aşağıdaki gibi kodlar Türkiye'deki bazı firmaların yaptığı mülakatlarda sorulduğu oluyormuş ve bu kursu bitiren kişiler cevap olarak burada "**ub**" var diye cevap verdiklerinde mülakatı yapan kişi trajikomik şekilde "_**ub** de ne demek programlar deteministtir olmaz öyle şey._" diyorlarmış!
```C
#include <stdio.h>

int main(void)
{
   int x;
   int y = x + 7; // Bu statement çöp değere sahip 'x' eğişkenini içerdiği için 'ub' durumuna neden olacaktır.

   printf("x = %d, y = %d\n", x, y);
}
```


## 6.Ders

### 6.Ders 1. Mülakat Sorusu

Necati Ergin, C ve C++ mülakatlarını yaparken ilk baştan çok basit sorular ile başlayıp doğru cevapları alabilirse soruları zorlaştırarak mülakata devam ediyormuş, bu temel sorulardan biri 👇 aşağıdaki gibidir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
  int printf = 6; // Derleyici bu statement için hata vermeyecektir
  
  // Derleyici aşağıdaki statement için compile-time anında 'printf is not a function' hatası verecektir. 
  // Bunun nedeni 'Name Lookup' işleminde 'printf'in bir 'int' değişken olarak kabul edilmesidir.
  printf("Hello Word!");
}
```


### 6.Ders 2. Mülakat Sorusu

❔Aşağıdaki programdaki `int x = x;` legal ve doğru mudur diye mülakatlarda çok soruluyormuş. </br>
👇 Aşağıdaki "main" kodunda **name hiding** vardır, global alandaki `x` değişkeni "main" fonksiyonu içerisinde **name hiding** işlemine uğruyor.</br>
`int x = x;` satırında **ub** vardır, **ub** durumu `x` değişkeninin tanımlandığı yerde kendisine kendi değeri atanmış olduğu için oluşuyor.
```C
#include <stdio.h>

int x = 10;

int main(void)
{
    int x = x; // Burada 'ub' durumu var, burada bildirilen x adına verilen ilk değer kedisi olduğu için 'ub' durumu oluşuyor.
}
```


## 7.Ders

### 7.Ders 1. Mülakat Sorusu

Mülakatlarda en çok sorulan sorulardan biri => `foo(a, b); // ',' separator`, `bar((a, b)) // ',' operator` kullanımlarında `,` karakterinin **operator** mü yoksa **separator** mü diye sorulmasıymış.


### 7.Ders 2. Mülakat Sorusu

C mülakatlarında sorulan en temel soru: Aşağıdaki C kodunda ekrana ne yazılacaktır. </br>
Burada şuna dikkat edilmesi gerekiyor, `foo(i)` fonksiyonunun sadece bildirimi var **tanımlaması(gövdesini)** yok ama biz şunu biliyoruz: "_C dilinde bir fonksiyona gönderilen değerler varsayılan olarak **Call by Value(Pass by Value)** ve bu durumda `i` değişkeninin değerinin `foo` fonksiyonundan değiştirilmeyeceğidir._". </br>
C++ dilinde cevap şudur: `foo(i)` fonksiyonunun **tanımını(gövdesini)** görmemiz gerekiyor.
```C
#include <stdio.h>

void foo(int a);

main(void) // 'main' fonksiyonun geri dönüş değeri 'int' olarak kabul edilir, burada 'Implicit int' kullanılmıştır ama bu tavsiye edilm
{
    int i = 10;

    printf("i = %d\n", i); // Ekrana 'i = 10' yazacaktır.
    foo(i); // Burada fonksiyona 'i' değişkeninin değeri gönderiliyor.
    printf("i = %d\n", i); // Ekrana 'i = 10' yazacaktır.

    return 0;
}
```


## 8.Ders

### 8.Ders 1. Mülakat Sorusu

👇 Aşağıdaki programda yazılan `for` döngülerinin nasıl çalışacağı incelenebilir. </br>
🎉🥳 Bazen C mülakatlarında bu programdaki gibi döngüler verilip nasıl çalışacağı soruluyormuş.
```C
#include <stdio.h>

int main(void)
{
    // Aşağıdaki döngüde döngü şartındaki 'i < 9l' ifadesi 'i < 9L' şeklinde yazılması daha okunaklı olacaktır.
    for(int i = 80; i < 9l; ++i){
        printf("%d", i);
    }

    // Aşağıdaki döngüde döngü şartındaki 'i < 015' ifadesindeki gibi başında '0' eklendiği için sayı octal sayı tabanına göre yorumlanacaktır. 
    for(int i = 12; i < 015; ++i){
        printf("%d", i);
    }
}
```


### 8.Ders 2. Mülakat Sorusu

👇 Aşağıdaki programdaki gibi büyük harf `'A'` karakterini yazmak için kullanılan doğrudan `65` rakamının kullanılmasıyla `A` karakterinin kullanılması arasında ne gibi bir farklılık vardır diye C mülakatlarında sorulabiliyormuş, buradaki cevap çok açık eğer karakterin sayısal kodu kullanılırsa C programının çalışacağı karakter kodlaması değiştirildiğinde sorun yaşanır o nedenle doğrudan kullanılan karakterin yazılması doğru olacaktır çünkü **ASCII** dışındaki bir karakter kodlamasında 65 rakamı `'A'` karakterine karşılık gelmeyebilir.
```C
#include <stdio.h>
#include <ctype.h>

int main(void) 
{
    int upper_a = 65; // Bu kullanım tercih edilmemelidir.
    int upper_a = 'A'; // Bu kullanım tercih edilmelidir.
}
```

## 9.Ders

### 9.Ders 1. Mülakat Sorusu

C ile ilgili mülakatlarda sorulan sıradan bir soru aşağıdaki gibidir. </br>
👇 Aşağıdaki programın çıktısı ne olur?
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int x = 232434;

    // Buradaki çıktı "23243461" şeklinde olacaktır. Kademeli olarak en içten dışa doğru şunlar yazdırılır: "232434" "6" "1".
    printf("%d", printf("%d", printf("%d", x)));
}
```


## 11.Ders

### 11.Ders 1. Mülakat Sorusu

C mülakatlarında sıkça sorulan bir soru: On tane "0.1" sayısı toplanırsa sonucun nasıl olacağı sorulmaktadır. </br>
👇 Aşağıdaki **kayan noktalı sayılar** ile yapılan toplama işleminin sonucunu yazılımda kullanılan **kayan noktalı sayı** gösteriminin hangi standarda göre yapıldığı etkilemektedir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    double d = 0.;

    for(int i = 0; i < 10; ++i){
        d += 0.1;
        printf("%d. step, d = %f\n", i, d);
    }    
    
    if(d == 1.)
        printf("evet tabi ki dogru\n");
    else
        printf("hayır tabi ki yanlis\n");

    return 0;
}
```


### 11.Ders 2. Mülakat Sorusu

❗ Bir C mülakatında `x && y`, `!expr` şeklindeki **ifadelerin(expression)** değerleri sorulursa cevabın "int" türü olacağı bilinmelidir, cünkü C dilinin tarihsel gelişiminden dolayı locig ifadelerin türleri "int" türüdür ve "zero/non-zero" olarak "true/false" değerleri işlenir.


### 11.Ders 3. Mülakat Sorusu

❔ Aşağıdaki program C dilinde olmayan **xor** operatörünün en kolay şekilde nasıl yazılabileceğini göstermektedir, C mülakatlarında **xor** operatörünün yaptığı içi yapan bir ifadenin nasıl yazılabileceği soruluyormuş.
```C
#include <stdio.h>

int main(void)
{
    int x, y;

    printf("İki tam sayı giriniz:");
    scanf("%d%d", &x, &y);
    
    printf("%d xor %d = %d", x, y, !!x != !!y); // Bu kullanım ile C dilinde olmayan 'xor' operatörü gibi çalışacak mantıksal yapı kurgulanmış olur.
}
```

🧠 `!!x != !!y` şeklinde bir ifade, **xor** operatörünün yaptığı işi yapacaktır.

### 11.Ders 4. Mülakat Sorusu

❔ Aşağıdaki program programlama dili ne olursa olsun mülakatlarda sorulan çok temel bir soru olan "Girilen üç sayıdan ortancasını bulan programı yazınız." sorusudur;
- 👇 Aşağıdaki program girilen üç sayının ortancasını bulmak zor olabileceği için tek tek sayıların en büyük ya da en küçük sayı olma durumları için kural yazıp bunun değilini(de morgan) aldığımızda o yazının ortanca olma durumunu tespit ederiz. 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Kendisine argüman olarak verilen sayılardan ortanca olan sayıyı dönen foksiyon
int getmid(int x, int y, int z)
{
    // '(x > y && x > z)' ifadesi 'x' en büyük sayı mı sorgulaması
    // '(x < y && x < z)' ifadesi 'x' en küçük sayı mı sorgulaması
    // Yukarıda açıklanan iki ifadenin veya ile birleştirilmesinden oluşan ifade de 'x'in ortanca olmama durumunun mantıksal gösterimidir.
    // Yukarıda açıklanan iki ifadenin değilinin alındığı durumdaki ifade ise 'x'in ortanca sayı olma durumunu gösterecektir.
    if( !((x > y && x > z) || (x < y && x < z)) )
        return x;

    if( !((y > x && y > z) || (y < x && y < z)) )
        return y;

    return z;
}

int main(void)
{
    int x, y, z;

    printf("ortanca sayiyi bulmak için uc tane tam sayi giriniz:");
    scanf("%d%d%d", &x, &y, &z);

    printf("girilen sayilar: %d, %d %d ve ortaca sayi %d.\n", x, y, z, getmid(x, y, z));

    return 0;
}
```

## 12.Ders

### 12.Ders 1. Mülakat Sorusu

👇 Aşağıdaki programda Microsoft firmasını mülakatında sorulmuş C sorusu "Program çalıştırıldığında 'z' değişkeninin değeri ne olur?". </br>
- Sorunun cevabı: `z = (y = 9) * y` ifadesine(expression) **ub** vardır. **ub** durumu varsa program çalışma anında her şey olabilir, bu her şeye kodun nasıl çalışacağı beklentisi de dahildir." şeklinde olacaktı.
```C
#include <stdio.h>

int main(void)
{
    int y = 5;

    int z = (y = 9) * y; // Burada 'ub' durumu vardır çünkü '(y = 9)' ifadesinden sonra bir 'sequence point' ve bu ifadede değeri değiştirilmek istenen 'y' değişkeni ikinci defa kullanılıyor.

    printf("z = %d", z);

    return 0;
}
```

### 12.Ders 2. Mülakat Sorusu

🚀 C mülakatlarında `4.5` ve `4,5` gibi sabitlerin(constant) bazı ifadelerde `.` yerine `,` kullanılmasından kaynaklanabilecek farklılıklar sorulmaktadır. Bu durumla ilgili yukarıda yazılan kodlar dikkatli incelenmelidir.


## 13.Ders

### 13.Ders 1. Mülakat Sorusu

❔Mülakatlarda sık sorulan sorularından biri, bu soru çok önemli değilmiş ama bazen soruluyormuş:
- İki tam sayının değerini 3. değişken kullanmadan takas(swap) ediniz(buna **xor swap** deniyor).
- 👇 Aşağıdaki program ile iki sayının üçüncü bir değişken kullanmadan nasıl birbiriyle değiştirilebileceği incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x = 10, y = 20;
    
    printf("x = %d, y = %d", x, y);
    
    x ^= y;
    y ^= x;
    x ^= y;

    // Yukarıdaki üç statement aşağıdaki gibi tek bir statement olarak yazılabilir.
    // x ^= y, y ^= x, x ^= y;
    
    printf("x = %d, y = %d", x, y);

    return 0;
}
```


### 13.Ders 2. Mülakat Sorusu

❔ C mülakatlarında çok sorulan bir soru aşağıdaki gibidir;
- Girilen bir tam sayının üçe tam bölünüp bölünmediğini tespit eden bir program yazınız?
- 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int x;

    printf("bir karakter girin: ");
    
    while((ch = getchar()) != '\n'){
        // Buradaki kullanımın nedenini anlamak önemlidir.
        sum += ch - '0'; // 'ch' değişkeni bir rakam karakteri ve biz bu rakam karakterinin karşılık geldiği sayısal değerini bulmak için '0' karakterinden çıkartıyoruz, tüm karakter kodlamalarında on tabanındaki rakam karakterlerinin kodlarının 0'dan 9'a kadar sıralı olduğu kesin olduğu için bu işlem ile rakam karakterinin sayısal kaşılığını buluyoruz.
    }

    if(sum % 3 == 0)
        printf("evet bolunur.\n");
    else
        printf("hayir bolunur.\n");
    
    return 0;
}
```

## 14.Ders

### 14.Ders 1. Mülakat Sorusu

❔Herhangi bir programlama dili mülakatlarında aşağıdaki soru çok soruluyormuş: Bir yılın(year) artık yıl(leap year) olup olmadığını test eden bir fonksiyon yazınız?

**Artık yıl tanımı**: Dörde tam bölünen ancak 100'e tam bölünmeyen ya da 400'e tam bölünen 
- 1987: 4'e tam bölünmüyor. Hayır artık yıl değil.
- 1984: Evet artık yıl.
- 2000: Evet artık yıl. 4'e tam bölünür, 100'e bölünür ama 400'e tam bölündüğü için artık yıldır.
- 1900: Hayır artık yıl değildir. 4'e tam bölünür 


👇 Aşağıdaki program bir yılın artık yıl olup olmadığı cevabını dönen 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Aşağıdaki kodda '&&' operatörünün sağ operandı olan ifadede öncelik parantezini kaldırırsak kod hayla doğru olur mu?
// Doğru olur.
int isleap(int y)
{
    return y % 4 == 0 && (y % 100 != 0 || y % 400 == 0);
}

// Aşağıdaki fonksiyon 'isleap' fonksiyonu ile aynı sonucu üretir, parantezler kaldırılmasına rağmen neden bir sorun olmadığını düşünmen gerekiyor!
int isleap_v2(int y)
{
    return y % 4 == 0 && y % 100 != 0 || y % 400 == 0;
}

int main(void)
{
    int year;

    printf("bir yil degeri giriniz:");
    scanf("%d", &year);  

    // Aşağıdaki bicinde yazmak daha yaygındır.
    if(isleap(year)){
        printf("evet artık yil\n");
    }
    else{
        printf("hayır artık yil degil.\n");
    }

    return 0;
}
```

### 14.Ders 2. Mülakat Sorusu

❔ Aşağıdaki soru mülakatlarda sorulduğunda 9/10 soruya yanlış cevap veriyormuş.
- 👇 Aşağıdaki program "Program çalıştığında process'in akışı `double dval = 10 / (a == 5 ? x : d);` kodunun olduğu yere geldiğinde ekrana `dval` değeri ne olarak yazdırılır?" bu sorunun anlaşılması için incelenebilir. 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stlib.h>
#include <ctype.h>

int main(void)
{
    int x1 = 10, y1 = 3;
    double d1 = x1 / y1;

    printf("d1 = %d\n", d1); // Burada ekrana 'd1 = 3' yazacaktır.

    int a = 5;
    int x = 3;
    double dval = 3.;

    double dval = 10 / (a == 5 ? x : d); // Buradaki 'a == 5 ? x : d' ifadesinin türü 'double' türüdür, işte bu bilgi bu soru için en önemli bilgidir. Ternary operant'ın türü ikinci ve üçüncü ifadelerinin türlerinden en kapsayıcı olanının türü olacaktır.

    printf("dval = %f\n", dval); // Konsola 'dval = 3.3333' yazacaktır

    return 0;
}
```


### 14.Ders 3. Mülakat Sorusu

❔ Aşağıdaki soru mülakatlarda çok sık sorulan sorularda biridir ve 9/10 kişi yanlış cevap veriyormuş, burada dikkat önemli.
- Aşağıdaki program çalıştırıldığında konsola ne yazar?
- 👇 Aşağıdaki program detaylı incelendiğinde `while(i++ < 10);` statement görülecektir burada sonra ';' token'ı var ve bu da döngünün bir statement çalıştırmadan on defa dönmesine ve en son adımda `i++` ifadesinden dolayı `i`nin değerinin 11 olmasına neden olur, bundan sonra `printf("%d ", i);` statement çalıştırılır ve ekrana "11" yazar.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int i = 0;
    
    while(i++ < 10);
        printf("%d ", i);
    
    return 0;
}
```


## 15.Ders

### 15.Ders 1. Mülakat Sorusu


❔
👇 Aşağıdaki program programlama dilinden bağımsız olarak mülakatların döngülerle ilgili olarak temel düzeyde sorulan dört soruyu içermektedir.
1. Girilen bir tam sayının basamak değerini hesaplama işlemi.
2. Girilen bir tam sayının basamaklarının toplamını hesaplama işlemi.
3. Girilen bir tam sayının tersini bulma işlemi.
4. Girilen bir tam sayıyı yazıya dönüştürme işlemi(Bu kursun şu anki seviyesi için biraz zor bir işlemdir). 
```C
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<conio.h> // Standart olmayan '_getch' fonksiyonunun kullanabilmek için eklenmiş standart olmayan başlık dosyası
#include<stdlib.h>
#include<time.h>

// Aşağıdaki fonksiyon aldığı tam sayının kaç basamaklı olduğu bilgisini döndürür. 
int ndigit(int x)
{
    if(x == 0)
        return 1;

    int digit_count = 0;

    while(x){
        ++digit_count;
        x /= 10;
    }

    return digit_count;
}

// Aşağıdaki fonksiyon aldığı tam sayının basamak değerlerinin toplamını döndürür.
int sumdigit(int x)
{
    int sum = 0;

    while(x){
        sum += x /= 10;
        x = x /= 10; 
    }

    return sum;
}

// Aşağıdaki fonksiyon aldığı tam sayının tersini geriye döndürür.
int revdigit(int x)
{
    int result = 0;

    while(x != 0){
        result = result * 10 + x % 10;
        x = x /= 10; 
    }
    
    return result;
}


int main(void)
{
    int x;
    printf("bir tam sayi giriniz:");
    scanf("%d", &x);

    // Aşağıdaki döngü ile girilen tam sayının her adımda ona bölüm sonucu yazdırılacaktır.
    while(x != 0){
        printf("%d\n", x);
        x /= 10;
    }


    printf("bir tam sayi giriniz:");
    scanf("%d", &x);

    // Aşağıdaki döngü ile girilen tam sayının her adımda birler basamağı yazdırılacaktır.
    while(x != 0){
        printf("%d\n", x % 10);
        x /= 10;
    }
    
    
    printf("bir tam sayi giriniz:");
    scanf("%d", &x);

    printf("%d sayisinin %d basamakli.\n", x, ndigit(x));
    printf("%d sayisinin basamaklari toplami %d.\n", x, sumdigit(x));
    printf("%d sayisinin tersi %d.\n", x, revdigit(x));
    
    return 0;
}
```


### 15.Ders 2. Mülakat Sorusu

Mülakatlarda sık sorulan sorulardan biri aşağıdaki gibidir;
- Konsola "merhaba dunya" yazdıran C programını yazınız fakat bir kısıt var, yazılan programda ";" token'ı olmayacak?
- 👇 Aşağıdaki programda sorunun üç farklı cevabı görülebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main(void)
{
    // 1. cevap
    if(printf("merhaba dunya"))
    {}

    // 2. cevap
    while(!printf("merhaba dunya"))
    {}
    
    // 3. cevap
    switch(printf("merhaba dunya"))
    {}
}
```





## 16.Ders

### 16.Ders 1. Mülakat Sorusu

👇 Aşağıdaki program kullanıcıdan alınan aralıktaki asal sayıları yazdırma işlemi için incelenebilir.
👇 Aşağıdaki programın nasıl yazıldığını bilmek mülakatlarda avantaj sağlayacaktır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 1 sayısı asal sayı değildir.
int isprime(int x)
{
    if(x < 2)
        return 0;

    if(x % 2 == 0)
        return x == 2; // Buradaki kod sadece 'x' değeri 2 olduğunda 1(true) diğer durumlarda 0(false) değer döndürülür.

    if(x % 3 == 0)
        return x == 3;

    if(x % 5 == 0)
        return x == 5;

    
    for(int i = 7; i * i <= x; i += 2){
        if(x % i == 0){
            return 0;
        }
    }

    return 1;
}
	
int main(void)
{
    int low, high;

    printf("serinin sayi araligi giriniz: ");
    scanf("%d%d", &low, &high);

    for(int i = low, i < high; ++i)
        if(isprime(i))
            printf("% asal\n", i);
        //else
        //  printf("% asal degil\n", i);
    
    return 0;
}
```

### 16.Ders 2. Mülakat Sorusu

❔ Aşağıdaki soru mülakatlarda sıklıkla soruluyormuş.
- 👇 Aşağıdaki program "Program çalıştırıldığında ekrana ne zaydırılır(standar çıktı akımına ne gönderilir) ?" bu sorunun anlaşılması için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{  
    int i, j;
    int cnt = 0;

    for(i = 0; i < 10; ++i)
        for(j = 0; i < 20; ++j); // Buradaki 'if statement' sonunda ';' token'ı olduğu için bir alttaki 'printf' fonksiyonu iç içe döngüye dahil değildir.
            printf("[%d %d]", i, j); // Burada ekrana '[10 20]' yazdıracaktır.

    return 0;
}
```


### 16.Ders 3. Mülakat Sorusu

Mülakatlarda asal çarpanlara ayırma kodunun yazılması sıklıkla soruluyormuş.
- 👇 Aşağıdaki program çarpanlara ayırma işleminin nasıl yapılabileceğini anlamak için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{  
    int x;
    
    printf("bir tam sayi giriniz: ");
    scanf("%d", &x);

    int val = 2;
    while(x != 1){
        while(x % val == 0){
            printf("%d ", val);
            x /= val;
        }
        ++val;
    }
    
    return 0;
}
```

## 17.Ders

### 17.Ders 1. Mülakat Sorusu

👇 Mülakatlarda en çok sorulan sorulardan biri aşağıdaki bilgiyle ilgilidir.
⚠️ C dilinde aşağıdaki fonksiyon bildiriminde parametre parantezinin içinin boş bırakılması fonksiyonun parametre değişkeninin olmadığı anlamına gelmiyor.
C++ dilinde `int foo();` ve `int foo(void);` fonksiyon bildirimleri aynı anlama gelmektedir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int foo(); // Parametre değişkeni sayısı ve türleri hakkında bilgi verilmemektedir.

int main(void)
{
    // Aşağıdaki fonksiyon çağrıları legal'dir ve derleme hatası oluşmaz.
    foo();
    foo(1);
    foo(1, 2);
    foo(1, 3, 8);
}
```

👇 Aşağıdaki programda `bar` fonksiyonunun bildiirminden hiç parametre almadığı anlaşılmaktadır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int bar(void); // Bu fonksiyon tanımı ile 'bar' fonksiyonunun herhangi bir parametre almayacağı belirtilmiş olur.

int main(void)
{
    // Aşağıdaki fonksiyon çağrıları illegal'dir ve derleme hatası oluşur.
    bar();
    bar(1);
    bar(1, 2);
    bar(1, 3, 8);
}
```

## 18.Ders

### 18.Ders 1. Mülakat Sorusu

Mülakatlarda sorulan bir soru: `limits.h` başlık dosyasındaki `#define INT_MIN (-2147483647 -1)` makrosu neden bu şeklinde yazılıyor? </br>
"-2147483648" sabitinin değeri "2147483648" ve bu değer int türünün sınırını aştığı için "(-2147483647 -1)" şeklinde kullanılmaktadır.


### 18.Ders 2. Mülakat Sorusu

Mülakatlarda sık sorulan bir soru;
- İki tam sayının değerini **takas eden(swap)** bir makro oluşturunuz?
- 👇 Aşağıdaki programda sorunun çözümü incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define SWAP1(a, b) {int temp = a; a = b; b = temp;}

#define SWAP1(a, b) do{int temp = a; a = b; b = temp;}while(0)

int main(void)
{
    int x = 10;
    int y = 20;
    
    if(x > y)
        SWAP1(x, y); // Burada sözdizim hatası(syntax error) oluşacaktır çünkü kıvırcık parantezden sonra ';' token'ı ekleniyor bu da 'else' bloğunun sözdizimini(syntax) bozuyor.
    else
        ++x;
        
    printf("x = %d, y = %d\n", x, y);


    if(x > y)
        SWAP2(x, y); // Burada sözdizim hatası(syntax error) oluşmayacaktır.
    else
        ++y;
        
    printf("x = %d, y = %d\n", x, y);
}
```


### 18.Ders 3. Mülakat Sorusu

❗ C mülakatlarında fonksiyon kullanımıyla makro kullanımının karşılaştırılmasıyla ilgili sorular eğer mülakatı yapan kişi yetkin biriyse mutlaka sorulacaktır. Her iki yapı da birbirine göre artı ve eksilere sahiptir.

👇 Aşağıdaki programda makro kullanımında "**ub**" durumu oluşacaktır, bu oluşabilecek hatalar için bazı önlemler alınabilir bu önlemlere dersim ilerleyen kısımlarında değinilecektir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SQUARE(x)   ((x) * (x))

int foo();

int main(void)
{
    int x = 7;
    
    // Burada 'SQUARE' makrosunda aynı ifade iki defa geçiyor ve bu ifade '++' operatörü gibi yan etkisi olan bir operatörle kullanıldığında 
    // function-like makro '((x++) * (x++))' şeklinde bir ifade oluşturacaktır ve bu ifade de yan etkiye maruz kalmış bir nesne(object) yeniden kullanıldığı için 'ub' durumu oluşur.
    int y1 = SQUARE(x++);

    printf("y1 = %d", y1);
    
    
    // Aşağıdaki kod satırındaki 'function-like makro' şu şekilde '((foo()) * (foo()))' replace edilir ve bu da eğer 'foo' fonksiyonu 'pure-function' değilse ciddi hatalara neden olabilir.
    int y2 = SQUARE(foo());
    
    printf("y2 = %d", y2);
}
```

❗**Function-like makro** kullanımlarında makro parametresi eğer makro içinde birden fazla defa kullanılıyorsa ve makro parametresi side-effect özelliği olan bir ifade ise bu **ub** sorununa neden oluyordu, bu durum için aşağıdaki gibi çözümler uygulanabilir;

1. İlk çözüm **function-like makro** tanımında bir önlem almayıp sorumluluğu makroyu çağıran koda bırakmaktır ama bu yöntem proje bir ekip olarak geliştiriliyorsa önerilmez.

2. **Gcc** ve **Clang** gibi derleyicilerde **compiler extension** olarak **statement expression** desteği ile **function-like makro** kullanımlarındaki en önemli sorun için çözüm sağlıyor.

    `({ statements; })` şeklindeki kullanım **statement expression** kullanımıdır ve aşağıdaki sözde kod gibi kullanılabilir.</br>
    **statement expression** değeri en son statement değeridir, aşağıdaki koddaki **statement expression** değeri `x * y;` değeridir yani "48" olacaktır.
    ```C
    (
        {
            int x = 5;
            int y = 7;

            ++x;
            ++y;
            x * y;
        }
    )
    ```

    `#define SQUARE(x) ({ int a = x; a * x; })` bu kullanım **compiler extension** olan **statement expression** ile çözüm üretmektir.

3. Kullanıcı kodda iki farklı seçenek sunmak, bu çözümde de sorumluluk kodu yazana bırakılıyor.
    1. Fonksiyon kullanımı.
    2. Fonksiyonel makro kullanımı.

    👇 Aşağıdaki programda aynı işi yapan makro ve fonksiyonun aynı adda olmaksızın nasıl kullanılabileceği görülebilir. 
    ```C
    #define _CRT_SECURE_NO_WARNINGS

    #include <stdio.h>
    #include <stdlib.h>

    int square(int a)
    {
        return a * a;
    }

    #define SQUARE(x)   ((x) * (x))

    int main(void)
    {
        int x = 3;

        printf("Usage with 'square() function', square(x++): %d:\n", square(x++));
        
        printf("Usage with 'SQUARE() functional-makro', SQUARE(x): %d\n", SQUARE(x));
    }
    ```

    ❗ Bazı C kütüphanelerinde tüm fonksiyon tanımları aynı adda tanımlanan makrolar varsa diye ad çakışması olmaması için fonksiyonlar `int (square)(int a){ return a * a; }` şeklinde fonksiyon adları paranteze alınarak tanımlanıyor, bu da ad çakışması oluşma durumunu engellemektedir.


❔
Mülakatlarda şu şekilde bir soru sorulabilir;
- Aynı adda hem bir makro var hem de bir fonksiyon var bu ikisini aynı kodda nasıl bir arada kullanırım?
- 👇 Aşağıdaki programda aynı adda olan makro ve fonksiyon nasıl bir arada kullanılabileceği incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

#define square(x)   ((x) * (x))

// Aşağıdaki fonksiyon tanımlamasında 'int square(int a)' bu şekilde kullanılsaydı, önişlemci programı önce çalıştığı için 'square' adını 'object-like makro'nun bildirimindeki ifadeyle yer değiştirecektir.
int (square)(int a)
{
    return a * a;
}

int main(void)
{
    int x = 3;

    int y1 = square(6); // Burada makro kullanılmaktadır.

    int y2 = (square)(6); // Burada fonksiyon çağrısı yapılmaktadır.

    printf("y1: %d:\n", y1);
    printf("y2: %d:\n", y2);
}
```


## 19.Ders

### 19.Ders 1. Mülakat Sorusu

❗Mülakatlarda **function-like makro** ve **fonksiyon** kıyaslamanın yapılmasının istenmesi çok sık sorulan bir sorudur.

1. Fonksiyon çağrıları optimize edilebilecek kod bloğunu daraltmaktadır. Makrolar fonksiyon çağrı maliyetine sahip değildir. Makroların en sık kullanılma nedeni fonksiyon çağrı maliyetinden kurtulmaktır. Eğer derleyici **inline extension** yapmıyor ise fonksiyon kullanımlarında fonksiyon çağrı maliyeti kodda oluşacaktır.


## 20.Ders

### 20.Ders 1. Mülakat Sorusu

👇 Aşağıdaki programdaki kullanım legal'dir ve hiç bir sonlandırıcı token kullanmadan ekrana yazı yazdırmak için yazılan bir programdır, bunu bazen mülakatlarda soruluyormuş.
```C
#include <stdio.h>

int main(void)
{
    switch(printf("bir yazi yazilacak!")){

    }         
}
```


### 20.Ders 2. Mülakat Sorusu

C mülakatlarında sorulan eğlenceli bir soru?
- 👇 Aşağıdaki programda bir yanlışlık var mıdır, açıklayınız?
```C
#include  <stdio.h>

int main(void)
{
    void foo(void){
        switch(x){
            case 1: /* ... */ break;
            case 2: /* ... */ break;
            case 3: /* ... */ break;
            case 4: /* ... */ break;
            defualt: x++; // Buradaki 'defualt' yanlış yazılmıştır doğrusu 'default' olmalıydı ama sözdizim hatası(syntax error) yoktur
        }
    }
}
```


## 21.Ders

❗Necati Ergin kendi yaprığı C mülakatlarında en çok sorduğu en basit sorulardan biri aşağıdki gibidir, bu soruya işi profesyonel olarak C programı yazmak olanların %60 civarı yanlış cevap veriyormuş.
- 👇 Aşağıdaki programda `char` türlerinde yapılan işlemlerdeki **integral promotion** durumunun nasıl uygulandığı incelenebilir. 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    char c1 = 3;
    char c2 = 7;

    c1 + c2; // Buradaki 'c1 + c2' ifadenin türü 'integral promotion' işlemi uygulandığı için 'int' olmaktadır.


    short s1 = 3;
    short s2 = 7;

    s1 + s2; // Buradaki 's1 + s2' ifadenin türü 'integral promotion' işlemi uygulandığı için 'int' olmaktadır.
}
```

## 22.Ders

### 22.Ders 1. Mülakat Sorusu

❗ Yazılım mülakatlarında sorulan en temel sorulardan biri verilen bir programın algoritma karmaşıklığının hesaplanmasıdır ya da bir algoritmanın belirli bir zaman karmaşıklığı ya da daha performans şartını sağlayacak şekilde programının yazılmasının istenmesidir.

### 22.Ders 2. Mülakat Sorusu

❗`sizeof` operatörünün operandı olan ifade için işlem kodu oluşturulmaz, bu C dilinin kuralıdır ve C mülakatlarında sıklıkla sorulmaktadır. </br>
👇 Aşağıdaki programda yukarıda beliritlen önemli durum incelnebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int x = 7;

    int sz = sizeof(x++); // Derleyici buradaki 'x++' ifadesine sadece tür bilgisi olarak bakmaktadır ve 'x++' için makine kodu üretilmediği için x değişkeni değeri değişmeyecektir.
    
    printf("sz = %d\n", sz);
    printf("x = %d\n", x);
}
```

### 22.Ders 3. Mülakat Sorusu

🚀 Mülakatlarda sorulan güzel bir soru mevcuttur. </br>
🚀 Soru: Program çalıştırıldığında ekrana dizinin hangi elemanlarını yazdırır? </br>
👇 Aşağıda bu soru için verilen program yer almaktadır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define asize(ary) (sizeof(ary) / sizeof(ary[0])) 

int main(void)
{
    int arry[] = { 1, 2, 3, 4, 5 };

    // Aşağıdaki döngüye girilmeyecektir, 'i < asize(arry) - 3' buradaki ifadeye türler açısından bakarsak 'int < unsigned int' işlemi yapılacaktır ama 
    // bu karşılaştırmada 'int' türü 'unsigned int' türüne dönüştürüldükten sonra karşılaştırma yapılacaktır, 
    // '-3' int türünden 'unsigned int' türüne dönüştürüldüğünde çok büyük bir sayıya dönüştüğü için döngüye girilmemektedir.
    for(int i = -3; i < asize(arry) - 3; ++i){
        printf("%d ", arry[i + 3]);
    }

    // Aşağıdaki döngüye girilecektir.
    for(int i = -3; i < (int)(asize(arry) - 3); ++i){
        printf("%d ", arry[i + 3]);
    }
}
```

Cevap;
🧠 Programın for döngüsü incelendiğinde tür dönüşümlerinden dolayı hiç bir zaman döngüye girilmeyeceği anlaşılacaktır, **asize** adındaki **function-like makro** bünyesinde `sizeof` operatörünü barındırıyor ve bu operatörün üreteceği değer işaretsiz tam sayı değeri, döngü şartında `int` ve **işeretsiz int** türü mantıksal(logic) işleme sokulduğunda işlem tür dönüşümü kuralları gereği işaretsiz tam sayı türünde yapılacaktır, bu işlemde `i < asize(arry) - 3` ifadesindeki `<` operantının sol operantı olan "-3" bitlerinde değişiklik yapılmadan türü işaretsiz tam sayı türü olarak değerlendirildiği için çok büyük bir sayı olacaktır ve bu nedenle de döngü şartı her zaman zero(false) değerde olur ve döngüye hiç bir zaman girilmez. </br>
🎉 Fakat C mülakatlarına giren kişiler bu soruya "Dizinin tüm elemanları yazdırılacaktır." şeklinde cevap verip tongaya düşüyorlarmış.


## 23.Ders

### 23.Ders 1. Mülakat Sorusu

🧭 Programlama mülakatlarında da sorulan, **Monte Carlo Simulation** kullanılarak basit bir kumar oyunu olan "**Craps Casino Game**" programını yazalım, oyun şu şekildedir;
- 🎲 Oyuncu iki zar atacak ve aşağıdaki durumlarda kacanma kaybetme durumları gerçekleşecek.
- İlk zar attığında iki zarın toplam değeri "7 - 11" gelirse oyuncu kazanır.
- İlk zar attığında iki zarın toplam değeri "2 - 3 - 12" gelirse oyuncu kaybeder
- 4 - 5 - 6 - 8 - 9 - 10 sayıları gelince aynı sayı toplamını atarsa kazanır ama iki zarın toplamı 7 gelirse kaybeder.
- Oyuncunun kazandığı bir oyun şu şekildedir: `8 9 11 3 4 11 8`
- Oyuncunun kaybettiği bir oyun şu şekildedir: `6 2 11 5 4 9 12 7`


⚠️ Bu oyunda oyuncunun oyunu kazanma olasılığı nedir diye sorulsa bu olasılığı hesaplamak kağıt kalem ile biraz zor olacaktır.


👇 Aşağıdaki programda **Craps Casino Game** oyununun C diliyle nasıl yazılabileceği incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"
#include <stdlib.h>
#include <conio.h>

#define NUMBER_OF_GAMES 100'000

// Bu fonksiyon bir oyuncunun atacağı iki zarın toplamını dönecektir
double roll_dice(void)
{
    //return rand() % 11 + 2; // Buradaki gibi yazılmamalıdır, cünkü bu durumda tüm sayı değerlerinin gelme olasılığı aynı olacaktır ama iki zar olduğu için iki zarın ne geleceğinin ayrı ayrı hesaplanması gerekir.

    int dice1 = rand() % 6 + 1; // Burada 'uniform dağılım' için standart C kütüphanesinin 'rand' fonksiyonu kullanıldı ama bu kullanım çok kaliteli değildir.
    int dice2 = rand() % 6 + 1;

    return dice1 + dice2;
}

int game_(int dice)
{
    // Aşağıdaki sonsüz döngü 'while(1)' kullanılarak ta yazılabilir.
    for(;;){
        int new_dice = roll_dice();

        if(new_dice == dice)
            return 1;
        
        if(new_dice == 7)
            return 0;
    }
}

// if return value is 1 => player wins
// if return value is 0 => player loses
// This function includes first game rouls.
int game(void)
{
    int dice = roll_dice();

    switch(dice){
        case 7:
        case 11: return 1;
        case 2:
        case 3:
        case 12: return 0;
        default: return game_(dice);
    }
}

int main(void)
{
    int win_count = 0;

    for(int i = 0; i < NUMBER_OF_GAMES; ++i){
        win_count += game();
    }

    pritf("oyuncunun kazanma olasiligi %f\n", (double)win_count / NUMBER_OF_GAMES);
}
```


👇 Aşağıdaki programda **Craps Casino Game** oyununun C++ diliyle nasıl yazılabileceği incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"
#include <stdlib.h>
#include <conio.h>
#include <random> // C++ dilinin standart kütüphenesinin rastgele sayı üretimiyle ilgili kütüphane dosyası ekleniyor

#define NUMBER_OF_GAMES 100'000

// Bu fonksiyon bir oyuncunun atacağı iki zarın toplamını dönecektir
// C++ dilinin kaynaklarını kullanarak daha başarılı 'uniform dağılım' sağlayan bir fonksiyon
double roll_dice(void)
{
    static std::mt19937 eng;
    std::uniform_int_distribution dist{ 1, 6 };

    int dice1 = dist(eng);// rand() % 6 + 1;
    int dice2 = dist(eng);// rand() % 6 + 1;

    return dice1 + dice2;
}

int game_(int dice)
{
    // Aşağıdaki sonsüz döngü 'while(1)' kullanılarak ta yazılabilir.
    for(;;){
        int new_dice = roll_dice();

        if(new_dice == dice)
            return 1;
        
        if(new_dice == 7)
            return 0;
    }
}

// if return value is 1 => player wins
// if return value is 0 => player loses
// This function includes first game rouls.
int game(void)
{
    int dice = roll_dice();

    switch(dice){
        case 7:
        case 11: return 1;
        case 2:
        case 3:
        case 12: return 0;
        default: return game_(dice);
    }
}

int main(void)
{
    int win_count = 0;

    for(int i = 0; i < NUMBER_OF_GAMES; ++i){
        win_count += game();
    }

    pritf("oyuncunun kazanma olasiligi %f\n", (double)win_count / NUMBER_OF_GAMES);
}
```


### 23.Ders 2. Mülakat Sorusu

👇 Aşağıdaki program rastgele parola üreten bir fonksiyonun nasıl yazılabileceğini anlamak için incelenebilir. Mülakatlarda buna benzer programların yazılması ve döngü içinde rastgele sayı üretiminde kullanılan tohum değerinin belirlenmesindeki durumun açıklanması istenebiliyor.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "nutility.h"

#define MIN_LEN 5
#define MAX_LEN 9

int get_random_char(void)
{
    int ch;

    while(1){
        ch = rand() % 128;
        if(isalnum(ch)) // Buradaki şart ile 0-127 arasında elde edilen sayının 'alfanumeric' karakterine karşılık geldiği durum için döngüden çıkılacak.
            return ch;
    }

    return 0; // Bu statement sadece derleyici uyarı vermesin diye yazılmıştır.
}

void print_random_password(void)
{
    int len = rand() % (MAX_LEN - MIN_LEN + 1) + MAX_LEN;

    for(int i = 0; i < len; ++i){
        putchar(get_random_char());
    }
    printf("\n");
}

int main(void)
{
    randomize(); // Bu fonksiyon burada bir defa çağırıldığından üretilen rastgele sayı zincirinin elemanları sırasıyla 'rand()' fonksiyonunun çağırıldığı anda kullanılacaktır.

    for(int i = 0; i < 20 ;++i){
        print_random_password();
    }
}
```


👇 Aşağıdaki program rastgele parola üreten bir fonksiyonda kullanılan bizim `nutility.h` başlık dosyasında yer alan `randomize` fonksiyonunun bir döngü içinde kullanılması durumunda işlemcinin çok hızlı çalışmasından dolayı bir saniye geçmeden aynı tohum değerini rastgele sayı üretimi için kullanmasından kaynaklı olarak hep aynı parolayı ürettiği durumu anlamak için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "nutility.h"

#define MIN_LEN 5
#define MAX_LEN 9

int get_random_char(void)
{
    int ch;

    while(1){
        ch = rand() % 128;
        if(isalnum(ch)) // Buradaki şart ile 0-127 arasında elde edilen sayının 'alfanumeric' karakterine karşılık geldiği durum için döngüden çıkılacak.
            return ch;
    }

    return 0; // Bu statement sadece derleyici uyarı vermesin diye yazılmıştır.
}

void print_random_password(void)
{
    randomize(); // Bu fonksiyonun burada çağırılmaması gerekiyor.
    int len = rand() % (MAX_LEN - MIN_LEN + 1) + MAX_LEN;

    for(int i = 0; i < len; ++i){
        putchar(get_random_char());
    }
    printf("\n");
}

int main(void)
{
    for(int i = 0; i < 20 ; ++i){
        print_random_password();
    }
}
```


>❔
> 
> Sorulan soru; 
> 
> Tohum değerini mikro saniye olarak kullanabiliyor muyuz? 
> 
> Cevap;
> 
> Eğer yukarıdaki programlarda soruna neden olan saniye türündeki tohum değeri yerine "mikro saniye" türünden tohum değeri kullanılırsa yaşanılan sorun oluşmayabilirdi ama bu "mikro saniye" kullanımıyla ilgili kütüphaneyi incelediğimiz zaman öğreneceğimiz bir konu(dilin standart kütüphanesiyle mi yoksa işletim sisteminin sistem fonksiyonu çağırarak mı bu yapılabilir bunu ileride öğrenebileceğiz). 


### 23.Ders 3. Mülakat Sorusu

Mülakatlarda sorulan bu algoritmanın tipik bir kullanımı var buna **runner-up** deniliyor, burada en büyük eleman değil de en büyük ikinci eleman soruluyor.
- 👇 Aşağıdaki programda **runner-up** değerini hesaplayan bir programın nasıl yazılabileceği görülebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <ctype.h>
#include "nutility.h"
#include <conio.h>
#include <stdio.h>

#define SIZE 20

int main(void)
{
    int ar[SIZE];

    randomize();
    set_array_random(ar, SIZE);
    print_array(ar, SIZE);

    int max = ar[0];
    int runner_up = ar[1];
    
    if(ar[0] < ar[1]){
        max = ar[1], runner_up = ar[0];
    }

    for(int i = 2; i < SIZE; ++i){
        if(ar[i] > max){
            runner_up = max;
            max = ar[i];
        }
        else if(ar[i] > runner_up){
            runner_up = ar[i];
        }
    }

    printf("runner_up = %d\n", runner_up);
}
```

## 24.Ders

### 24.Ders 1. Mülakat Sorusu

Mülakatlarda sorulan güzel bir soru ama şu andaki bilgimizle soruyu çözemeyebiliriz.
- ❔Üç dizinin her birinden birer adet toplamda üç indeks değeri bulunacan ve indekslerdeki dizi elemanlarının toplamı girdi(input) olarak verilen değere eşit olacak şekilde bir durum mevcut mu bulan bu durum yoksa bulunamadı diye çıktı üreten bir program yazınız?
-  Bu konuda sorulabilecek soru şudur: Yukarıda açıklanan algoritmayı $O(n^3)$ karmaşıklıktan daha düşük karmaşıklık seviyesinde çözebilecek bir algoritma ile gerşekleştiriniz. Bu algoritma eğer $O(n^2 * logn)$ karmaşıklıkta çözülebilirse istenilen sağlanmış olur.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "nutility.h"
#include <time.h>

#define SIZE 1500

int main(void)
{
    int a1[SIZE];
    int a2[SIZE];
    int a3[SIZE];

    int val;
    printf("aranacak degeri giriniz: ");
    scanf("%d", &val);

    randomize();
    set_array_random(a1, SIZE);
    print_array(a1, SIZE);

    set_array_random(a2, SIZE);
    print_array(a2, SIZE);

    set_array_random(a3, SIZE);
    print_array(a3, SIZE);

    for(int i = 0; i < SIZE; ++i){
        for(int j = 0; j < SIZE; ++j){
            for(int k = 0; k < SIZE; ++k){
                if(a1[i] + a2[j] + a3[k] == val){
                    printf("tespit edilen indeks degerleri: %d, %d, %d\n", i, j, k);
                    return 0;
                }
            }
        }
    }

    printf("istenilen sartlari saglayan durum tespit edilemedi.\n");
    return 1;
}
```


### 24.Ders 1. Mülakat Sorusu Çözüm Tekniği

👇 Aşağıdaki programda belirli bir sabit sayıdaki dizinin belirli bir aralıkta alabileceği tam sayı değerlerinin adetlerinin nasıl hesaplanabileceği incelenebilir.
- ❗ Buradaki programda kullanılan algoritma tekniği, yazılım mülakatlarında sorulan bazı algoritma sorularının çözümünde kullanılabilecek bir tekniktir. 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "nutility.h"
#include <math.h>

#define SIZE 1000
#define RANGE_SIZE 20

int main(void)
{
    int a[SIZE];

    randomize();

    // Aşağıdaki döngüde 'a' dizisinin elemanlarına [0-19] kapalı aralığında rastgele değer atama işlemini yapmaktadır.
    for(int i = 0; i < SIZE; ++i){
        a[i] = rand() % RANGE_SIZE;
    }

    int cnts[RANGE_SIZE] = { 0 };

    // Aşağıdaki döngüde 'a' dizisinin eleman sayısı kadar dönülerek, 'a' dizisinin [0-19] kapalı aralığında olan değlerinin kaçar adet olduğu bilgisi 'cnts' dizisine alınıyor.
    for(int i = 0; i < SIZE; ++i){
        ++cnts[a[i]];
    }
    
    for(int i = 0; i < RANGE_SIZE; ++i){
        printf("%d değerinden %d tane var.\n", i , cnts[i]);
    }
}
```

## 25.Ders

### 25.Ders 1. Mülakat Sorusu

👇 Aşağıdaki program diziyi ters çevirme işlemi yapmaktadır. Bu algoritma basittir ve mülakatlarda da sıklıkla sorulmaktadır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

#define SIZE 100

int main(void)
{
    int ar[SIZE];

    randomize();
    set_array_random(ar, SIZE);
    print_array(ar, SIZE);

    // Aşağıdaki döngü ile dizinin ters çevrilmesini sağlamaktadır.
    for(int i = 0; i < SIZE / 2; ++i){
        int temp = ar[i];
        ar[i] = ar[ SIZE - 1 - i];
        ar[ SIZE - 1 - i] = temp;
    }

    print_array(ar, SIZE);
}
```

### 25.Ders 2. Mülakat Sorusu

🧠 Palindrom sayı, cümle vb.: Sondan başa doğru ve baştan sona doğru yazılışı aynı olan yazılardır. Mesela "_Ana, Naci dede ne dedi Canan'a?_", "_At, sahibi gibi hasta_", "_Tras neden sart_", "_kalas yok kutuk koy salak_", "_en iyi mese bese mi yine_", "_Madam, I'm Adam_", "_Para hazır ama Rıza harap!_", "_A man, a plan, a canal: Panama_" cümleleri palindrom cümlelerdir, bu cümlelerdeki yazı karakterleri dışındaki karakterler görmezden gelinmektedir.

👇 Aşağıdaki programda palindrom yazıların ayrı bir dizi kullanılarak nasıl tespit edilebildiğini anlamak için incelenebilir. 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"
#include <ctype.h> // 'isalpha(), toupper()' gibi karakterler üzerinde işlem yapan fonksiyonlar bu kütüphenede bulunmaktadır.

#define SIZE 100

int main(void)
{
    char str[SIZE];

    printf("bir yazi giriniz: ");
    sgets(str);
    printf("(%s)\n", str);

    char temp[SIZE];
    int len = 0;

    // Aşağıdaki döngüde, girilen yazının alfabe karakterleri olmayan hali 'temp' dizisine alınıyor. 
    for(int i = 0; str[i] != '\0'; ++i)
        if(isalpha(str[i]))
            temp[len++] = str[i];
    
    // Aşağıdaki döngü eğer 'break;' ile sonlanmıyorsa yazının palindrom olduğu anlamına gelecektir.
    int i;
    for(i = 0; i < len / 2; ++i){
        if(toupper(temp[i] != toupper(temp[len - 1 - i])))
            break;
    }

    if(i < len / 2){
        printf("palindrom degil\n"); // break ile döngüden çıkıldığı durum.
    }
    else{
        printf("palindrom"); // 'i < len / 2' kısmına girmeden döngüden çıkıldığı için bu palindrom yazıdır.
    }
}
```


❗Aşağıdaki ödevi yaparak bir çok programda kullanılan bir teknik öğrenilecektir ve bu sorunun çözümünde kullanılan teknik, mülakatlarda sorulan bir çok sorunun çözümünde kullanılmaktadır.
- 📖 Ödev-1: 👆 Yukarıdaki program girilen yazının palindrom olup olmadığını tespit etmektedir. İkinci bir dizi kullanmadan ve `str` dizisindeki yazı değişmeyecek şekilde bu programı yeniden yazınız.
- 🧭 İpicu: Girilen yazının ilk ve son elemanlarının indeks değerleri birer değişkende tutulacak ve alfabetik karakterler dışındaki karakterler karşılaştırmaya tabi tutulmayacak şekilde iki indeksteki dizi değerleri karşılaştırılarak ilerlenmesi gerekiyor, tüm karşılaştırmalar eşit çıkarsa en son indeks değerleri aralarında bir fark olacak duruma geliyorsa bu girilen yazının palindrom olduğu anlamına geliyor.



### 25.Ders 3. Mülakat Sorusu

❗❗❗👇 Aşağıdaki programda girilen bir yazıdaki sözcüklerin sayısını bulun bir programın nasıl yazılabileceği incelenebilir. 
- Mülakatlarda buna benzer 10-15 farklı soru sorulabilir, bu tür sorular "**flag variables(bayrak değişkenler)**" kullanılarak çözülebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"
#include <ctype.h>

#define SIZE 200

#define OUTWORD 0
#define INWORD 1

int main(void)
{
    char str[SIZE];

    printf("bir yazi giriniz: ");
    sgets(str);
    printf("girilen yazi: (%s)\n", str);

    int word_flag = OUTWORD;
    int word_count = 0;

    for(int i = 0; str[i] != '\0'; ++i){
        if(isspace(str[i]))
            word_flag = OUTWORD;
        else if(word_flag == OUTWORD){
            ++word_count;
            word_flag = INWORD;
        }
    }
    
    printf("girilen yazida toplamda %d kelime vardir.", word_count);
}
```


## 27.Ders

### 27.Ders 1. Mülakat Sorusu

👇 Aşağıdaki program C dilinde yapılan mülakatlarda en temel seviyede sorulan sorlardan biridir, eğer bu temel soru bilinmiyorsa C dili hakkında hiçbir şey bilinmediği düşünülebilir. 
- ❗ Mülakatta iki değişkenin değerini takas eden bir programın bu işlemi ayrı bir fonksiyonda yapacak şekilde yazılması istenir, eğer fonksiyon parametreleri pointer değilse değişkenlerin değerleri takat edilmeyecektir.
```C
#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 20;

    printf("x = %d, y = %d\n", x, y);

    int temp = x;
    x = y;
    y = temp;

    printf("x = %d, y = %d\n", x, y);
}
```

## 28.Ders

### 28.Ders 1. Mülakat Sorusu

Mülakat sorusu; </br>
👇 Aşağıdaki programda dizi ve pointer notasyonuyla parametre bildirimlerindeki konvensiyonel durum incelenebilir, buradaki durum mülakatlarda farklı şekillerde sorulmaktadır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define SIZE 100


// Aşağıdaki gibi üç farklı şekilde fonksiyon yazılsa da bu tanımların hepsi aynı anlama gelmektedir.
//void foo(int* p)
void foo(int p[])
//void foo(int p[100])
{
    printf("sizeof(p) = %zu\n", sizeof(p)); // Standart çıktıya 'sizeof(p) = 4\n' gönderilir.
    printf("sizeof(p[0]) = %zu\n", sizeof(p[0])); // Standart çıktıya 'sizeof(p[0]) = 4\n' gönderilir.
    printf("sizeof(p[70]) = %zu\n", sizeof(p[70])); // Standart çıktıya 'sizeof(p[70]) = 4\n' gönderilir.

    printf("%zu\n", sizeof(p) / sizeof(p[0])); // Burada 'sizeof(int*) / sizeof(int)' işlemi yapılır. 
}

int main(void)
{
    int a[100] = { 0 };

    foo(a);
}
```


### 28.Ders 2. Mülakat Sorusu

**const** anahtar sözcüğüyle işaretlenen bir değişkenin değerinin pointer üzerinden değiştirilmesi **ub** durumuna neden olacaktır, bu durum C mülakatlarında sorulabilir. </br>
👇 Aşağıdaki programda yularıda belirtilen durum incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    const int primes[] = { 0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, };
    int* ptr = (int*)(primes +7); // Buradaki gibi bir kullanım legaldir fakat kullanılması doğru değildir çünkü değeri değişmeyecek olarak bildirilen bir dizinin bir elemanının adresi bir göstericiye atanıyor.

    *ptr = 2142131; // Buradaki kod 'legal'dir ama kullanılması 'ub' durumu oluşturacaktır çünkü 'const' işaretlenen 
}
```


## 29.Ders

### 29.Ders 1. Mülakat Sorusu

👇 Aşağıdaki programda geçersiz olan ifadeler(expression) incelenebilir. Aşağıdaki programdakine benzer ifadelerin geçerli olup olmadığı ve detaylı açıklaması C mülakatlarında sorulabilecek basit sorulardandır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int x = 10;

    &x++; // '&(x++)' ile aynı ifadedir ve bu ifade legal değildir çünkü '&' operatörü R-value olan 'x++' ifadesini operant olarak alamaz(sadece L-value ifade alabilir).
    &++x; // '&(++x)' ile aynı ifadedir ve bu ifade legal değildir çünkü '&' operatörü R-value olan '++x' ifadesini operant olarak alamaz(sadece L-value ifade alabilir).
    ++&x; // '++(&x)' ile aynı ifadedir ve bu ifade legal değildir çünkü '++' operatörü R-value olan '&x' ifadesini operant olarak alamaz(sadece L-value ifade alabilir).
    (&x)++; // Bu ifade legal değildir çünkü '++' operatörü R-value olan '&x' ifadesini operant olarak alamaz(sadece L-value ifade alabilir).
}
```


### 29.Ders 2. Mülakat Sorusu

😱 Bazen C mülakatlarını yapan kişilerin bilgi düzeyleri yeterli olmadığı için sorulan sorulara doğru cevap veren mülakata giren kişilerin cevapları doğru kabul edilmediği durumlar da olabiliyormuş. </br>
👇 Mesela C mülakatında aşağıdaki gibi bir soru sorulup cevabın ne olduğu sorulduğunda bu programda "**ub**" var dendiğinde mülakatı yapan kişi "Tanımsız davranış ta nedir öyle şey mi olur." dediği olabiliyormuş.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    int x = 10;

    int y = ++x + x++;
    printf("y = %d\n", y);
}
```

"**ub**" durumları neden var diye sorulduğunda bunun cevabı çoğu zaman C dilinin standardında o şekilde belirtildiğinden dolayı olduğu bilinmelidir.

👇 Aşağıdaki programda C ve C++ dillerinde "**ub**" olma durumlarının farklı olduğu incelenebilir. 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    int x = 10;

    x = ++x; // Buradaki statement C dilinde 'ub' ama C++ dilinde 'ub' değildir.
}
```

### 29.Ders 2. Mülakat Sorusu

👇 Aşağıdaki gibi programları Necati Ergin C mülakatlarında pointer değişkenlerle yapılan işlemlerin mantığının anlaşıldığını sınamak için kullanıyormuş, soru olarak aşağıdaki programda **sözdizim hatası(syntax error)** ya da "**ub**" gibi bir özel durum olup olmadığı soruluyormuş.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

#define SIZE 100

int* foo(int* p)
{
    *p *= 2; // Bu statement sonunda 'p'nin gösterdiği yerdeki değer '26' olur.
    bar(p); // Bu statement sonunda 'p'nin gösterdiği yerdeki değer '17' olur.

    return p;
}

void bar(int* p)
{
    ++*p;
}

int main(void)
{
    int x = 13;

    *foo(&x) -= 7; // Burada '*foo(&x)' ifadesinin yani 'x' değişkeninin değeri '27'dir. '*foo(&x) -= 7;' statement'ı sonunda 'x' değişkeninin değeri '20' olacaktır.

    printf("x = %d\n", x); // Burada standart çıktı akımına ' x = 20\n' gönderilir. 
}
```

## 31.Ders

### 31.Ders 1. Mülakat Sorusu

👇 Aşağıdaki programda mülakatlarda çok sık sorulan bir soru incelenebilir. **Object like makro** ile `typedef` bildiriminin kullanımının aralarındaki farkların iyi bilinmesi gerekiyor, makroları derleyici görmez sadece ön işlemci program görür ama `typedef` bildirimlerini sadece derleyici görür, makroların kapsamı(scope) yoktur ama `typedef` bildirimlerinin kapsamları vardır, bu mülakatlarda soruluyormuş.
```C
#define Word int

typedef int iptr;

int main(void)
{
    Word p1, p2, p3; // Buradaki kullanım 'iptr p1, p2, p3;' olarak yapılan 'typedef' bildirimiyle aynı şey değildir, çünkü makroları derleyici görmüyor.
}
```

👇 Aşağıdaki programda C mülakatlarında sorulan basit ama önemli bir soru olan **makro** ve `typedef` kullanımlarının arasındaki farkın ne olacağı sorusu incelenebilir.
```C
#define IPTR int*

typedef int* iptr;

int main(void)
{   
    IPTR p1, p2, p3; // Ön işlemci program çalıştığında kod şuna dönüşür 'int* p1, p2, p3;' bu da sadece 'p1' değişkeninin pointer değişken olduğu anlamına gelir.
    iptr p4, p5, p6; // Derleyici bu kodu şu şekilde görecektir 'int* p4, * p5, * p6;' bu da sadece 'p3, p4, p5' değişkenlerinin pointer değişken olduğu anlamına gelir.
}
```


## 32.Ders

### 32.Ders 1. Mülakat Sorusu

C mülakatlarında ya da Veri yapıları ve algoritmalar kitaplarında çok değinilen, bir yazıda başka bir yazının aranması işlemini yapan `strstr(const char* haystack, const char* needle);` fonksiyonunun **gerçekleştirimini(implementation)** yapılmasının istenmesidir.


### 32.Ders 2. Mülakat Sorusu

C mülakatlarında `strcpy` fonksiyonun C idiom'larıyla birlikte kullanımının yeraldığı soruların sorulması sıklıkla uygulanan bir durummuş.


## 33.Ders

### 33.Ders 1. Mülakat Sorusu

👇 Aşağıdaki programda C mülakatında Necati Ergin tarafından sorulan soru incelenebilir, bu gibi fonksiyonların kolaylıkla yazılabilir hale gelinmiş olması gerekiyor; 
- Soru: Birinci yazının içinde ikinci yazı görüldüğünde birinci yazıdaki tespit edilen karakterler `*` karakterine döndürülecek bir fonksiyonu yazınız?
- Cevaba gidilirken `strstr`, `strlen` gibi standard C fonksiyonlarının ne olduklarının ve ne iş yaptıklarının iyi bilinmesi gerekiyor, bu bilgiyi iyi anlayıp aşağıdaki programı okuyup anlayabiliyor olmak önemlidir. Karmaşık görünen **string** varlıklar üzerinde yapılan işlemleri küçük parçalara ayırıp o parçaları standart C fonksiyonlarıyla yazabiliyorsak kolayca çözebiliriz.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "nutility.h"

int main(void)
{
    char str[SIZE];
    char key[SIZE];

    printf("birinci yaziyi girin: ");
    sgets(str);

    printf("ikinci yaziyi girin: ");
    sgets(key);

    printf("[%s]\n", str);
    printf("[%s]\n", key);

    char* p = strstr(str, key);
    if(p != NULL){
        size_t len = strlen(key);

        // Aşağıdaki döngü yerine şu standar C fonksiyon çağrısı yapılabilir 'memset(p, '*', len)' ama bu fonksiyonu henüz öğrenmedik.
        while(len--)
            *p-- = '*';
    }

    printf("[%s]\n", str);
}
```


### 33.Ders 2. Mülakat Sorusu

👇 Aşağıdaki programda **string literal** varlıkların kullanımlarıyla ilgili farklılıklar incelenebilir.
- Hem üretimde önemli hem de C mülakatlarında sık sorulan bir soru aşağıdaki programdaki durumlarla ilgilidir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void foo(void)
{
    // Buradaki 'str' adındaki dizi 'otamatik' ömürlüdür ve istenildiği gibi değiştirilebilir.~
    // Aşağıdaki gibi 'char array' bildiirmi kolaylık olması için dilde olan sözdizimidir(syntax).
    char str[] = "necati"; // Buradaki statement şuna denktir: 'char str[] = { 'n', 'e',  'c',  'a',  't',  'i',  '\0' }'

    puts(str);

    // Aşağıdaki üç statement'ta yapılan işlemler legal ve doğrudur, 
    str[0] = 'k';
    str[2] = 'l';
    str[4] = 'm';

    puts(str);
}

void bar(void)
{
    char* p = "ergin";

    puts(str);

    // Aşağıdaki atamalar 'string literal' bir char dizinin elemanlarını değiştirme işlemi olduğu için 'ub' durumuna neden olacaktır. 
    str[0] = 'k';
    str[2] = 'l';
    str[4] = 'm';

    puts(str);
}

int main(void)
{
    foo();
    printf("\n~~~~~~~~~~~~~~~~~~\n");
    //bar();
}
```


### 33.Ders 3. Mülakat Sorusu

❗❗❗ 👇 Aşağıdaki programdaki gibi **string literal** varlıkların ömürleriyle ilgili C mülakatlarında sıkça soru sorulmaktadır, programdaki yorumların iyi anlaşılıyor olması gerekiyor.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
    for(int i = 0; i < 10; ++i){
        char* p = "mustafa"; // 'string literal' bir varklı 'static' ömürlü olduğu için programın çalışması boyunca sadece tek bir defa oluşturulur.
        printf("%p\n", p); // Burada hep aynı adres değeri yazacaktı.
    }

    // Aşağıdaki kodlama ile yukarıdaki birbirine denktir.
    char* str = "mustafa";
    for(int i = 0; i < 10; ++i){
        char* p2 = str;
        printf("%p\n", p2); // Burada hep aynı adres değeri yazacaktı.
    }
}
```


### 33.Ders 4. Mülakat Sorusu

👇 Aşağıdaki programdaki kod Necati Ergin tarafından bir firma için hazırlanan C mülakat sorusuymuş. </br> 
soru şu: Çıktı ne olur ve neden?
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
    char* p = "mustafa";
    size_t sz = sizeof(++p); // 'sizeof' operatörü derleme zamanında çalışır sadece ve işlem kodu üretmez, burada 'sz' değişkenine '++p' ifadesinin türü 'char*' yani bir pointer olduğu için 32 bitlik mimaride '4' değeri atanır.

    printf("%zu\n", strlen(p)); // Burada standart çıktı akımına 'sizeof' operatörü işlem kodu üretmediği için '7\n' gönderilir.
}
```


## 34.Ders

### 34.Ders 1. Mülakat Sorusu

🌟 Günün en zor sorusu, ayrıca mülakatlarda sorulan bir soru;
- Bir karakter dizisindeki elemanların ilk önce yazıdaki karakter sayıları ufak olandan büyük olana doğru sıralanmalı ve eşit karakterli yazıların da kendi aralarında alfabetik olarak küçükten büyüğe doğru sıralanmalıdır. Bu işlemi yapan sıralama programını yazabilmek için hangi durumda elemanların takas edilmesi gerektiğine karar verilmesi gerekiyor.
- 👇 Aşağıdaki programda yukarıda istenen sıralamanın nasıl yapıldığı incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "nutility.h"

char* p[] = {  
    "refika", "remeysa", "rupen", "saadet", "sabriye", "sade", "sadegul", "sadettin", "sadi", "sadiye", 
    "hakki", "haldun", "halime", "haluk", "handan", "hande", "handesu", "hasan", "helin", "hikmet",
    "necmiye", "nedim", "nefes", "nevsin", "nihal", "nihat", "nisan", "niyazi", "nurdan", "nuri",
    "ali", "alican", "alparslan", "anil", "arda", "asim", "askin", "aslican", "aslihan", "ata",  
}; // Buradaki en son ',' token'ına 'trailing comma' denmektedir.

int main(void)
{
    // Aşağıdaki döngü ile karakter dizisinin tüm elemanlarının ilk hali alt alta yazdırılıyor.
    for(size_t i = 0; i < asize(p); ++i)
        printf("%s", p[i]);

    // booble-sort 
    for(size_t i = 0; i < asize(p) - 1; ++i){
        for(size_t k = 0; k < asize(p) - 1 - i; ++k){
            size_t len1 = strlen(p[k]);
            size_t len2 = strlen(p[k + 1]);

            if((len1 > len2) || (len1 == len2 && strcmp(p[k], p[k + 1]) > 0)){
                const char* ptemp = p[k];
                p[k] = p[k + 1];
                p[k + 1] = ptemp;
            }
        }   
    }

    printf("siralama bitti");
    (void)getchar();

    // Aşağıdaki döngü ile karakter dizisinin tüm elemanlarının son hali alt alta yazdırılıyor.
    for(size_t i = 0; i < asize(p); ++i)
        printf("%s ", p[i]);
}
```


## 37.Ders

### 37.Ders 1. Mülakat Sorusu

👇 Aşağıdaki soru C mülakatlarında sorulan aslında zor olmayan ama çözülürken biraz zorlanılan bir soru.
- Elemanları `char *` türünden olan bir diziyi `qsort` fonksiyonunu kullanarak sıralayınız(burada `qsort` fonksiyonuna gönderilecek olan callback fonksiyonun doğru yazılıp yazılamadığı sınanmaktadır). 
- Bu işlemi yaparken dizideki yazılar küçükten büyüğe doğru sıralanmalıdır.
- Yazacağınız callback fonksiyonda `strcmp` fonksiyonunu çağırabilirsiniz.
- Yazılacak programda tür uyumsuzluğu ya da tek bir uyarı iletisi olmamalıdır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "nutility.h"

#define SIZE 200

int main(void)
{
    char* p[] = {
        "refika", "remeysa", "rupen", "saadet", "sabriye", "sade", "sadegul", "sadettin", "sadi", "sadiye", 
        "hakki", "haldun", "halime", "haluk", "handan", "hande", "handesu", "hasan", "helin", "hikmet",
        "necmiye", "nedim", "nefes", "nevsin", "nihal", "nihat", "nisan", "niyazi", "nurdan", "nuri",
        "ali", "alican", "alparslan", "anil", "arda", "asim", "askin", "aslican", "aslihan", "ata",
    };

    for(size_t i = 0; asize(p); ++i){
        printf("%s \n", p[i]);
    }
    
    // Burada dizinin sıralanması işlemleri yapılıyor.
    //for(size_t i = 0; asize(p) - 1; ++i){
    //    for(size_t k = 0; asize(k) - 1 - i; ++k){
    //        if(strcmp(p[k], p[k + 1]) > 0){
    //            char* temp = p[k];
    //            p[k] = p[k + 1];
    //            p[k + 1] = temp;
    //        }
    //    }
    //}

    // qsort ile diziyi sıralayınız ... (yazılar küçükten büyüğe sıralayınız)
    // yazacağınız callback fonksiyonda 'strcmp' fonksiyonunu çağırabilirsiniz.
    // tür uyumsuzluğu ya da tek bir uyarı iletisi olmamalı. 

    (void)getchar();

    for(size_t i = 0; asize(p); ++i){
        printf("%s \n", p[i]);
    }
}
```


### 37.Ders 2. Mülakat Sorusu

👇 Aşağıdaki programda kullanılan yapı C mülakatlarında sıklıkla sorulmaktadır.</br>
👇 Aşağıdaki programda **jump table** ve **mapping** yapısı kullanılarak nasıl C standardında olan test fonkiyonlarına çağrı yapılabildiği incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "nutility.h"

typedef int (*fptest)(int);

int main()
{
    int ch;
    char fname_entry[20];

    // Aşağıdaki 'fp_ar' ve 'fnames' dizileri birbirine 'map' edilmiştir yani ilişkilendirilmiştir. 'fp_ar' değişkeni 'jump table' özelliktedir.
    const fptest fp_ar[] = { &isupper, &islower, &isalpha, &isdigit, &isalnum, &isxdigit, &ispunct, &isspace, &isblank, &isprint, &isgraph, &iscntrl };
    const char* const fnames[] = { "isupper", "islower", "isalpha", "isdigit", "isalnum", "isxdigit", "ispunct", "isspace", "isblank", "isprint", "isgraph", "iscntrl" };

    printf("bir karakter girin: ");
    ch = getchar();

    printf("hangi test fonkisyonu cagirilsin: ");
    scanf("%s", fname_entry);

    int i;

    for(i = 0; i < asize(fnames); ++i){
        if(!strcmp(fnames[i], fname_entry)){
            break;
        }
    }

    if(i == asize(fnames)){
        printf("istedigin fonksiyon bulunamadi!\n");
    }
    else if(fp_ar[i](ch)){
        printf("%c karakter icin %s testi sonucu dogru\n", ch, fname_entry);
    }
    else{
        printf("%c karakter icin %s testi sonucu yanlis\n", ch, fname_entry);
    }
}
```

## 38.Ders

 Bu derste kayıt yok

## 39.Ders

### 39.Ders 1. Mülakat Sorusu

❗❗❗ En çok karıştırılan ve mülakatlarda sık sorulan bir durum;
- 👇 Aşağıdaki programda **string literal** ve pointer dizilerin farkları incelenebilir.
```C
#include <stdio.h>
#include "nutility.h"

void foo()
{
    char* p = "adsyad2"; // Burada iki tane nesne(object) vardır. Buradaki yazı program çalışması boyunca bellekte duracaktır ve bu yazı 'immutable' ve değiştirilemezdir. 'p' pointer değişken ise 'otomatic' ömürlüdür ve blok dışında hayatı sona erecektir.

    char str[20] = "adsyad1"; // Burada 'str' adında tek bir nesne(object) vardır, ilgili 'block scope' dışında 'str' nesnesinin ömrü sonlanacaktır.
}

int main(void)
{
    char str[10] = "adsyad1"; // Burada 'str' adında tek bir nesne(object) vardır.
    
    //char* p = "adsyad2"; // Buradaki atama işlemi C++ dilinde sözdizim hatasıdır(syntax error) çünkü 'string literal' varlıklar 'const char*' türü kabul edilir ve örtülü olarak 'char*' türüne atanamaz.
    const char* p = "adsyad2"; // Yukarıdaki açıklamaya göre buradaki gibi bir bildirim yapılması daha doğrudur.
}
```


### 39.Ders 2. Mülakat Sorusu

👇 Aşağıdaki programda mülakatlarda iki boyutlu dizilerin kullanımını sınamak için sık sorulan bir soru görülebilir. </br>
- `a1`, `a2`, `a3` adlarıyla tanımlanan dizilerin hangilerinde **sözdizim hatası(syntax error)** vardır.
```C
#include <stdio.h>
#include "nutility.h"

int main(void)
{
    int a1[][] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 'a1' iki boyutlu dizi tanımlaması geçersizdir çünkü 'a1' iki boyutlu dizisinin türü belli değil, 'int[]' şeklinde bir tür yoktur!
    int a2[3][] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // 'a2' iki boyutlu dizi tanımlaması geçersizdir çünkü 'a2' iki boyutlu dizisinin türü belli değil sadece eleman sayısı '3' olarak bildirilmiş, 'int[]' şeklinde bir tür yoktur!
    int a3[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; // Sadece bu satırdaki iki boyutlu dizi bildirimi geçerli(lagel'dir). Buradaki gibi bir diziye ilk değer verilebilmektedir, 'a3' dizisi 4 elemanlıdır.
    //int a3[][3] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9 }, { 10 } }; // Bu satırdaki iki bouytlu dizi bildirimi bir üs satırdaki dizi bildirimiyle aynıdır.
}
```

## 40.Ders

### 40.Ders 1. Mülakat Sorusu

⚠️ Mülakatlarda yazılması istenilen programlarda en çok kod tekrarı yapılıp yapılmadığına bakılmaktadır, buna dikkat etmek gerekiyor.

## 41.Ders

### 41.Ders 1. Mülakat Sorusu

📌 Mülakatlarıda sorulan önemli bir durum şudur: `malloc` fonksiyonu "0" argümanı ile çağrılırsa ne olur? </br>
Bu durum derleyiciye başlıdır(**implementation defined behavior**) ve aşağıdaki iki durum söz konusudur;
1. `malloc` fonksiyonu ya **NULL pointer** döndürür.
2. `malloc` fonksiyonu geriye bir adres döndürebilir, burada `malloc` fonksiyonundan dönen adresin `free` fonksiyonuna geçilmesi **ub** değildir ama o adresin **dereference** işlemine tabi tutulması **ub** durumuna neden olur.
👇 Aşağıdaki programda `malloc` fonksiyonu "0" argümanı ile çağrılması sonucunda ne değer döneceği incelenebilir, kullnıalan derleyiciye göre sonuç farklı olacaktır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "nutility.h"
#include <ctype.h>

int main(void)
{
    int* p = (int*)malloc(0);

    if(p == NULL){
        printf("malloc NULL pointer dondurdu!\n");
    }
    else{
        printf("malloc'un dondurdugu adres %p\n", p);
    }

    // printf("%d\n", *p); // Buradaki kodda 'ub' vardır.
    free(p); // Burada 'ub' yoktur.
}
```


## 42.Ders

Yok

## 43.Ders

### 43.Ders 1. Mülakat Sorusu

C mülakatlarında sorulan bir soru; </br>
👇 Aşağıdaki başlık dosyasını yorumlayınız.
```C
// headfile1.h

int g = 20; // Burada 'g' adında bir değişken tanımlanıyor, bu yanlıştır çünkü değişkeni tanımlamak demek derleyicinin o değişken için bellekte yer ayarlaması anlamına geliyor.

// Başlık dosyalarında fonksiyonların tanımlarının olmasından kaçınılmalıdır, sadece bazı istisnalarda bu tercih edilmelidir(istisnaları şimdilik bilmiyorum).
void foo(void)
{
    // ...
}
```


### 43.Ders 2. Mülakat Sorusu

C mülakatlarında sorulan bir soru; </br>
"dosya1.c" dosyasında `void foo(void){ ... }` adında bir fonksiyon tanımlanmış ama bu fonksiyon "dosya1.c"  dosyasından hiç çağrılmamış, bu bir mantıksal hata mı? cevap => Hayır değildir çünkü modülün bu fonksiyonu sadece modül dışından kullanılmak için yazılmıştır. </br>
"dosya1.c" dosyasında `static void foo(void){ ... }` adında bir fonksiyon tanımlanmış ama bu fonksiyon "dosya1.c"  dosyasından hiç çağrılmamış, bu bir mantıksal hata mı? cevap => Evet çünkü ilgili fonksiyon `static` tanımlandığı için dışarıdan erişime kapalıdır, o zaman ilgili fonksiyonun hiç olmaması daha doğru olacaktır.


### 43.Ders 3. Mülakat Sorusu

Mülakatlarda sık sorulan sorulardan bir aşağıdaki gibidir; </br>
`const` değişkenlerin değiştirilme girişiminde bulunan ifadeler **ub** durumuna neden olur, özellikle gömülü programa alanında çalışan yazılımcılar bu hatayı yapmaktaymış.
```C
#include <stdio.h>

int main(void)
{
    const int x = 23423;
    printf("x = %d\n", x);

    const int* p = &x; // 'p' değişkeni 'pointer to const int' olarak nitelendirilir.
    printf("*p = %d\n", *p);
    int* ptr = (int*)p;

    *ptr = 4445556; // Burada gösterici üzerinden 'const int' olarak tanımlanan 'x' değişkeninin değerini değiştirilmesinden dolayı 'ub' vadır.
    printf("x = %d\n", x);
}
```

### 43.Ders 4. Mülakat Sorusu

Mülakatlarda sık sorulan sorulardan biri, **object-like macro** ile **cosnt variable** kullanımlarının kıyaslanmasıdır.
Bir programlama dilinde bir işi yapmak için birden fazla araç olduğunda çoğu durumda bu iki aracın farklı durumlarda kullanılması daha faydalı olacaktır, bu nedenle sorunun cevabı bağlama göre edğişir olmalıdır.

👇 Aşağıdaki program **object-like macro** ile **cosnt variable** kullanımı görülebilir.
```C
#include <stdio.h>

// Aşağıdaki gibi '100' sabitini iki farklı araç ile kullanabiliriz.
#define SIZE 100 // Buradaki 'SIZE' sadece önişlemci program için bir identifier'dır.
const int size = 100; // 

int main(void)
{
    &SIZE; // Buradaki gibi bir ifadekullanamayız, hata alırız, böyle bir ifade kullanmak gerekiyorsa '&size' ile ihtiyacı karşılayabiliriz.
}
```


### 43.Ders 5. Mülakat Sorusu

Mülakatlarda en sık sorulan sorulardan biri `volative` anahtar sözcüğünün kullanımının doğru bilinip bilinmediğine yönelik sorulardır.

👇 Aşağıdaki programda `volatile` kullanımı incelenebilir, derleyici `volatile` olarak bildirilen adresteki değerlerin kullanıldığı her yerde adresteki değeri bellekten okuması gerekiyor. 
```C
int main()
{
    int x = 5;
    int* const pc = &x; // const pointer to int

    int* volatile pv1 = &x; // 'volatile pointer to int'
    int volatile* pv2 = &x; // 'pointer to volatile int'
    volatile int * pv3 = &x; // 'pointer to volatile int'
}
```


## 45.Ders

### 45.Ders 1. Mülakat Sorusu


C mülakatlarında aşağıdaki gibi kullanıcıdan alınan değerlere göre dinamik nesneler üretilmesi gereken durumlar için program yazılması istenmektedir. </br>
👇 Aşağıdaki programdaki matris **pointer to pointer** ve **dynamic memory management** konularıyla ilgilidir, aşağıdaki programdan kullanıcıdan çalışma zamanında alınacak olan satır ve sütun adedine göre bir matris oluşturup o matrisi standart çıktı akımına nasıl gönderildiği incelenebilir. </br>
👇 Aşağıdaki programda üretilmesi istenilen matris iki boyutlu dizi olacak biçimde yazılmıştır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "nutility.h"
#include <conio.h> // Standart bir modül değil

int main(void)
{
    printf("matrisin satir ve sutun sayisini girin: ");
    size_t row, col;

    scanf("%zu%zu", &row, &col);

    int** pd = (int**)malloc(row * sizeof(int*)); // Burada matrisin satırlarını oluşturacak olan elemanları 'int' türünden dizi nesnesi olan 'int**' türünden 'pd' değişkeni tanımlanıyor.
    if(!pd){
        printf("bellek yetersiz!\n");
        return 1;
    }

    // Aşağıdaki döngü ile 'pd' dizisinin her bir elemanı için bellekten dinamik olarak yer ayrılıp 
    for(size_t i = 0; i < row; ++i){
        pd[i] = (int*)malloc(col * sizeof(int));
        if(!pd[i]){
            printf("bellek yetersiz!\n");
            return 2;
        }
    }

    randomize();

    for(size_t i = 0; i < row; ++i){
        for(size_t k = 0; k < col; ++k){
            pd[i][k] = rand() % 10;
        }
    }

    for(size_t i = 0; i < row; ++i){
        for(size_t k = 0; k < col; ++k){
            printf("%d", pd[i][k]);
        }
        printf("\n");
    }


    // Dikkat, matrisin satırları esasında bellekte ardışık değildir!

    // 'pd' dizisinin elemanları olan, elemanları 'int' türünden olan diziler bellekte sıralı değildir(çünkü matrisin her bir satırının nesnesi için ayrı ayrı bellekten alan tahsis edildi), bu nedenle de aşağıdaki döngü tanımsız davranış içermektedir.
    // Aşağıdaki döngünün çalışma mantığını anlamak zor geliyorsa, bu kısmı çalıştırıp ekrana basılan değerleri incelersen pd[0] dizisinin son elemanından sonraki değerlerin garipleştiğini göreceksin.
    // int* ptr = pd[0];
    // int n = row * col;
    // while(n--){
    //     printf("%d", *ptr++);
    //     _getch();
    // }

    // Aşağıdaki döngü ile 'pd' adındaki elemanları dinamik dizi olan dizi nesnenin dinamik dizi elemanlarının bellek alanları tek tek serbest bırakılıyor.
    for(size_t i = 0; i < row; ++i){
        free(pd[i]);
    }

    free(pd); // Burada da 'pd' adındaki 'dynamic pointer array'in kendisi serbest bırakılıyor.
}
```


C mülakatlarında aşağıdaki gibi kullanıcıdan alınan değerlere göre dinamik nesneler üretilmesi gereken durumlar için program yazılması istenmektedir. </br>
👇 Aşağıdaki programdaki matris **pointer to pointer** ve **dynamic memory management** konularıyla ilgilidir, aşağıdaki programdan kullanıcıdan çalışma zamanında alınacak olan satır ve sütun adedine göre bir matris oluşturup o matrisi standart çıktı akımına nasıl gönderildiği incelenebilir. </br>
👇 Aşağıdaki programda üretilmesi istenilen matris tek boyutlu dizi olacak biçimde yazılmıştır ama iki boyutlu bir diziymiş gibi kullanımı incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "nutility.h"
#include <conio.h> // Standart bir modül değil

int main(void)
{
    printf("matrisin satir ve sutun sayisini girin: ");
    size_t row, col;

    scanf("%zu%zu", &row, &col);

    int* pd = (int*)malloc(row * col * sizeof(int)); // Burada bellekten tek parça bellek kısmı ediniliyor.

    if(!pd){
        printf("bellek yetersiz!\n");
        return 1;
    }


    for(size_t i = 0; i < row; ++i){
        for(size_t k = 0; k < col; ++k){
            pd[i * col + k] = rand() % 10; // Burada dizi elemanının indislerine değerleri atanıyor.
        }
    }

    // some code here ...

    for(size_t i = 0; i < row; ++i){
        for(size_t k = 0; k < col; ++k){
            printf("%d", pd[i * col + k]);
        }
        printf("\n");
    }

    // Aşağıdaki gibi bir kod yazabiliriz, burada bir yanlışlık yoktur.
    //int* ptr = pd;
    //size_t n = row * col;
    //while(n--){
    //    printf("%d", *ptr++);
    //    _getch();
    //}

    free(pd);  
}
```


👆 Yukarıda yazılmış olan iki program da özünde bir matrisi gerçekleme işlemini yapıyor ama gidiş yolları farklı, nasıl bir yöntemle programın yazılacağına aşağıdaki gibi nedenler göz önüne alınarak karar verilmelidir;
- Kullanılan bellek miktarı mı daha önemli.
- Daha hızlı çalışması mı daha önemli
- Matris olduğu için iki boyutlu dizi olarak kullanabilmek mi önemli.
- **Fragmentation** olan bir bellekte çalışılacaksa **fragmentation**'a dayanıklı bir kod yazılması mı önemli.


👇 Aşağıdaki program yukarıda kullanılan iki farklı yöntemin bir hibritinin nasıl yazılabileceğini anlamak için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "nutility.h"
#include <conio.h> // Standart bir modül değil

int main(void)
{
    printf("matrisin satir ve sutun sayisini girin: ");
    size_t row, col;

    scanf("%zu%zu", &row, &col);

    int* pd = (int*)malloc(row * col * sizeof(int*)); // Burada bellekten tek parça bellek kısmı ediniliyor.

    if(!pd){
        printf("bellek yetersiz!\n");
        return 1;
    }


    for(size_t i = 0; i < row; ++i){
        for(size_t k = 0; k < col; ++k){
            pd[i * col + k] = rand() % 10; // Burada dizi elemanının indislerine değerleri atanıyor.
        }
    }


    int** pp = malloc(row * sizeof(int)); // Burada matrisin satırlarını tutacak boyutta tek bir bellek bloğu ediniliyor, bu bellek bloğunun elemanları ilk edinilen bellek bloğunda buluna adresleri matrisin her bir satırının başlangıç adresini tutmak için kullanılacak.
    if(!pd){
        printf("bellek yetersiz!\n");
        return 2;
    }

    // Aşağıdaki döngü ile ilk başta edinilmiş tek parça bellek bloğu matrisin her bir satırını temsil edecek biçimde 'pp' dizisinin elemanı yapılıyor.
    for(size_t i = ; i < row; ++i){
        pp[i] = pd + i * col;
    }

    // Aşağıdaki döngü ile dizinin elemanlarına 'pp' nesnesi aracılığıyla sanki bir iki boyutlu bir diziymiş gibi erişilip yazdırılmaktadır.
    for(size_t i = 0; i < row; ++i){
        for(size_t k = 0; k < col; ++k){
            printf("%d", pp[i][k]);
        }
        printf("\n");
    }

    // Sondan başa doğru edinilen bellek parçaları iade ediliyor.
    free(pp);
    free(pd);
}
```


## 46.Ders

### 46.Ders 1. Mülakat Sorusu

Mülakatlarda çok sık sorulan bir soru aşağıdaki gibidir? </br>
👇 Aşağıdaki programda bildirimi yapılan `x` ve `y` yapı değişkenlerinin birbirine atanması işlemi yapılıp yapılamayacağı mülakatlarda sorulmaktadır.
```C
typedef struct {
    int a, b, c;
}x;

typedef struct {
    int a, b, c;
}y;

int main(void)
{
    x = y; // Buradaki atama işlemi hatalıdır, derleyici 'x' ve 'y' türlerini farklı türler olarak yorumladığı için bu atama sözdizim hatasıdır(syntax error).
}
```


### 46.Ders 2. Mülakat Sorusu

`time` kütüphenesiyle ilgili olarak mülakatlarda sorulabilecek olan çok basit bir soru. </br>
Mülakat sorusu: Bir C programı yazınız, çalıştırıldığında içinde bulunulan anın tarih bilgisini "_29 Haziran 2025 10:25:51_" gibi yazan programı yazınız. </br>
👇 Aşağıdaki programda buradaki mülakat sorusunun yazılmış hali incelenebilir.
```C
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    time_t sec;
    time(&sec);

    struct tm* p = localtime(&sec);

    const char* const pmons[] = { "Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran", "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik", };
    const char* const pdays[] = { "Pazar", "Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi", };

    printf("%02d-%02d-%d\n", p->tm_mday, p->tm_mon, p->tm_year); // Burada tarih hatalı görünecektir.

    printf("%02d-%02d-%d\n", p->tm_mday, p->tm_mon + 1, p->tm_year + 1900); // Burada yapılan düzenleme sonrasında tarih doğru görünecektir.

    printf("%02d-%02d-%d %02d:%02d:%02d\n", p->tm_mday, p->tm_mon + 1, p->tm_year + 1900, p->tm_hour, p->tm_min, p->tm_sec); // Tam tarihin yazdırılması. 
    
    printf("%02d %s %d %02d:%02d:%02d\n", p->tm_mday, pmons[p->tm_mon], p->tm_year + 1900, p->tm_hour, p->tm_min, p->tm_sec); // Ay bilgisi yazı olarak yazıldığında nasıl göründüğü incelenebilir.

    printf("%02d %s %d %s %02d:%02d:%02d\n", p->tm_mday, pmons[p->tm_mon], p->tm_year + 1900, pdays[p->tm_wday], p->tm_hour, p->tm_min, p->tm_sec); // Ay ve haftanın günü bilgisi yazı olarak yazıldığında nasıl göründüğü incelenebilir.
}
```


### 46.Ders 3. Mülakat Sorusu

C mülakatlarında geçen zamanın hesaplanmasıyla ilgili sorulabilecek sorularda yararlanılabilecek olan bilgi aşağıdaki gibidir; </br> 
👇 Aşağıdaki program çalışma süresi ölçülmek istenilen kodun saniye türünden hesaplayan programın nasıl yazılabileceği incelenebilir, programdaki kullanım idiomatic bir kullanımdır.
```C
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 100

int main(void)
{
    clock_t tpstart = clock();

    // some code here ...

    clock_t tpend = clock();

    double _passedtime = (double)(tpend - tpstart) / CLOCKS_PER_SEC;
}
```


👇 Aşağıdaki programdan 5 milyon elemanlı bir tam sayı dizisini standart `qsort` işleviyle küçükten büyüğe sıralayan ve sıralama işleminin kaç saniye sürdüğünü **standard output** tarafna gönderen program incelenebilir.
```C
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>

#define SIZE 100

static icmp(const int* vp1, const int* vp2)
{
    int x = *(const int*)vp1;
    int y = *(const int*)vp2;

    return x > y ? 1 : x < y ? -1 : 0;
}

void mysort(int* p, size_t size)
{
    qsort(q, size, sizeof(*p), &icmp);
}

int main(void)
{
    // 5 milyon elemanlı bir tam sayı dizisini standart qsorth işleviyle küçükten büyüğe doşru sıralayınız ve bu sıralama işleminin kaç saniye sürdüğünü yazdırır.
    int* p = (int*)malloc(sizeof(int) * 5'000'000u);
    if(!p){
        printf("bellek yetersiz.\n");
        return 1;
    }
    
    set_array_random(p, SIZE);
    printf("siralama basladi.\n");
    
    // 'clock()' işlevini kullanarak yapılacak hesaplama ile aşağıdaki gibi bir kod parçasının ne kadar süre aldığı öğrenilebilir.
    clock_t start = clock();
    mtsort(p, SIZE);
    clock_t end = clock();

    printf("siralama bitti '%.2f' saniye.\n", (double)(end -start) / CLOCKS_PER_SEC);
}
```


## 48.Ders

### 48.Ders 1. Mülakat Sorusu

📌 Kaliteli bir mülatata girildiğinde hangi programlama dili olursa olsun, programlamayla ilgili sorulardan bağlı listelere ilişkin bir ya da birkaç tane soru sorulur.

### 48.Ders 1. Mülakat Sorusu

Veri yapıları ve algoritmalar konusuyla ilgili olarak bir mülakatta sorulabilecek en temel sorulardan biri, **dynamic array(dinamik dizi)** ve **linked list(bağlı liste)** veri yapıları arasındaki farkın ne olduğudur.
