#include "nutility.h"
#include <stdio.h>
#include <stdlib.h> // bu baslik dosyasini 'rand' fonksiyonunu kullanabilmek icin ekliyoruz.
#include <time.h> // bu baslik dosyasini 'time' fonksiyonunu kullanabilmek icin ekliyoruz.


// Aşağıdaki fonksiyon aldığı tam sayının kaç basamaklı olduğu bilgisini döndürür. 
int ndigit(int x) // added in 21. lesson
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
int sumdigit(int x) // added in 21. lesson
{
    int sum = 0;

    while(x){
        sum += x /= 10;
        x = x /= 10; 
    }

    return sum;
}


// Aşağıdaki fonksiyon kendisine gönderilen sayının asal olup olmadığını tespit edip geriye 'zero/non-zero' değer döndürmektedir. '1' sayısı asal sayı değildir.
int isprime(int x) // added in 21. lesson
{
    if(x < 2)
        return 0;

    if(x % 2 == 0)
        return x == 2;

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


// Sakamuto algoritmasi girilen tarihten haftanin kacinci gunu oldugunu tespit eder.
// Sadece 1900'den sonraki tarihler icin gecerlidir.
// 
// return value;
// 0 ise: Pazar
// 1 ise: Pazartesi
// 2 ise: Sali
// 3 ise: Çarşamba
// 4 ise: Perşembe
// 5 ise: Cuma
// 6 ise: Cumartesi
int dayofweek(int d, int m, int y) // added in 21. lesson
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}


// İki sayıdan büyüğünü döndüren fonksiyon
int max2(int x, int y) // added in 21. lesson
{
    return x > y ? x : y;
}


// Üç sayıdan büyüğünü döndüren fonksiyon
int max3(int x, int y, int z) // added in 21. lesson
{
    int max = x;

    if(y > max)
        max = y;
    
    if(z > max)
        max = z;
    
    return max;
}


// Kendisine argüman olarak verilen sayılardan ortanca olan sayıyı dönen foksiyon
int getmid(int x, int y, int z) // added in 21. lesson
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


void putline(void) // added in 21. lesson
{
    printf("\n---------------------------------------------------------\n");
}


// p    : Yazdirilaca olan dizinin ilk elemaninin adresi.
// size : Yazdirilaca olan dizinin eleman sayisi.
void print_array(const int* p, size_t size) // added in 23. lesson, modifield in 31. lesson
{
    for(size_t i = 0; i < size; ++i){
        // dongu degiskeni 0 degilse ve 20'nin kati olan dongu adimindaysa yeni satirdan devam edilsin diye 'if statement' yazildi.
        if(i && i % 20 == 0){
            printf("\n");
        }

        // dizinin ilgili adimdaki elemani uc birimlik alana formatli yazdirilacak.
        printf("%3d ", p[i]);
    }
    
    printf("\n---------------------------------------------------------\n");
}


// p    : Elemanlarina deger atanacak olan dizinin ilk elemaninin adresi.
// size : Elemanlarina deger atanacak olan dizinin eleman sayisi.
void set_array_random(int* p, size_t size) // added in 23. lesson, modifield in 27. lesson, modifield in 31. lesson
{
    while(size--)
        *p++ = rand() % 1000;

    /* ikinci versiyon
    while(size--){
        *p = rand() % 1000;
        ++p;
    }
    */
   
    /* İlk versiyon
    for(int i = 0; i < size; ++i){
        p[i] = rand() % 1000;
    }
    */
}


// 'rand' fonksiyonunun tohum değerini sistemin saat bilgisine göre değiştirmek için yazilan fonksiyon
void randomize(void) // added in 23. lesson
{
    srand((unsigned int)time(NULL));
}


// p : 'Standart Input'tan yapılan girişi 'null character'i görene kadar okuyup okunan karakterlerin yazılacağı elemanları 'char' türünden olan dizinin başlangıç adresi değeri.
void sgets(char* p) // added in 25. lesson, modifield in 31. lesson
{
    int ch;

    while((ch = getchar()) != '\n')
        *p++ = (char)ch;

    *p = '\0';

    // 25. derste yazılmış hali
    //int ch;
    //int idx = 0;
    //while((ch = getchar()) != '\n'){
    //    p[idx++] = (char)ch; // Burada int türünden char türüne atama yapıldığı için bu şekilde tür dönüşümünün bilinçli olarak yapıldığı belirtiliyor.
    //}
    //p[idx] = '\0'; // Burada yazının son karakteri 'null character' yapılıyor.
}


// p1: Takan edilecek ilk 'int' türünden nesnenin adresi
// p2: Takan edilecek ikinci 'int' türünden nesnenin adresi
void swap(int* p1, int* p2) // added in 28. lesson
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


// 'gswap' adı 'Generic Swap' sözcüklerinden gelmektedir.
// Aşağıdaki 'gswap' fonksiyonu herhangi bir tür için takas işlemi yapmaktadır.
// 'gswap' fonksiyonu ile sadece aynı türden nesneler takas edilmelidir.
// vp1  : Takas edilecek ilk nesnenin adresi.
// vp2  : Takas edilecek ikinci nesnenin adresi.
// sz   : Kaç byte alan takas edileceği bilgisi.
void gswap(void* vp1, void* vp2, size_t sz) // added in 35. lesson
{
    char* p1 = (char*)vp1; // '(char*)' tür dönüştürme operatörü ile yapılan tür dönüşümü işlermi hem kodu okuyana hem de derleyiciye açık şekilde bildirilmiş olacaktır.
    char* p2 = (char*)vp2;

    // Aşağıdaki döngünün koşul ifadesinde idiomatik yapı kullanılmıştır ama döngü gövdesinde idiomatik yapılar kullanılmamıştır.
    //while(sz--){
    //    char temp = *p1;
    //    *p1 = *p2;
    //    *p2 = temp;
    //    ++p1;
    //    ++p2;
    //}

    // Aşağıdaki döngünün koşul ifadesinde ve gövdesinde idiomatik yapılar kullanılmıştır.
    while(sz--){
        char temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}

