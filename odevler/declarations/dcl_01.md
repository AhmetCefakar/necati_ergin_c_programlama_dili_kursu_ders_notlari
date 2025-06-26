#### Aşağıdaki bildirimlerden geçersiz olanları işaretleyiniz: 

```C
int main(void)
{
	signed x1; // Geçerli(legal), burada 'x1' değişkeni 'int' türündedir.
	unsigned double x2;
	long int long x3; // Geçerli(legal), buradaki kullanım 'lonk long' ya da 'lonk long int' ile aynıdır.
	bool x4;
	char int x5;
	x6 float;
	long double x7; // Geçerli(legal), buradaki tür 'float', 'double', 'long double' türü olan 'floating point' türlerinden en büyük boyutlu olanıdır.
	unsigned short int x8;  // Geçerli(legal)
	long unsigned x9;  // Geçerli(legal)
	long float x10;
}
```