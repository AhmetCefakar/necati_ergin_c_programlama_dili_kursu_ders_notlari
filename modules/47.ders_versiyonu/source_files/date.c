#include "date.h"
#include <stdbool.h> // Kodun okunurluğunu arttırmak için 'bool' gibi makroların kullanılabilmesi için eklendi. 
#include <stdio.h>

#define YEARBASE    1900
#define PRIVATE     static
#define PUBLIC      

#define ISLEAP(Y) (((Y) % 4 == 0) && ( ((Y) % 100 != 0) || ((Y) % 400 == 0)))
#define MONTHDAYS(Y, M) (daytabs[ISLEAP(Y)][M])

// Bir yıldaki aylarda olan günlerin sayısı bilgisine erişmek için kullanılabilecek olan arama(lookup) tablosunun aşağıdaki gibi olabileceğini ilk defa 'The C Programing Language' kitabında 'Dennis Ritchie' önermiştir.
PRIVATE const int daytabs[][13] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
};


// 'is_valid_date' fonksiyonu kendisine geçilen gün, ayi, yıl değerlerinin geçerli bir tarih olup olmadığını sınayan bir fonksiyondur.
PRIVATE bool is_valid_date(int d, int m, int y)
{
    // İlk yazılan fonksiyon gövdesi aşağıdaki gibidir. 
    // return y >= YEARBASE && 
    //     m > 0 && m <= 12 && daytabs[ISLEAP(y)][m];

    return y >= YEARBASE && 
        m > 0 && m <= 12 && MONTHDAYS(y, m);
} 


// 'set' adındaki fonksiyonu sadece bu kaynak dosyada kullanacağız dışarıdan erişimi olmayacak bu nedenle adı genel olan bir sözcük olarak verildi.
// 'set' fonksiyonu kütüphanemizdeki diğer fonksiyonların 'Date' türünün üyelerini atama işlemini yapmak için kullanılacak.
// 'set' fonksiyonunun adı kendisini anlatmaktadır.
PRIVATE Date* set(Date* p, int d, int m, int y)
{
    if(!is_valid_date(d, m, y))
        return NULL;

    p->d_ = d;
    p->m_ = m;
    p->y_ = y;

    return p;
}


PUBLIC Date* set_date(Date* p, int d, int m, int y)
{
    return set(p, d, m, y);
}
