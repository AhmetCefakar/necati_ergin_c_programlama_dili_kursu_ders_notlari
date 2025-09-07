#define _CRT_SECURE_NO_WARNINGS

#include "date.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h> // İlk olarak 'atoi' fonksiyonunu kullanmak için eklendi.
#include <time.h>

#define YEARBASE            1900
#define PRIVATE             static
#define PUBLIC              
#define RANDOM_YEAR_MIN     1950
#define RANDOM_YEAR_MAX     2024

#define ISLEAP(Y)           (((Y) % 4 == 0) && ( ((Y) % 100 != 0) || ((Y) % 400 == 0)))
#define MONTHDAYS(Y, M)     (daytabs[ISLEAP(Y)][M])

#define GET_YEAR(D)         ((D).y_)
#define GET_MOUNT(D)        ((D).m_)
#define GET_MOUNT_DAY(D)    ((D).d_)


PRIVATE const int daytabs[][13] = {
    { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
    { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 },
};

// Tanımı aşağıda ama bir çok fonksiyon bu fonksiyonları çağırdığı için fonksiyonların bildirimleri buraya eklenmiştir.
PRIVATE Date* set(Date* p, int d, int m, int y);
PRIVATE int day_of_week(int d, int m, int y);
PRIVATE bool is_valid_date(int d, int m, int y);
PRIVATE int totaldays(const Date* p);
PRIVATE Date* from_tdays_to_date(Date* p, int tdays);


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// Set functions(mutaters)

PUBLIC Date* set_date(Date* p, int d, int m, int y)
{
    return set(p, d, m, y);
}


// Kendisine geçilen yazı formatındaki 'pstr' nesnesini(object) ki "14-06-2021" benzeri bir tarih değeri geçilecek, 'Date' türüne dönüştürüp geriye dönmektedir.
PUBLIC Date* set_date_str(Date* p, const char* pstr)
{
    int d = atoi(pstr);
    int m = atoi(pstr + 3);
    int y = atoi(pstr + 6);

    return set(p, d, m, y);
}


PUBLIC Date* set_date_today(Date* p)
{
    time_t sec;
    time(&sec);
    struct tm* tp = localtime(&sec);

    int d = tp->tm_mday;
    int m = tp->tm_mon + 1; // 'struct tm' türünde ay bilgisi indeks olarak '0'dan başlıyor. 
    int y = tp->tm_year + 1900; // 'struct tm' türündeki yıl bilgisi '1900' yılından sonrası için tutuluyor. 

    return set(p, d, m, y);
}


PUBLIC Date* set_random_date(Date* p)
{
    int y = rand() % (RANDOM_YEAR_MAX - RANDOM_YEAR_MIN + 1) + RANDOM_YEAR_MIN;
    int m = rand() % 12 + 1;

    int d = rand() % MONTHDAYS(y, m) + 1;

    return set(p, d, m, y);
}


PUBLIC Date* set_year(Date* p, int y)
{
    return set(p, GET_MONTH_DAY(*p), GET_MOUNT(*p), y);
}

PUBLIC Date* set_month(Date* p, int m)
{
    return set(p, GET_MONTH_DAY(*p), m, GET_YEAR(*p));
}

PUBLIC Date* set_month_day(Date* p, int d)
{
    return set(p, d, GET_MOUNT(*p), GET_YEAR(*p));
}


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// Get functions, getters, accessors

PUBLIC int get_week_day(const Date* p)
{
    return day_of_week(GET_MOUNT_DAY(*p), GET_MOUNT(*p), GET_YEAR(*p));
}

// Girilen tarihin yılın kaçıncı günü olduğu bilgisini geriye dönen fonksiyon
PUBLIC int get_year_day(const Date* p)
{
    int sum = GET_MOUNT_DAY(*p); // Bulunulan ayın kaçıncı günü olduğu bilgisi 'sum' değişkenine alınıyor.
    int m = GET_MOUNT(*p);
    int y = GET_YEAR(*p);

    for(int i = 1; i < m; ++i)
        sum += MONTHDAYS(y, i);
    
    return sum;
}


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// Formatet input-output functions


PUBLIC void print_date(const Date* p)
{
    // Ayları dizinin indis değeriyle eşitlemek için dizinin 0. elemanı boş yazı yapılıyor.
    static const char* const pmons[] = { "", "Ocak", "Subat", "Mart", "Nisan", "Mayis", "Haziran", "Temmuz", "Agustos", "Eylul", "Ekim", "Kasim", "Aralik", };
    
    static const char* const pdays[] = { "Pazar", "Pazartesi", "Sali", "Carsamba", "Persembe", "Cuma", "Cumartesi", };

    printf("%02d %s %d %s\n", GET_MONTH_DAY(*p), pmons[GET_MONTH(*p)], GET_YEAR(*p), pdays[get_week_day(p)]);
}


PUBLIC Date* scan_date(Date* p)
{
    int d, m, y;
    scanf("%d%d%d", d, m, y);
    return set(p, d, m, y);
}


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// Utility functions

// İki datihi karşılaştıran fonksiyon.
int cmp_date(const Date* p1, const Date* p2)
{
    // Sırasıyla yıl, ay ve gün kıyaslaması yapılacak ve bu yöntemle;
    // İlk tarih ikinciden büyükse pozitif değeri geriye döndürülecektir.
    // İlk tarih ikinciden küçükse negatif değeri geriye döndürülecektir.
    // İlk tarih eşitse '0' değeri geriye döndürülecektir.

    int y1 = GET_YEAR(*p1);
    int y2 = GET_YEAR(*p2);

    if(y1 != y2)
        return y1 - y2;
    
    int m1 = GET_MONTH(*p1);
    int m2 = GET_MONTH(*p2);

    if(m1 != m2)
        return m1 - m2;
    
    return GET_MONTH_Day(*p1) - GET_MONTH_Day(*p2);
}

// İki tarih arasındaki gün farkını hesaplayan fonksiyon.
PUBLIC date_diff(const Date* p1, const Date* p2)
{
    return totaldays(p1) - totaldays(p2);
}

// Bulunulan tarihten 'n' gün sonraki tarihin ne olacağını hesaplayan fonksiyon.
PUBLIC Date* ndays_after(Date* pdest, const Date* psource, int n)
{
    return from_tdays_to_date(pdest, totaldays(psource) + n);
}

// Bulunulan tarihten 'n' gün önceki tarihin ne olacağını hesaplayan fonksiyon.
PUBLIC Date* ndays_before(Date* pdest, const Date* psource, int n)
{
    return from_tdays_to_date(pdest, totaldays(psource) + n);
}


/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// PRIVATE functions

PRIVATE Date* set(Date* p, int d, int m, int y)
{
    p->d_ = d;
    p->m_ = m;
    p->y_ = y;

    return p;
}

// Aşağıdaki programda 'Tomahako Sakamota' algoritması kullanılmıştır.
// Bu fonksiyondan geriye dönen değer 0: Pazar, 1: Pazartesi, 2: Sali ... 6: Cumartesi
PRIVATE int day_of_week(int d, int m, int y)
{
    static const int tb[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };

    if(m < 3)
        --y;
    
    return ((y + y / 4 - y / 100 + y / 400 + tb[m - 1] + d) % 7);
}

PRIVATE bool is_valid_date(int d, int m, int y)
{
    // return y >= YEARBASE && 
    //     m > 0 && m <= 12 && daytabs[ISLEAP(y)][m];

    return y >= YEARBASE && 
        m > 0 && m <= 12 && MONTHDAYS(y, m);
}

// 1 1 YEARBASE'den sonra geçen gün sayısı. 
PRIVATE int totaldays(const Date* p)
{
    int sum = get_year_dat(p); // Fonksiyona geçilen tarihin yılındaki gün sayısı elde ediliyor.
    int y = GET_YEAR(*p); // Fonksiyona geçilen tarihin yılı bilgisi elde ediliyor.

    for(int i = YEARBASE; i < y; ++i){
        sum += ISLEAP(i) ? 366 : 365;
    }

    return sum;
}


// 'tdays' değeriyle çeçilen gün sayısı '1.1.1900' tarihinden sonra geçen gün sayısı olarak kabul edilip o günün tarihini geriye döndüren fonksiyon.
PRIVATE Date* from_tdays_to_date(Date* p, int tdays)
{
    int y = YEARBASE;

    while(tdays > (ISLEAP(y) ? 366 : 365)){
        tdays -= ISLEAP(y) ? 366 : 365;
        ++y;
    }

    int m = 1;

    while(tdays > MONTHDAYS(y, m)){
        tdays -= MONTHDAYS(y, m);
        ++m;
    }

    int d = tdays;

    return set(p, d, m, y);
}