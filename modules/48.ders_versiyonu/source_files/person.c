#include "person.h"
#include "nutility.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

Person* set_random_person(Person* p)
{
    p->id = rand() + 1000;
    strcpy(p->name, random_name());
    strcpy(p->surname, random_surname());
    set_random_date(&p->bdate);

    return p;
}

void print_person(const Person* p)
{
    printf("%-8d %-16s %-24s ", p->id, p->name, p->surname);
    print_date(&p->bdate);
}

// İki 'personel' nesnesi kıyaslanırken şu sıraya göre kıyaslama yapılacak: ad, soyad, doğum senesi, id
int cmp_person(const Person* p1, const Person* p2)
{
    int cmp_result = strcmp(p1->name, p2->name);
    if(cmp_result)
        return cmp_result;

    cmp_result = strcmp(p1->surname, p2->surname);
    if(cmp_result)
        return cmp_result;
    
    cmp_result = cmp_date(&p1->bdate, &p2->bdate);
    if(cmp_result)
        return cmp_result;
    
    return p1->id - p2->id;
}