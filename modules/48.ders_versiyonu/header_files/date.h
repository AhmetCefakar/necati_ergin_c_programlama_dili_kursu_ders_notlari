
#ifndef DATE_H // Buradaki 'multiple inclusion guard' kullanımı tüm derleyicilerde desteklenmektedir.
#define DATE_H

// ! Yapının elemanlarını bilerek gizlemedik, ancak client kodların yapının elemanlarını kullanmasını istemiyoruz, bunun için de sık bir kullanım olarak(convernsion) dışarıdan değiştirilmemesi istenilen yapı değişkenlerinin adlarının sonuna '_' karakteri ekleniyor. [10:27:30]
typedef struct{
    int d_;
    int m_;
    int y_;
} Date;

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// Set functions(mutaters) 

Date* set_date(Date* p, int d, int m, int y);
Date* set_date_str(Date* p, const char* pstr);
Date* set_date_today(Date* p);
Date* set_random_today(Date* p);
Date* set_year(Date* p, int y);
Date* set_month(Date* p, int m);
Date* set_month_day(Date* p, int d);

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// Get functions, getters, accessors

int get_year(const Date* p);
int get_month(const Date* p);
int get_month_day(const Date* p);
int get_week_day(const Date* p); // 0: Pazar, 1: Pazartesi ...
int get_year_day(const Date* p);

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// Formatet input-output functions

void print_date(const Date* p); // '05 Temmuz 2025 Cumartesi'
Date* scan_date(Date* p);

/*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*/
// Utility functions

int cmp_date(const Date* p1, const Date* p2);
int date_diff(const Date* p1, const Date* p2);
Date* ndays_after(Date* pdest, const Date* psource, int n);
Date* ndays_before(Date* pdest, const Date* psource, int n);

#endif