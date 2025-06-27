// Yazılan 'nutility.h' dosyası
#ifndef NUTILITY_H
#define NUTILITY_H

#include <stddef.h> // Buradaki başlık dosyasını 'size_t' tür eş adını tanıtmak için ekliyoruz.

#define ISLEAP(y) (((y) % 4 == 0) && ( ((y) % 100 != 0) || ((y) % 400 == 0))) // added in 21. lesson

// Aşağıdaki makro bir dizinin eleman sayısını bulmak için kullanılan standart olmayan ama bir çok C programcısının kullandığı makro tanımıdır.
#define asize(ar) (sizeof(ar) / sizeof(ar[0])) // added in 22. lesson

int ndigit(int); // added in 21. lesson
int sumdigit(int); // added in 21. lesson
int isprime(int); // added in 21. lesson
int dayofweek(int day, int mount, int year); // added in 21. lesson
int max2(int, int); // added in 21. lesson
int max3(int, int, int); // added in 21. lesson
int getmid(int, int, int); // added in 21. lesson
void putline(void); // added in 21. lesson
void print_array(const int* p, size_t size); // added in 23. lesson, modifield in 31. lesson
void set_array_random(int* p, size_t size); // added in 23. lesson, modifield in 31. lesson
void randomize(void); // added in 23. lesson
void sgets(char* p); // added in 25. lesson
void swap(int* p1, int* p2); // added in 28. lesson
void gswap(void* vp1, void* vp2, size_t sz); // added in 35. lesson
#endif