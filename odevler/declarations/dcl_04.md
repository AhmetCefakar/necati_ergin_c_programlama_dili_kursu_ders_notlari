### Aşağıdaki bildirimlerden geçersiz olanları işaretleyiniz: 


```C
int x1 = 10;
int x2 = x1 + 20; // Sentaks hatası verir. Burada 'initializer element is not constant' hatası verir 

int main(void)
{
	int x3 = x1 + x2;
	static int x = x3;  // Sentaks hatası verir. Burada 'initializer element is not constant'
}
```