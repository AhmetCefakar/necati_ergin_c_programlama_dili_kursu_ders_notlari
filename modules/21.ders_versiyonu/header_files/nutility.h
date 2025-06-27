// Yazılan 'nutility.h' dosyası
#ifndef NUTILITY_H
#define NUTILITY_H

#define ISLEAP(y) (((y) % 4 == 0) && ( ((y) % 100 != 0) || ((y) % 400 == 0))) // added in 21. lesson

int ndigit(int); // added in 21. lesson
int sumdigit(int); // added in 21. lesson
int isprime(int); // added in 21. lesson
int dayofweek(int day, int mount, int year); // added in 21. lesson
int max2(int, int); // added in 21. lesson
int max3(int, int, int); // added in 21. lesson
int getmid(int, int, int); // added in 21. lesson
void putline(void); // added in 21. lesson

#endif