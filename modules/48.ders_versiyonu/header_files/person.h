
#pragma one // Çoğu derleyicinin desteklediği makro kullanımı. 'Multiple include guards(header include guards)' için kullanılmıştır.

#include "date.h"

typedef struct{
    int id;
    char name[20];
    char surname[24];
    Date bdate;
}Person;

Person* set_random_person(Person*);
void print_person(const Person*);
int cmp_person(const Person* p1, const Person* p2);