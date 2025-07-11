
# Bazı Derslerde Çok Önemli Olduğu belirtilen Bilgiler ❗

## 1.Ders

### 1.Ders 1. Önemli Bilgi

❗❗❗ **Undefined behavior** gibi konular bilinmiyorsa C dilinin bilindiğinin söylenmesinin doğru olmayacaktır.


### 1.Ders 2. Önemli Bilgi

❗❗❗ Motivasyon için C ve C++ kullanımının sadece kursla sınırlı kalmayıp günlük yaşamda da kullanılması durumunda daha iyi fayda sağlanacaktır, C ve C++ topluluklarının içinde olunmasının da doğru olacağı belirtildi. Bir kaç saat İngilizce kursuna gidilerek dil öğrenilemeyeceği gibi ve bir şeyi öğrenmek için onun hayatın bir parçası yapılması gerektiği gibi. Kalıcı öğrenmek için belirli zaman aralıklarıyla tekrar yapılması gerekecektir.


### 1.Ders 3. Önemli Bilgi

❗❗❗ Herhangi bir programlama dilinde yazılmış olan bir program nasıl çalışır diye düşünülürse, bir program üzerinde çalıştığı cihazın sahip olduğu işlemci yongasının sahip olduğu **instruction set** kodlarına çevrilmesi sayesinde çalışmaktadır(işletim sistemi üzerinde çalışılıyorsa ayrıca işletim sisteminin bazı servisleri de kullanılıyor olabilir).


## 2.Ders

### 2.Ders 1. Önemli Bilgi

❗❗❗ **Akılda kalması gereken en önemli bilgi, derleyicilerin yazılmış kaynak kodu bire bir derlemeyip, bazı iyileştirmeler yapmasıdır**.


### 2.Ders 2. Önemli Bilgi

 ❗❗❗ Aşağıdaki Maddeler Önemlidir;
🚀 C dilinin **sözdizimini(syntax)** C Standardı belirlemektedir fakat Derleyiciler C Standardının kendilerine verdiği yetkiyle standard olmayan(yani dilin standardında yer almayan) bazı eklemeleri programcılara kullanma olanağı sağlayabiliyor, bu eklemelere "**compiler extension(derleyici eklentisi)**" denilmektedir. </br>
🚀 Mesela **C99** standardında sadece decimal(10 sayı tabanı), octal(8 sayı tabanı) ve hexadecimal(16 sayı tabanı) ama **GCC** derleyicisi ayrıca binary(2 sayı tabanı) gösterimi desteklemek için bir **extension**'a sahip fakat bu **C** standardında yoktur, ilave olarak derleyici tarafından eklenmiş ama aynı özelliği destekleyen bir **extension**'a sahip olmayan başka bir derleyicide binary tabanda yazılmış sayı kullanımları olduğunda kodu derlerken hata alınacaktır. </br> 
🚀 **GCC** derleyicisi bünyesinde bir çok **compiler extension** mevcuttur ve bir çok **compiler extension** kullanılarak yazılmış bir **C** programı başka bir derleyicide derlenmek istendiğinde eğer diğer derleyici **GCC** derleyicisinde mevcut olan **compiler extension**'lardan tek birine bile sahip değilse ilgili program derlenirken hata oluşacaktır, bu da programın farklı derleyiciler arasında taşınabilirliğini olumuz olarak etkileyecektir. </br>
🚀 **Digit Separator** kullanımı **C++** dilinde bir standart iken **C** dilinde standart değildir(sadece derleyiciler **extension** olarak bu kullanımı sunabilirler), `int value = 123'453'434;` kullanımı **digit separator** kullanımıdır ve bu derleyicinin sağladığı **extension**'dır. 


## 3.Ders

### 3.Ders 1. Önemli Bilgi

❗❗❗ C ve C++ dillerinde yazılmış olan programları doğru anlayabilmek için **declaration statement** ve **non declaration statement(executable statement)** tanımlamalarının iyi bilinmesi ayrıca aralarındaki farkın ne olduğunun iyi bilinmesi gerekiyor.
- `int value = 123;` bu "**statement**" tür olarak "**declaration**" türündendir çünkü "value" tanımının ne olduğunun bildirimi yapılıyor.
- `value += 45;` bu "**statement**" tür olarak "**executable**" türündendir çünkü bir bildirim içermemekte, bildirim içermiyorsa **executable statement** olarak nitelendiriliyor.

❗❗❗ Derleme işleminin öyle bir süreci var ki derleyici bu süreçte kodda kullanılan adların hangi varlıkların adları olduğunu anlamaya(bulmaya) çalışır, bu sürece "**Name Lookup**" denmektedir.

❗❗❗ "**Name Lookup**" terimi önemli bir terimdir, derleyici bu aşamada dosyada kullanılan **identifier(ad)**'ların hangi varlıkların adları olduğunu anlamaya/bulmaya çalışır, bu aşamaya "**name lookup**" denir. "**name lookup**" terimi programlamada genel olarak kullanılan bir terimdir C ve C++ standardında kullanılan bir ifade değildir.

❗❗❗ Derleyici ilk önce her bir dosyayı ayrı ayrı ele alıp işlemektedir. Bu işlem sırasında her bir dosya için ilk önce "**lexical analysis(tokenizing)**" işlemini yapar ve dosyadaki "**token**"ları belirler. Ardından "**name lookup**" işlemini yapar. Daha sonra "**context control**" işlemi yapılır.


### 3.Ders 2. Önemli Bilgi

❗❗❗ Değişkenler, sabitler, operatörler biraraya gelerek **expression(ifade)** yapılarını oluşturur. </br>
C dilinin yarısı **expression(ifade)**'dan oluşmaktadır. Aşağıda listelenler **expression(ifade)** olarak tanımlanır; 
- x
- 10 
- x + y 
- x + y *z > 25 
- x + y *z > (10 -a)

Yukarıda listelenen **Expression(İfade)**'lar incelendiğinde bir **Expression(İfade)**'ın bir ya da daha alt **Expression(İfade)** içerebileceği görülür ve bunlara **Sub-Expression** denilmektedir.


### 3.Ders 3. Önemli Bilgi

❗❗❗ C dilinde her **ifade(expression)** aşağıda listelenen tanımlara sahiptir;
1. Her **ifadenin(expression)** bir **veri türü(Data Type)** vardır.
2. Her **ifadenin(expression)** değer kategorisi vardır("**L Value / R Value**" olarak iki türe ayrılır).
3. Her **ifadenin(expression)** bir değeri vardır(`void` türünden olmayan her ifadenin bir değeri vardır). 


### 3.Ders 4. Önemli Bilgi

❗❗❗ "**İfade geçerli deyim geçerli.**" cümlesi C ve C++ dilinde yazılan programlardaki kaynak dosyalarda yazılan ifadelerin ne olduğuna diğer dillere nazaran daha çok dikkat etmek gerektiğini belirtmek için kullanılıyor. </br>
❗❗❗ C ve C++ dillerinde bir ifade ya da deyim geçerli olabilir ama kullanılması mantıklı olmayabilir(kullanılan ifadeler **sözdizim(syntax)** kurallarına uygun olabilir ama kullanılmaları bazı sorunlara neden olabilir).


### 3.Ders 5. Önemli Bilgi

❗❗❗ C dilinde bir **nesnenin(object)** hafızada kapladığı yere "**Storage(alan)**" denilmektedir. 

❗❗❗ C dilinde bir **nesnenin(object)** hafızada kapladığı yerdeki 0 ve 1'lerin hangi veri türüne ait olduğu bilgisini belirtmek için **Data Type** terimi kullanılıyor. **Data Type** bilgisi bir **nesnenin(object)** bellekte kaç byte yer kaplayacağı bilgisini belirlemektedir. Fakat **nesnenin(object)** hafızada kapladığı alan sadece değerini içeriyor. 


### 3.Ders 6. Önemli Bilgi

❗❗❗ C dilinde bir **nesnenin(object)** olmazsa olmaz özelliği **Data Type** özelliğidir ve bu özellik şunları belirler; 
1. Nesnenin bellekte kaç byte yer kaplayacağını belirler.
2. O byte'larda bulunan bitler **nesnenin(object)** değerinin ne olduğunu ifade eder.
3. O **nesnenin(object)** hangi operatör'lerin operandı olabileceğini(hangi işlemlere girebileceğini) belirler.


### 3.Ders 7. Önemli Bilgi

❗❗❗ C ve C++ dillerinde bir "**Type System**" var bu sistem iki gruba ayrılmaktadır, **Data Type** grupları aşağıdaki gibidir; 
1. **Basic Types**: Dil tarafından hazır olarak sunulan, özellikleri dil tarafından belirlenmiş **Tam sayı(Naturel Number)** ya da **Rasyonel sayı(Rational number)** veri türleridir. **Basic Types** terimi C standardının kullandığı terimdir, bu terim başka yerlerde **Fundamentals Types**, **Build-in Types**, **Default Types**, **Primitive Types** olarak adlandırılabiliyor, buradaki terimler aynı şey için kullanılmaktadır.
2. **User Defined Types**: C dilinde şu **struct**, **union**, **enum** üç farklı **keyword** kullanılarak **User Defined Types** oluşturulabilir, C++ dilinde bunların yanına "**class**" adındaki **keyword** de eklenmektedir. Kursun son çeyreğinde "**User Defined Types**" içeriği işlenecektir.


### 3.Ders 8. Önemli Bilgi

❗❗❗ Bir **nesnenin(object)** adresinden bahsediliyorsa o **nesnenin(object)** bellekte nerede tutulduğundan bahsediliyordur, bu bilgi önemlidir.


### 3.Ders 9. Önemli Bilgi

❗❗❗ Aşağıdaki maddeler önemlidir, iyi anlaşıldığından emin ol;
- Bir **ifadenin(expression)** **L Value** olması o ifadenin bir **nesne(object)**'ye karşılık gelmesi anlamına geliyor, yani bellekte ayrılmış bir yerin olması anlamına geliyor.
- Bir **ifadenin(expression)** **R Value** olması o ifadenin bir **nesne(object)**'ye karşılık gelmemesi anlamına geliyor.
- Değişken(variable) adlarının oluşturduğu **ifadeler(expression)** her zaman **L Value** olacaktır.
- Aritmetik ya da karşılaştırma operatörleriyle(operands) oluşturulmuş **ifadeler(expression)** her zaman **R Value** olacaktır çünkü bu ifadeler çalışma anında bellekte yer kaplamazlar.
- Atama operatörünün sol operandı olabilen bir **ifade(expression)** **L value** olur diyebilir miyiz? -> Hayır böyle bir genelleme yapamayız. Mesela `"string value"` gibi string türünden bir **ifade(expression)** atama operatörünün sol operandı olamaz ama bir string türü **L value** türündedir. C ile ilgili bazı kaynaklarda şu şekilde "_Atama operatörünün sol operandı olan ifadeler L-value özelliğindedir._" bir tanım yapıldığı görülebilir ama bu tanım yanlıştır.

👇 Aşağıdaki programdan atama operatörünün sol operandı olamayan ama **L value** kategorisinde olan bir **ifade(expression)** nasıl oluyor incelenebilir.
```C
#include<stdio.h>
#include<stdint.h>

int main(void)
{
  const int x = 8; 

  x = 10; // Buradaki 'x' ifadesi 'L-value' özelliktedir ama atama operatörünün sol operandı yapıldığında sözdizim hatası(syntax error) oluşmaktadır.

  "yazi degeri" =  // Buradaki '"yazi degeri"' ifadesi 'L-value' özelliktedir ama atama operatörünün sol operandı yapıldığında sözdizim hatası(syntax error) oluşmaktadır.

  int ary[25];
  ary = // Buradaki 'ary' ifadesi 'L-value' özelliktedir ama atama operatörünün sol operandı yapıldığında sözdizim hatası(syntax error) oluşmaktadır.
}
```


### 3.Ders 10. Önemli Bilgi

❗❗❗ C ve C++ dillerinde operatörlerle, fonksiyonlarla vb. yapılarla ilgili bir çok kural **ifadelerin(expression)** **Value Category** özelliğiyle ilgilidir.

👇 Aşağıdaki program R-value/L-value özelliğini anlamak için incelenebilir.
```C
#include<stdio.h>
#include<stdint.h>

int main(void)
{
  int x = 8; // Buradaki 'int x = 8' ifadesi 

  x; // Buradaki 'x' ifadesi bellekte yer kaplayan bir nesne olduğu için 'L-value' özelliktedir.

  x + 6; // Buradaki 'x + 6' ifadesi bellekte yer kaplamayacaktır ve 'R-value' özelliktedir.

  int arrayA[8]; // 'arrayA' ifadesi bir 'int' dizinin tanımlamasıdır ve bir dizi 'L-value' özelliktedir.
  
  int* ptr = &x; // Bu satır 'x'in adres operatörünü alabildiğini göstermek için yazıldı zaten 'x' 'L-value' özelliktedir.
}
```


### 3.Ders 11. Önemli Bilgi

❗❗❗ Neden **constand expression(sabit ifadesi)** terimi önemlidir: Dilin kuralları içinde öyle yerler var ki o yerlerde **constand expression(sabit ifadesi)** kullanılması gerekiyor, diğer türlü hata oluşacaktır. Aşağıdaki C kod alanında buradaki durumlar için açıklamalara bakabilirsin.

❗❗❗ C dilinde bir **ifade(expression)** ya **sabit ifadesidir(constand expression)** ya da **sabit ifadesi değildir(non constand expression)**.

👇 Aşağıdaki program **constand expression(sabit ifadesi)** durumunu anlamak için incelenebilir.
```C
#include<stdio.h>
#include<stdint.h>

int main(void)
{
  int x = 10; 
  
  10 * 4 + 3; // Buradaki '10 * 4 + 3' expression(ifade) bir constand expression(sabit ifadesi)'dır.
  x + 9; // Buradaki 'x + 9' expression(ifade) bir constand expression(sabit ifadesi) değildir.

  int array[x + 20]; // Buradaki 'x + 20' expression(ifade) C dilinde bir constand(sabit) olarak görülmemektedir. 'Expression must have a constant value' derleme hatası oluşacaktır.
  
  int a = 1, b = 3, c = 6;

  switch(x){
    case a: ; // Buradaki 'case a' expression(ifade) C dilinde bir constand(sabit) olarak görülmemektedir. 'Expression must have a constant value' derleme hatası oluşacaktır.
    case b: ; // Buradaki 'case b' expression(ifade) C dilinde bir constand(sabit) olarak görülmemektedir. 'Expression must have a constant value' derleme hatası oluşacaktır.
  }  
}
```

👇 Aşağıdaki program henüz erken olan ama sorulan bir soru için değinilen C'de **const** işaretlenen bir değişkenin **constand expression(sabit ifadesi)** oluşturmadığını anlamak için incelenebilir ama C++ dilinde tam tersi durum söz konusudur.
```C
#include <stdio.h>

int main(void)
{
  const int x = 10;

  int a[x]; // Buradaki kullanımda C dilinde 'x' ifadesi sabit ifadesi değildir ve senteks hatası oluşacaktır ama C++ dilinde 'x' ifadesi sabit ifadesidir.
}
```


### 3.Ders 12. Önemli Bilgi

❗❗❗ Bir sonraki dersin ikinci saatinden itibaren C dilinin öğrenilmesine geçiş yapılacak, şu ana kadar yapılan derslerin amacı C öğrenebilmek için bir yazılım bilgisi/terminolojisi zemini oluşturmaktı, bu zeminin oluşturulması için 13 saatlik(aralar dahil) bir zaman harcanmış olacak.


## 4.Ders

### 4.Ders 1. Önemli Bilgi

❗❗❗ Kurs boyunca aşağıdaki bellek seviyeleri kullanılacaktır.
- 1 byte --> Hemen her yerde "8 bit" iftiva etmektedir..
- 1 KB --> 1024 byte
- 1 MB --> 1024 KB
- 1 GB --> 1024 MB
- 1 TB --> 1024 GB. Bu kursta en fazla bu kadarlık bellek seviyesi kullanılacak daha fazlasına değinilmeyecek

❗❗❗ Özellikle "**System Programming**" alanlarında kullanılan terimler aşağıdaki gibidir;
- 2 byte --> **1 word**
- 4 byte --> **1 dword(double word)**
- 4 bit = 0.5 byte --> **1 Nibble**, bu tanımlama önemli çünkü iki tabanı ile 16 tabanı arasındaki dönüşümler bu adres bölümleri dikkate alınarak yapılıyor.


### 4.Ders 2. Önemli Bilgi

❗❗❗ C öğrenirken dilin en karmaşık konularından biriyle ilk başta karşılaşılıyor. Bu konu şu: C dilinde kullanılan türlerin storage ihtiyacı derleyiciden derleyiciye göre değişebiliyor yani mesela bir `int` türünün boyutu bazı derleyiciler için 32 bit bazı derleyiciler için 16 bit olabiliyor. Böyle olmasının nedeni C dilinin genel amaçlı bir dil olması yani C ile çok kısıtlı kaynaklara sahip bir **micro controller** için de program yazılabilir, 1 TB ram'e sahip cihazlara kurulacak olan işletim sistemlerinin çekirde programları da yazılabilir, görüleceği gibi C dilinin kullanım spektrumu geniştir.


## 5.Ders

### 5.Ders 1. Önemli Bilgi

❗❗❗ Değişken bildirimi için aşağıdaki gibi iki yol vardır; 
1. **Pure Syntax**: `Type variable;` şeklinde bildirim yapılıyor.
2. **Initializing Expression(Initializer)**: `Type variable = value;` şeklinde bildirim yapılıyor. "**Initialize, Initializing, Initializer**" kavramları bu tür tanımlamada kullanılan terimlerdir.

❗❗❗ Ondalıklı sayı(floating point numbers) türlerinde işaretli/işaretsiz ayrımı yoktur, mesela `signed float x;` şeklinde bir değişken bildirimi yapılamaz.

❗❗❗ Tam sayı türlerinin temel türü `int` türüdür.

❗❗❗ Küsuratlı sayıların(floating point numbers) temel türü `double` türüdür.



### 5.Ders 2. Önemli Bilgi

❗❗❗ Programlama dilleri "**case-senvitive**" ya da "**case-insenvitive**" olarak adlandırma kuralına sahip olabilir, C ve C++ "**case-senvitive**"dir. Bir dilin "**case-senvitive**" olması demek "sum", "SUM", "suM" adlarının her birinin farklı bir ad olarak yorumlanması demektir.


### 5.Ders 3. Önemli Bilgi

❗❗❗ Bir program çalıştırıldığında programın akışı bir değişkenin bildirildiği yere geldiğinde o değişken için bellekte bir yer tahsil edilir bu anda değişkenin hayatı başlamış olur ve bu değişken için ayrılan bellek alanı ne zaman o değişkenle ilişkisi sonlandırılır o zaman değişkenin ömrü son bulmuş olur. 


### 5.Ders 4. Önemli Bilgi

❗❗❗ Bir değişken "**static**" ömre sahipse program çalışması süresince sadece bir defa hayatına başlar ve programın çalışması tamamlandığında ömrü sonlanır. Bir değişken "**automatic**" ömre sahipse programın akışı değişkenin bildirildiği **kapsama(scope)** gelindiğinde değişkene bellekte yer tahsisedilir ve değişkenin ömrü başlar ve bu değişkenin ömrü bildirildiği **kapsamdan(scope)** çıkıldığında sonlanacaktır.


### 5.Ders 5. Önemli Bilgi

❗❗❗ **Indetermined Value**: "**automatic**" ömre sahip değişkenlere ilk değerleri verilmediğinde bu değişkenler bellekte kendilerine tahsis edilen alandaki değer ile ömürlerine başladıklarında sahip oldukları ne olduğu belli olmayan değeri belirtmek için kullanılan bir terimdir, bu durum için standardın kullanmadığı "**garbage value(çöp değer)**" tanımlaması da kullanılabiliyor.


### 5.Ders 6. Önemli Bilgi

❗❗❗ Bu başlık altında anlatılanlar C dilinin öğrenilmesinde çok önemlidir, buradaki bilgiler bilinmiyorsa C dilinin hiç bilinmediğinin bilincinde olarak incelenmelidir.

🧭 Aşağıdaki terimler C ve C++ dışındaki çoğu dilde(Java, C# vb.) bulunmamaktadır;
1. **Undefined behavior(tanımsız davranış)**
2. **Unspecified behavior(belirsiz davranış)**
3. **Implementation defined behavior(derleyiciye bağımlı)**


### 5.Ders 7. Önemli Bilgi

❗❗❗ C standardı(Draft, Specification, Belgesi, Dokümanı) bazı kodları "**ub**" olarak nitelendirmektedir.

❗❗❗ C standardı(Draft, Specification, Belgesi, Dokümanı) **Undefined behavior(tanımsız davranış)** terimini şu şekilde açıklamaktadır: Öyle bir kod ki derleyicinin o kod karşılığında nasıl bir makine kodu üreteceği konusunda hiç bir belirleme yoktur, yanı "**ub**" durumunda bir kod yazılıyorsa kod çalışma zamanında beklenildiği gibi çalışabilir ya da çalışmayabilir.

❗❗❗ C standardı(Draft, Specification, Belgesi, Dokümanı) tanımsız davranışların hepsini belirtmektedir, tanımsız davranış olan kodlar asla yazılmamalıdır.


### 5.Ders 8. Önemli Bilgi

❗❗❗ İşaretsiz tam sayılarda taşma durumu "**undefined behavior**" değildir, İşaretli tam sayılarda taşma durumu "**undefined behavior**" oluşturmaktadır.


### 5.Ders 9. Önemli Bilgi

❗❗❗ Bu başlık altında anlatılanlar aşağıdaki gibi özetlenebilir;
- "**Undefined behavior(tanımsız davranış)**" kaçınılması gereken zararlı bir durumdur. 
- "**Unspecified behavior(belirsiz davranış)**" bu durum kodun yazılmasına bağlı olarak programın çalışmasında mantık tutarsızlığına neden olabilen durumlardır.
- "**Implementation defined behavior(derleyiciye bağımlı)**" bu durum derleyiciden derleyiciye farklı yorumlanan kodları belirtmek için kullanılmaktadır.


### 5.Ders 10. Önemli Bilgi

❗❗❗ C derleyicilerinin hepsi en düşük C99 standardı desteği verdikleri için yeni yazılacak C programlarının en düşük C99 standardına göre yazılabilir.


## 6.Ders

### 6.Ders 1. Önemli Bilgi

❗❗❗ Birden fazla varlığın adlarının aynı olabilmesi için **scope**'larının farklı olması gerekiyor.

👇 Aşağıdaki programda aynı adın farklı **kapsamlarda(scope)** bildirimleri incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int x = 1;

void foo()
{
    printf("1.x = %d", x);

    int x = 5;

    printf("2.x = %d", x);
    {
        printf("3.x = %d", x);
        int x = 7;
        printf("4.x = %d", x);
        {
            printf("5.x = %d", x);
            int x = 13;

            printf("6.x = %d", x);
        }
        printf("7.x = %d", x);
    }
    printf("8.x = %d", x);
}

void bar()
{
    int x;

}
```


### 6.Ders 2. Önemli Bilgi

❗❗❗ **Name-lookup** işlemi eğer bir iç blok içinde kullanılmışsa ad arama işlemi ilk önce bulunulan bloktaki ilgili varlık adının ilk kullanıldığı yerden başlayarak ilgili bloğun en başına kadar yapılır, bu işlem adın bildirimi bulunana kadar her blok için yapılır, en son **file scope** alanında varlık adının geçtiği fonksiyonun en başından dosyanın başına kadar olan alanda aranır.


### 6.Ders 3. Önemli Bilgi

❗❗❗ Bir fonksiyon aşağıdaki özelliklere sahiptir;
- Fonksiyonlar bir geri dönüş değerine sahiptir, bir fonksiyon değer döndürmediğinde bile "**void**" değer döndürür(aslında **void** bir türdür).
- Fonksiyonların adları vardır.
- Fonksiyonlar parametre alabilirler.
- `function_name(parameters);` buradaki bildirimde fonksiyonun adı "**function_name**" ve alacağı değerlere de "**parameters**" denilmektedir, "**parameters**"lar "**(..)**" şeklinde **parametre parantezi** içerisinde yer alır.


### 6.Ders 4. Önemli Bilgi

❗❗❗ Aşağıdaki bilgiler dikkate alınarak fonksiyon bildirimleri ve tanımları yapılmalıdır. 
- C dilinde parametre almayan fonksiyonlar yazarken `type foo(void){...}` şeklinde tanımlamak doğrudur. 
- C++ dilinde parametre almayan fonksiyonlar yazarken `type foo(){...}` şeklinde tanımlamak doğrudur.

**Void Function**: Geri dönüş değeri olmayan(yani geri dönüş değeri **void** olan) fonksiyonlardır. Mesela `void foo(void);` ya da `void foo(int x);` fonksiyon bildirimleri "**void function**" olarak adlandırılmaktadır. `int foo(void);` fonksiyonu "**void function**" değildir. 


### 6.Ders 5. Önemli Bilgi

❗❗❗ Fonksiyonların parametreleri "**automatic**" ömürlü olmak zorundadır, fakat fonksiyon bloğunda(gövdesinde) "**static**" ömürlü değişkenler tanımlanabilir. Global değişkenler de "**static**" ömürlü olmak zorundadır.

❗❗❗ C ve C++ dillerinde Bir fonksiyon için de başka bir fonksiyon tanımlanmasına izin verilmemektedir yani **nested function** kullanımı gibi bir kullanım yoktur.

❗❗❗ Bir değişken global alanda ya da "**static**" olarak tanımlandığında program çalışma süresi boyunca bu değişken hafızada yer kaplayacaktır. Bir "**static**" değişkenin memory(bellek)'de mevcut olması ona ulaşabileceğimiz anlamına gelmiyor.


### 6.Ders 6. Önemli Bilgi

❗❗❗ C dilinin cümlelerine "**Statement(Deyim)**" denilmektedir, "**Statement(Deyim)**"lar farklı türlere sahiptir. Bir "**Statement(Deyim)**" en temelde ""**Declaration Statement(Deyim)**"" ya da düz "**Statement(Deyim)**" olarak iki farklı başlığa ayrılır. 

🧭 Düz "**Statement(Deyim)**" aşağıda listelenen türlere ayrılmaktadır; 
1. **Expression Statemen**: 
2. **Null Statemen**: 
3. **Compound Statemen**: 
4. **Control Statemen**: Programın akış yönü üzerinde akış yönünü değiştirebilen, önceden belirlenmiş bir **sözdizimine(syntax)** sahip ve bu **sözdizim(syntax)** uyarınca en az bir anahtar sözcük içeren deyimlerdir. Aşağıda **Control Statemen** türleri listelenmiştir.
    - `if`
    - `while`, `do while`, `for`
    - `switch`, `goto`
    - `break`, `continue` 
    - `return`


### 6.Ders 7. Önemli Bilgi

❗❗❗ **Sözdizim(syntax)** hataları ile mantıksal hatalar birbirinden farklıdır. Derleyici **Sözdizim(syntax)** hatalarını **compile-time** anında yakalayacaktır fakat bir **logic error** derleyici tarafından yakalanması pek mümkün değildir, bir **logic error** **debuging** ile çözülebilir.


### 6.Ders 8. Önemli Bilgi

❗❗❗ Hiç çalışmayacak bir kod yazıldığında buna "**Unreachable Code**" denilmektedir.

👇 Aşağıdaki programda **unreachable code** incelenebilir.
```C
int max2(int x, int y)
{
  x--;
  y++;
  
  return y;

  return x; // Buradaki kod 'Unreachable Code' durumundadır çünkü program akışı buraya hiçbir zaman gelmeyecektir.
}
```


## 7.Ders

### 7.Ders 1. Önemli Bilgi

❗❗❗ C++ dilinde iki tür kodlama(kod yazma) türü vardır, bunlar;
1. Düz C++ kodları yazmak.
2. "**Function Template**" kod olarak adlandırılan derleyiciye kod yazdıran kodlama(kod yazma) türü, bu şekildeki programlama yaklaşımına "**Generic Programming**" denilmektedir.


### 7.Ders 2. Önemli Bilgi

❗❗❗ C dilinde üç farklı şekilde "**Generic Programming**" yapılabiliyor, bunlar;
1. "**Variadic Function**" yapısı ile yapılabilir.
2. "**Preprocessor**" aşamasında yapılabilir.
3. "**Void Pointer Type**" ile yapılabilir.


### 7.Ders 3. Önemli Bilgi

❗❗❗ C dilinde bir fonksiyon kaç adet parametre alıyorsa tam olarak o kadar argüman gönderilmesi gerekiyor, ne eksik ne de fazla argüman gönderilmemelidir. `int foo(int a, int b, int c);` şeklinde tanımlanan bir fonksiyonu çağırırken üç adet `int` türünden **argument** gönderilmesi gerekiyor, aksi durumda **sözdizim hatası(syntax error)** oluşacaktır. 


### 7.Ders 4. Önemli Bilgi

❗❗❗ C dilinde aşağıdaki kullanımlar mevcut değildir yani C dili onları desteklemez.
- "**Nested Function**" kullanımı yoktur.
- "**Function Overloading**" kullanımı yoktur.
- "**Default Argument**" kullanımı yoktur.


### 7.Ders 5. Önemli Bilgi

❗❗❗ Fonksiyon çağrı ifadelerinde önce fonksiyona gönderilen argümanların değerleri hesaplanır ardından hesaplanan değerler fonksiyonun parametre değişkenlerine kopyalanır. 


### 7.Ders 6. Önemli Bilgi

❗❗❗ C dilinde fonksiyon çağrıları hiç bir zaman **Global Scope** alanında yapılamaz.


### 7.Ders 7. Önemli Bilgi

❗❗❗ Aşağıdaki terimler programlamaya özgü(dilden bağımsız) terimlerdir, bu terimler çok önemlidir;
1. **Call by Value(Pass by Value)**: Bir fonksiyona bir değişkenin değerinin geçilmesidir.
2. **Call by reference(Pass by reference)**: Bir fonksiyona bir değişkenin adresinin geçilmesidir.


### 7.Ders 8. Önemli Bilgi

❗❗❗ C dilinde varsayılan olarak tüm fonksiyon çağrılarına geçilen argümanların değerleri "**Call by Value(Pass by Value)**" olarak fonksiyona gitmektedir, fakat C++ dilinde bu durum geçerli olmadığı durumlar vardır.

❗❗❗ C dilinde bir fonksiyon çağrısının **Call by reference(Pass by reference)** olması için pointer'ların kullanılması gerekiyor(bu konuya kursun ikinci yarısında giriş yapılacak).


### 7.Ders 9. Önemli Bilgi

❗❗❗ Tüm programlama dilleri adres kavramını kullanmaktadır ama her programlama dili kullanım amacına göre adres işlemlerini(pointer işlemleri) o dili kullanan programcılardan belirli seviyelerde gizleyebilir, mesela Java dilinde hiç pointer kavramı yoktur, C# dilinde pointer güvensiz işlem kapsamı(scope) açılarak kullanılabilir. Adres kavramının kullanılması o dilin kullanımını donanıma yakınlaştıracaktır.


## 8.Ders

### 8.Ders 1. Önemli Bilgi

❗❗❗ Aşağıdaki bilgiler önemlidir;
 - Bir nesnenin(object) kendisini fonksiyona göndermek ile nesnenin(object) değerini fonksiyona göndermek arasında fark vardır.
 - Br programlama dilinin **sözdizimi(syntax)** başka artalanda(background) işlemcinin yürüttüğü komutlar başkadır.
 - Doğrudan pointer kullanımı olmayan dillerde(Jaca, Python vb.) "**Call by reference(Pass by reference)**" değer aktarımı programlama dilini kullanan yazılımcılardan gizlenmiştir fakat ilgili kodun derlenmesi sonrasında üretilen **assembly** kodlarında bir şekilde "**Call by reference(Pass by reference)**" değer aktarımı yapıldığı görülecektir.
 - C dilinde tüm fonksiyon çağrılarına geçilen argümanların değerleri varsayılan olarak "**Call by Value(Pass by Value)**" fonksiyona gitmektedir, fakat C++ dilinde bu durum geçerli olmadığı durumlar vardır. C dilinde bir fonksiyona geçilen argümanların "**Call by reference(Pass by reference)**" olarak aktarılması için pointer değerlerin fonksiyona aktarılması gerekecektir.
 - C dilindeki **pointer**'lar konusu ve **Call by reference(Pass by reference)** kullanımı kursun ikinci yarısında(ilk yarı C dilinin diğer programlama dilleriyle çoğunlukla ortak kısımlarının işlendiği kursun ilk 70/80 saatlik kısmı) işlenecektir.


### 8.Ders 2. Önemli Bilgi

❗❗❗ C dilinde aşağıdaki varlıkların türleri vardır(bu bilgi önemlidir ve unutulmamalıdır);
- **Expressions(İfadeler)**
- **Variables(Değişkenler)**
- **Constants(Sabitler)**


### 8.Ders 3. Önemli Bilgi

❗❗❗ C dili standardı **Sabitleri(Constants)** iki kategoriye ayırmaktadır;
1. **Integer Constants** Types;
    1. `int` type
    2. `unsigned int` type

    3. `long` type
    4. `unsigned long` type

    5. `long long` type
    6. `unsigned long long` type

2. **Floating Constants** Types;
    1. `float` type. Sonunda **.f**. 4.5f, 45.F, 456.0F vb. kullanımların türü `double` olacaktır.
    2. `double` type. Sayının gösteriminde sadece **.** varsa. 4.5, 45., 456.0 vb. kullanımların türü `double` olacaktır.
    3. `long double` type. 4.5L, 45.L, 456.0L vb. kullanımların türü `double` olacaktır.


### 8.Ders 4. Önemli Bilgi

❗❗❗ Tüm karakter kodlamalarında rakam karakterleri sıralı olacak şekilde seçileceği kesindir fakat harf karakterleri sıralı olmayabilir.


### 8.Ders 5. Önemli Bilgi

❗❗❗ **C Standart Library** bünyesinde yer alan öğeler şunlardır;
- **Standard C Functions** : C standard kütüphanesinin çoğunluğunu fonksiyonlardan oluşmaktadır.
- **Marcos** : Ön işlemci programa(Preprocessing Program) tanıtılan adlardır. Makro olan öğelerin simleri bir kural olarak değil ama "**conventional**" olarak tamamı büyük harfle yazılır.
   - **Object like macro**
   - **Function like macro**
- **User-defined data types**
- **Type alias(Tür eş adları)(int32_t, int16_t vb.)**



### 8.Ders 6. Önemli Bilgi

❗❗❗ C dilini bilmek demek C dilinin **Standart Library**'sinin bilinmesi gerektiği anlamına geliyor.

🧭 **Standart Library**'deki her şey aynı seviyede önemli değildir;
1. İlk kategori bilinmelidir(90/100 civarındaki standard C fonksiyonu detaylı bilinmelidir diyebiliriz, bunlar kurs geneline yayılacak şekilde anlatılmaktadır) 
2. İkinci kategori bilinse iyi olur
3. Üçüncü kategori bilinmesi gerekmeyen ama ihtiyaç olduğunda dokümanları araştırıp kullanılabilecek durumda olunması gerekir.


### 8.Ders 7. Önemli Bilgi

❗❗❗ **Output** türleri aşağıdaki gibi iki türe ayrılmaktadır;
1. **Formatted Output**: İnsanlar tarafından okunabilir olan karakterlerin çıktı olarak oluşturulmasına verilen addır. Bu işlem maliyetlidir. Ayrıca hangi sisteme göre formatlama işleminin yapılacağı da formatlı çıkış işlemini yapmak için yapılması gereken işlemci seviyesindeki işlem adımlarının sayısını etkilemektedir(kısaca işlem maliyetini etkiler).
2. **Unformatted Output**: Bellekteki byte dizileri üzerinde herhangi bir işlem yapılmasına gerek olmadan bellekteki haliyle 0 ve 1 dizilerinin dışarıya gönderilmesi işlemidir.


## 9.Ders

### 9.Ders 1. Önemli Bilgi

❗❗❗ `printf` Fonksiyonu sadece "**Standart Output**"a çıktı vermek için kullanılmıyor, en önemli özelliği formatlı işlemleri yapmak için kullanılıyor olmasıdır.


### 9.Ders 2. Önemli Bilgi

❗❗❗ Mesela programın çalışması `scanf` fonksiyonunun kullanıldığı yere geldiğinde klavyeden "134AB" girdisi yapılınca bu karakterde **Standard Input Buffer**'da ASCII kodlamaya için "49, 51, 52, 65, 66, 10(enter karakteri)" depolanacaktı. Eğer `scanf("%d", &x);` şeklinde bir kod yazılmışsa "x" değişkenine "134" değeri atanacaktır ama bu işlemden sonra **Standard Input Buffer**'da "AB" değeri kalacaktır.


### 9.Ders 3. Önemli Bilgi


## 10.Ders

### 10.Ders 1. Önemli Bilgi

❗❗❗ Tanımsız davranışa neden olan durumlar rastgele sayı üretiminde kullanılmamaktadır ve kullanılamaz da, hatta "**ub**" durumları hhiç bir yerde kullanılmamalıdır yoksa beklenmedik bir anda programın çalışan hali olan process(es) çökebilir.


### 10.Ders 2. Önemli Bilgi


| Precedence Level | Operators                                          | Associativity      | Description                                                   | 
|:-----------------|:---------------------------------------------------|:------------------:|:--------------------------------------------------------------| 
| 1                | `()` `[]` `.` `->`                                 |   Left-to-right    | function call, array subscript, member access                 | 
| 2                | `+` `-` `++` `--` `(type)` `&` `*` `sizeof` `!` `~`|   Right-to-left    |                                                               | 
| 3                | `*` `/` `%`                                        |   Left-to-right    | Multiplicative operators (multiplication, division, remainder)| 
| 4                | `+` `-`                                            |   Left-to-right    | Additive operators (addition and subtraction)                 | 
| 5                | `>>` `<<`                                          |   Left-to-right    | Bitwise shift operators                                       | 
| 6                | `>` `>=` `<` `<=`                                  |   Left-to-right    | Relational operators                                          |    
| 7                | `==` `!=`                                          |   Left-to-right    | Equality operators                                            | 
| 8                | `&`                                                |   Left-to-right    | Bitwise AND                                                   | 
| 9                | `^`                                                |   Left-to-right    | Bitwise XOR (exclusive OR)                                    | 
| 10               | `\|`                                               |   Left-to-right    | Bitwise OR (inclusive OR)                                     | 
| 11               | `&&`                                               |   Left-to-right    | Logical AND                                                   | 
| 12               | `\|\|`                                             |   Left-to-right    | Logical OR                                                    | 
| 13               | `?:`                                               |   Right-to-left    | Conditional (ternary) operator                                |
| 14               | `=` `+=` `-=` `*=` `/=` `>>=` `<<=` `&=` `^=` `\|=`|   Right-to-left    | Assignment and compound assignment operators                  | 
| 15               | `,`                                                |   Left-to-right    | Comma operator (sequential evaluation)                        |


**Associativity(Öncelik Yönü)**: Operatörlerle yapılan işlemlerde hangi taraftan işleme başlanacağını belirtiyor. iki türe ayrılmaktadır;
- **Left Associativity**  
- **Right Associativity** 


Aşağıda bazı birden fazla operatör içeren ifadelerin işlem önceliklerinin ne olduğu incelenebilir;
- `x % y / a * b` ifadesinde(expression) `*`, `/`, `%` operatörleri kullanılmış ve tabloda 3. seviyededir, bu operatörler soldan sağa önceliğe sahipler, buna göre bu ifade şu `((x % y) / a) * b` şeklinde işlenecektir.
- `!~x++` ifadesinde(expression) `++`, `!`, `~` operatörleri kullanılmış ve tabloda 2. seviyededir, ve bu operatörler sağdan sola önceliğe sahipler, buna göre bu ifade şeklinde `!(~(x++))` işlenecektir.


🧭 Kıyaslama yapabilmek için internetten elde edilen ayrı bir C'deki operatör önceliği tablosu;

| Precedence Level | Operators                                                                              | Associativity  | Description                                                                                |
|:----------------:|:---------------------------------------------------------------------------------------|:--------------:|:------------------------------------------------------------------------------------------:|
| 1                | `()`, `[]`, `.`, `->`, postfix `++`, postfix `--`                                      | Left-to-right  | Primary expressions (function call, array subscript, member access, and postfix inc./dec.) |
| 2                | Prefix `++`, prefix `--`, unary `+`, unary `-`, `!`, `~`, `(type)`, `*`, `&`, `sizeof` | Right-to-left  | Unary operators, type cast, pointer dereference, address-of, and size-of                   |
| 3                | `*`, `/`, `%`                                                                          | Left-to-right  | Multiplicative operators (multiplication, division, remainder)                             |
| 4                | `+`, `-`                                                                               | Left-to-right  | Additive operators (addition and subtraction)                                              |
| 5                | `<<`, `>>`                                                                             | Left-to-right  | Bitwise shift operators                                                                    |
| 6                | `<`, `<=`, `>`, `>=`                                                                   | Left-to-right  | Relational operators                                                                       |
| 7                | `==`, `!=`                                                                             | Left-to-right  | Equality operators                                                                         |
| 8                | `&`                                                                                    | Left-to-right  | Bitwise AND                                                                                |
| 9                | `^`                                                                                    | Left-to-right  | Bitwise XOR (exclusive OR)                                                                 |
| 10               | `\|`                                                                                   | Left-to-right  | Bitwise OR (inclusive OR)                                                                  |
| 11               | `&&`                                                                                   | Left-to-right  | Logical AND                                                                                |
| 12               | `\|\|`                                                                                 | Left-to-right  | Logical OR                                                                                 |
| 13               | `?:`                                                                                   | Right-to-left  | Conditional (ternary) operator                                                             |
| 14               | `=`, `*=`, `/=`, `%=`, `+=`, `-=`, `<<=`, `>>=`, `&=`, `^=`, `\|=`                     | Right-to-left  | Assignment and compound assignment operators                                               |
| 15               | `,`                                                                                    | Left-to-right  | Comma operator (sequential evaluation)                                                     |


### 10.Ders 3. Önemli Bilgi

❗❗❗ increment/decrement operatörlerinin ürettiği değer ile **side effect** özelliklerini birbirine karıştırmamak gerekiyor, aşağıdaki ufak programlar bu durumu incelemek için yazılmıştır.

👇 Aşağıdaki program `++x`, `x++`, `x = x + 1`, `x += 1` ifadelerinin hepsinin aynı **side effect** oluşturacağını anlamak için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int x = 6;
    
    printf("x = %d\n", x);

    ++x;
    printf("x = %d\n", x);

    x++;
    printf("x = %d\n", x);
    
    x = x + 1;
    printf("x = %d\n", x);

    x += 1;
    printf("x = %d\n", x);
}
```


👇 Aşağıdaki programda temel seviyede increment/decrement operatörlerinin nasıl operant değerlerini değiştirdiğini anlamak için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 9;

    // foo(++x); // Burada 'foo' fonksiyonuna argüman olarak '6' değeri gönderilir.
    // bar(x++); // Burada 'bar' fonksiyonuna argüman olarak '5' değeri gönderilir.
    
    int z = ++x + ++y; // Burada 'z' değeri '16' olacaktır.
    
    printf("x = %d\n", x); // Konsola 'x = 6' yazar
    printf("y = %d\n", y); // Konsola 'y = 10' yazar
}
```


## 11.Ders

### 1. Önemli Bilgi

❗❗❗ **[Dersin en önemli bilgilerinden biri]**
C dilinde "**Comparison Operators(Karşılaştırma Operatörleri)**" ve lojik operatörler(`!` `&&` `||`) "**int**" türünden değer üretirler. 
Yani bu operatörler ile oluşturulan bir ifadenin(expression) türü "**int**" türüdür.

C dilinin standardına göre doğru/yanlış değer üreten operatörlerin "**int**" türünden değerleri aşağıdaki gibi yorumlanmaktadır;
- Önerme doğru ise "1" değeri kullanılır.
- Önerme yanlış ise "0" değeri kullanılır.

C dilinde üretilen "**int**" değer(1 ya da 0) bazı idiyomatik yapılarda kullanılıyor.

C++ dilinde karşılaştırma operatörlerinin ürettikleri değer "**bool**" türündendir bu konuda C dilinden ayrılmaktadır.


### 2. Önemli Bilgi

❗❗❗ Peki o zaman **kayan noktalı sayılarda** karşılaştırma işlemlerinin nasıl yapılacağı sorulacaktır, bu sayılarda karşılaştırma yerine bir **epsilon** değer belirlenmesi ve sayı ile eşitlik karşılaştırması yapılacak değerin farkının mutlak değer değerinin belirlenen **epsilon** değeriden büyüklük ve küçüklük durumuna bakılmalıdır.


### 3. Önemli Bilgi

❗❗❗ C dilinde sadece üç tane lojik operatör(`!`, `&&`, `||`) için değil aşağıdaki listedeki bütün yerlerde aslında lojik bir değer beklenir fakat dilin kurallarına göre bu yerlerde herhangi bir türden ifade kullanılabilir. 
Böyle durumlarda lojik yorumlama(ya da lojik dönüşüm) yapılır. 
- Sıfırdan farklı tüm değerler **doğru(true)** olarak yorumlanır. "**All non-zero values true**" cümlesini iyi bilinmesi önemlidir.
- Sadece "0" değeri "**yanlış(false)**" olarak yorumlanır. **Only 0 value false** cümlesini iyi bilinmesi önemlidir.

## 12.Ders

🔥🔥🔥🔥🔥 Atama operatörünün ürettiği değer nesneye atanan değerdir. 
❗❗❗ Bu cümle için kurs boyunca akılda 5-6 cümle kalacaksa bu 5-6 cümleden birisinin bu cümle olması gerektiği belirtildi, yani bu bilgi çok önemli.

## 14.Ders

❗❗❗ Bir C ya da C++ dilindeki ifadelerde tür dönüşümü olup olmayacağı **compile-time** da belirlenir, **ternary operant expression** kullanımlarında ikinci ve üçüncü operantların değerlerinden en kapsayıcı olanı ifadenin türünü belirler, bununla ilgili detaylı fikir sahibi olabilmek için aşağıdaki program incelenebilir.

## 17.Ders

### 17.Ders 1. Önemli Bilgi

❗❗❗ Derleyici kodun anlamını değiştirmeden kodu farklı şekilde yazılmış gibi yorumlayabilir, bu işlem kodun optimize edilmesi için yapılmaktadır, bu işlem yapılırken **observable behavior(gözlenebilir davranış)** değişmemektedir.


### 17.Ders 2. Önemli Bilgi

❗❗❗ Bir **identifier** derleyicinin ya da ön işlemci programın görebileceği bir ad olabilir. Ön işlemci programın işlediği(görebildiği) adlara **makro** deniliyor.


## 20.Ders

### 20.Ders 1. Önemli Bilgi

❗❗❗ `switch` deyiminde "expr" **ifadesi(expression)** bir tam sayı türünden olmak zorundadır.


### 20.Ders 2. Önemli Bilgi

❗❗❗ label olan adların(identifier) kapsamı **block scope** değildir **function scope** özelliğindedir. </br>
❗❗❗ **Function scope** özelliğine sahip adlar(identifier) sadece **label** adlardır(identifier). </br>
❗❗❗ **Function scope** ve **block scope** aynı adda değişken adı kullanılmasına izin verilmektedir.


## 21.Ders

### 21.Ders 1. Önemli Bilgi

❗❗❗ Ayrı modül olarak yazılan bir **source file** kendi **head file** dosyasını içermek zorundadır, 

❗❗❗ Bir **head file** kendi dosyası **.h** uzantılı dosya bildirimlerine sahip olabilir yani bir başlık dosyası başka başlık dosyalarını kendi bünyesinde eklemiş olabilir.

### 21.Ders 2. Önemli Bilgi

❗❗❗ C ve C++ dillerinde ifadelerin türleri derleme anında bellidir, çalışma anında belirlenmez.

### 21.Ders 3. Önemli Bilgi

❗❗❗ Tür dönüşümlerindeki işlemler kalıcı değildir sadece o anda yapılan işlemleri dilin kurallarına göre yapabilmek için **primitive data type** değerlerinin o anda değiştirilmesidir ama bu değişiklik değişkenin türünü o işlemden sonraki işlemler için etkilememektedir.

### 21.Ders 4. Önemli Bilgi

❗❗❗ C standardı ifadelerin(expression) **value category** bilgisinden açık şekilde bahsedilmemektedir sadece C++ standardında resmi olarak mevcuttur ama bazı işlemleri anlayabilmek için **value category** bilinmesi gerekiyor.


## 22.Ders

### 22.Ders 1. Önemli Bilgi

❗ C dilinin standardında sadece **fixed array(static array)** veri yapısı desteği vardır. </br>
❗ Programlarda çok uzak ara en çok kullanlan **veri yapısı(Data structure)** **Dynamic array**'dir ama C dilinin standardında yoktur. </br>
❗ **fixed array(static array)** veri yapısı dışındaki başka bir veri yapısını kullanabilmek için ya kendimizin yazması gerekir ya da üçüncü tarafa kütüphanelerin kullanılması gerekiyor.


### 22.Ders 2. Önemli Bilgi

❗❗❗ Adres operatörü ile oluşturulan ifadeler **R-value expression** özelliğindedir.

❗ Burada C ve C++ dilerinde dizilerle ilgili en önemli kuralından ilk defa bahsediliyor. </br>
❗ C ve C++ dilerinde dizi değişkenleri atama operatörünün sol operandı olamaz, bunun nedeni **array decay(array to pointer conversion)** kuralıdır. </br>
❗ Birkaç istisna dışında bir dizinin adı bir ifade içinde kullanırsak derleyici o dizi adının dizinin ilk elemanının adresine dönüştürür. </br>


### 22.Ders 3. Önemli Bilgi

❗❗❗ `sizeof` operatörünün ürettiği değer işaretsiz bir tam sayı türündendir(**size_t** adındaki type-alias(tür-eş adı)), bu bir makrodur ama bu makronun hangi işaretsiz tam sayıya karşılık geldiği derleyiciye bırakılmıştır.

❗❗❗ `sizeof(type)` bu ifade de kullanılan parantez "type" değeri verildiği için zorunludur yani öncelik parantesi değildir.

❗❗❗ `sizeof` operatörünün ikinci kullanımında parantez kullanılması zorunluluğu yoktur ve `sizeof expr` şeklinde kullanılmaktadır, `sizeof ival;` ya da `sizeof 20;` şeklinde kullanılabiliyor.

### 22.Ders 4. Önemli Bilgi

🔥🔥🔥 `sizeof` operatörüyle ilgili birkaç tane önemli kural listelenmiştir, bunlar unutulmamalı ve iyi bilinmelidir;
- `sizeof` operatörü bir **compile time** operatörüdür.
- `sizeof` operatörü bir anahtar kelimedir.
- `sizeof` operatörünün ürettiği değerin türü bir tür-eş adı olan **size_t** türüdür, **size_t** standart kütüphanenin kullandığı bir tür-eş adıdır ve hangi işaretsiz tam sayıya karşılık geldiği derleyiciye bırakılmıştır.
- `sizeof` operatörü operandı olan ifade için derleyici işlem kodu(makine kodu) üretmez, bu dilin kuralıdır.


### 22.Ders 5. Önemli Bilgi

❗❗❗ **Array Decay(Array to pointer conversion)** kuralının uygulanmadığı bazı istisnai durumlar vardır, bunlardan biri dizi değişkenlerinin `sizeof` operatörü ile birlikte kullanıldığı durumdur. 

❗❗❗ `sizeof` operatörünün operandı bir dizi adı olduğunda **array decay** uygulanmaz. Bu durumda sizeof operatörünün ürettiği değer dizi türünün değeridir.


## 23.Ders

### 23.Ders 1. Önemli Bilgi

❗❗❗ Rastgele sayı üretimi ile üretilen rastgele sayıların belirli bir modele göre dağıtılması gerekecektir bu işlem rast gele sayı üretiminden tamamen ayrı bir süreçtir, elde edilen rastgele sayı işlenerek kullanılmak istenilen tam sayı ya da ondalıklı sayı aralığına alınması işlemi yapılması gerekecektir işte bu işleme **distribution** denilmektedir.


## 24.Ders

### 24.Ders 1. Önemli Bilgi

❗❗❗ If parantezi içine öyle bir ifade yazınız ki karşılaştırma(sıralama) şöyle yapılsın;
- Tekler başta çiftler sonda, tekler kendi içinde küçükten büyüğe sıralı ve çiftler kendi içinde küçükten büyüğe sıralı olsun.
- 👇 Aşağıdaki program yukarıdaki açıklamaya göre sıralama işlemini yapmaktadır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include "nutility.h"
#include <math.h>

#define SIZE 20

int main(void)
{
    int ar[SIZE];

    randomize();
    set_array_random(ar, SIZE);
    print_array(ar, SIZE);

    int ar_sum = 0;

    for(int i = 0; i < SIZE - 1; ++i){
        for(int j = 0; j < SIZE - 1 - i; ++j){
            if(
                (ar[j] % 2 == 0 && ar[j + 1] % 2) || // Bu şart ile biri tek diğeri çift olan dizi elemanlarının takasedilmesi sağlanır ve bu şekilde tekler bir tarafta çiftler diğer tarafta toplanmış olur.
                (ar[j] % 2 == ar[j + 1] % 2 && ar[j] > ar[j + 1]) // Bu şart ile sadece tek ya da çift olan dizi elemanlarının eğer düşük indisli dizi elemananı büyük indisli dizi elemanından büyükse takas edilmesi sağlanır.
            ){
                int temp = ar[j];
                ar[j] = ar[j + 1];
                ar[j + 1] = temp;
            }
        }
    }
    
    print_array(ar, SIZE);
}
```

❗❗❗ Yukarıda yazılmış olan sıralama algoritmasının sıralama şartını değiştirerek istenildiği şekilde sıralam yapılması sağlanabiliyor, ileride(pointer konusunu işledikten sonra) buradaki sıralama şartını fonksiyona dışarılan başka bir fonksiyonun adresinin gönderilmesiyle nasıl parametrik yapılabileceğini göreceğiz.

### 24.Ders 2. Önemli Bilgi

❗❗❗ $O(n^2)$ ve $O(n logn)$ karmaşıklıktaki algoritmaların çalışma zamanları n değerleri arttıkça belirgin hale gelmektedir, daha yüksek karmaşıklık seviyesindeki algoritmalar daha uzun sürede çalışacaktır.


### 24.Ders 3. Önemli Bilgi

❗❗❗ **NTBS** olarak yazı tutan bir dizideki yazıyı değiştirmek için ya da bir yazıyı bir diziye yerleştirmek için atama operatörünü C dilinin standardında olan **array decey** kuralından dolayı kullanamıyoruz. Ama değer atama işlemi ile ilk değer verme işlemi birbirinden farklı olduğunu unutmamak gerekiyor.


## 25.Ders

### 25.Ders 1. Önemli Bilgi

❗❗❗ Bir yazı **boş yazı(empty string, null string)** ise geçerli bir yazıdır. Uzunluğu 0 olan bir yazıdır, yazılar üstünde işlem yapan kodların boş yazılar üstünde de doğru çalışması beklenir.


## 26.Ders

### 26.Ders 1. Önemli Bilgi

❗❗❗ **Pointer** demen adres demektir. C ya da C++ diliyle ilgili bir konuşmada **pointer** sözcüğünün geçtiği yerler **adres** olarak düşünülürse bir anlam farklılığı oluşmaz.

### 26.Ders 2. Önemli Bilgi

❗❗❗ Her ifadenin bir türü vardır, her ifadenin bir değeri vardır(istisna olarak **void** türünden ifadelerin değeri yoktur). Bir kod parçasına **ifade(expression)** diyebilmek için o kod parçasının türü olmalı ve bir değeri(**void** de olabilir) olmalı.


### 26.Ders 3. Önemli Bilgi

❗❗❗ **Pointer** ile **pointer değişken** bibirinden farklı kavramlardır. 
1. **Pointer** denildiğinde herhangi bir adres **ifadesinden(expression)** bahsedilmektedir bu ifade **R-value** ya da **L-value** olabilir.  
2. **pointer değişken** denildiğinde sadece **L-value** olan değişkenlerden bahsedilmektedir.


### 26.Ders 4. Önemli Bilgi

❗❗❗ Bildirimlerde kullanılan **asterisk**, **square brackets** öğelerine(varlıklarına) **declerator** deniliyor, bu varlıklar değişkenlerin türünü anlatmaya yönelikse onlara **declerator** deniliyor. 

❗❗❗**Comma seperator** ile değişken bildirimlerinde aşağıdaki durumlara dikkat etmek gerekiyor;
- Nasıl `int ary[10], y, z;` bildiriminde sadece "ary" değişkeni diziyse diğer iki değişken `int` türündedir. 
- `int* p1, p2, p3;` birldirimi ile `int *p1, p2, p3;` bildirimi aynıdır ve burada sadece "p1" int* tüürndedir diğer iki değişken int türündedir.
- `int x, *p, y, *ary1[10], ary2[23];` buradaki bildirimde 


### 26.Ders 5. Önemli Bilgi

❗❗❗ Pointer değişkenlerin storage ihtiyacı ne kadardır diye düşünüldüğünde bir **pointer** hangi **Object** türünün adresini tutuyor olursa olsun kaplayacakları bellek adresinin boyutu programın derlendiği donanım mimarisine göre değişmektedir, mesela 32 bit mimaride 4 byte, 64 bit mimride 8 byte olacaktır.

❗❗❗ **Object pointer** sizeof değeri(storage değeri) sabit bir değerdir, tam sayı, floating sayı, ileride görülecek olan **user defined** türlerin bellekte kapladığı alan sabit bir değer olacaktır.


### 26.Ders 6. Önemli Bilgi

❗❗❗ Bir ifadenin value kategorisinin ne olduğu bilinmiyorsa o ilfadenin önüne `&` operatörü eklendiğinde **sözdizim hatası(syntax error)** oluşuyorsa o ifadenin **R-value** olduğu anlaşılır, eğer hata vermiyorsa ifadenin kategorisi **L-value** olduğu anlaşılır.


### 26.Ders 7. Önemli Bilgi

❗❗❗ C ve C++ dilerinde bir nesnenin adresinin değiştirilmesi şeklinde bir işlem mevcut değildir, oluşturulan nesnelerin program çalıştırıldığında yer alacakları adreslerin belirlenmesi işlemi C ve C++ dilleriyle yapılmamaktadır. 


### 26.Ders 8. Önemli Bilgi

❗❗❗ Pointer değişkene neler atanabilir; 
1. Bir değişkenin adresi atanabilir(`int* ptr = &value;` gibi bir işlem yapılabilir).
2. Bir pointer değişken atanabilir(`ptr = ptrx;` gibi bir işlem yapılabilir).
3. Bir dizi değişkeni atanabilir(`ptr = b;` gibi bir işlem yapılabilir).
4. Bir dizi değişkeninin ilk elemanının adresi atanabilir(`ptr = &b[0];` gibi bir işlem yapılabilir).


### 26.Ders 9. Önemli Bilgi

❗❗❗Yukarıdaki programdan da anlaşılacağı üzere C++ dili **örtülü(implicity)** dönüşümlerde C diline göre daha katıdır. C ve C++ dillerini karşılaştıran makalelerde aşağıdaki tanımlamaları sık görebiliriz;
- C'de weak type control(C dilindeki farklı türden değerler örtülü olarak birbirine atanabiliyor, bu tür atamalar mantıken doğru değildir ama C dilinin standardı bu atamaları legal kabuleder).
- C++ strict type control(C++ dilinde farklı türden değerler örtülü olarak birbirine çoğu zaman atanamaz ve **sözdizim hatası(syntax error)** oluşur).


### 26.Ders 10. Önemli Bilgi

❗❗❗ Bildirimlerde bildirilen türü nitelemekte kullanılan karakterler(asterisk, square brackets etc.) operatör değildir, bu karakterler teknik açıdan **declerator** olarak nitelendirilmektedi, **declerator** terimi yerine  **sözdizim bileşeni(syntax component)** de denilebilir.


### 26.Ders 11. Önemli Bilgi

❗❗❗ **Dereferencing Operand(içerik operatörü)** bir **Unary Prefix** operatördür ve operandının değeri adres olmalıdır.


👇 Aşağıdaki program **dereferencing operand(içerik operatörü)** operandı adres olmadığında alınacak hatayı anlamak için incelenebilir.
```C
#include <stdio.h>

int main(void)
{
    int x = 10;

    *x; // Burada sözdizim hatası(syntax error) oluşacaktır çünkü '*' operatörünün operandı bir adres değil.
}
```


👇 Aşağıdaki program **dereferencing operand(içerik operatörü)** hangi durumlarda geçerli(legal) olduğu incelenebilir.
```C
#include <stdio.h>

int main(void)
{
    int x = 10;
    int a[5] = { 0 };
    int* ptr = &x;

    // Aşağıdaki üç ifade de legal ve kullanılmaları mantıken doğrudur.
    *&x; // Burada 'x' bir object(nesne), '&x' ifadesi 'x' nesnesinin adres değeridir bu nedenle '*&x' ifadesi geçerlidir(legal).
    *ptr; // Burada 'ptr' bir nesnedir(object) ve özel olarak bir pointer nesnesidir, bu nedenle '*ptr' ifadesi geçerlidir(legal).
    *a; // Burada 'a' bir dizi adıdır ve 'array decay' uygulandığında dizinin ilk elemanının adresine dönüştürülecektir, bu nedenle '*a' ifadesi geçerlidir(legal).
}
```


### 26.Ders 12. Önemli Bilgi

❗❗❗ **Dereferencing operand(içerik operatörü)** operandı o adresteki **nesneye(object)** erişim sağlar. **_*address_** şeklindeki bir ifade o adresteki **nesnenin(object)** kendisidir. 


👇 Aşağıdaki program **_*address_** şeklindeki bir ifadenin ne anlama geldiğini anlamak için incelenebilir.
```C
#include <stdio.h>

int main(void)
{
    int x = 10;
    int a[5] = { 0 };
    int* ptr = &x;

    printf("x = %d\n", x);

    *&x = 999; // Burada 'x' değişkeninin değeri '999' yapılıyor.

    printf("x = %d\n", x);
}
```


👇 Aşağıdaki program **_*address_** şeklindeki bir ifadenin ne anlama geldiğini anlamak için incelenebilir, burada **Obfuscation** amaçıyla kullanılabilecek karışık bir ifade mevcuttur.
```C
#include <stdio.h>

int main(void)
{
    int x = 10;
    int a[5] = { 0 };
    int* ptr = &x;

    printf("x = %d\n", x);

    ++*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&*&x; // Legal bir kullanım ve bir mantık hatası yoktur ama kullanımı kafa karıştırıcı olacaktır yani 'Obfuscation' amaçlı kullanılabilir.

    printf("x = %d\n", x);
}
```


### 26.Ders 13. Önemli Bilgi

❗❗❗ **Pointee**: Pointer değişkeninin gösterdiği nesneye verilen addır. Meselam `int* ptr = &x;` şeklinde bir pointer değişken bildirimi olduğunda `*ptr` ifadesi **pointee** olarak adlandırılacaktır, internette inceleme yaparken bu terim karşımıza çıkabilir. 

👇 Aşağıdaki program **pointer** ve **pointee** mavramlarını anlamak için incelenebilir.
```C
#include <stdio.h>

int main(void)
{
    int x = 10;
    int y = 10;
    int z = 10;

    printf("x = %d, y = %d, z = %d", x, y, z);

    int* ptr = &x;
        *ptr = 9999; // Burada 'x' değişkeninin değeri '9999' yapılıyor. Burada 'pointee' nesne 'x' nesnesidir.
    ptr = &y;
        *ptr = 9999; // Burada 'y' değişkeninin değeri '9999' yapılıyor. Burada 'pointee' nesne 'y' nesnesidir.
    ptr = &z;
        *ptr = 9999; // Burada 'z' değişkeninin değeri '9999' yapılıyor. Burada 'pointee' nesne 'z' nesnesidir.

    printf("x = %d, y = %d, z = %d", x, y, z);
}
```


### 26.Ders 14. Önemli Bilgi

❗❗❗ Bir değişkene erişmek için tek yöntem o değişkenin adını kullanmak değildir, pointer değişkenler ile de bir değişkene erişilebilir. 


## 27.Ders

### 27.Ders 1. Önemli Bilgi

❗❗❗ Bildirimlerdeki `*`, `&` gibi karakterler **operatör(operator)** değildir bunlar **dekleratördür(declerator)**. C ve C++ dilleriyle yeni tanışan programcılar **operatör(operator)** ve **decleratör(declerator)** kavramlarını ve kullanıldıkları yerleri karıştırmaktadır.
- 👇 Aşağıdaki program neye **operatör(operator)** neye **dekleratördür(declerator)** denildiğini anlamak için incelenebilir. Değişken bildirimlerinde kullanılan değişkenin türünü anlatmaya yönelik olarak kullanılan `*`, `[]` gibi token'lara **dekleratördür(declerator)** denilmektedir.
```C
#include <stdio.h>

int main(void)
{
    int x = 10;
    int a[5] = { 0 }; // Buradaki 'int a[5]' bünyesindeki '[]' bir operatör değildir dekleratördür, operatör bir ifadede olur.
    int* p = &x; // Buradaki 'int* p' bünyesindeki '*' bir operatör değildir dekleratördür fakat '&x' buradaki '&' bir operatördür, operatör bir ifadede olur.

    int (*fp)(int); // Buradaki bildirim ileride öğreneceğimiz 'function pointer' ile ilgilidir. Burada kullanılan '()', '*' gibi token'lar dekleratördür.

    int* ptr = &x;
    *ptr = 45; // Buradaki ifadedeki(expression) '*ptr' alt ifadesindeki '*' dereferensing operatörüdür.
    ptr[0] = 2; // Buradaki ifadedeki(expression) 'ptr[0]' alt ifadesindeki '[]' square bracket operatörüdür.
}
```


### 27.Ders 2. Önemli Bilgi

❗❗❗ C dilinde **call by referance(pass by referance)** **pointer semantic** ile yapılmaktadır yani fonksiyona **nesnenin(object)** adresi gönderiliyor.

👇 Aşağıdaki program C dilinde bir fonksiyona nasıl **call by referance(pass by referance)** olarak değer gönderilebileceğini anlamk için incelenebilir.
```C
#include <stdio.h>

void foo(int* x)
{
    printf("x = %p\n", x);

    *x = 6656;
}

int main(void)
{
    int ival = 345;

    printf("&ival = %p\n", &ival);

    printf("ival = %d\n", ival);

    foo(&ival);

    printf("ival = %d\n", ival);
}
```

👇 Aşağıdaki programda **call by referance(pass by referance)** yöntemi kullanılan bir fonksiyona argüman geçilmektedir ve bu şekilde iki tane `int` türünden değişkenin değerleri pointer türünden olan fonksiyon parametreleri aracılığıyla değiştirilmektedir.
```C
#include <stdio.h>

void swap(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int x = 10;
    int y = 20;

    printf("x = %d, y = %d\n", x, y);

    swap(&x, &y);

    printf("x = %d, y = %d\n", x, y);
}
```

### 27.Ders 3. Önemli Bilgi

❗❗❗ **call by referance(pass by referance)** yöntemiyle bir fonksiyona argüman göndermek en fazla faydayı gönderilen değişkenin bellekte kapladığı alan büyük olduğunda sağlar ve gereksiz yere tüm o değişkenin bellekteki verisinin başka bir bellek alanına kopyalanmasına gerek kalmamasını sağlar. Pointer değişkenler kullanıldığında bu değişkenler kullanılan donanım mimarisine göre hep aynı boyutta(**pointer size of**) değer kaplayacağı için kopyalama işlemi daha verimli ve kolay yapılacaktır.


### 27.Ders 4. Önemli Bilgi

❗❗❗ Bazı fonksiyonlar birden fazla değeri kendisini çağıran koda iletmek ister, bu durumda bunu yapmanın tek yolu fonksiyon parametrelerinin **call by referance(pass by referance)** olarak bildirilmesidir.


👇 Aşağıdaki programda bir fonksiyonun **output parameter** olarak birden fazla **parameter** aldığı durumda nasıl çağırıldığı yerdeki değişkenlerin değerlerini değiştirdiği incelenebilir, bu şekilde "_Bir fonksiyonun tek bir geri dönüş değeri olabilir._" kuralını esnetmiş oluruz.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Aşağıdaki fonksiyonda 'p_area' ve 'p_circum' parametreleri 'out parameter' olarak nikelenmektedir ve bu parametreler 'call by referans' olarak değer almaktadır.
void get_circle_values(double radius, double* p_area, double* p_circum)
{
    *p_area = 3.1415926 * radius * radius;
    *p_circum = 2. * 3.1415926 * radius;
}

int main(void)
{
    double r;
    double area;
    double circumference;

    printf("alanini ve cevresini hesaplamak istediginiz dairenin yaricapini giriniz: \n");
    scanf("%lf", &r);

    get_circle_values(r, &area, &circumference);

    printf("alan  = %f\n", area);
    printf("cevre = %f\n", circumference);
}
```


### 27.Ders 5. Önemli Bilgi

❗❗❗ Eğer fonksiyonunuzun bir pointer parametre değişkeni bir "**input parameter**" ise yani amaç bu pointer parametreye adresi gelen nesneyi değiştirmek değil ise, amaç sadece salt o nesnenin değerini kullanmak ise asla `T * parameter` kullanılmamalıdır, bunun yerine `const T * parameter` kullanılmalıdır.


### 27.Ders 6. Önemli Bilgi

❗❗❗ Bir fonksiyon parametre değişkeni neden pointer(adres) olacak şekilde kullanılır;
1. Çağıran koddan gönderilen argümanın bellek boyutu büyükse kopyalama maliyetinden kaçınmak için.
2. Fonksiyondan geriye döndürülecek olan değişkenin bellek boyutu büyükse kopyalama maliyetinden kaçınmak için.
3. Bir fonksiyondan geriye birden fazla değer döndürebilmek için.
4. Fonksiyonların aldığı değerlerin **input parameter** ya da **output parameter** olarak bildirilebilmesi için(**const** anahtar sözcüğünden de faydalanılıyor). 


### 27.Ders 7. Önemli Bilgi

❗❗❗ C ve C++ dilerinde fonksiyonların parametre değişkenleri doğrudan dizi olamaz çünkü dizi adlarına **array decay** uygulanacaktır. Dizilerin değerleri bir fonksiyona argüman olarak gönderilmek istendiğinde bunu **call by value** olarak yapılabilmesi için bir **sözdizim(syntax)** yöntemi yoktur yani bir diziyi bir fonksiyona göndermenin tek yolu **call by referance** yöntemidir.


### 27.Ders 8. Önemli Bilgi

❗❗❗ **Pointer aritmetiğini** iyi değil çok çok iyi öğrenilmelidir ve özümsenmelidir. Bir yazılımcının C dilini iyi bildiğini anlamanın en iyi yolu **pointer aritmetiğini** iyi bildiğini sınamaktır.


❗❗❗ C ve C++ dilerinde aşağıdaki ifadeler **legaldir(yani dilin kurallarına uygundur)** ve bu ifadelerin türü adres türüdür; 
- Bir adres ile bir tam sayı toplanabilir. 
- Bir tam sayı ile bir adres toplanabilir.
- Bir adresten bir tam sayı çıkarılabilir.


❗❗❗ C ve C++ dilerinde aşağıdaki ifadeler **legal değildir(illegal)**;
- Bir tam sayıdan bir adres çıkarılması **legal değildir(illegal)**.
- Bir adres ile adres toplanması **legal değildir(illegal)**.


🧭 Aşağıdaki **ifadelerin(expression)** türlerinin ne olduğu iyi bilinmelidir;
- `int*` + `int`  --> `int*`
- `int`  + `int*` --> `int*`
- `int*` - `int`  --> `int*`
- `int`  - `int*` --> Bu ifade **illegal** olacaktır, böyle bir kullanıp yanlıştır.


### 27.Ders 9. Önemli Bilgi

❗❗❗ Bir dizinin bir elemanının adresi ile 1 toplanırsa dizinin bir sonraki elemanının adresini elde ederiz bu **pointer aritmetiğinin** bir sonucudur. Bu durum(kural) dizinin elemanlarının türünden bağımsız olarak doğrudur.


### 27.Ders 10. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda **sizeof** operatörünün operandı olan ifade için işlem kodu üretilmediği durumları görmek için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE  10

int main(void)
{
    int a[100] = { 0 };

    sizeof(a + 34234); // Burada 'ub' yoktur çünkü 'sizeof' operatörü işlem kodu üretmediğinden 'array decay' kuralı uygulanmayacaktır. 
    sizeof(a[34234]); // Burada 'ub' yoktur çünkü 'sizeof' operatörü işlem kodu üretmediğinden 'array decay' kuralı uygulanmayacaktır.

    int x = 10, y = 0;

    printf("sizeof(x / y) : ", sizeof(x / y)); // Burada 'ub' yoktur çünkü 'sizeof' operatörü işlem kodu üretmediğinden '10 / 0' işlemi zaten yapılmayacaktır.
}
```


❗❗❗ Bir dizinin bittiği yerdeki adresi kullanmak(o adresteki nesneye erişmek değil) **ub** değildir. 
- 👇 Aşağıdaki programda yukarıda belirtilen durum incelenebilir, kursun ilerleyen kısımlarında bu adres değerinin nasıl kullanılabileceğine değinilecektir. 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#define SIZE  10

int main(void)
{
    int a[5] = { 0 };

    int* ptr = a[5]; // Bu şekilde dizinin bittiği yerdeki diziye ait olmayan adres değeri bir pointer'a alınabilir, burada 'ub' yoktur.

    &a[5]; // Bu ifade(expression) 'ub' içermemektedir.
}
```


## 28.Ders

### 28.Ders 1. Önemli Bilgi

❗❗❗ C dilinde bir adresten başka bir badres çıkartılabilir, böyle bir ifadenin türü işaretli tam sayı türüdür, ancak böyle bir ifadenin geçerli olmasının(legal) yanısıra doğru olması için çıkartılan operatörün operantlarının aynı dizinin elemanlarının adresleri olması gerekir. 


### 28.Ders 2. Önemli Bilgi

❔`ptr` adlı bir pointer değişken ismi `a` olan bir dizinin bir elemanını göstermektedir, `ptr`nin gösterdiği dizi elemanının indeksi nedir? </br>
❗❗❗ Cevap `ptr - a` olacaktır buradan şu sonuç çıkacaktır;
- Bir dizinin bir elemanının adresini biliyorsak indeksini de biliyoruz demektir.
- Bir dizinin bir elemanının indeksini biliyorsak adresini de biliyoruz demektir.

❔İsmi `a` olan bir dizinin bir elemanının indeksi `idx` ise bu elemanın adresi nedir? </br>
❗❗❗ Cevap `a + idx` olacaktır.


### 28.Ders 3. Önemli Bilgi

❗❗❗ Dizinin bittiği yerin adresi dizinin son elemanının adresini toplayarak elde edilen adrestir, dizinin ilk elemanının adresine dizinin boyutunu toplayarak elde edilen adrestir. Bu adres dizinin bir elemanı olmadığı için bu adresin derefenece edilmesi tanımsız davranıştır, ancak bu adres bazı işlemlerde kullanılabilir.


### 28.Ders 4. Önemli Bilgi

🧠 Eğer bir fonksiyon biri okuma amaçlı diğeri yazma amaçlı iki adres alacaksa C'de genel kabule göre konvensiyon önce hedef adresin sonra kaynak adresin parametre olarak yazılmasıdır. Bu konvensiyon ilk C standart kütüphanesinde kullanılmış ve C dilinde kütüphene geliştirenler de bu konvensiyona uymuşlardır.


### 28.Ders 5. Önemli Bilgi

👇 Aşağıdaki programda dizi ve pointer notasyonuyla yapılan parametre bildirimlerinin aynı anlama geldiği incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Aşağıdaki iki fonksiyon bildirimi birbirinin aynısıdır, 'int* p' ve 'int p[]' parametreleri aynı anlama geliyor. 'int p[]' ifadesi dizinin ilk elemanına karşılık gelmektedir.
void func(int* p, int size);
void func(int p[], int size);
void func(int p[13], int size); // Buradaki 'p[13]' bildirimini derleyici dikkate almaz ve 'p' olarak yorumlar, burada da 'array decay' uygulanacaktır.
```

🧠 `void get_array_min_max(const int* p_ary, int size, int* pmin, int* pmax);` ve `void get_array_min_max(const int p_ary[], int size, int* pmin, int* pmax);` fonksiyonlarının bildirimlerimleri aynı şekilde yorumlanmaktadır, buradaki farklı kullanım konvensiyonel olan bir farklılıktır.


### 28.Ders 6. Önemli Bilgi

🧭 Pointer değişkenlerin iki durum bilgisi(state) vardır, bunlar;
1. **Invalid State**: Geçersiz bir adresi gösteren durum için kullanılan terimdir. O adres hiçbir şekilde kullanılmamalıdır.
2. **Valid State**: Geçerli bir adresi gösteren durum için kullanılan terimdir. O adres kullanılabilir.

🧭 **Invalid State** durumundaki göstericiler aşağıdaki şartlarda oluşmaktadır; 
- **Otomatik storage** pointer değişenler ilk değer verilmeden kullanıldıklarında **tanımsız davranıştır(ub)**.
- Bir pointer değişkenin bir dizinin son elemanından sonraki adresleri değer olarak tutması **tanımsız davranıştır(ub)**.
- Bir pointer değişkenin gösterdiği adresteki nesnenin ömrü bittikten sonra o pointer'ı değer ataması dışında kullanmak **tanımsız davranıştır(ub)**, bu tür göstericilere ise **Dangling Pointer** denilmektedir.


### 28.Ders 7. Önemli Bilgi

🧭 Aşağıdaki durumlarda bir pointer'ın **valid state** durumdadır;
1. Hayatı devam etmekte olan bir nesnenin adresi.
2. Dizinin bittiği yerin adresi(**not to dereference**).
3. `Null` pointer değeri(**not to dereference**).


### 28.Ders 8. Önemli Bilgi

🧠 C ve C++ dillerinde bir nesne varsayılan olarak **mutable** özelliktedir ve bir nesneyi **inmutable** yapmak için **const** anahtar kelimesiyle işaretlemek gerekiyor. Rust dilinde nesneler varsayılan olarak **inmutable** özelliktedir. Her programlama dilinde olmasa da bir çok programlama dilinde bir nesnenin **mutable** ya da **inmutable** olması ayarlanabiliyor.


### 28.Ders 9. Önemli Bilgi

❗❗❗ Pointer değişkenlerle birlikte **const** anahtak sözcüğünün kullanılması anlaşılması biraz zor olan bir konudur.

❗❗❗ Pointer değişkenler `const` işaretleneceğinde tanımlama **sözdizimminde(syntax)** kullanılan `*` karakterinin `const` anahtarından önce ya da sonra yazılması kodun anlamını değiştirecektir.


### 28.Ders 10. Önemli Bilgi

❗❗❗ Aşağıda pointer değişkenler ile **const** anahtar sözcüğünün kaç farklı şekilde kullanılabildiği bilgisi listelenmiştir.
1. `type * const p` değişken bildirimiyle ilgili bilgiler aşağıdaki gibidir;
    - Şu şekilde adlandırılır;
        - **const pointer to type**(C standardının kullandığı terim)
        - **top level const**(C++ standardının kullandığı terim)
        - **right const**(standardın kullandığı terim değildir)
        - **east const**(standardın kullandığı terim değildir)
    - Şu anlama gelmektedir: `p` değişkeninin değeri değişmeyecek, `p` göstericisinin gösterdiği nesne `*p` ifadesine değer atamsıyla değiştirilebilir. 
2. `const type * p` değişken bildirimiyle ilgili bilgiler aşağıdaki gibidir;
    - Şu şekilde adlandırılır;
        - **pointer to const type**(C standardının kullandığı terim)
        - **low level const**(C++ standardının kullandığı terim)
        - **left const**(standardın kullandığı terim değildir)
        - **west const**(standardın kullandığı terim değildir)
    - Şu anlama gelmektedir: `*p` değişkeninin değeri değişmeyecek, `p` değişkeninin değeri değiştirilebilir.
3. `const type * const p` değişken bildirimiyle ilgili bilgiler aşağıdaki gibidir;
    - Şu şekilde adlandırılır;
        - **const pointer to const type**
    - Şu anlama gelmektedir: `p` değişkeninin değeri değişmeyecek ve `*p` değişkeninin değeri değişmeyecek.


### 28.Ders 11. Önemli Bilgi

❗❗❗ Aşağıdaki cümleler önemlidir;
- `const Type *` türünden `Type *` türüne dönüşüme izin verilmemelidir, bu işlem **ub** durumu oluşturacaktır.
- `Type *` türünden `const Type *` türüne dönüşüm yapılabilir, bu işlem herhangi bir hata değildir.


### 28.Ders 12. Önemli Bilgi

❗❗❗ Bazı durumlarda `const typr*` türünden `type*` türüne dönüşümünün yapılmasının gerekeceği yerler olacaktır, gerekli olduğunda bu işlem tür dönüşüm operatörü ile açık şekilde yapılmalıdır.

👇 Aşağıdaki programda pointer türlerde açık tür dönüşümünün nasıl yapıldığı incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    const int x = 523;
    
    int* p = (int*)&x; // Açık tür dönüşümü yapılıyor, bu kullanım çoğu zaman mantıklı değildir ama bu tür dönüşümlerin yapılması gerekecek yerler vardır.
}
```

👇 Aşağıdaki programda pointer türlerde kullanılan örtülü ve açık tür dönüşümleri incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

int main(void)
{
    int x = 123;
    char* ptr1 = &x; // Derleyici burada uyarı iletisi verir.
    char* ptr2 = (char*)&x; // Derleyici burada uyarı iletisi vermez ve bazen bu şekilde kodlar yazılması gerekecektir.
}
```

### 28.Ders 13. Önemli Bilgi

❗❗❗ Necati Ergin yaptığı **kod incelemelerinde(code review)** en çok karşılaştığı semantik yanlışlıklar 👇 aşağıdaki programdan incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

// Aşağıdaki şekilde bir fonksiyon tanımı neden kütüdür;
// 1. Fonksiyonun ilk parametresi 'ptr' olan değişken pointer üzerinden değeri değiştirilmeyeceği için 'const' olarak tanımlanmalıydı ama tanımlanmamış, bu da kodu okuyan kişinin ilk paramtrenin 'output' olduğunu anlayamamasına neden olacaktır.
// 2. Kodlama hatasına açık kod yazılmış olur.
// 3. Derleyicinin yapabileceği optimizasyonlar kısıtlanmış olur.
// 4. 'const' nesneler bu fonksiyonun ilk parametresine argüman olarak gönderilirse sözdizim hatasına(syntax error) neden olmalıdır(bu davranış derleyiciye göre değişiyor ama mantıken yanlış bir işlemdir).
void print_array(int* ptr, int size);

int main(void)
{
    const int primes[5] = { 2, 3, 5, 7, 11, };
    print_array(primes, 5); // Böyle bir fonksiyon çağrısı 'const int*' türünden 'int*' türüne tür dönüşümü yapılacağı için doğru olmayacaktır.
}
```


### 28.Ders 14. Önemli Bilgi

❗❗❗ Bazı durumlarda `type* const ptr` şeklindeki pointer değişkenlerin tuttuğu adres değerlerinin değişmeyeceğini belirten değişken bildirimleri bilerek ve isteyerek kullanılmaktadır, bunun nedeni pointer türünde tutulan değişkenin bir register adresi olması ve program çalışma zamanı boyunca değişmemesi gerekmesi olabilir.


## 29.Ders

### 29 Ders 1. Önemli Bilgi

❗❗❗ İki **adres(pointer)** aynı nesnenin adresiyse, iki adres bir dizinin bittiği yerin adresiyse ve **NULL pointer** ise eşit olmak zorundadır.


### 29 Ders 2. Önemli Bilgi

❗ C++ dilinin standardında bir ifadenin **R/L value** kategorisinde olmasına **Value Category** deniyor, C standardı açık şekilde bu tanımı yapmasa da C dili için de aynı ifadenin kullanılmasında bir sakınca yoktur.

❗❗❗ Aşağıdaki operatörler göstericilerle birlikte kullanılabilen operatörlerdir ve bu operatörlerle ilgili aşağıdaki bilgilerin bilinmesi önemlidir;
- `++` operatörünün operandının value-category değerlerinin **L-value** olması zorunluluğu vardır.
- `--` operatörünün operandının value-category değerlerinin **L-value** olması zorunluluğu vardır.
- `&`  operatörünün operandının value-category değerlerinin **L-value** olması zorunluluğu vardır.
- `*`  operatörünün operandının adres olması zorunluluğu vardır ama operandın value-category değerlerinin **R-value** ya da **L-value** olabilir. Operant bir pointer değişken olabilir ya da doğrudan adres değeri olan herhangi bir ifade olabilir.


❗❗❗ Aşağıda bazı ifadelerin(expression) **value category** değerleri incelenebilir;
- `++x` ve `x++` ifadeleri(expression) **R-value**
- `--x` ve `x--` ifadeleri(expression) **R-value**
- `&x` ifadesi(expression) **R-value**
- `*p` ifadesi(expression) **L-value**


❗❗❗Aşağıdaki ifadede(expression) buunan operatörler incelenebilir;
- `!~*ptr++` ifadesinde dört farklı operatör vardır, bunlar; 
    - `!` "**logical not**" operatörü 
    - `~` "**bitwise not**" operatörü 
    - `*` "**dereferencing**" operatörü
    - `++` "**postfix increment**" operatörü
- `!~*ptr++` ifadesindeki tüm operatörler aynı öncelik seviyesinde olduğu için ifade şu `!(~(*(ptr++)))` ifade ile birbirine eşittir.


👇 Aşağıdaki programda geçersiz olan ifadeler(expression) incelenebilir. Aşağıdaki programdakine benzer ifadelerin geçerli olup olmadığı ve detaylı açıklaması C mülakatlarında sorulabilecek basit sorulardandır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
    int x = 10;

    &x++; // '&(x++)' ile aynı ifadedir ve bu ifade legal değildir çünkü '&' operatörü R-value olan 'x++' ifadesini operant olarak alamaz(sadece L-value ifade alabilir).
    &++x; // '&(++x)' ile aynı ifadedir ve bu ifade legal değildir çünkü '&' operatörü R-value olan '++x' ifadesini operant olarak alamaz(sadece L-value ifade alabilir).
    ++&x; // '++(&x)' ile aynı ifadedir ve bu ifade legal değildir çünkü '++' operatörü R-value olan '&x' ifadesini operant olarak alamaz(sadece L-value ifade alabilir).
    (&x)++; // Bu ifade legal değildir çünkü '++' operatörü R-value olan '&x' ifadesini operant olarak alamaz(sadece L-value ifade alabilir).
}
```


### 29 Ders 3. Önemli Bilgi

❗❗❗ `foo(*ptr); ++ptr;` yazmak yerine `foo(*ptr++);` kullanılabileceğini anlamak önemlidir, ikinci kullanım C dilinde idiomatik bir kullanımdır.


### 29 Ders 4. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda bir dizi adı üzerinden `*array_name++` şeklinde bir kullanımın "**array decay**" kuralından dolayı legal olmadığı durum incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    int ar[] = { 1, 3, 5, 7, 9 };
    int* ptr = ar;

    *ar++ = 567; // Buradaki ifade '*(ar++)' ifadesi ile aynıdır ve 'ar++' ifadesindeki 'ar' işleme girmeden önce 'array decay' kuralından dolayı R-value olan adres ifadesine çevrileceğinden dolayı ve bu 'ar' ifadesi '++' operatötünün operandı olamaz.
    *&ar[0] = 998; // Buradaki ifade '*ar' ifadesi ile aynıdır, legal ve mantıken(logic) doğru bir kullanımdır. Burada dizinin ilk elemanına '998' değeri atanmaktadır.
    *ptr++; // Buradaki ifade '*(ptr++)' ifadesi ile aynıdır ve 'ptr' ifadesi bir nesneye karşılık geldiğinde bir 'L-value' ifadedir ve bundan dolayı da '++' operatörünün operandı olabilir, bu nedenlerden dolayıdır ki bu ifade legaldir ve kullanımında bir mantıksal hata yoktur.

    // Aşağıdaki çıktıları incele ve anlamaya çalış
    printf("ar = %d(decimal), %o(octal), %X(hex)\n", *ar, *ar, *ar);
    printf("ptr = %p, *ptr = %d\n", ptr, *ptr);
    printf("ar = %p, &ar[0] = %p", ar, &ar[0]);
}
```


### 29 Ders 5. Önemli Bilgi

❗❗❗ `++*ar` ifadesi legal iken `ar++` ifadesi legal değildir, bunun nedenini iyi anlamak gerekiyor ve anlamadan ilerlenmemeli. `++*ar` ifadesindeki `*ar` alt ifadesi `ar` dizisinin ilk elemanı olan nesnedir(burada **array decay** ile `ar` şuna çevrilir `&ar[0]`). </br>
👇 Aşağıdaki programdaki gibi bir kod yazılmamalıdır ama konuyu anlamak için `++*ar` ifadesinin nasıl çalıştığını anlamak için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    int ar[] = { 1, 3, 5, 7, 9 };

    print_array(ar, 5);
    ++*ar; // Buradaki işlem legal ve doğrudur, dizinin ilk elemanının değeri bir arttırılıyor.
    print_array(ar, 5);
}
```


### 29 Ders 6. Önemli Bilgi

❗❗❗ Kursun pointer'lar ile ilgili en önemli cümlesi: Pointer değer döndüren fonksiyonlardan geriye asla "**otomatic storage duration**" değişkenlerin adresleri döndürülmemelidir.  


### 29 Ders 7. Önemli Bilgi

❗❗❗ Adres döndüren fonksiyonlar **ub**'ye neden olmadan ne döndürebilir?
1. **Static ömürlü** nesne adresi döndürebilir, bunlar aşağıdaki gibi olabilir;
    1. Global değişken adresleri.
    2. Static yerel değişken adresleri.
    3. **String literal** ifadeleri(**String literal** ifadeleri **Static ömürlü** dizi nesneleridir).
2. Çağıran kodun gönderdiği adres döndürebilir.
3. Diziler üzerinde işlem yapan fonksiyonların dizinin bir elemanının adresini döndürmesi.


### 29 Ders 8. Önemli Bilgi

❗❗❗ Adres(pointer) döndüren bir fonksiyon **static storage duration** nesne adresi döndürebilir bu **tanımsız davranışa(ub)** yol açmaz ama **static storage duration** nesne adresi döndürmesi demek fonksiyonun hep aynı nesnenin adresini döndürmesi demektir. </br>
**Static storage duration** nesne adresi döndüren fonksiyonların bilinmesi gerekiyor ki o fonksiyon kullanılırken programda mantık(logic) hatalarına neden olabilecek şekilde kod yazılmasın, bu bilginin fonksiyonun dokümantasyonunda açık şekilde belirtilmesi gerekiyor. </br>
C dilinin standart kütüphanesindeki **static storage duration** nesne adresi döndüren fonksiyonların dokümantasyonunda bunun açık şekilde belirtildiği görülebilir.


## 30.Ders

### 30 Ders 1. Önemli Bilgi

🧠 Veri yapıları ve algoritmalar konusunda ilk öğrenilen sıralama algoritmaları basit oldukları için "**bubble sort**", "**selection sort**" ve "**insertion sort**" algoritmalarıdır.


### 30 Ders 2. Önemli Bilgi

❗❗❗ C hakkında ya da kod hakkında konuşurken `NULL` demek yerine "**NULL pointer**" demek daha doğru olacaktır çünkü dilde **null character**, **null statement** gibi terimler de var ve karışıklık olasılığı vardır.

❗❗❗ `NULL` bir adres değeridir ve bir sabit ifadesidir bu nedenden dolayı da "**NULL pointer**" olarak adlandırılması doğru olacaktır.


### 30 Ders 3. Önemli Bilgi

❗❗❗ **NULL pointer** herhangi bir pointer değişkene atanabilir, pointer olmayan değişkenlere `NULL` atanması(C derleyicisi izin verse dahi) yanlıştır.

❗❗❗ C ve C++ dillerinde **NULL pointer** makrosunun anlamı diğer dillerdeki **null**, **nil** gibi terimlerden farklıdır, diğer dillerin bazılarında bir değişkenin bir değeri var ya da bir değeri yok durumunu tutmak için kullanılabilir ama C ve C++ dillerinde `NULL` sadece pointer türünden değişkenlerin sahip olabileceği bir değerdir.

❗❗❗ C ve C++ dillerinde değeri **NULL pointer** olan bir pointer değişken hiçbir nesneyi göstermeyen ama geçerli bir pointer değişkendir.


### 30 Ders 4. Önemli Bilgi

❗❗❗ Bir pointer değişkenin birbirinden faklı iki **durumu(state)** söz konusudur(bunlar: "**Uninitialized state**", "**Null state**", "**Valid state**", "**Dangling state**". bunları ben ekledim, derste o anda hepsinden bahsedilmedi). </br>
Aşağıda bir göstericinin "**ub**" oluşturmayan durumları(state) listelenmiştir; 
1. Bir **nesnenin(object)** adresini gösterebilir.
    - Bir **nesneyi(object)** gösterebilir.
    - Bir dizinin sonunu gösterebilir(dizinin son elemanıdan ).
2. **NULL pointer** olabilir(bu o pointer değişkenin hiçbir nesneyi göstermediği anlamına gelir).


### 30 Ders 5. Önemli Bilgi

❗❗❗ **NULL pointer** değere sahip bir pointer değişkenin hiçbir **nesnenin(object)** adresi olmadığı için o göstericinin **dereferancing** işlemine tabi tutulması **ub** durumuna neden olacaktır.


### 30 Ders 6. Önemli Bilgi

🧠 Kursta şu ana kadar öğrenilen C dilinin standardında belirtilen **ub** durumlar aşağıdaki gibidir;
- Bir tam sayının 0'a bölünmesi işlemi.
- **Otomatic ömürlü(otomatic storage duration)** bir değişkene ilk değer atamadan o değikeni **indetermined value(garbage value)** değeriyle bir fadede kullanmak.
- **Yan etkiye(side effect)** maruz kalmış bir değişkeni **sequence point** noktasından önce aynı **ifade(expression)** içinde kullanılması. `x = ++x;` deyimi(statement) C dilinde **ub** ama C++ dilinde **ub** değildir.
- İşaretli tam sayılarda taşma durumları.
- Bir makronun **undefined** yapılmadan birden fazla kez tanımlanması.
- Bir **NULL pointer**'ın dereference edilmesi(bu işlem `*` ya da `[]` operatörleriyle yapılabilir).


### 30 Ders 7. Önemli Bilgi

❗❗❗ İki pointer değişkenin ikisinin de değeri **NULL pointer** ise eşitlik karşılaştırması **1(doğru, true)** olarak sonuçlanacaktır.


### 30 Ders 8. Önemli Bilgi

🧠 C ve C++ dillerinde Logic ifade beklenilen yerler aşağıdaki gibidir;
- `!exp`
- `exp1 && exp2`
- `exp1 || exp2`
- `exp ?`
- `if(exp)`
- `while(exp)`
- `do while(exp);`
- `for(;exp;)`


🧠 C ve C++ dillerinde lojik ifade beklenilen yerlerde herhangi bir adres değeri kullanılabilir. 
- `if(ptr != NULL)` statement'ı yerine `if(ptr)` kullanılabilir ve ikinci kullanım daha çok tercih edilmektedir.
- `if(ptr == NULL)` statement'ı yerine `if(!ptr)` kullanılabilir ve ikinci kullanım daha çok tercih edilmektedir.


### 30 Ders 9. Önemli Bilgi

❗❗❗ **NULL pointer** mantıksal(logic) açıdan zero(false) olarak yorumlanır, bu önemli bir bilgidir.


### 30 Ders 10. Önemli Bilgi

❗❗❗ **Statik ömürlü** pointer değişkenlere ilk değer verilmediğinde pointer değişkenin alacağı ilk değer **NULL pointer** olur.


### 30 Ders 11. Önemli Bilgi

❗❗❗ C dilinde `int* ptr = NULL;` ile `int* ptr = 0;` aynı anlama gelmektedir ama bu "0" değeri(değeri "0" olan bir ifade değil doğrudan "0" değeri) atanan pointer değişkenin "0" adresini gösterdiği anlamına gelebilir ya da gelmeyebilir bu derleyiciye bağlıdır, eğer derleyici bir göstericiye "0" değerinin atanması işlemini bu göstericiye **NULL** ataması yapılacak şekilde yorumluyorsa bu **NULL pointer conversion** olarak adlandırılır.

❗❗❗ C dilinde **NULL pointer** değer atanacak olan gösterici değişkenlere bu işlemin açık şekilde `NULL` makrosuyla değer atanması daha doğrudur.


## 31.Ders

### 31 Ders 1. Önemli Bilgi

❗❗❗ "**const**" anahtar sözcüğü bir pointer **tür eş adı** ile birlikte kullanıldığında "**const**" olan pointer değişkenin kendisi olacaktır, yani C standardında "**const pointer to int**" ya da C++ standardında "**top lavel const**" olacaktır.

👇 Aşağıdaki programda hem mülakatlara girenler hem de üretimde önemli olan ... konusuyla ilgili bilgi edinilebilir. `typedef` birdiriminin 
```C

int main(void)
{
    int x = 6;
    int y = 6;

    typedef int* iptr;
    iptr ip  = &x; // Buradaki statement şuna 'int* ip = &x;' denktir.
    
    const iptr p  = &x; // Buradaki statement şuna 'int* const p = &x;' denktir, burada beklenilenden farklı olduğu görülecektir ve bu ayrım önemlidir, bunu C mülakatlarında büyük ihtimal sorarlar ve C programları yazarken de bu bilgi öenmlidir!

    *p = 888; // Legaldir
    p = &y; // Burada sözdizim hatası(syntax error) alınacaktır.
}
```


### 31 Ders 2. Önemli Bilgi

🧭 Bir türe eş ad vermek istiyorum ancak "`typedef`" bildirimini nasıl yapacağım konusunda kafam karışık;
1. Hangi türe eş adı verilecekse o türden bir değişken tanımlanır.
2. En başa "`typedef`" anahtar sözcüğü eklenir.
3. Değişken adı yerine seçilen **tür eş ad**'ı yazılır.


🧭 Aşağıda adım adım `int` türünden bir değişkenin nasıl `Word` adında **tür eş ad** olarak bildirileceği incelenebilir;
1. `int x;`
2. `typedef int x;`
3. `typedef int Word;`


🧭 Aşağıda adım adım `int*` türünden bir değişkenin nasıl `iptr` adında **tür eş ad** olarak bildirileceği incelenebilir;
1. `int* x;`
2. `typedef int* x;`
3. `typedef int* iptr;`


🧭 Aşağıda adım adım `int[10]` türünden bir değişkenin nasıl `intary10` adında **tür eş ad** olarak bildirileceği incelenebilir;
1. `int ary[10];`
2. `typedef int ary[10];`
3. `typedef int intary10[10];`


👇 Aşağıdaki programda `int ary[10];` bildiriminin nasıl `typedef` anahtar sözcüğü ile kullanılabileceği incelenebilir.
```C
int main(void)
{
    typedef int intary10[10];

    intary10 a, b, c; // Buradaki bildirim şuna denktir 'int a[10], b[10], c[10]'
}
```

👇 Aşağıdaki programda `int (*fp)(int);` şeklindeki "**function pointer**" değişken bildiriminin nasıl **tür eş ad** olarak bildirilebileceği incelenebilir.
```C
int main(void)
{
    // int (*fp)(int); // 1.adım
    // typedef int (*fp)(int); // 2.adım
    typedef int (*FPTR)(int); // 3.adım
}
```


### 31 Ders 3. Önemli Bilgi

❗❗❗ Tür eş adları neden var diye sorulursa şu düşünülmelidir: C dili standardının bir gerçeği olarak var ilkel türlerin bellek boyutlarının kaç byte olacağı derleyicilere bırakılmıştır(her derleyici için bit türün boyutu farklı olabilir, bunun nedeni C dilinin farklı donanımlara destek veren program yazılabilmesine izin verme amacıdır).

❗❗❗ Tür eş adları kullanıldığında, yazılan bir C programının farklı derleyiciler arasında taşınabilirliği kolaylaşmaktadır.


### 31 Ders 4. Önemli Bilgi

🧭 C standard kütüphanesi nerelerde `size_t` türünü kullanıyor(bu bir kural değildir sadece standardın nasıl kullandığı durumudur)?
1. Yazı uzunluğunu tutmak için kullanılır.
2. Tane, adet gibi değişkenleri tutmak için kullanılır.
3. Dizilerin eleman sayısı değerini tutacak olan değişkenlerin türü olarak kullanılır.
4. `sizeof` değeri, `sizeof` operatörünün ürettiği değerin türü `size_t` türüdür.
5. Daha çok C++ dilinde kullanım şekli dizi indeksi türü olarak kullanmaktır.

❗ `sizeof` operatörünün ürettiği değerin türü `size_t` türüdür.


### 31 Ders 5. Önemli Bilgi

❗❗❗ Bu tür eş adları C99 standardıyla dile eklenen `stdint.h` başlık dosyasında bulunmaktadır ve bu türler opsiyonel olarak C99 standardı ile dile eklenmiştir yani her C derleyicisinde bu tü reş adları olmak zorunda değildir bunun nedeni: Bizim `byte` dediğimiz C standardının `char` dediği birimin 8 bit olmak zorunda olmamasıdır mesela bazı donanımlarda bu temel birim 8 bit yerine 12 bit olabilir(bu sistemler çok az olduğu için bunlara ezoterik sistemler denilmektedir) bu durumda da 32 bit bu donanımlarda bir şey ifade etmeyecektir, eğer `byte` uzunluğu 12 bit ise bu donanımda `int_12, int_24, int_48` gibi tür eş adlarının bir anlamı olacaktır.


### 31 Ders 6. Önemli Bilgi

❗❗❗ Programcılar `int8_t` ve `int_least8_t` vb. türleri arasındaki farkları genelde anlamamaktadır, mesela bu `int8_t` türü ezoterik donanımların derleyicilerinde anlamsızdır bu nedenle C standardı bu tür eş adlarını zorunlu tutmamıştır. Mesela bir byte birimi 12 bit olan bir ezoterin derleyicide `int_least8_t` tür eş adı o sistemin 12 bitlik biriminin değişkenine karşılık gelecektir.


### 31 Ders 7. Önemli Bilgi

❗❗❗ `int_fast32_t` bu tür eş adı 32 bitlik tam sayı işleminin en hızlı yapıldığı tür anlamına gelmektedir, bu donanımla ilgili, bazı donanımlarda bazı işlemler bazı türlerde daha hızlı yapılmaktadır ve bu durumdan dolayı `type_fast_t` ile biten tür eş adları dilin standardında mevcuttur.


### 31 Ders 8. Önemli Bilgi

❗❗❗ C dili diğer diller gibi olmadığı için C dilinin standart C fonksiyonlarının en az %70 kadarının ne oldukları ve ne için kullanıldıkları iyi bilinmelidir.

❗❗❗ Temel ilke olarak bir işi yapacak bir fonksiyon gerektiğinde bu işi yapabilecek standart C fonksiyonu varsa çok çok özel bir durum yoksa C dilinin standart fonksiyonlarının kullanılması tercih edilmelidir.

### 31 Ders 9. Önemli Bilgi

❗❗❗ Ben yazılarla ilgili bir fonksiyon oluşturmak istiyorum, yazacağım fonksiyon adresini aldığı bir diziye, yazı yerleştirecek ya da o adresteki yazıyı değiştirecek(yazının dizi uzunluğunu arttırabilir) </br>
Benim fonksiyonum dizinin boyutunu alsın mı almasın mı? </br>
Bu tür fonksiyonlarda iki durum vardır;
1. Standart C fonksiyonların yöntemi dizi boyutunu almamaktır. Dizi boyutu alınmıyorsa daha hızlı çalışacaktır ama taşma sorumluluğu fonksiyonu çağıran koda devredilir.
2. Dizi boyutunu isteyen fonksiyonlar.


### 31 Ders 10. Önemli Bilgi

❗❗❗ C99 standardında `%zu` **conversion specifier(format dönüştürücüsü)** dile eklenmiştir ve bu şekilde kullanılan **tür eş adlarının** türlerinin ne olduğunun doğrudan açık şekilde **conversion specifier(format dönüştürücüsü)** olarak belirtilmesine gerek olmadan yazım kolaylığı sağlanmıştır, `%zu` olmasaydı kullanılan derleyicide 'size_t' tür eş adı için belirlenen türün **conversion specifier(format dönüştürücüsü)** değerinin açık şekilde yazılması gerekecekti.


### 31 Ders 11. Önemli Bilgi

❗❗❗ Atama operatörünün ürettiği değer nesneye atanan değerdir.

## 32.Ders

### 32 Ders 1. Önemli Bilgi

❗❗❗ Bir metinin ilk karakterini gösteren pointer değişkenin değerini metnin son karakterini göstermesini sağlamak için kullanılabilecek C idiom'ları; </br>
Bir metnin başlangıç adresini tutan göstericiyi metnin sonunu gösterir hale getirmek için aşağıdaki **deyimler(statement)** kullanılabilir, bunlar C kodlarını okurken karşımıza çıkabilir.
- `while(*p) ++p;`
- `while(*p++) ; --p;`
- `p += strlen(p);`
- `p = strchr(p, '\0');`


### 32 Ders 2. Önemli Bilgi

❗❗❗ Aşağıdaki C dilinde kullanılan iki konvensiyon iyi bilinmelidir; </br>
C dilinin standart kütüphenesinde;
- Bir diziye bir yazı yerleştiren
- Bir dizideki bir yazıyı değiştiren
fonksiyonlar **void fonksiyon(geri dönüş değeri olmayan fonksiyon)** değildir, böyle fonksiyonlar üstünde işlem yaptıkları dizinin adresini döndürür.

⚠️ Konvensiyonlar dilin kuralı değildir ama C standardı ve üçüncü taraf olarak yazılan kütüphenelerde bu konvensiyonel kullanımlara uyulmaktadır.

❗❗❗ Eğer bir fonksiyon iki adres istiyorsa birinden okuyacak ve diğerine yazacak biçimde ise birinci paramentre hedef adres, ikici parametre kaynak adres olacaktır.


### 32 Ders 3. Önemli Bilgi

❗❗❗ **Overlapped bellek blokları** arasında `strcpy` fonksiyonuyla kopyalama işlemi yapmak C dilinde en çok yapılan hatadır, çünkü kopyalanan blokların kesişim kümesi olması C standardında "**ub**" olarak belirtilmiştir.


### 32 Ders 3. Önemli Bilgi

❗❗❗ Pointer parametreli fonksiyonları belgelerken(o fonksiyon hakkında bilgi verirken) şunlar mutlaka belirtilmelidir;
- Bildirimde pointer'ın `T*` ya da `const T*` biçiminde olması kuralı yapın.
- Pointer parametrelerin `restrict` olup olmaması kararı verilmelidir.
- Herhangi bir pointer parametreye "**NULL pointer**" geliyorsa aşağıdaki iki durumdan biri söz konusudur;
    1. Ya tanımsız davranıştır
    2. Ya da ilgili parametreye "**NULL pointer**" değer geçilmesi, fonksiyonu kullanan programcısına verilen bir opsiyon olabilir.
- Eğer fonksiyondan geri dönüş türü pointer ise
    1. Geri dönüş türünün **T*** ya da **const T*** olmasına karar verilmelidir.
    2. Fonksiyonun **NULL pointer** döndürme ihtimali var mı ve bunun ne anlama geldiği belirtilmelidir.
    3. Adresi döndürülen nesnenin ömrünün ne olduğu dokümente edilmelidir(bu madde bu konudaki diğer maddelerden de önemli olabilir);
        1. **Static storage duration**
        2. **Dymamic storage duration**, bu ömür türünü henüz işlemedik ileride işleyeceğiz.
        3. Fonksiyona gönderilen bir adres mi?

    👇 Aşağıdaki programda `const int*` türünden `int*` türüne tür dönüşümünün "**ub**" durumuna neden olabileceği incelenebilir.
    ```C
    #define _CRT_SECURE_NO_WARNINGS

    #include <stdio.h>
    #include <string.h>
    #include "nutility.h"

    #define SIZE 100

    // 'bar' fonksiyonunun geri dönüş değeri salt okuma amaçlı kullanılabilmesi için 'const int*' türünde bildirilmiştir.
    const int* bar(int* p, int size);

    int main(void)
    {
        int *p = (int*)bar(...);

        *p = 357; // Bu işlem duruma göre 'ub'ye neden olabilir.
    }
    ```


### 32 Ders 4. Önemli Bilgi

❗❗❗ Aksi söylenmediği sürece iki yazının büyüklük küçüklük karşılaştırılması "**Lexicographical Compare**" algoritmasına göre yapılır.

🧠 **Lexicographical Compare Algorithm**: Bu algoritma iki veri yapısının(iki dizi, iki yazı) büyüklük küçüklük karşılaştırmasının yapılması için kullanılmaktadır. 
1. Bu algoritmaya göre iki veri yapısının eleman sayıları ve karşılıklı veri yapısı öğelerinin aynı olması durumunda iki veri yapısı eşit olacaktır. 
2. Bu algoritmaya göre iki veri yapısının elemanlarının sayısal fazlalığına bakılmadan en küküç indeks değerinden başlayıp karşılaştırma yapılıyor, bu karşılaştırmalarda ilk hangi veri yapısının aynı indeks değerindeki elemanı büyükse o veri yapısı diğerinden daha büyük kabulediliyor, küçüklük durumu için de aynı durum geçerlidir.

Aşağıdaki iki dizi "**Lexicographical Compare**" algoritmasına göre kıyaslansa, tek elemandan oluşan "3" dizisi daha büyüktür.
- 3
- 2 5 6 7 9 1 6 8


Aşağıdaki iki dizi "**Lexicographical Compare**" algoritmasına göre kıyaslansa, tek elemandan oluşan "1 2 3 5 9" dizisi daha büyüktür. Buradaki gibi karşılıklı elemanların eşitliği varsa eleman sayısı fazla olan dizi daha büyük olacaktır. 
- 1 2 3 5
- 1 2 3 5 9


Aşağıdaki iki dizi "**Lexicographical Compare**" algoritmasına göre kıyaslansa, "gulden" yazısı daha büyüktür.
- gul
- gulden


Aşağıdaki iki dizi "**Lexicographical Compare**" algoritmasına göre kıyaslansa, "sude" yazısı daha büyüktür.
- su
- sude


Aşağıdaki iki dizi "**Lexicographical Compare**" algoritmasına göre kıyaslansa, "masa" yazısı daha büyüktür.
- masa
- MASA


Aşağıdaki iki dizi "**Lexicographical Compare**" algoritmasına göre kıyaslansa, "su" yazısı daha büyüktür.
- "su"
- "cumhuriye"


Aşağıdaki iki dizi "**Lexicographical Compare**" algoritmasına göre kıyaslansa, "kucuk masa" yazısı daha büyüktür.
- buyuk masa
- kucuk masa


❗❗❗ Yazıların karşılaştırması işleminde bu karşılaştırma işlemi varsayılan olarak "**Lexicographical Compare**" algoritmasına göre yapılır.


### 32 Ders 5. Önemli Bilgi

❗❗❗ Tek bir fonksiyon olsun, fonksiyon karşılaştırmasının sonucunu döndürsün, karşılaştırma işleminde eşitlik açısından üç farklı durum vardır. Bunu yapmak için C dilinde şu şekilde bir convension vardır: Fonksiyonun geri dönüş değeri "**signed int**" yapılır ve ilk değer ikinci değerden büyükse pozitif, küçükse negatif ve eşitse 0 değeri döndürülür.
- `int compare(x, y);` fonksiyonu iki değeri karşılaştırır ve aşağıdaki durumlara göre bu karşılaştırmanın sonucunu geriye döndürür;
    1. `x > y` ise  pozitif değer döndürülsün.
    2. `x < y` ise  negatif değer döndürülsün.
    3. `x == y` 0



## 33.Ders

### 33 Ders 1. Önemli Bilgi

🔭 Regex kullanımı [regex101.com](regex101.com) sitesinden öğrenilebilir. Bu siteden yavaş yavaş Regex kullanımı öğrenilmeye çalışılabilir.


### 33 Ders 2. Önemli Bilgi

❗❗❗ Kendi yazdığımız fonksiyonlarda standart C fonksiyonlarını kullanabileceğimiz yerlerde standart C fonksiyonlarını kullanmamız daha doğru olacaktır.


### 33 Ders 3. Önemli Bilgi

❗❗❗ **String literal** varlıkların bir dizi olduğu, **L-value** olduğu ve **NULL terminated byte stream** bir dizi olduğunun bilinmesi ve unutulmaması gerekiyor.

❗❗❗ **string literal** varlıklar sadece salt okuma amaçlı kullanılmalıdır eğer bir **string literal**'i değiştirmeye yönelik kod yazılırsa bu "**ub**" durumuna neden olacaktır, mülakatlarda bununla ilgili çok soru sorulmaktadır.

❗❗❗ C dilinde **string literal** varlıklar `const` olmayan `char*` dizilerdir ama bu **string literal** varlıkların değiştirilebileceği anlamına gelmiyor.

❗❗❗ C dilini yeni öğrenenlerin çok sık yaptığı yanlışlardan biri **string literal** bir varlığın elemanlarından birini değiştirmeye çalışmaktır.


### 33 Ders 4. Önemli Bilgi

❗❗❗ C dilinde **string literal** varlıklar, elemanları `char` olan dizilerdir, C++ dilinde **string literal** varlıklar elemanları `const char` olan dizilerdir. </br>
Ancak her iki dilde de **sözdizimi(syntax)** engeli aşılsa bile **string literal** varlığı değiştirme girişimi tanımsız davranıştır(**ub**).


### 33 Ders 5. Önemli Bilgi

❗❗❗ Kursun bu kısmına kadar nesnelerin ömür kategorilerinden **static storage duration** ve **otomatic storage duration** kategorilerini öğrendik. </br>
C dilinde **string literal** varlıklar **static storage duration** ömre sahiptir, bu da **string literal** değişkenlerin program çalışmasından sonlanmasına kadar bellekte kaldığı anlamına geliyor.

❗❗❗ **String literal** varlıkların **static storage duration** ömürlü olduğunu bilmek **static bellek alanı** kısıtlı olan donanımlarda çalışacak C programlarını yazarken ciddi sorunların programın çalışma zamanında oluşmaması için önemlidir.


### 33 Ders 6. Önemli Bilgi

❗❗❗ C dilinde **string literal** varlıklar `char` türünden dizilerdir, bu varlıkların değiştirilmemeleri gerekiyor.


### 33 Ders 7. Önemli Bilgi

❗❗❗ "**Initialization is not an assignment**" cümlesinin ne anlama geldiğini hatırlamak için aşağıdaki program incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
    // Aşağıdaki kod satırında 'x' adında 'int' türünden bir değişken bildirimi yaşamına 'otomatic' ömürlü olarak '13' değeriyle başlıyor.
    // İlk değer vermek bir değişkenin hayatına başlarken alacağı ilk değeri belitmek(vermek) demektir. 
    // Aşağıdaki kodda 'name lookup(ad arama)' yoktur.
    // Aşağıdaki koddaki '=' bir operatör değildir, buradaki '=' token'ı değişken bildiriminin sözdiziminin(syntax) bir bileşenidir, bu bilginin farkında olmak çok önemlidir!
    int x = 13; // Buradaki statement 'Decleration Statement' olarak adlandırılmaktadır.

    x = 24; // Buradaki statement 'Non Decleration Statement' durumundadır
}
```

**Statement** varlıklar temelde iki farklı öbeğe ayrılır, bu öbekler aşağıdaki gibidir;
- **Decleration Statement**
- **Non Decleration Statement**


### 33 Ders 8. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki gibi bir durum "**Implemantation Specified**" bir durumdur, derleyiciler programdaki özdeş **strinf literal** varlıkları belleğe ayrı diziler olarak alabilir ya da farklı diziler olarak alabilir ve derleyici her seferinde bu durumlardan herhangi birini uygulayabilir, C standardı bunu derleyicilere bırakmıştır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
    char* p1 = "asli ozer";
    char* p2 = "asli ozer";

    if(p1 == p1)
        printf("evet dogru\n");
    else
        printf("hayir yanlis\n");
}
```


**Implemantation Specified**: Derleyicinin iki ya da daha fazla sayıda farklı kod üretme seçeneği arasından istediği seçeneklerden biriyle kod üretebilmesi durumudur ve her seferinde de farklı şekilde kod üretebilir, bu izni C standardı derleyicilere vermiştir.

**Implemantation defined**: Derleyicinin iki ya da daha fazla sayıda farklı kod üretme seçeneği arasından istediği seçeneklerden biriyle kod üretebilmesi durumudur ama derleyici bunu dokümente etmelidir ve her seferinde de aynı şekilde kod üretmelidir.

❗❗❗ **Implemantation Specified** ve **Implemantation defined** arasındaki fark ise **Implemantation defined** durumlarında üretilecek kodların ne olacağı serleyici için dokümente edilmiş olması gerekmesi ve her zaman aynı şekilde kod üretilecek olmasıdır ama **Implemantation Specified** durumlarını derleyiciler dokümente etmek zorunda değiller ve her sefereinde farklı şekilde kod üretebilirler.


### 33 Ders 9. Önemli Bilgi

❗❗❗ **Strinf literal** varlıklar ile ilgili aşağıdaki bilgilerin iyi bilinmesi gerekiyor;
- **Strinf literal** varlıklar sadece **readonly** olarak kullanılabilir, bu varlıkların değiştirilmeye çalışılması "**ub**" durumuna neden olur.
- **Strinf literal** varlıklar C ve C++ dillerinde `static` ömürlüdür.
- Değeri aynı olan **Strinf literal** varlıkların aynı bellek alanında mı yoksa farklı bellek alanında mı tutulacağı C ve C++ dillerinde **implemantation specified** olarak belirlenmiştir.


### 33 Ders 10. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda çıktıların ne olacağı ve neden öyle olduğu iyi anlaşılmalıdır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
    "karya"; // Buradaki 6 elemanlı bir dizidir.
    "kar"; // Buradaki 4 elemanlı bir dizidir.
    "kayra ve"; // Buradaki 9 elemanlı bir dizidir.
    ""; // Buradaki 1 elemanlı bir dizidir.

    printf("%d\n", *""); // Standart çıktı akımına '0\n' gönderilir.
    printf("%zu\n", sizeof ""); // Standart çıktı akımına '1\n' gönderilir.
    printf("%zu\n", strlen("")); // Standart çıktı akımına '0\n' gönderilir.
}
```


### 33 Ders 11. Önemli Bilgi

❗❗❗ `char *p;` bildirimindeki "p" göstericisi geçerli bir değere sahipse, p bir yazıyı gösteriyorsa ve p'nin gösterdiği yazı boş değil ise
- `if(p != NULL && *p != '\0')` kullanımı `if(p && *p)` şeklinde C dilinde idiomatik şekilde yazılabilir ve burada **short circuit behavior** vardır.
- `if(!(p != NULL && *p != '\0'))` kullanımı ile `if(p == NULL || *p == '\0')` kullanımı aynıdır ve buradaki ifadeler C dilinde idiomatik `if(!p || !*p)` ifadesine denktir. 

## 34.Ders

### 34 Ders 1. Önemli Bilgi

❗❗❗ **string literal** ile ilgili akılda kalması gereken en önemli bilgiler şu şekildedir;
- **string literal**'in static ömürlü olması
- Immutable olmaları(değiştirilme girişimleri **ub** durumuna neden olacaktır) 
- Özdeş **string literal** tanımlamaları C standardında **Implemantation Specified** olarak belirtiliyor ve derleyiciler Özdeş **string literal** varlıkları bellekte tek bir nesne olarak tutabileceği gibi farklı nesneler olarak ta tutabilir ve her derleyici her seferinde farklı bir yolu seçebilir.


### 34 Ders 2. Önemli Bilgi

❗❗❗ `sizeof` derleme zamanıyla(compile-time) ilgilidir, `strlen` fonksiyonu çalışma zamanıyla(run-time) ilgilidir. `sizeof` operatörü işlem kodu üretmez.


### 34 Ders 3. Önemli Bilgi

❗❗❗ Bu programdaki kullanım önemlidir, iyi anlaşılmalıdır. </br>
👇 Aşağıdaki programda bir pointer dizisinin ilk değer verme işleminde nasıl bir işleyiş olduğu incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int x = 10, y = 20, z = 30;

int main(void)
{
    int a[20] = { 1, 4, 3, 2 }; // Buradaki 'a' adlı 'int' türünden dizinin ilk değer atanmayan elemanları 'a' değişkeninin static ömürlü ya da otomatic ömürlü olmasından bağımsız olarak '0' değerini alacaktır.
    int* pa[5] = { &x, &y, &z }; // Burada beş elemanlı 'pa' dizisinin 3 ve 4 indisli elemanlarının değeri 'NULL' olacaktır, bu dilin standardının sağladığı bir kesinliktir, bu derleyiciden derleyiciye aynı olarak geçerlidir.
    
    if(pa[3] == NULL)
        printf("dogru");
    else
        printf("yanlis");
    
    if(!pa[4])
        printf("dogru");
    else
        printf("yanlis");
}
```


### 34 Ders 4. Önemli Bilgi

❗❗❗ Bu programdaki kullanım önemlidir, iyi anlaşılmalıdır. </br>
👇 Aşağıdaki programda C standardında **const pointer to int**, C++ standardında **top level const** olarak adlandırılan türlerin kullanımı incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int x = 10, y = 20, z = 30;

int main(void)
{
    int i = 22532;

    int* const pa[5] = { &x, &y, &z }; // Burada beş elemanlı 'pa' dizisinin elemanlarının adres değerlerinin sabit olduğu bildiriliyor. C standardında 'const pointer to int', C++ standardında 'top level const' olarak adlandırılır.
    
    pa[2] = &i; // Buradaki kod illegal'dir, senteks hatası oluşur.
    *pa[2] = 777; // Buradaki kod legal'dir.

    printf("z = %d\n", z);
}
```

### 34 Ders 5. Önemli Bilgi

❗❗❗ Bu programdaki kullanım önemlidir, iyi anlaşılmalıdır. </br>
👇 Aşağıdaki programda C standardında **pointer to const int**, C++ standardında **low level const** olarak adlandırılan türlerin kullanımı incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int x = 10, y = 20, z = 30;

int main(void)
{
    int i = 22532;

    const int* pa[5] = { &x, &y, &z }; // Burada beş elemanlı 'pa' dizisinin elemanlarının adres değerindeki nesnelerin değerinin sabit olduğu bildiriliyor. 
    //int const * pa[5] = { &x, &y, &z }; // Buradaki bildirim ile yukarıdaki bildirim denktir.
    
    int ival = 35;

    pa[1] = &ival; // Buradaki kod legal'dir
    *p[2] = 888; // Buradaki kod illegal'dir, senteks hatası oluşur.
}
```

### 34 Ders 6. Önemli Bilgi

❗❗❗ Bu programdaki kullanım önemlidir, iyi anlaşılmalıdır. </br>
👇 Aşağıdaki programda C standardında **const pointer to const int** olarak adlandırılan türlerin kullanımı incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int x = 10, y = 20, z = 30;

int main(void)
{
    int i = 22532;

    const int* const pa[5] = { &x, &y, &z }; // C standardında 'const pointer to const int' olarak adlandırılan değişken bildirimi.
    
    int ival = 35;

    pa[1] = &ival; // Buradaki kod illegal'dir, senteks hatası oluşur.
    *p[1] = 888; // Buradaki kod illegal'dir, senteks hatası oluşur.
}
```

### 34 Ders 7. Önemli Bilgi

❗❗❗ En kritik bilgilerden biri. </br>
👇 Aşağıdaki programda elemanları `char*` türünden olan pointer dizilerin kullanımı incelenebilir. Elemanları mantıksal ilişki içinde olan ve elemanlarının değerleri değişmeyen dizilere **lookup table** denilmektedir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    // Aşağıdaki bildirim C dilinde legal C++ dilinde illegal'dir çünkü 'string literal' varlıklar 'const char*' türündendir, burada 'const char*' dizi değerleri olan bir dizinin 'const char*' türünden tanımlanması doğru olacaktır.
    char* weekdays[] = { "pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar" };

    const char * weekdays2 = { "pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar" };
    char const * weekdays3 = { "pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar" };

    *weekdays[2] = 't'; // Buradaki işlem hem C dilinde hem de C++ dilinde 'string literal' bir varlığın değeri değiştirilmek istendiği için 'ub' durumuna neden olacaktır.
}
```

### 34 Ders 8. Önemli Bilgi

❗❗❗ En kritik bilgilerden biri. </br>
👇 Aşağıdaki program **otomatic storage duration** bir char pointer dizi değişkenin bellekte kalmasını ve bu değişkenin değerleri olan **string literal** varlıkların ömürlerinin ne olduğunu iyi anlamak için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    {
        char* weekdays[] = { "pazartesi", "sali", "carsamba", "cuma", "cumartesi", "pazar" };
    }

    // Process'in akışı buraya geldiğinde 'weekdays' adındaki değişken bellekten silinecektir ama 'weekdays' dizisinin elemanları olan 'string literal' varlıklar process'in ömrü boyunca kadar bellekte kalmaya devam edecektir.
}
```


### 34 Ders 9. Önemli Bilgi

❗❗❗ En kritik bilgilerden biri. </br>
👇 Aşağıdaki program **otomatic storage duration** bir char pointer dizi değişkenin bellekte kalmasını ve bu değişkenin değerleri olan **string literal** varlıkların ömürlerinin ne olduğunu iyi anlamak için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    {
        char* weekdays[] = { "pazartesi", "sali", "carsamba", "cuma", "cumartesi", "pazar" };
    }

    // Process'in akışı buraya geldiğinde 'weekdays' adındaki değişken bellekten silinecektir ama 'weekdays' dizisinin elemanları olan 'string literal' varlıklar process'in ömrü boyunca kadar bellekte kalmaya devam edecektir.
}
```


### 34 Ders 10. Önemli Bilgi

👇 Aşağıdaki programda **lookup table** kullanımı incelenebilir.
- **Lookup table** programlamada çok sık kullanılan veri yapısıdır, değerleri sabit olan ve gerektiğinde kullanabilmek için birbiriyle ilişkili verilerin tutulması için kullanılan veri yapısıdır.
- ❗ **Lookup table** kullanıldığında bu değişkenler sonradan değiştirilmeye karşı korunması için **const** olarak tanımlanması doğru olacaktır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    const int primes[] = { 0, 2, 3, 5, 7, 11, 13, 17, 19, 23, 29 };
    const char* const weekdays[] = { "pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar" };

    weekdays[2] = "birgun"; // Burada sözdizim hatası(syntax error) oluşur, sözdizim hatasının(syntax error) nedeni "weekdays" dizisinin elemanlarının değerlerinin 'const' olarak bildirilmiş olmasıdır.
}
```


### 34 Ders 11. Önemli Bilgi

👇 ❗❗❗ Aşağıdaki programda **lookup table**'larda en çok kullanılan 0 indeksli dizi elemanının boş değer verilmesi ve bu şekilde 1 indeksli elemandan itibaren daha kullanılabilir bir **lookup table** bildirilmiş olur. 
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    const char* const weekdays[] = { "", "pazartesi", "sali", "carsamba", "persembe", "cuma", "cumartesi", "pazar" };

    int day_idx;

    printf("haftanin kacinci gunu: ");
    scanf("%d", &day_idx);
    printf("haftanin %d. gunu %s\n", day_idx, weekdays[day_idx]);
}
```


### 34 Ders 12. Önemli Bilgi

👇 ❗❗❗ Aşağıdaki programda elemanları `char*` türünden olan gösterici dizisiyle ilgili `sizeof` kullanımlarında üretilecek olan değerler incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

int main(void)
{
    char* p[8];

    printf("%zu/n", sizeof(p)); // 32 bitlik bir sistem için standart çıktı akımına '32/n' değeri gönderilir.
    printf("%zu/n", sizeof(p[0])); // 32 bitlik bir sistem için standart çıktı akımına '4/n' değeri gönderilir.
    printf("%zu/n", sizeof(*p[0])); // Standart çıktı akımına '1/n' değeri gönderilir.
    printf("%zu/n", sizeof(p) / sizeof(p[0])); // Standart çıktı akımına '8/n' değeri gönderilir ve buradaki ifade herhengi bir dizinin uzunluğunu verecektir.
}
```


### 34 Ders 13. Önemli Bilgi

👇❗❗❗ Aşağıdaki programda bir karakter dizisinin kırk elemanlı bir pointer dizisinin aralarında virgül bulunması gereken herhangi iki elemanı arasında olması gereken virgül unutulduğunda aralarında virgül unutulan iki yazının derleyici tarafından tek bir yazı olarak yorumlanacağı ve bu pointer dizisi döngü ile dolaşıldığında son elemanı `NULL` pointer olacağı için bu elemanın değerine erişileceği bir durumun "**ub**"ye neden olacağı görülmelidir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "nutility.h"

int main(void)
{
    char* p[] = {  
        "refika", "remeysa", "rupen", "saadet", "sabriye", "sade", "sadegul", "sadettin", "sadi", "sadiye", 
        "hakki", "haldun", "halime", "haluk", "handan" "hande", "handesu", "hasan", "helin", "hikmet", // Burada iki yazı arasında olması gereken ',' token'ı unutulmuştur.
        "necmiye", "nedim", "nefes", "nevsin", "nihal", "nihat", "nisan", "niyazi", "nurdan", "nuri",
        "ali", "alican", "alparslan", "anil", "arda", "asim", "askin", "aslican", "aslihan", "ata",  
    }; // Buradaki en son ',' token'ına 'trailing comma' denmektedir.
    
    for(size_t i = 0; i < asize(p); ++i){
        printf("%s", p[i]); // Burada NULL pointer dereference edilirse bu durum 'ub'ye neden olacaktır.
        getchar(); // 'getchar' fonksiyonu kullanıcıdan bir karakter bekleyen geriye ecco vermeyen(yani standart çıktıya herhengi bir şey göndermeyen bir fonksiyondur)
    }
}
```


### 34 Ders 14. Önemli Bilgi

❗❗❗ C ve C++ dillerini kullanan programcılarda en çok karşılaşılan profil: Dili öğrenmeye önem vermemiş sadece işini görecek kadar dili öğrenmiş kişiler, böyle kişilerin bu güçlü dillerde kod yazmaları yaptıkları hataların farkında olmama ihtimalleri yüksek olduğu için tehlikelidir, verin ile ilgili kafalarında bir farkındalık yok, "**ub**" nedir pek fikirleri yok. </br>
❗❗❗ C ve C++ dillerinin öğrenilmesi kolay değildir, mesela C++ dilinde uzmanlaşmak için dolu dolu dört beş sene harcanması gerekecektir, C++ dili zorluklarla beş etme konusunda sıkıntı yaşayacak kişiler için uygun bir dil değildir. </br>
❗❗❗ C ve C++ dilleri ciddi uzmanlık gerektiren dillerdir, bu dillerde program yazabilmek için bu diller hakkında derin bilgiye sahip olmak gerekiyor.




## 35.Ders

### 35 Ders 1. Önemli Bilgi

❗❗❗ Programcılar başlangış aşamasında **değişkenlerin türü(decleration type)** ve **ifadelerin türü(expression type)** kavramlarını birbirine karıştırıyormuş ama bu terimler birbirlerinden farklıdır ve farkları iyi bilinmelidir.


### 35 Ders 2. Önemli Bilgi

❗❗❗ **Value Category**: C standardında bu terim kullanılmasa da C++ standardı bu terim kullanılıyor ve ifadelerin **value category** değerlerinin ne olduğu o ifadelerin hangi işlemlerde kullanılabileceğini belirliyor, bellekte bir yazılımsal varlığa erişilebilmesini sağlayacak olan ifadeler **L-value**, tam tersi bir nesneye erişim sağlamayan ifadeler **R-value** ifadelerdir.
- **Adres operatörü(`&`)** ile oluşturulan tüm ifadeler **R-value** grubuna dahildir.
- Tüm değişken adları **L-value** grubuna dahildir.
- **Dereferencing(içerik) operatörü(`*`)** ile oluşturulan tüm ifadeler **L-value** grubuna dahildir.

❗❗❗ 👇 Aşağıdaki programda ifadelerin türleri ve **value category** değerlerinin ne olduğu incelenebilir, buradaki bilgiler iyi bilinmelidir yoksa konularda ilerlenemeyecektir.
```C
#include <stdio.h>

int main(void)
{
    int x = 10;
    int* p = &x;
    int** ptr = &p;

    /*

    ifade   Type    Value
    x       int     L
    &x      int*    R
    p       int*    L
    *p      int     L
    &p      int**   R
    ptr     int**   L
    *ptr    int*    L
    **ptr   int     L
    &ptr    int***  R
    
    */
}
```

### 35 Ders 3. Önemli Bilgi

❗❗❗ Aşağıdaki program bu dersin en zorlayıcı bilgilerini içeriyor, dikkatli incelenmelidir. </br>
👇 Aşağıdaki programdan bir dizinin hem en büyük hem de en küçük elemanını geriye döndüren fonksiyonun nasıl yazıldığı incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "nutility.h"

#define SIZE 20

// 'get_array_min_max' fonksiyonu dışarıdan alacağı tam 
void get_array_min_max(const int* pa, size_t size, int** ptrmin, int** ptrmax)
{
    // Dizinin en küçük elemanının adresini *ptrmin değişkenine yaz.
    // Dizinin en büyük elemanının adresini *ptrmax değişkenine yaz.
    *ptrmin = *ptrmax = (int*)pa;

    for(size_t i = 0; i < size; ++i){
        if(pa[i] < **ptrmin){
            *ptrmin = (int*)(pa + i);
            //*ptrmin = &pa[i];
        }
        else if(pa[i] > **ptrmax){
            *ptrmax = (int*)(pa + i);
            //*ptrmax = &pa[i];
        }
    }
}

int main(void)
{
    int ar[SIZE];

    randomize();
    set_array_random(ar, SIZE);
    print_array(ar, SIZE);

    int* pmin;
    int* pmax;

    get_array_min_max(ar, SIZE, &pmin, &pmax);

    printf("min = %d, indeks = %d\n", *pmin, pmin - ar);
    printf("max = %d, indeks = %d\n", *max, max - ar);

    swap(pmini, pmax);
    print_array(ar, SIZE);
}
```


### 35 Ders 4. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda yazıları tutan dizilerle pointer değişken ve pointer ifadelerin kullanımları incelenebilir, bu programdaki bilgiler önemlidir ve iyi anlaşılmalıdır.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "nutility.h"

int main(void)
{
    // 'p' değişkeninin türü 'char*[5]'tir. 'p' ifadesinin çoğu yerde 'array decay'den dolayı '&p[0]' olarak yorumlanır ve bu ifadenin türü de 'char**' türüdür.
    char* p[] = { 
        "ozan", "fersen", "zerpin", "necati", "cavzen", "aypar" 
    };

    puts(p[0]); // Burada ekrana dizinin ilk char dizisini yazar.
    puts(&p[0]); // Buradaki kod hatalıdır, 'ub' vardır çünkü '&p[0]' demek 'p' dizisinin ilk elemanının adresi demek ve o adreste 'string literal' bir varlığın ilk adresi değer olarak bulunuyor.
    
    puts(p); // Bu işlem 'ub' durumuna neden olur. 'p' dizi adı olduğu için derleyici 'array decay' ile '&p[0]' olarak yorumlanacaktır, fakat 'p' değişkeni bir 'char*' türünden elemanları olan pointer dizi olduğu için '&p[0]' ifadesinin 'puts' fonksiyonuna geçilmesi tanımsız davranıştır.
    puts(*p); // Bu kod legal ve geçerlidir, standart çıktı akımına 'p' dizisinin ilk elemanı olan yazı gönderilir.
}
```

❗❗❗ 👇 Aşağıdaki programda yazıları tutan dizilerle ilgili **pointer to pointer** kullanımı incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "nutility.h"

void print_names(char** pa, size_t size)
{
    for(size_t i = 0; i < size - 1; ++i){
        printf("%c\n", *pa[i]); // Burada yazı dizisinin her bir elemanının ilk karakteri yazdırılır. 
        printf("%s\n", pa[i]); // Burada yazı dizisinin her bir elemanı yazdırılır.
    }

    // Aşağıdaki döngü yukarıdaki döngü ile aynı verileri yazdırmaktadır.
    for(size_t i = 0; i < size - 1; ++i){
        putchar(*pa[i]); // Burada yazı dizisinin her bir elemanının ilk karakteri yazdırılır. 
        putchar('\n');
        puts(pa[i]); // Burada yazı dizisinin her bir elemanı yazdırılır.
    }
}

int main(void)
{
    char* p[] = { 
        "ozan", "furkan", "zeynep", "necati", "cavit", "ayhan" 
    };

    print_names(p, asize(p));
}
```


### 35 Ders 5. Önemli Bilgi

❗❗❗ **const** anahtar sözcüğü neyden önce gelirse **const** olan odur. 
- `int * const p = &x;` burada **const** anahtarı `p` değişkeninden önce geliyor ve bu bildirim **const pointer to int** olarak adlandırılır, bu durumda `p` pointer değişkeninin adres değeri değiştirilmesi **sözdizim hatasına(syntax error)** neden olur ama `*p` ifadesine atama işlemi yapılırsa **sözdizim hatası(syntax error)** olmaz.
- `int const * p = &x;` ya da `const int * p = &x;` burada **const** anahtarı `*p` den önce geliyor ve bu bildirim **pointer to const int** olarak adlandırılır. bu durumda `p` pointer değişkeninin adres değerinin değiştirilmesi **sözdizim hatası(syntax error)** değildir ama `*p` ifadesine atama işlemi yapılırsa **sözdizim hatası(syntax error)** olur.
- `const int * const p = &x;` ya da `int const * const p = &x;` birdiriminda hem `p` hem de `*p` ifadelerine değer atanması **sözdizim hatası(syntax error)** olacaktır.

❗❗❗ 👇 Aşağıdaki programda pointer değişkenlerin **const** bildirilmesi durumları incelenebilir, buradaki bildirimleri anlamak önemlidir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include "nutility.h"

int main(void)
{
    int x = 19;
    int y = 37;
    int* p1 = &x;
    int* p2 = &y;

    int** ptr1 = &p1; 

    // Aşağıdaki atamaların hiçbirinde sözdizim hatası(syntax error) yoktur
    ptr1 = &p2; // Legal atama işlemi.
    *ptr1 = &y; // Legal atama işlemi.
    **ptr1 = 98; // Legal atama işlemi.


    int** const ptr2 = &p1; // Burada 'ptr2' pointer değişkeni 'const' bildiriliyor.

    ptr2 = &p2; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.
    *ptr2 = &y; // Legal atama işlemi.
    **ptr2 = 98; // Legal atama işlemi.


    int* const * ptr3 = &p1;

    ptr3 = &p2; // Legal atama işlemi.
    *ptr3 = &y; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.
    **ptr3 = 98; // Legal atama işlemi.


    int const ** ptr4 = &p1;

    ptr4 = &p2; // Legal atama işlemi.
    *ptr4 = &y; // Legal atama işlemi.
    **ptr4 = 98; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.

    const int** ptr5 = &p1;

    ptr5 = &p2; // Legal atama işlemi.
    *ptr5 = &y; // Legal atama işlemi.
    **ptr5 = 98; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.

    const int* const * const ptr6 = &p1;

    ptr6 = &p2; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.
    *ptr6 = &y; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.
    **ptr6 = 98; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.

    const int* const * const ptr7 = &p1;

    ptr7 = &p2; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.
    *ptr7 = &y; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.
    **ptr7 = 98; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.

    int const * const * const ptr8 = &p1;

    ptr8 = &p2; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.
    *ptr8 = &y; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.
    **ptr8 = 98; // Bu atama işleminde sözdizim hatası(syntax error) oluşur.
}
```


### 35 Ders 6. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda "**Bir fonksiyonun parametresi dizi olamaz.**" cümlesinde belirtilen ifadenin doğruluğu incelenebilir, aşağıdaki programı derleyip çalıştırarak inceleme yap.
```C
#include <stdio.h>
#include <string.h>
#include "nutility.h"

// Aşağıdaki fonksiyon bildirimlerinin hepsi aynıdır, C dilince diziler 'array-decay' işlemine tabi olacağı için bir fonksiyonun parametresi dizi olamaz.
void foo1(int* p);
void foo2(int p[]);
void foo3(int p[10]);

void foo(int p[10])
{
    printf("sizeof(a) = %zu", sizeof(a)); // Burada 'sizeof(a)' değeri fonksiyonun 'int p[10]' olarak bildirilen parametresinin türünü pointer olduğu için programın derleneceği donanımın adres kapasitesine uygun değeri ekrana yazacaktır.
}

int main(void)
{
    int a[10]  = { 0 };

    printf("sizeof(a) = %zu", sizeof(a));

    foo(a);
}
```

❗❗❗ 👇 Aşağıdaki programda "**Bir fonksiyonun parametresi dizi olamaz.**" cümlesinde belirtilen ifadenin doğruluğu incelenebilir
```C
#include <stdio.h>
#include <string.h>
#include "nutility.h"

// Aşağıdaki fonksiyon bildirimlerinin ikise de aynıdır.
void foo1(int** p);
void foo2(int* p[]);


void foo(int p[])
{
    printf("sizeof(a) = %zu", sizeof(a));
}

int main(void)
{
    int a[10]  = { 0 };

    printf("sizeof(a) = %zu", sizeof(a));

    foo(a);
}
```


### 35 Ders 7. Önemli Bilgi

❗❗❗ C ve C++ dillerinde `void` bir türdür(void is a type) ama bir değeri olmayan türdür.

❗❗❗ `void` bir değişkenin türü olamaz ama `void` bir ifadenin türü olabilir. C++ dilinde daha önemli bir yeri vardır.


### 35 Ders 8. Önemli Bilgi

❗❗❗ Derleyicilerin bakış açısından türler iki öbeğe ayrılmaktadır, bu öbekler aşağıdaki gibidir(bu konu detaylı olarak bir ay sonra işlenecekmiş);
1. **Complate Type(Eksik olmayan, Tamamlanmış tür)**
2. **Incomplate Type(Tamamlanmamış, Eksik olan tür)**

❗❗❗ Dilin kuralı şudur: "**Incomplate**" türlerden değişken tanımlanamaz yani tanımlanan bir değişkenin türü "**Incomplate Type**" olamaz. </br>
❗❗❗ `void` türü **incomplate** bir türdür ama tek **incomplate** tür `void` türü değildir, ileride bu konu detaylı işlenecekmiş.


### 35 Ders 9. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda `void` türünün fonksiyon bildirimlerinde iki farklı kullanımı incelenebilir. </br>
C dilinin ilk zamanlarında `void` türü yoktu bu nedenden dolayı fonksiyon bildirimlerinde parametre olmadığında boş bırakılıyordu ve fonksiyon çağrılarının doğru yapılma sorumluluğu programcıya bırakılıyordu.
```C

// Aşağıdaki iki farklı fonksiyon bildirimi aldığı parametre ve geri dönüş değeri açısından C++ dili için aynı anlama gelirken C dili için aynı anlama gelmemektedir.
void foo(); // Buradaki bildirim C dilinde geriye doğru uyumluluktan dolayı 'foo' fonksiyonunun parametre değişkeni konusunda bilgi vermiyorum anlamına geliyor ve burada C dili için 'implicit int(gizli int)' vardır.
void bar(void);

int main(void)
{
    foo(1, 3, 44); // Bu fonksiyon çağrısında C derleyicisi uyarı vermez ama C++ derleyicisi uyarı verir.

    bar(3, 5); // Burada C ve C++ diline derleyici uyarı verecektir.
}
```


### 35 Ders 10. Önemli Bilgi

❗❗❗Aşağıdaki bilgiler önemlidir;
- `void` türü ile `void*` birbirinden faklıdır, `void*` türünden bir değişken tanımlanabilir, `void*` türü bir **object pointer** türüdür. </br>
- `void*` pointer türü herhangi bir türden değişkenin adresini değer olarak alabilir, kısaca ne tür adres olursan ol gel diyor 😊.
- `void*` pointer `*` ve `&` operatörlerinin operandı olamaz. </br>
- `void*` pointer türünden nesneler ile poiner aritmetiği yapılamaz. </br>
- `sizeof` operatörünün operandı sadece **complate type** olabilir bu nedenle de `void` türü `sizeof` operatörünün operandı olamaz.


### 35 Ders 11. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda `sizeof` operatörünün operandının `void` türü olamayacağı esasen `sizeof` operatörünün operandının herhangi bir **incomplate type(tamamlanmamış, eksik olan tür)** olamaz ve farklı pointer türlerinin byte değerlerinin ne olduğu incelenebilir.
```C
#include <stdio.h>

int main(void)
{
    //size_t sz1 = sizeof(void); // Burada sözdizim hatası(syntax error) oluşur.

    printf("sizeof(int*) = %zu\n", sizeof(int*));
    printf("sizeof(double*) = %zu\n", sizeof(double*));
    printf("sizeof(double****) = %zu\n", sizeof(double****));
    printf("sizeof(void*) = %zu\n", sizeof(void*));
}
```


### 35 Ders 12. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda `void*` türünün adres türü tuttuğu incelenebilir ama `void*` türünden değişkenler ne tuttuklarını bilmez, tutulan türü anca programı yazan **_bilinçli bir varlık_** bilebilir.
```C
#include <stdio.h>

int main(void)
{
    int x = 23;
    void* vptr = &x; // Burada 'vptr' varlığının
    
    printf("&x = &p\n", &x);
    printf("vptr = &p\n", vptr);
}
```

### 35 Ders 13. Önemli Bilgi

❗❗❗ `void*` türüyle ilgili C ve C++ dillerindeki ortak ve farklı kurallar iyi bilinmelidir;
- C ve C++ dillerinde herhangi bir adres türü `void*` türüne örtülü olarak dönüşebilir yani konunun başında belirtildiği gibi `void*` türden bir değişkene herhengi bir türden nesnenin adresi açık şekilde tür dönüşümü yapmadan atanabilir.
- `void*` türünden herhangi bir adres türüne örtülü tür dönüşümü C dilinde vardır ama C++ dilinde yoktur, yapıldığında **sözdizim hatasıdır(syntax error)**.


### 35 Ders 14. Önemli Bilgi

❗❗❗ C dilinde bir pointer türünden başka bir pointer türüne örtülü olarak tür dönüşümü yapmak(mesela `int*` türünden `double*` türüne atama yapmak) yanlış bir işlemdir ama C dilinde bu tür bir işlem legaldir(sözdizim hatasına neden olmaz) ama yapılmamalıdır.


### 35 Ders 15. Önemli Bilgi

❗❗❗ `void*` türü genellikle **generic function** larda kullanılan bir türdür, bir fonksiyonun birden fazla türe hizmet vermesi isteniyorsa(birden fazla farklı türden argümanlarla çağırılabilmesi isteniyorsa) o fonksiyonun bir ya da daha fazla argümanı `void*` türünden olmalıdır.


### 35 Ders 16. Önemli Bilgi

❗❗❗ C standardı şunu açıkça belirtiyor, herhangi bir adres türünden `char*` türüne tür dönüşümü yapılabilir, bu işlem bir istisnadır zaten bu istisna üzerine C dilinde "**Generic Programing**" yaklaşımı inşa ediliyor.


## 36.Ders

### 36 Ders 1. Önemli Bilgi

❗❗❗ Primitive türden nesnelerin(pointer nesnelerde bu gruba dahildir) bellek bloklarının byte byte o nesnenin bir yerden başka yere kopyalanması işlemi her zaman doğru çalışacaktır ama **user defined type** varlıklar ile çalışırken böyle bir kesinlik yoktur.

❗❗❗ **Generic Function**'ların `void*` türünden parametreleri tanımsız davranış riski olmadan `char*`, `signed char*`, `unsigned char*` türlerine dönüştürülerek kullanılabilir.


### 36 Ders 2. Önemli Bilgi

❗❗❗ **To Clear a Memory Block**: Bir bellek bloğunun tüm bitlerinin sıfır yapılmasıdır. Bu işlemi yapmak için `memset` fonksiyonu kullanılabilir.


### 36 Ders 3. Önemli Bilgi

⚠️⚠️⚠️ `const Type` türünden `Type` türüne yapılan açıktan(explicit) tür dönüşümleri doğrudan **ub** değildir, **ub** olması için tür dönüşümü yapılan `const` nesnenin değerinin değiştirilmesi gerekir.


### 36 Ders 4. Önemli Bilgi

❗❗❗ `memcmp` fonksiyonu ile tek byte'a sığan karakter kodlamalarında yapılan karşılaştırmalar "**lexicographical compare**" yöntemine göre yapılacaktır.


### 36 Ders 5. Önemli Bilgi

❗❗❗ **void pointers** konusundan sonra işlenecek olan **function pointers** konusu C'nin en önemli bir kaç aracından biri olmasının dışında programlama dillinden bağımsız olarak tüm programlama dilleri için çok önemli bir araçtır. **Function pointers** aracı kullanılarak bir fonksiyon başka bir fonksiyona bir fonksiyon gönderebilir. Bir fonksiyon bir fonksiyonun çağıracağı fonksiyonu o fonksiyona geçeceği bir **function pointer** argümanla belirleyebilir.

🧠 **Callback Function**: Programlama dilinden bağımsız olarak kullanılan bir terimdir, bu terim bir fonksiyon bir fonksiyonun çağıracağı fonksiyonu o fonksiyona geçeceği bir **function pointer** argümanla belirleyebildiği durumu ifade etmektedir.

🚀 **Callback function** aracı ile bir fonksiyonun bir fonksiyona bir fonksiyon göndermesi çok sık kullanılmaktadır, hemen hemen her programda özellikle de gömülü sistem programlamada çok sık kullanılan araçlardandır.


### 36 Ders 6. Önemli Bilgi

❗❗❗ Pointer'lar konusu "**Object Pointers**" ve "**Funciton Pointers**" olarak ikiye ayrılmaktadır, biz buraya kadar sadece "**Object Pointers**" konusuyla ilgili konuları gördük, bir sonraki hafta "**Funciton Pointers**" konusuna geçilebilecek ve bu konu aşağı yukarı 5 saat kadar sürecektir.

❗❗❗ Adres değer tutan değişkenler pointer değişkenlerdir, özel olarak bir fonksiyonun adresini tutan değişkenler "**funciton pointer**" türünden değişken olarak adlandırılıyor.

❗❗❗ `qsort` fonksiyonu türden bağımsız olarak yani generic olarak sıralama yapan `stdlib.h` başlık dosyasında yer alan standart bir C fonksiyonudur, bu fonksiyon çok sık kullanılmaktadır.


### 36 Ders 7. Önemli Bilgi

❗❗❗ **void pointer** türüyle ilgili aşağıdaki bilgiler bilinmelidir;
- `void*` herhangi türden bir adres tutan bir pointer değişkendir.
- `NULL` değer alabilir. 
- `void*` bir tür olduğu gibi `const void*` türü de vardır.
-  Adres döndüren bir fonksiyonun geri dönüş türü `void*` türü olabilir.
- Dinamik bellek yönetiminde kullanılacak fonksiyonlarının(`malloc`, `calloc` vb.) geri dönüş türü `void*` türüdür.
- Sistem programlama tarafında(Unix/Linux, Windows sistem programlamada) kullanılan fonksiyonların çoğunun geri dönüş türleri `void*` türüdür.

⚠️ **void pointer** arada sırada kullanılan bir araç değildir neredeyse her C programında kullanılmaktadır. 


### 36 Ders 8. Önemli Bilgi

❗❗❗👇 Aşağıdaki programda `void**` türüne değer atamayla ilgili doğru ve yanlış atama işlemleri incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include "nutility.h"

#define SIZE    100

int main(void)
{
    int x = 5;
    double dval = 3.534;
    int* ptr = &x;
    void* vptr = &x;
    void** vp = &vptr;

    // '*vp =' demek 'vptr =' demektir.
    *VP = &dval; // Buradaki atama doğrudur çünkü atama 'vptr' türüne yapılmaktadır ve 'void*' türü herhangi bir türden adresi tutabilir.


    //void** vptr = &x; // Buradaki ilk değer verme işlemi yanlıştır çünkü 'void**' türü sadece 'void*' türünden nesnelerin adreslerini tutabilir, C++ dilinde sözdizim hatasıdır(syntax error).
    //void** vptr = &dval; // Buradaki ilk değer verme işlemi yanlıştır çünkü 'void**' türü sadece 'void*' türünden nesnelerin adreslerini tutabilir, C++ dilinde sözdizim hatasıdır(syntax error). 
    void** vptr = &vp;
}
```


### 36 Ders 9. Önemli Bilgi

❗❗❗ `void**` türünden bir değişken sadece `void*` türünden bir değişkenin adresini tutmak için kullanılıyor bundan başka hiç bir amacı yoktur ama `void**` türünün bir çok kullanım alanı vardır.


### 36 Ders 10. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki program `void**` türünden bir değişkenin hangi değerleri tutup hangilerini tutamayacağını anlamak için incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdlib.h>
#include <stdio.h>
#include "nutility.h"

#define SIZE    100

int main(void)
{
    int* p1 = NULL;
    double* p2 = NULL;
    void* vp = NULL;
    void** vptr = NULL;
    int** iptr = NULL;

    void* p;
    int x = 5;
    ++x;

    // Aşağıdaki atamaların hepsi doğrudur;
    p = p1;
    p = &p1;
    p = p2;
    p = &p2;
    p = vp;
    p = &vp;
    p = vptr;
    p = &vptr;
    p = iptr;
    p = &iptr;
    p = &p;


    void** px;
    int x = 5;
    ++x;

    // Aşağıdaki atamaların sadece iki tanesi doğrudur gerisi hatalıdır;
    //px = p1;
    //px = &p1;
    //px = p2;
    //px = &p2;
    px = vp; // Bu atama doğrudur.
    px = &vp; // Bu atama doğrudur.
    //px = vptr;
    //px = &vptr;
    //px = iptr;
    //px = &iptr;
    //px = &px;
}
```


### 36 Ders 11. Önemli Bilgi

❗❗❗ Bir fonksiyonun geri dönüş değerinin türü farklı(fonksiyon çağrısının türü de diyebiliriz), bir fonksiyonun kendi türü farklı, bir fonksiyonun adresinin türü farklı şeylerdir! 


## 37.Ders

### 37 Ders 1. Önemli Bilgi

❗❗❗ Bir dil ne kadar düşük seviyeli olursa olsun en nihayetinde bir soyutlamadır ve o programlama dilini kullanan programcıyı belirli seviyelerde donanımdan soyutlar. 
- **Function pointer** değişkenleri ya da **fonksiyon adresleri** şöyle düşünülmelidir: Fonksiyonların derlenmiş kodu çalışma zamanında bir yer kaplamaktadır yani bir fonksiyonun derlenmiş kodu demek o fonksiyon çağırıldığında yürütülecek makine komutları demektir. 
- Bir fonksiyonun programın çalışma zamanında çağırılması için fonksiyonun makine komutlarının bellekte bir yere yüklenmesi gerekiyor, işte fonksiyonun adresi o fonksiyon çağırıldığında çalıştırılacak olan makine komutlarını içeren bellek adresidir.


### 37 Ders 2. Önemli Bilgi

❗❗❗ **Function pointer array** değişkenler sıklıkla "**Jump Table**" yapılarında kullanılmaktadır. </br>
**Lookup Table**: Bir veri sonucunu yeniden hesaplamak yerine sabit zamanda almak için kullanılır. Mesela faktoriyel değerlerini bir kere hesaplayıt bir **lookup table** içinde saklayabiliriz. </br>
**Jump Table**: Sabit zamanda farklı kod bloklarına atlayabilmek için fonksiyon adreslerini ya da etiketleri(label) tutmak için kullanılır.


## 38.Ders

### 38 Ders 1. Önemli Bilgi

❗❗❗ Bu konuda en güzel cümle şudur "Başlık **Çok Boyutlu Diziler**, C dilinde çok boyutlu dizi yoktur". Elemanı dizi olan dizilere çok boyutlu diziler denilmektedir, her ne kadar çok boyutlu dizi dense de gerçekte donanım üzerinde tek boyutlu dizi olarak tutulmaktadır.


### 38 Ders 2. Önemli Bilgi

❗❗❗ Bir dizinin türü ne olursa olsun(burada dizinin boyutunun ne olduğunun önemi olmadığı vurgulanıyor) o dizinin elemanları bellekte ardışık olarak sıralanacaktır.


### 38 Ders 3. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda tek boyutlu bir dizinin adı üzerinden oluşturulan ifadelerin türlerinin ne olacağı incelenebilir. Buradaki bilgilerin bilinmesi önemlidir.
```C
#include <stdio.h>
#include "nutility.h"

int main(void)
{
    int a[5] = { 10, 20, 30, 40, 50 };

    int (*p)[5] = &a; // Buradaki 'p' göstericisinin türü 'int(*)[5]' türüdür.

    // 'a' değişkeninin türü 'int[5]' türüdür.
    // 'a' ifadesinin türü 'array decay'den dolayı 'a' ifadesi '&a[0]' ifadesine çevrileceğinden ve bu ifadenin de türünün 'int*' olmasından dolayı 'int*' türüdür.
    // '&a' ifadesinin türü 'int (*)[5]' türüdür.

    // '*p' ifadesi 'a' ifadesine eşittir ve '*p' ifadesi üzerinden 'a' dizisi gezilebilir. 
    for(int i = 0; i < 5; ++i){
        printf("%d ", (*p)[i]); // Burada '*p' ifadesinin paranteze alınmasının nedeni '[]' operatörünün 'dereferencing' operatötünden daha yüksek önceliğe sahip olmasıdır, '*p[i]' böyle yazarsak derleyici '*(p + i)' olarak yorumlayacaktır ama biz bunu istemiyoruz ve bu 'ub' durumuna neden olur.
    }
}
```


### 38 Ders 4. Önemli Bilgi

🧠 `int ary[5][10][20];` olarak `ary` adında bir üç boyutlu dizi tanımlanabilir, `ary` dizisi `int[5][10][20]` türündendir, `ary` dizisinin elemanları `int[10][20]` türündendir, `ary` dizisinin elemanlarının elemanları `int[20]` türündendir, `ary` dizisinin elemanlarının elemanlarının elemanları `int` türündendir.


## 39.Ders

### 39 Ders 1. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda elemanları **string literal** olan ve olmayan dizi tanımları incelenebilir, aradaki farkın çok iyi anlaşılması gerekmektedir.
```C
#include <stdio.h>
#include "nutility.h"

void foo(void)
{
    // Aşağıdaki dizideki yazılar değiştirilemez ve program boyunca bellekte kalacaktır. Bu dizinin elemanı olan yazılar 'string literal'dir.
    char *p[] =  {  
        "refika", "remeysa", "rupen", "saadet", "sabriye", "sade", "sadegul", "sadettin", "sadi", "sadiye", 
        "hakki", "haldun", "halime", "haluk", "handan", "hande", "handesu", "hasan", "helin", "hikmet",
        "necmiye", "nedim", "nefes", "nevsin", "nihal", "nihat", "nisan", "niyazi", "nurdan", "nuri",
        "ali", "alican", "alparslan", "anil", "arda", "asim", "askin", "aslican", "aslihan", "ata",  
    };

    // Aşağıdaki dizideki yazılar değiştirilebilir. Bu dizinin elemanı olan yazılar 'string literal' değildir.
    char s[][20] = {  
        "refika", "remeysa", "rupen", "saadet", "sabriye", "sade", "sadegul", "sadettin", "sadi", "sadiye", 
        "hakki", "haldun", "halime", "haluk", "handan", "hande", "handesu", "hasan", "helin", "hikmet",
        "necmiye", "nedim", "nefes", "nevsin", "nihal", "nihat", "nisan", "niyazi", "nurdan", "nuri",
        "ali", "alican", "alparslan", "anil", "arda", "asim", "askin", "aslican", "aslihan", "ata",  
    };
}

int main(void)
{
    for(size_t i = 0; i < asize(s); ++i){
        //puts(s[i]);
        printf("%s ", s[i]);
    }
}
```


## 40.Ders

### 40 Ders 1. Önemli Bilgi

❗❗❗ Derleyici `main` fonksiyonunda kullanılan `return` statement'ı `exit` fonksiyonuna çağrı yapan koda dönüştürür, `return 0;` deyimi `exit(0);` deyimine, `return 234;` deyimi `exit(234);` deyimine derleyici tarafından dönüştürülür.


### 40 Ders 2. Önemli Bilgi

❗❗❗ `exit` fonksiyonu process'i hemen sonlandırmıyor, bazı garantiler vererek sonlandırıyor. `exit` fonksiyonu ile çalışan program "**Normal Termination**" olarak sonlandırılıyor ve bir de `abort` fonksiyonu ile çalışan program "**Abnormal Termination**" olarak sonlandırılıyor. </br>
`exit` fonksiyonunun verdiği garantiler aşağıdaki gibidir;
- Açık olan dosyalar kapatılmadan önce dosyaların buffer'larının dosyaya yazılması garantisi(bu konuyu dosya işlemlerinde göreceğiz, henüz görmedik).
- Asıl önemli olan garanti ise, daha önceden process sonlanmadan önce belirli sırayla cağırılması istenildiği bildirilen bazı fonksiyonlara çağrı yapıldıktan sonra çalışan programın sonlandırılması garantisidir, çağrılacak fonksiyonların neler olduğu `atexit` fonksiyonu ile belirlenmektedir.


### 40 Ders 3. Önemli Bilgi

❗❗❗ `exit` fonksiyonu kendisine çağrı yapıldığında process'i sonlandıracaktır ama `atexit` fonksiyonu kullanarak çağırılması istenilen fonksiyonlar belirtilmişse, sırasıyla o fonksiyonlar çağırıldıktan(çağırma işlemi stack veri yapısına göre yapılmaktadır) sonra process sonlandırılacaktır.

❗❗❗ `atexit` fonksiyonu yazılmış programın ihtiyaçlarına göre(mesela ) process `exit` fonksiyonu ile sonlanmadan önce çağrı yapılması istenilen fonksiyonların son kaydedilenden ilk kaydedilene doğru çağrılması için kullanılmaktadır.

❗❗❗ Bir çok program çalıştığı donanım üzerinde bazı kaynaklar kullanır ve bu kaynakları program sonlanmadan önce geri iade etmesi gerekiyor bunu yapabilmek için `atexit` ve `exit` fonksiyonu birlikte kullanılmaktadır. </br>
Peki bu yapı nasıl çalışıyor diye düşünülürse, bu tür temalarda global bir **function pointer array** kullanılıyor, `atexit` fonksiyonuna çağrı yapıldığında geçilen fonksiyon adresi bir **function pointer array**'de tutuluyor `exit` fonksiyonuna çağrı yapıldığında process sonlandırılmadan önce o **function pointer array**'de tutulan fonksiyonlara çağrı yapılıyor, bu önemli bir garanti.


### 40 Ders 4. Önemli Bilgi

🧠 **Dynamic life time(Dinamik ömür)** ile **dynamic memory managament(dinamik bellek yönetimi)** konularını birbirine karıştırmak sık karşılaşılan bir durumdur.

❗❗❗ **Dinamik ömürlü** nesneler için **memory allocation** işleminin yapılması yani **nesnelerin(object)** ihtiyacı olan bellek alanının elde edilmesi işlemine ve bu bellek alanı kullanıldıktan sonra sisteme geri verilmesi süreçlerine **dynamic memory managament(dinamik bellek yönetimi)** deniliyor.


### 40 Ders 5. Önemli Bilgi

❗❗❗ C dilinde **Heap** ve C++ dilinde **Free Storage** olarak adlandırılan bellek alanında(bellek segmenti) **dinamik ömürlü** değişkenler tutulmaktadır.


### 40 Ders 6. Önemli Bilgi

❗❗❗ C standardı donanımla ilgilenmez sadece bir soyut makine üzerinde C programının nasıl çalışacağından bahseder(ilgilenir), C programının hangi donanım üzerinde çalışacağıyla C standardı ilgilenmez.
- C programının üzerinde çalışacağı zahiri donanıma **C Abstract Machine** deniliyor.
- C++ programının üzerinde çalışacağı zahiri donanıma **C++ Abstract Machine** deniliyor.

❗❗❗ Bir dilin standardı kuralları belirtir, sağlanması gereken koşulları belirtir ve oluşması gereken sonuçları belirtir. C standardında "**Stack**" ya da "**Heap**" diye bir terim geçmemektedir, bu terimler işletim sistemiyle ilgili terimlerdir, ayrıca bir C programının bir işletim sistemi üzerinde çalışması gibi bir zorunluluk yoktur.


### 40 Ders 7. Önemli Bilgi

⚠️ Kursun bu anına kadar **dinamik ömürlü** nesnelere hiç değinilmedi, bu derle birlikte **dinamik ömürlü** nesnelerle tanışacağız.

❗❗❗ **Dinamik ömürlü** nesnelerin maliyeti **otomatic ömürlü** nesnelerin maliyetinden çok daha yüksektir. </br>
⚠️ Verim kritik bir uygulamada **otomatic ömürlü** nesnelerin kullanılması yerine **dinamik ömürlü** nesnelerin kullanılması programın çalışma anındaki işlem maliyetini kat ve kat arttıracaktır. </br>
❗❗❗ **Otomatic ömürlü** nesneler için bellekte ayrılan alanın geri verilmesi için programcının bir işlem yapmasına gerek yok fakat **dinamik ömürlü** nesnelerin hayatının bitirilmesi programcının sorumluluğundadır, bu yönüyle **dinamik ömürlü** nesneleri doğru şekilde kullanabilmek önemlidir. </br>
❗❗❗ **Garbage Collection** sürecini yöneten yapıya **Garbage Collector** denilmektedir. **Garbage Collection** aracı olan bir programlama dilinin çalışma maliyeti yüksektir bu nedenle bu yapıya sahip diller genellikle verim kritik domain'lerde kullanılmaz. **Garbage Collector** aracı olan dillerde prpgramın içine gömülü olarak gelen ayrı bir **threed** üzerinde çalışan yapı belirli sürelerde artık referans edilmeyen **dinamik ömürlü** nesnelerin hayatlarını sonlandırmaktadır. </br>
C ve C++ dillerinde **Garbage Collection** süreci için hazır bir araç yoktur(istenirse yazılabilir tabi).

🧠 C#, Java gibi diller programcının üretkenliğini yüksek tutma üzerine tasarlanmışken, C ve C++ gibi diller sistem kaynaklarının verimli kullanılması üzerine tasarlanmış dillerdir.

⚠️ **Dinamik ömürlü** nesneleri kullanmak ayrılan sistem kaynaklarının geri iade edilmesinin programcıya bırakılmasından dolayı programcı açısından daha zordur ve maliyeti **otomatik ömürlü** nesneleri kullanmaya göre daha maliyetlidir.


### 40 Ders 8. Önemli Bilgi

❗❗❗ Öyle durumlar var ki ne **otomatic** ömürlü nesne ne de **static** ömürlü nesne işimizi görmeyecektir, bu durumlarda mecburen **dinamik ömürlü** nesneleri kullanmak gerekiyor;
- Çalışan programda bir diziye(array) ihtiyacımız var ama dizinin boyutsaunun programın çalışma zamanında belli olduğu durumlarda **dinamik ömürlü** nesnelerin kullanılması gerekecektir.
- Bazen bir nesnenin türünün bile çalışma zamanında belirlendiği durumlar vardır, bu gibi durumlarda bellekten ayrılması gereken alanın genişliğini belirlemek için **dinamik ömürlü** nesnelerin kullanılması gerekecektir.
- Veri yapılarını kullanırken kullanılan veri yapısının bellek ihtiyacı değişken boyutlu olduğunda **dinamik ömürlü** nesnelerin kullanılması gerekecektir. Mesela "**Linked List Data Structor**" veri yapısında düğüm sayısı değişken olacaktır, bu gibi değişken boyutlu bellek alanları gerekli olduğunda **dynamic storage duration** nesneleri kullanırız.


### 40 Ders 9. Önemli Bilgi

❗❗❗ Neden **dynamic storage duration** nesneleri kullanırız diye sorulursa;
- Bunun nedeni çoğu zaman mecburiyettir, yapılmak istenilen işlemi başka bir araç ile yapamadığımız için **dinamik ömürlü** nesneleri kullanırız.
- Bazen de çoğunlukla işletim sisteminin parametrelerine bağlı(bazen ise donanıma bağlı) olarak **otomatic ömürlü** nesnelere ayrılan bellek alanının(**Stack**), **dinamik ömürlü** nesnelere ayrılan bellek alanından(**Heap**) daha küçük olması ve oluşturulmak istenilen nesne için **otomatik ömürlü** bir nesnenin kullanılamıyor olmasıdır.


### 40 Ders 10. Önemli Bilgi

❗❗❗ Taşınabilirlik bir yere kadar çünkü standart C fonksiyonları işletim sistemine bir bağımlılık varsa o noktada bir soyutlama yapıyorlar fakat bazı işlemlerin standart C fonksiyonu olarak karşılığı yok, C programının ne olduğuna ve ne iş yaptığına bağlı olarak bazı durmlarda işletim sisteminin sistem fonksiyonlarını doğrudan çağırmak gerekebilir. </br>
Her şeyi sadece standart C fonksiyonlarına çağrı yaparak mümkün mü düye düşünüldüğünde, belirli programlar için için mümkün ama belirli programlar için bu mümkün değildir. </br>
**Dynamic memory managament(dinamik bellek yönetimi)** işlemlerinin tamamına yakını çok özel bir durum olmadığı müddetçe standart C fonksiyonlarıyla yapılabilir.


### 40 Ders 11. Önemli Bilgi

⚠️ **dynamic memory managament(dinamik bellek yönetimi)** konusu 4-6 saat ya da biraz daha fazla vakit alacak bir konu!

❗❗❗ Dinamik bellek yönetimi ile ilgili kullanılan fonksiyonlar `stdlib.h` başlık dosyasında bulunmaktadır, ve bunlar aşağıdaki gibidir;
- `malloc`: Bu fonksiyonun adı "**Memory Allocation**" sözcüklerinden gelmektedir. Bu fonksiyon ile kullanılabilir bellek bloğunun ayrılır ve bu bloğun başlangıç adresi geriye döndürülür. Ayrılan bellek alanı temizlenmeden(**indeterminate value**) verilmektedir.
- `calloc`: Bu fonksiyonun adı "**Memory Celar Allocation**" sözcüklerinden gelmektedir. `calloc`un `malloc`tan iki farkı vardır,`calloc` tahsis edilen bellek bloğundaki tüm verinin bitlerini "0" yapar. `calloc` eşittir `malloc` + `memset`. `calloc` kısaca cleared `malloc` olarak nitelendirilebilir.
- `realloc`: Bu fonksiyonun adı "**Memory ReAllocation**" sözcüklerinden gelmektedir. Daha önce edinilmiş belllek alanının arttırılıp azaltılması için kullanılan bir fonksiyondur, önceden edinilmiş bir bellek alanını büyütüp/küçültmek için kullanılan bir fonksiyondur.
- `free`: Edinilmiş bellek bloklarının tamamını geri vermek için kullanılır.

❗❗❗ Yukarıda açıklanan dinamik bellek yönetimi için kullanılan dört farklı fonksiyonun kullanımı genellikle şu şekildedir: Dinamik bellek alanına ihtiyaç duyulduğunda `malloc` ya da `calloc` fonksiyonu ile bellek edin, programın çalışma zamanında bellek ihtiyacının değişmesi gerektiğinde `realloc` fonksiyonunu kullan, ayrılmış tüm belleği geri vermek için `free` fonksiyonunu kullan.

🧠 Bir process bir işletim sisteminde hayata geldiğinde işletim sisteminin o process'e ayırdığı bir "**Heap**" ya da "**Free Store**" olarak adlandırılan alanı vardır, **dynamic memory managament(dinamik bellek yönetimi)** process'e ayrılan "**Heap**" alanını ihtiyaca göre kullanıp yönetmeyi ifade eden bir kavramdır.


### 40 Ders 12. Önemli Bilgi

❗❗❗ `malloc` fonksiyonu başarılı olması demek bu fonksiyonun bellekte ayırdığı bellek bloğunun tek parça olarak sıralı olması demektir. `malloc` fonksiyonunun ayırdığı bellek blokları parçalı olamaz, ayrılan bellek bloğunun **yekpare(continuous)** olması zorunludur.


### 40 Ders 13. Önemli Bilgi

❗❗❗ Arka arkaya `malloc` çağırıldığında bellekte ayrılan alanların ardışık olma garantisi yoktur, bu bilgi önemlidir.


### 40 Ders 14. Önemli Bilgi

❗❗❗ **Memory Leak** programın çalışma süresi boyunca programı ilgilendiren bir kavramdır, process sonlandığında ayrılan bellek alanları zaten iade edilmiş oluyor.


### 40 Ders 15. Önemli Bilgi

> Sorulan soru; 
> 
> Global de yapabilir miyiz bu tanımı? </br>
> Anladim, amacim ptr yi baska dosyalarin  kullanimina erişimine sunmaktı. ptr global tanimlayip main icinde malloc ile atama yapamaz miyiz
> 
> Cevap;
> 
> Hayır, bu C dilindeki **sözdizimiyle(syntax)** ilgili bir durumdur. </br>
> C dilinde **static** ömürlü değişkenlere ilk değer veren ifadenin **constant expression** olması gerekiyor yoksa **sözdizim hatası(syntax error)** oluşacaktır. </br>
> C dilinde fonksiyon çağrı ifadedeleri **constant expression** olamıyor. </br>
> İster `malloc` fonksiyonu olsun ister herhangi bir başka fonksiyon olsun, C dilinde bir fonksiyona yapılan çağrı ifadesi **constant expression** değildir. C de **static** ömürlü değişkenlere sabit ifadesiyle ilk değer vermek mecburidir ama C++ dili böyle bir kısıtlama yok.
> 
> 
> 👇 Aşağıdaki programda **static** ömürlü değişkenlere **constant expression** dışında bir ilk değer verildiğinde **sözdizim hatası(syntax error)** oluştuğu incelenebilir, anlamak için programı derlemek gerekebilir. </br>
> [YZ aracının aşağıdaki programı açıklaması incelenebilir](https://chatgpt.com/share/68486f65-99bc-800a-93e0-d53a1e29efe1)
> ```C
> int foo(int);
> 
> int x = 10; // 'x' static ömürlü değişkeni yaşamına '10' sabit değeriyle başlıyor.
> int y = x + 3; // Burada 'y' static ömürlü değişkeninin yaşamına sabit ifade olmayan 'x + 3' ile başlatılmasından dolayı sözdizim hatası(syntax error) oluşur.
> int z = foo(x); // Burada 'z' static ömürlü değişkeninin yaşamına sabit ifade olmayan 'foo(x)' ile başlatılmasından dolayı sözdizim hatası(syntax error) oluşur.
> 
> int main()
> {
>     
> }
> ```
> 
> 
> 👇 Aşağıdaki program çalıştırılarak **file scope** alanında fonksiyon çağrısı yapılamadığı incelenebilir. </br>
> [YZ aracının aşağıdaki programı açıklaması incelenebilir](https://chatgpt.com/share/68487396-3ed4-800a-a7cc-b9f5d2230d8d)
> ```C
> #include <stdio.h>
> #include <stdlib.h>
> 
> int foo(int x)
> {
> 	printf("called foo!\n");
> 	exit(EXIT_SUCCESS);
> 
> 	return x * 2;
> }
> 
> 
> int x = 10;
> 
> foo(x); // Buradaki gibi bir statement yazıldığında bu geçerli bir statement olmayacaktır, C derleyicisi uyarı verebilir ya da bu statement'ı dikkate almadan derleme işlemini yapabilir. C standardında 'file scope'ta sadece declaration(bildirim) ya da  definition(tanımlama) olabileceği belirtilmektedir, fonksiyon çağrısı 'file scope'ta yapılamaz.
> 
> int main(void)
> {
> 	printf("called main!\n");
> }
> ```
> 
> 
> 👇 Aşağıdaki programda C++ dilinde programın `main` fonksiyonundan başlamak zorunda olmadığı görülebilir ama C dili bu programı global alandaki `int g = foo();` **deyiminden(statement)** dolayı çalıştırmayacaktır.
> ```Cpp
> int foo();
> 
> int g = foo();
> 
> 
> int main(void)
> {
>     printf("main called!");
> }
> 
> int foo()
> {
>     printf("foo called!");
>     return 1;
> }
> ```
> 
> C dilinde bir değişkenin aynı projedeki başka bir kaynak dosya tarafından kullanılması isteniyorsa özel olarak `extern` bildirime ihtiyaç vardır. Bu dersin konusu olmadığı için detaya girilmemiştir.


❗❗❗ C dilinde program `main` fonksiyonundan başlamak zorundadır ama C++ dilinde program çalıştırıldığında `main` fonksiyonundan önce başka fonksiyonlar çalışabilir.


## 41.Ders

### 41 Ders 1. Önemli Bilgi

❗❗❗ Programlama dillerinden bağımsız olarak en tehlikeli hata adları birbirine yakın olarak verilmiş olan değişken adlarının karıştırılarak birbirlerinin yerlerine kullanılmasıdır, C dilinde bu hatalarla daha sık karşılaşılmkatadır.

### 41 Ders 2. Önemli Bilgi

❗❗❗ `free` fonksiyonuna **NULL** pointer geçilmesi **ub** değildir, bu işlem bir işe yarıyor mu diye düşünülürse bir işe de yaramamamaktadır, bu işlemin yararı ya da zararı yoktur(bu gibi durumlar programlama dillerinde **no-op** işlem olarak adlandırılır)


### 41 Ders 3. Önemli Bilgi

❗❗❗ `realloc` fonksiyonuyla ilgili aşağıdaki bilgiler önemlidir; </br>
`realloc` fonksiyonunun adı "**Re Allocate**" sözcüklerinden gelmektedir. </br>
`malloc`,`calloc` ya da `realloc` fonksiyonlarıyla edinilmiş bellek alanlarının boyutunun değiştirilmesi için kullanılmaktadır. </br>
`malloc`,`calloc` ya da `realloc` fonksiyonları dışında edinilen bir bellek adresi `realloc` fonksiyonuna geçilirse **ub** durumuna neden olmaktadır. </br>
`realloc` fonksiyonunu başarısız olursa eski bellek bloğunun adresi kullanılabilir durumda kalmaktadır. </br>
`realloc` fonksiyonu ayrılan bellek alanını büyütmek için kullanılıyorsa bellek bloğunu değiştirmeyebilir ya da değiştirebilir, bunun kararına arkada kullanılan algoritma karar verir, biz müdahale edemiyoruz. </br>
`realloc` fonksiyonu bellek alanının boyutunu değiştirdiğinde(arttırdığında ya da azalttığında) eğer bellek bloğunun konumu değiştiriliyorsa, bellek alanındaki byte'ları kopyalama işlemi yapılacaktır. </br>
`realloc` fonksiyonu bellek bloğunu büyüttüğünde büyütülen bellek bloğundaki byte'lar **indeterminate value** durumundadır.


### 41 Ders 4. Önemli Bilgi

❗❗❗ `realloc` fonksiyonuyla ilgili olarak öğretilen iki önemli tümce aşağıdaki gibidir;
1. "**Reallocation taken time.**", bu tümce bize şunu söyler: `realloc` fonksiyonu işini yaparken bellek bloğunu bir yerden başka bir yere taşırsa, bu işlemde büyük bellek bloklarının kopyalanması sırasında ciddi bir zamansal maliyeti oluşturacaktır.
2. "**Reallocation invalid pointer**", bu tümce bize şunu söyler: `realloc` fonksiyonu başarılı olduğunda bellek bloğunu bir yerden başka bir yere taşırsa ve ilgili bellek bloğundaki herhangibir adresi gösteren göstericiler varsa o göstericiler **dangling pointer** durumuna düşecektir, bu duruma çok dikkat edilmelidir.


### 41 Ders 5. Önemli Bilgi

❗❗❗ `realloc` fonksiyonunun ilk parametresine **NULL pointer** geçildiğinde `realloc` fonksiyonu `malloc` fonksiyonu gibi davranacaktır, bu durum **ub**'ye neden olmaz. Mesela `reallock(NULL, n * sizeof(int));` fonksiyon çağrısı `malloc(n * sizeof(int));` fonksiyon çağrısına dönüştürülmektedir.


### 41 Ders 6. Önemli Bilgi

❗❗❗ Process yaşam süreci boyunca kendisine ayrılan heap alanında process'in ödünç alacağı bellek kısımları, üzerinde çalışılan işletim sisteminin sistem çağrıları yapılarak ayrılmaktadır ve process öldüğünde bu bellek alanları iade edilmiş olmaktadır çünkü işletim sistemi ilgili process öldüğünde kendisine ayrılmış olan bellek alanını boş olarak işaretler(üzerinde işletim sistemi olmayan işlemcilerde çalışan C programlarındaki sürece burada değinilmiyor, bu konuyu artık Sistem programlamaya başladığımda detaylıca öğreneceğim).


### 41 Ders 7. Önemli Bilgi

❗❗❗ Bir programcının ilk önce öğrenmesi gereken en çok kullanılan(%80 oranında kullanılıyor denilebilir) veri yapısı olan **dynamic array(dinamik dizi)** veri yapısıdır.


## 42.Ders

### 42 Ders 1. Önemli Bilgi

❗❗❗ Sondan yapılan eklenme işlemleri "**amortised constand time**" karmaşıklıktadır. Bu şu anlama geliyor, dinamik dizilerde sona eleman ekleme işlemi eklenecek eleman dizinin katisitesinin değişmesini gerektirmiyorsa $O(1)$ zaman karmaşıklığındadır ama sona eklenen eleman **reallocate** gerektiriyorsa $O(n)$ zaman karmaşıklığında olacaktır, işte bundan dolayı "**amortised constand time**" deniliyor. </br>
Dinamik dizilerle ilgili bazı terimler; 
- **Capacity**: Edinilmiş bellek alanında tutulabilecek eleman sayısıdır.
- **Size**    : Dinamik dizide tutulan eleman sayısıdır.

### 42 Ders 2. Önemli Bilgi

❗❗❗ Size değeri kapasite değerine eşit iken yeni bir ekleme talebi geldiğinde kaçınılmaz olarak **reallocation** yapılacak, kapasite dinamik dizinin gerçekleştirimine bağlı olarak  1.5, 2 ya da başka bir katına çıkartılacaktır.


### 42 Ders 3. Önemli Bilgi

❗❗❗ Veri yapıları söz konusuysa baştan ve sondan yapılmayan ekleme ya da çıkarma işlemlerinde işlem yapılan konumu belirtmek için **middle** terimi kullanılmaktadır.


### 42 Ders 4. Önemli Bilgi

❗❗❗ Veri yapılarında yapılan bazı işlemler ve ne anlama geldikleri aşağıda görülebilir;
- **Push Front**: Veri yapısının başından yapılan tek bir elemanın eklenmesi işlemini ifade eder.
- **Push Back**: Veri yapısının sonundan yapılan tek bir elemanın eklenmesi işlemini ifade eder.
- **Pop Front**: Veri yapısının başından yapılan tek bir elemanın silinmesi işlemini ifade eder.
- **Pop Back**: Veri yapısının sonundan yapılan tek bir elemanın silinmesi işlemini ifade eder.
- **Insert**: Veri yapısının arasına yapılan tek bir elemanın eklenmesi işlemini ifade eder.
- **Erase** ya da **Remove**: Veri yapısının arasına yapılan tek bir elemanın silnmesi işlemini ifade eder.


### 42 Ders 5. Önemli Bilgi

❗❗❗ Derleyicilerin en iyi yaptığı iyileştirmelerden biri hangi değişkeni yazmaçlarda tutacağına karak vermektir bu nedenle de `register` anahtar sözcüğünün kullanımına pek gerek kalmamıştır.

`register` anahtar sözcüğünün kullanımı emir değil bir ricadır çünkü derleyicinin durumuna bağlı olarak ilgili değişken bir yazmaçta tutulabilir ya da tutulmayabilir. 

⚠️ `register` anahtar sözcüğü sadece **otomatik** ömürlü değişkenler için kullanılabilir, **static** ömürlü değişkenler zaten process'in başından sonuna kadar bellekte olacağı için bu nesnelerin sadece bir yazmaçta tutulmasını istemek mantıklı değildir.

⚠️ Adres operatörünün(`&` operator) operandı `register` anahtar sözcüğüyle tanımlanmış bir değişken olamaz.


### 42 Ders 6. Önemli Bilgi

❗❗❗ Eğer stataic ömürlü bir değişkene ihtiyacımız varsa, o değişken aşağıdaki durumlarda `global` değişken olmalıdır;
1. Birden fazla kaynak dosyada kendi adıyla kullanılacak ise.
2. Aynı kaynak dosyada birden fazla fonksiyon içinde kullanılacak ise.

Eğer sadece `static` ömürlü bir değişkene ihtiyacımız varsa o değişken sadece bir fonksiyonu ilgilendiriyorsa yani o fonksiyonun gerçekleştirimiyle ilgiliyse başka fonksiyonlardan o `static` yerel değişkene erişilmesi iligli fonksiyonun çalışmasını bozabileceğinden dolayı sakıncalıdır.



## 43.Ders

### 43 Ders 1. Önemli Bilgi

❗❗❗ C dilinde oluşturulan modüller çoğunlukla "**.c**" ve "**.h**" uzantılı olan iki farklı dosya olarak oluşturulmaktadır, bir modülde tanımlanan değişken ve fonksiyonların iç/dış bağlantı yapmak için aşağıdaki işlemin yapılması gerekiyor;
- Sadece modülün içinden erişilebilir olması istenilen global değişkenlerin ve fonksiyonların "**.c**" uzantılı kaynak dosyada `static` olarak tanımlanması gerekiyor. Bu şekilde iç bağlantı yapılmış oluyor.
- Başka modüllerden de kullanılması istenilen global değişkenlerin ve fonksiyonların "**.c**" uzantılı kaynak dosyadaki tanımlarının `static` anahtar sözcüğü kullanılmadan yapılması gerekiyor, ardından modülün "**.h**" uzantılı başlık dosyasında dışarıya açılacak global değişkenlerin `extern` olarak bildirilmesi gerekiyor, fonksiyon bildirimleri `extern` ile yapılabilir ya da yapılmayabilir. Bu şekilde dış bağlantı yapılmış oluyor.


### 43 Ders 2. Önemli Bilgi

❗❗❗ C dilinde **decleration** ve **defination** terimleri birbirinden farklı anlamlarda kullanılmaktadır. </br>
**Decleration** bir **adın(identifier)** bildirimi demektir ve bildirilen bir değişkense derleyici bellekte o değişken için yer ayırmayacaktır. </br>
**Defination** aynı zamanda bir değişken için bir allocation yapılmasını(yani derleyicinin o varlığın yerini ayarlaması) anlamına geliyor. </br>
Her **tanımlama(defination)** bir **bildirimdir(decleration)** ama her **bildirim(decleration)** bir **tanımlama(defination)** olmak zorunda değildir. </br>
Şu `extern int x;` statement `x` adındaki varlığın bildirimidir ama tanımlaması değildir, burada derleyici `x` değişkeni için bellekte bir yer ayırmaz. </br>
Buradan şu sonuca varırız: Dış bağlantıya sahip olan olan varlıkların birden fazla bildirimi olabilir, bu sorun oluşturmaz ama bir varlığın sadece tek bir tanımlaması olmak zorundadır.


### 43 Ders 3. Önemli Bilgi

❗❗❗ Dizilerin `extern` bildiriminin yapılması durumunda dizilerin eleman sayılarının belirtilmesi gerekmez çünkü derleyici bellekten yer ayırmayacağı için eleman sayısı bilgisi gerekmez. `extern int ary[];` bildirimi legal ve **well-form** bir kullanımdır.


### 43 Ders 4. Önemli Bilgi

❗❗❗ **Bağlantı(linkage)** konusunda C ve C++ dilleri arasında çok önemli bir kural farklılığı vardır;
- C dilinde bir kaynak dosya içinde yer alan şu `const int x = 10;` ve `int y = 20;` varlıklar dış bağlantıdadır. C dilinde bir değişkenin `const` bildirilip bildirilmemesi dış bağlantı olma durumunu etkilememektedir.
- C++ dilinde bir kaynak dosya içinde `const` anahtar sözcüğüyle tanımlanan global değişkenler varsayılan olarak iç bağlantıdadır(`const int x = 10;` buradaki `x` varsayılan olarak `static` tanımlanmış olarak yorumlanır) ama `int y = 20;` bu tanımlamadaki `y` değişkeni dı bağlantıdadır.


### 43 Ders 5. Önemli Bilgi

❗❗❗ **Const Correctness** ve **Const Incorrectness** terimleri `const` anahtar sözcüğünün doğru kullanılıp kullanılmadığını belirtmek için kullanılır.


### 43 Ders 6. Önemli Bilgi

❗❗❗ C dilinde ilk değerini bir sabit ifadesinden alan `const` değişkenler sabit ifedesi gereken yerlerde kullanılamazlar, C++ dilinde böyle bir kısıtlama yoktur.


### 43 Ders 7. Önemli Bilgi

❗❗❗ `void foo(Type *);` olarak bildirilen `foo` fonksiyonunun parametre olarak alacağı nesneyi değiştirebileceği için **mutater**, **set function**, **setter** adlarıyla nitelendirilir.


### 43 Ders 8. Önemli Bilgi

❗❗❗ Fonksiyonun aldığı türler aşağıdaki gibi üç farklı biçimde adlandırılırlar;
- `void set(T* p);` buradaki `p` değişkeni **out parameter** olarak adlandırılır.
- `void get(const T* p);` buradaki `p` değişkeni **in parameter** olarak adlandırılır.
- `void foo(T* p);` buradaki `p` değişkeni **in-out parameter** olarak adlandırılır, bunun dilin sözdiziminde bir karşılığı yok, bu durum fonksiyonun dökümantasyonunda belirtilmelidir.

❗❗❗ Özellikle **user defined type** söz konusu olduğunda bazı fonksiyonlar kendilerine gönderilen adresteki değişkenin değerini okurlar(yani input olarak kullanırlar) ama aynı zamanda adresini aldıkları değişkene değer yazarlar, bu parametrelere **in-out parameter** deniliyor.


### 43 Ders 9. Önemli Bilgi

❗❗❗ Bir zıtlık aranıyorsa `register` ile `volatile` anahtar sözcüklerinde bir zıtlık vardır, `register` anahtar sözcüğüyle tanımlanan değişkenlerin değerlerinin bir **yazmaçta(register)** turulması istenmiş oluyor ve bu işlem değişkenlerin değerleri üzerinde çok değişiklik yapılacağı zaman kullanılıyor(mesela döngü sayacı değişkenlerinin kullanımında) ama `volatile` anahtar sözcüğü ile derleyiciye bu değişkenin değeri üzerinde her işlem yapılacağı zaman bu değişkenin değerinin bellekten yeniden çekilmesi gerektiği bildiriliyor.


## 44.Ders

### 44 Ders 1. Önemli Bilgi

❗❗❗ C dilinin kurallarına göre `struct` bir varlık en az bir tane üyeye sahip olmalıdır.
👇 Aşağıda yukarıdaki bilgiyle ifade edilen durum görülebilir.
```C
// C derleyicisi aşağıdaki gibi bir yapı tanımı yapılmak istendiğinde 'sözdizim hatası(syntax error)' verecektir.
struct Nec {

};
```


### 44 Ders 2. Önemli Bilgi

❗❗❗ Derleyici `struct` tanımını gördüğünde bellekte yer ayıracak kodu üretmez, `struct` nesnesi türünden değişken tanımlandığı zaman bellekte yer ayıracak makine kodu üretilecektir.

👇 Aşağıdaki programda yapı türünden değişken bildiriminin nasıl yapıldığı incelenebilir.
```C
// 'Nec' adı(identifier) bir 'structure tag'tir. 
// 'Nec' adındaki yapı türü bellekte tek bir blokta '(4 + 4) + (8 + 8) = 24 byte' yer kaplayacaktır.
struct Nec{
    int x, y;
    double d1, d2;
};

int main(void)
{
    struct Nec _nec_instand; // 'Nec' türünden bir değişken bildirimi bu şekilde 'struct' öneki kullanılarak yapılmak zorundadır. Bu tüm 'user defined type'lar için kendi türleri için geçerlidir.
}
```

❗❗❗`struct X { ... }`,`union Y { ... }`,`enum Z { ... }` buradaki kullanıcı tanımlı türlerin bildirimlerindeki `X`, `Y`, `Z` **etiketleri(tag)** türü temsil eden adlar değildir, türü temsil eden `struct X`, `union Y`, `enum Z` adlarıdır. 


### 44 Ders 3. Önemli Bilgi

❗❗❗ Bir `struct` veri türü bellekte tek bir blok olarak, yapının üyeleri yukarıdan aşağıya doğru sıralı olacak biçimde derleyiciden derleyiciye değişmeyecek biçimde sıralı olmak zorundadır(donanımsal olarak veri tersten sıralanıyor olabilir ama yazılım dili soyutlaması açısından bu bir fark oluşturmaz) </br>
❗❗❗ Bir `struct` veri türünden oluşturulan değişkenin fiziksel bellek adresi `struct` veri türünün ilk üyesinin fiziksel bellek adresiyle aynıdır. </br>


### 44 Ders 4. Önemli Bilgi

👇 Aşağıdaki programda `struct` veri türüyle ilgili ve bellek ihtiyacının ne olacağıyla ilgili bilgi alınabilir.
```C
#include <stdio.h>

// 'struct Nec' türünden değişken tanımlandığında tanımlanan değişkenin elemanları bellekte 'x', 'y', 'd1', 'd2' olarak sıralı olmak zorundadır.
struct Nec{
    int x, y;
    double d1, d2;
};

int main(void)
{
    printf("sizeof(struct Nec) = %zu\n", sizeof(struct Nec)); // Burada 'struct Nec' türünün bellek ihtiyacı en az yağının üyelerinin toplamı kadardır ama bu değerden de yüksek olabilir.
}
```

**Yapılarla(structer)** ile ilgili derler devam ederken önemli alt başlıklardan biri **alignment(hizalama)** olacak, **alignment(hizalama)** konusu çok derin ve önemli bir konudur.

**Alligment(Hizalama)**: Bazı nedenlerden dolayı `struct` varlıklarının nesneleri bellekte tutulurken yapının üyesi olan türlerin arasında kullanılmayan byte'ların olabilmesi durumudur.

❗❗❗ Bir `struct` veri türünde **pedding bytes** olmadığında o `struct` veri türünün bellek ihtiyacı en az elemanlarının toplam bellek ihtiyacı kadardır.


👇 Aşağıdaki programda `struct` veri türüyle ilgili ve bellek ihtiyacının ne olacağıyla ilgili bilgi alınabilir.
```C
#include <stdio.h>

struct Nec{
    int x, y;
    double d1, d2;
    int s[10];
};

int main(void)
{
    printf("sizeof(struct Nec) = %zu\n", sizeof(struct Nec)); // Burada 'struct Nec' türünün bellek ihtiyacı en az yağının üyelerinin toplamı kadardır ama bu değerden de yüksek olabilir.
}
```


### 44 Ders 5. Önemli Bilgi

❗❗❗ Yapı türlerinin tanımları ihtiyaca göre ya başlık dosyasında ya da kaynak dosyada olabilir. Client kodları ilgilendiren bir yapı türünün bildirimi **.h** dosyasında yapılır, client kodları ilgilendirmeyen bir yapı türünün bildirimi **.c** dosyasında yapılır çünkü dışarıya açılmayacaktır.


### 44 Ders 6. Önemli Bilgi

❗❗❗ `.` ve `->` operatörlerinin ikisi de yapı nesnelerinin elemanlarına erişmek için kullanılmaktadır. Aralarındaki fark;
- `.` operatörü ile yapı nesnesinin adı üzerinden yapının elemanlarına erişirken kullanılan operatördür.
- `->` operatörü ile yapı nesnesinin göstericisi üzerinden yapının elemanlarına erişirken kullanılan operatördür.


👇 Aşağıdaki programda `.` ve `->` operatörlerinin kullanımı incelenebilir.
```C
#include <stdio.h>

struct Nec{
    int x, y;
    int ar[5];
};

int main()
{   
    struct Nec mynec;
    struct Nec* ptr = &mynec;

    mynec.x = 11;
    ptr->x = 13;
}
```


### 44 Ders 7. Önemli Bilgi

🧠 C dilinde bir yapı nesnesi yalnızca aşağıdaki operatörlerin operandı olabilir, sadece dört operatör var, bunlar;
- `.` member selection dot operator.
- `&` address operator.
- `sizeof` operator.
- `->` member selection arrow operator.


### 44 Ders 8. Önemli Bilgi

❗❗❗ C dilinde yapı nesneleri atama operatörünün sol operandı ya da sağ operandı olabilir, sol ve sağ operandın aynı türden olması gerekir.


### 44 Ders 9. Önemli Bilgi

⚠️⚠️⚠️ Yapı değişkenlerinin birbirine atama işlemi bir bloktan başka bir bloğa kopyama işlemidir, bu da kopyalanacak bellek bloğunun büyüklüğüne göre maliyetli olabilir. Yapı nesneleriyle yapılan atama işlemlerinde dikkatli olunması gerekiyor.


### 44 Ders 10. Önemli Bilgi

❗❗❗ Yapı türlerine ilişkin sözdiziminin diğer programlama dillerinde olan `class` gibi varlıklar arasındaki fark nedir(bunun anlatılmasının nedeni Java, C# gibi dilleri bilenlerin C dilindeki farklılıkları görmesi içindir)?

1. C dilinde **default member initializer** aracı yoktur.

    👇 Aşağıdaki programda C++ dilinde olan **default member initializer** aracının olmadığı görülmelidir.
    ```C
    struct Data{
        int x;
        int y;
        double d = 4.6; // Buradaki gibi yapı elemanlarından birine varsayılan değer verme aracı yoktu, burada sözdizimi hatası oluşur.
    };
    ```

2. C dilinde **member function** aracı yoktur.

    👇 Aşağıdaki programda C++ dilinde olan **member function** olarak adlandırılan yapının bir üyesi olarak fonksiyon bulunamadığı görülmelidir.
    ```C
    struct Data{
        void foo(int); // İllegaldir.
    };
    ```

3. C dilinde **access control(erişim kontolü)** aracı yoktur.

    👇 Aşağıdaki programda C++ dilinde diğer bir çok dilde(Java, C# vb.) olan **access control(erişim kontolü)** aracının yoktur, bir yapının elemanlarının hepsi erişime açıktır().
    ```C
    struct Data{
        public:

        protected:

        private:
    };
    ```


### 44 Ders 11. Önemli Bilgi

❗❗❗ **Designated initializer** hem diziler hem de yapılar için kullanılabilir, aşağıdaki kısa programlarda bu durum incelenebilir.


## 45.Ders

### 45 Ders 1. Önemli Bilgi

❗❗❗ `->` operatörünün sol operatörünün **bir yapı nesnesinin adresi** olmak zorundadır.

❗❗❗ `->` operatörünün sol operandı bir yapı nesnesinin adresini tutan bir pointer değişken olmak zorunda değildir, sol operant **bir yapı nesnesinin adresi** olmak zorundadır, adres olan herhangi bir **L-value** ya da **R-value** ifade sol operant olabilir, burayı anlamak çok önemlidir.


👇 Aşağıdaki programda `->` operatörünün sol operandının neler olabileceği incelenebilir.
```C
#include <stdio.h>

struct Person{
    int id;
    char name[20];
    char surname[20];
};

int main(void)
{
    struct Person per = { 5612, "ad", "soyad" };

    // Aşağıdaki gibi iki farklı biçimde bir yapı nesnesi elemanlarına erişilebilir.
    (&per)->id = 8754;
    per.id = 342;
}
```


👇 Aşağıdaki programda `struct Person` türünden bir dizi nesnesinin adının kullanıldığında **array to pointer conversion** uygulanmasından dolayı dizi adının dizinin ilk elemanının adresine dönüştürüldüğü incelenebilir.
```C
#include <stdio.h>

struct Person{
    int id;
    char name[20];
    char surname[20];
};

int main(void)
{
    struct Person per ar[5];

    // Aşağıdaki iki statamnet legal'dir, kullanımı doğrudur ve aynı anlama gelmektedir.
    ar-> = 123;
    ar[0].id = 123;

    // Aşağıdaki iki statamnet legal'dir, kullanımı doğrudur ve aynı anlama gelmektedir.
    (ar + 3)->id = 45;
    ar[3].id = 45;
}
```

### 45 Ders 2. Önemli Bilgi

❗❗❗ Bir fonksiyonun parametresi bir yapı türü olabilir fakat bu durumda ilgili fonksiyonun bir yapı nesnesiyle çağırılması gerekir yani bu bir **call by value** çağrısıdır ve parametresi bir yapı türünden olan bir fonksiyona yapılan çağrıda tek geçerli argüman ifadesi aynı türden bir yapı nesnesi olabilir, bu da bir blok kopyalamasına neden olur.


👇 Aşağıdaki programdaki gibi bellek boyutu fazla olmayan `struct Point` türünün bellek boyutu incelenebilir, buradaki yapı türü gibi bellek boyutu fazla olmayan türlerden nesneleri parametre olarak alan fonksiyon bildirimlerinin yazılmasında kopyalama maliyeti olmayacaktır, kopyalama maliyeti bellek boyutu büyük yapı türlerinde olmaktadır.
```C
#include <stdio.h>

struct Point {
    float f1;
    float f2;
};

int main(void)
{
    printf("sizeof(struct Point) = %zu\n", sizeof(struct Point));
}
```


👇 Aşağıdaki programda C++ dilinde yazılmış olan programda `std::my19937` türünden bir nesnenin bellek boyutunun 5000 byte olduğu incelenebilir. Buradaki program herhangi bir türün bellek boyutunun çok büyük olabileceğini görmek için yazılmıştır.
```C++
#include <stdio.h>
#include <random>

void foo(std::my19937);

int main(void)
{
    printf("sizeof(my19937) = %zu\n", sizeof(std::my19937)); // Burada 'std::my19937' bellek boyutunun '5000' olduğu görülecektir.

    std::my19937 eng;
    foo(eng); // Burada 5000 byte büyüklüğündeki bellek bloğu kopyalanacaktır, bu maliyet çok fazla.
}
```

### 45 Ders 3. Önemli Bilgi

❗❗❗ Diğer derslerden de bildiğimiz gibi, bir fonksiyondan geriye döndürülen değerin **otomatic storage duration** oluşu **ub** durumuna neden olacaktır ve böyle bir kullanımdan kaçınılmalıdır.

👇 Aşağıdaki programda geriye bir yapı nesnesinin adresini döndüren bir fonksiydan geriye döndürülen yapı nesnesinin **otomatic storage duration** olması durumunun tanımsız davranış olduğu incelenebilir.
```C
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

struct Person {
    int id;
    char name[20];
    char surname[20];
};

// Aşağıdaki fonksiyondan geriye döndürülen yapı nesnesi otomatic ömürlüdür bu nedenle 'ub' durumu oluşmasına neden olur, bu biçimde bir fonksiyon yazılmamalıdır.
struct Person* create_person(int id, const char* pname, const char* psurname)
{
    struct Person ret;

    ret.id = id;
    strcpy(ret.name, pname);
    strcpy(ret.surname, psurname);

    return &ret; // Burada adresi döndürülen nesne 'otomatic ömürlü' bir nesne olduğu için bu adresin bir şekilde fonksiyonu çağıran yerde kullanılması tanımsız davranışa neden olacaktır.
}

void print_person(const struct Person* ptr)
{
    printf("%d %s %s\n", ptr->id, ptr->name, ptr->surname);
}

int main(void)
{
    struct Person* per = create_person(4232, "suha", "dincer"); // 'create_person' fonksiyonundan geriye döndürülen nesne 'otomatic ömürlü' bir nesnedir.
    print_person(per); // Buradaki 'per' gösterici nesnesi 'dangling pointer' durumundadır. Microsoft derleyicisi burada 'warnging C4172: returning address of local variable or temporary : ret' uyarısını verecektir.
}
```

🧠 Derleyicilerin uyarı iletilerini "**Treat warning as a error**" gibi bir anahtar(switch) oluyor, bu anahtarı açarak uyarıların da hata olması sağlanmış olur.


### 45 Ders 4. Önemli Bilgi

❗❗❗ Yapı nesnesi adresi döndüren fonksiyonlar tanımsız davranışa neden olmamak için aşağıdaki ömür özelliğine sahip bir nesne döndürebilir;
1. Static ömürlü nesne adresi döndürebilir.
    1. Static ömürlü gloabal değişken adresi döndürebilir.
    2. Static ömürlü local değişken adresi döndürebilir.
2. Dinamik ömürlü nesne adresi döndürebilir.
3. Çağıran koddan alınan nesne adresini döndürebilir.

### 45 Ders 5. Önemli Bilgi

❗❗❗ Bir Fonksiyonun işini yapması sırasında hata alınırsa ne yapmak gerekir;
1. Bir Fonksiyonun işini yapamaması nedeni bir kodlama hatası mı?
    - Evet ise => Kodlama hatasını bulup düzeltmek ve yeniden programı derlemek gerekmektedir, bu türden hatalara teknik olarak **programing errors** denilmektedir.
    - Peki, kodlama hatalarını nasıl bulacağız;
        - **Static assertion**
        - **Runtime assertion**
2. **Runtime errors**, çalışma zamanında oluşan hatalardır, bu hatalar kodda bir hata olmamasına rağmen dışsal nedenlerden dolayı programda oluşan hatalardır, bu türden hatalara C#, Java, C++ gibi dillerde **exception** deniliyor.
    C dilinde standardında hataları yönetmek için bir araç seti olmadığı için hata yönetimi çoğunlukla fonksiyonu çağıran koda bırakılmaktadır. </br>
    C dilinin bir fonksiyonda hata olduğunda aşağıdaki yöntemlerle oluşan hata çağıran koda bildirilmektedir ki fonksiyonu çağıran kod oluşan hatayı işleyebilsin;
    1. Geri dönüş değeri yoluyla bildirilebilir.
    2. Global bir değişkenin değerini değiştirerek bildirilebilir.
    3. Kendisine gönderilen bir adresteki hata taşıyacak nesneyi değiştirerek bildirilebilir.


## 46.Ders

### 46 Ders 1. Önemli Bilgi

❗❗❗Aşağıdaki bilgiler önemlidir
- `time_t` tür eş adının hangi türe karşılık geleceği derleyiciye bırakılmıştır, derleyiciye göre `long long` ya da `long` türüne karşılık geliyor olabilir.
- C standardı **epoch** değerinin ne olacağının kararını derleyiciye bırakılmıştır, Unix/Linux sistemlerinde **epoch** değeri olarak "_01:01:1970 00:00:00_" tarihi kullanılıyor ve sistemlerin çoğunda **epoch** değeri "_01:01:1970 00:00:00_" tarihidir.
- `time.h` modülündeki `struct tm` yapı türü **C tarzı kütüphane** yapı türüdür ve yapıdaki tüm üyelerin ne olduğunun programcı tarafından bilinmesi gerekmektedir.


### 46 Ders 2. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda **anonymous structure** bildiriminin **pointer** türünden yapılarak ilgili `struct` türünün sadece dinamik ömürlü bir nesne olarak tanımlanmaya zorlanması incelenebilir.
```C
#include <stdlib.h>
#include <stdio.h>

// Aşağıdaki yapı türünün bir adı yok, bir eş adı da yok, ancak bu yapı türüne pointer türünün eş adı var.
// Aşağıdaki gibi bir yapı bildirimi yapılırsa, bir adı olmayan bu yapı türünden, otomatik ömürlü ve static ömürlü değişken tanımlama şansımız yoktur sadece dinamik ömürlü bir nesne tanımlanabilir.
typedef struct {
    int a, b, c;
} *NecPtr;


int main(void)
{
    NecPtr p;

    printf("%zu\n", (sizeof(p)); // Burada standart çıktı akımına sistemdeki pointer türünün byte değeri gönderilecektir.
    printf("%zu\n", (sizeof(*p)); // Burada standart çıktı akımına sistemde 'int' türü 4 byte olduğunda en az '12\n' değeri gönderilecektir.
}
```


### 46 Ders 3. Önemli Bilgi

❗❗❗ İşlem kodu üretilmeyen durumlarda tanımsız davranış oluşturan ifadeler kullanıldığında işlem kodu üretilmediği için **ub** durumu oluşmamaktadır.


❗❗❗ 👇 Aşağıdaki programda işlem kodu üretilen ve üretilmeyen durumlarda **ub** olup olmayacağı incelenebilir.
```C
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    int ary[12] = { 0 };

    int x = ary[21]; // Burada 'ary' dizisi taşırıldığı için 'ub' durumu oluşur.
    size_t sz = sizeof(ary[21]); // Burada işlem kodu üretilmediği için 'ub' de yoktur.

    int* p;
    int* ptr = NULL;

    // Aşağıdaki durumların hiçbirinde 'ub' yoktur.
    printf("%d\n", sizeof(ary[765]));
    printf("%zu\n", sizeof(p));
    printf("%zu\n", sizeof(*p));
    printf("%zu\n", sizeof(*ptr));
}
```


❗❗❗ 👇 Aşağıdaki programda **anonymous structure** bildiriminin **pointer** türünden yapılarak ilgili `struct` türünün sadece dinamik ömürlü bir nesne olarak tanımlanmaya zorlanması incelenebilir.
```C
#include <stdlib.h>
#include <stdio.h>

// Aşağıdaki yapı türünün bir adı yok, bir eş adı yok, ancak yapı türüne pointer türünün eş adı var.
// Aşağıdaki gibi bir yapı bildirimi yapılırsa, bir adı olmayan bu yapı türünden, otomatik ömürlü ve static ömürlü değişken tanımlama şansımız yoktur sadece dinamik ömürlü bir nesne tanımlanabilir.
typedef struct {
    int a, b, c;
} *NecPtr;

int main(void)
{
    // Kütüphenelerde kullanılan bir C idiyomu
    NecPtr p = (NecPtr)malloc(sizeof(*p)); // Buradaki 'p' değişkeninin türü sadece 'NecPtr' tür eş adıyla erişile bilen 'struct' türünden değerdir. 'p' değişkeni 'NecPtr p' ile tanımlanan değişkendir, aynı statament içinde aynı değişken kullanılıyor.
}
```


### 46 Ders 4. Önemli Bilgi

❗❗❗ Prototipi `struct tm* localtime(const time_t *);` olan fonksiyon dışarıdan `time_t*` türünden adres değeri alır ve `time_t` türünden `struct tm` türüne dönüşüm yapıp geriye **static storage duration** özellikteki `struct tm` türünden bir nesne adresini döndürmektedir.


### 46 Ders 5. Önemli Bilgi

❗❗❗ `ctime`, `asctime` fonksiyonlarıyla ilgili aşağıdaki bilgiler önemlidir;
- Bu fonksiyonlar 26 karakter uzunluğunda sonunda new-line(`\n`) karakteri olan yani **yeni satırla sonlanan yazı(new-line terminated byte stream)[bu adı be uydurdum dikkate almayabilirsin]** bir yazı adresi döndürür.
- Her iki fonksiyon da aynı static ömürlü dizinin adresini döndürür.
- Yazının formatı önceden belirlenmiştir, derleyiciye bağlı değildir, değiştirilemez.


### 46 Ders 6. Önemli Bilgi

❗❗❗ **Incomplate type** kavramı daha çok **kullanıcı tanımlı türler(user defined types)** ile ilgilidir. **Kullanıcı tanımlı türler(user defined types)** olmayan türlerden sadece **void pointer türü(`void*`)** türü **incomplate type** diğerleri **complete type**.


### 46 Ders 7. Önemli Bilgi

❗❗❗ **incomplate type** ve **complate type** türlerle ilgili aşağıdaki tespitler önemlidir;
- Bazı bildirimler ya da bazı ifadeler, söz konusu türün **incomplate type** olması durumunda da geçerlidir.
- Bazı ifadelerin geçerli olması için kullanılan türün **complate type** olması zorunludur.

**Incomplate type** kullanabilen ifadelerde çoğu zaman türün **complate type** yapılması istenmez.

❗❗❗ Eğer bir modüldeki bir ya da bir kaç varlığın kullanılması gerekiyorsa, ilgili modülün kaynak dosyaya eklenmesi yerine sedece kaynak dosyadaki gerekli olan veri türleri **incomplate type** olarak eklenebilir ve fonksiyonların bildirimleri yazılabilir.

❗❗❗ Bir kaynak dosyasına bir çok başlık dosyasınının eklenmesi aşağıdaki sorunlara neden olabilir;
- Büyük projelerde derleme zamanı uzar(extended compile time).
- Gereksiz modüllerin eklenmesi gereksiz yere Bağımlılık oluşturmaktadır(kaynak dosyalarının başlık dosyalarına bağımlılığı). Bağımlılıklarda bir başlık dosyasında yapılan değişikliğin başka bir dosyada da değişiklil yapılmasına neden olabilir.


En çok yapılan hata, programcının **incomplate type** kavramının ne olduğunu bilmediği ve anlamadığı için bir başlık dosyasının eklenmesinin zorunlu olduğunu düşündüğü için o başlık dosyasını kaynak koda ekliyor(`#include` ile). </br>
Bir başlık dosyasındaki bir kaç türü kullanmak için `#include` işlemi ile o türlerin bildirimlerinin yer aldığı başlık dosyasını eklemek yerine o türlerin kullanılacağı dosyaya o türlerin bildirimlerinin **incomplate type** olarak eklenmesi yeterli olacaktır, bu işlem ile eklenen **incomplate type** türler bir bağımlılık oluşturmamaktadır.


## 47.Ders

### 47 Ders 1. Önemli Bilgi

❗❗❗ C ve C++ dillerinde şu ilke kabul görür: "_Bir **incomplate type** işini gördüğü sürece **complate type** kullanma._". Bir türü sadece mecbur olunduğunda zaman **complate type** haline getirmek tercihedilir.

❗❗❗ **Incomplate type** kullanıldığında gereksiz bağımlılıkların oluşmasının önüne geçilmektedir, bu önemli bir bilgidir ve ilerideki derslerde ve C programlarını yazarken önemli olacaktır.


### 47 Ders 2. Önemli Bilgi

❗❗❗ Yapının elemanları iki farklı biçimde olabilir, bunların aşağıdaki gibidir;
- C tarzı kütüphanelerde yapıların elemanları **müşteri(client)** kodlara tamamen açıktır ve yapıyı kullanacak yazılımcıların kullandıkları yapıların üyeleriyle ilgili derin bilgiye sahip olması gerekiyor. 
- OOP tarzı kütüphanelerde yapının elemanları client code tarafından kullanılmaz;
    1. Yapının elemanları görünür, kullanılması sözdizimi(snytax) hatası oluşturmaz ancak kütüphenenin dokümanında bildirdiği biçimde sözleşme gereği(hizmet veren kodla hizmet alan kod arasındaki bir sözleşme gereği) kullanıcı kodlar yapının elemanlarına erişmez.
    2. Yapının elemanları zaten client koda gösterilmez, bu yolla kullanıcı kod ilgili yapının dışayıya kapalı olan üyelerine erişemez ya da onları göremez.


👇 Aşağıdaki programdan C tarzı kütüphene özelliğinde `struct tm` türünün kullanımı incelenebilir.
```C
#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm x;

    x.tm_mon = 1; // Yapının 'tm_mon' üyesinin değerleri '[0,11]' arasında bir değerde olması gerekiyor ve '1' değeri de şubat ayına karşılık gelmektedir, programcı bu bilgiyi bilmek zorundadır yoksa yapıyı doğru kullanamaz.
    x.tm_year = 2025 - 1900; // Yapının 'tm_year' üyesinin değerleri '1900' yılından sonraki yılları ifade etmektedir, programcı bunu bilmezse programı doğru biçimde yazamaz.
}
```


### 47 Ders 3. Önemli Bilgi

❗❗❗ OOP biçiminde kütüpheneler kullanılarak aşağıdaki faydalar elde edilmektedir;
- Öğrenme yükü azalıyor.
- Tutarsız değerler oluşturulması sorunu engellenebiliyor, kütüphanedeki yapı nesnelerinin üyelerinin detaylı bilgisine sahip olunması gerekmeyecektir.
- En önemli fayda ise: Elemanlar değişirse elemanları kullanan kodun değişmesi gerekmeyecek ve bir çok durumda kaynak kodun **yeniden derlenmesi(recompile)** gerekmeyecektir. Büyük projelerde bağımlılıklar yüzünden kaynak kodların tekrar tekrar derlenmesinin gerekmesi gereksiz zaman kaybına neden olmaktadır.

❗❗❗ OOP biçiminde kütüpheneler kullanıldığında yapıların elemanlarının dışarıdan gizlenmesi ya da dışarıdan erişiminin dokümantasyon ile kısıtlanması araya ayrıca bir soyutlama katmanı eklenmesi anlamına geleceği için bazı durumlarda maliyeti arttırabilir. </br>
Elemanları göstermemenin en sıradan maliyeti: Bazı nesnelerin daha önce öğrenilen `malloc` fonksiyonu ile oluşturulma zorunluluğunu gerektirmesi ve bu biçimdeki bir işlemin dinamik bellek yönetimi gerektirmesinden dolayı maliyete sahip olmasıdır.


### 47 Ders 4. Önemli Bilgi

❗❗❗ C dilinde bir kütüphane modülünü yazarken çok özel bir durum yoksa iki ayrı dosya oluşturuyoruz;
1. **Kullanıcı(client)** kodlar için oluşturulan, **kullanıcı(client)** kodların kullanması için bildirimleri içeren **başlık(header)** dosyası.
2. Kodun kendisini içeren **kaynak(implementation, code, source)** dosyası.


### 47 Ders 5. Önemli Bilgi

❗❗❗ Yazılmış olan bir modülün başkaları tarafından kullanılabilmesini sağlamak için iki farklı yol izlenebilir, bunlar;
1. Mesela "date" modülü paylaşılacaksa `date.h` dosyasının kendisi ve `date.c` kaynak dosyanın sadece derlenmiş hali verilebilir. Bu yöntemde modülü kullanacak programcıya kaynak kod dosyası verilmediği için progrmacı kaynak dosyada değişiklik yapamaz.
2. Mesela "date" modülü paylaşılacaksa `date.h` dosyasının kendisi ve `date.c` kaynak dosyanın kendisi verilebilir. Bu yöntemde modülü kaynak kodlarıyla birlikte alan programcı modülü istediği gibi kullanıp kaynak kod üzerinde istediği gibi değişiklikler yapabilir. Bu yöntemde kaynak kod **open source** olarak paylaşılmış olur. Açık kaynak olan kodların kullanım koşulları kodun lisansına bağlıdır ama kod lisanslarına bu derste değinilmeyecektir.


❗❗❗Bir kütüphane modülünü yazmaya başlarken en tipik hatalardan biri modülün yazımına ilk önce gerçekleştirim dosyasının("**.c**") yazımıyla işe başlanmasıdır, ilk önce yapılması gereken bir arayüz oluşturan başlık dosyasının yazımından başlanmasıdır.

❗❗❗ Bir başlık dosyası oluşturduğumuzda mutlaka ve mutlaka bir başlık dosyasını bir client code tarafından birden fazla defa **dahil edilmesini(include)** önlemek için önlem almalıyız. Birden fazla defa aynı "**.h**" dosyasının eklenmesi sözdizimi(syntax) hatasına neden olur.

❗❗❗ C programlarında yazılmış olan bir modül birden fazla kaynak dosyaya dahil edilmiş olabilir, bu durumda iç içe bir yapıda farklı dosyalar aynı kaynak dosyayı eklemek isteyecektir, eğer kütüphanelerin başlık dosyalarında **Multiple Include Guards(Header Include Guards)** uygulanmadıysa bu sözdizim(syntax) hatasına neden olacaktır.


### 47 Ders 6. Önemli Bilgi

🔥🔥🔥🔥🔥 Aşağıdaki bilgileri tam olarak anlamak çok önemlidir, burayı tam anlamadan programlama konusunda daha üst bir seviyeye çıkılamaz, buradaki bilgiyi anlamak OOP yaklaşımının neyi getirip neyi götürdüğünü anlamak için bir temel oluşturacaktır;
❗❗❗ C dilinde yapı türlerinden elde edilen nesnelerin üyelerinin dışarıdan erişime kısıtlanması durumunda soyutlamayı arttırmış oluruz ve böylece sadece soyutlamayı arttırmış olmuyoruz aynı zamanda üretilecek makine kodununda olacak işlem sayısını da arttırmış oluyoruz. </br>
❗❗❗ Yukarıdaki nedenlerden dolayı C dilinde soyutlamayı arttırdığımız zaman sadece soyutlamayı arttırmış olmuyoruz aynı zamanda maliyeti de arttırıyoruz, işte bu nedenden dolayıdır ki **sistem programlama**, **ağ(networking) programlama**, **oyun programlama**, **yoğun performanslı işlem gerektiren programlamalarda** yapının elemanları gizlenmemektedir çünkü soyutlamadan oluşacak fazladan makine kodlarını istenmemektedir.


### 47 Ders 7. Önemli Bilgi

❗❗❗ C++ dilinin bazı araçları(C dilinde de benzer bazı araçlar var) bir yapının elemanlarına erişmeyi hem kısıtlarken aynı zamanda çok verilmi bir kodun oluşturmasını sağlayabiliyor.


### 47 Ders 8. Önemli Bilgi

❗❗❗ Bir fonksiyona yapılan bir çağrıda fonksiyona geçilmek istenilen argümanlar hatalı olduğu durumlarda izlenecek iki yol var, bunlar;
1. Hatalı değ geçilen fonksiyon çağrısı kendi modülümüze aitse o zaman hatalı fonksiyon çağrısının yapıldığı yerin bulunması ardından da düzeltilmesi gerekir.
2. Hatalı değ geçilen fonksiyon çağrısı **kullanıcı(client) kodlardan** geliyorsa bu durumda da iki farklı seçenekten biri tercih edilebilir;
    1. Hatalı fonksiyon çağrılarının yapılmasının sorumluluğu **kullanıcı(client) koda** bırakılabilir, bu durumda modülde bir işlem yapılması gerekmeyecektir ve kullanıcı hatalı değerler gönderdiğinde bu **ub** durumuna da neden olabilir.
    2. Hatalı fonksiyon çağrılarının yapılması durumlarını modülün fonksiyonunda yapabiliriz, bu durumda fonksiyona geçilen argümanlar tek tek kontrol edilecek ve değerler hatalı olsa bile bir düzenleme yapılabiliyorsa düzenleme yapıldıktan sonra fonksiyon işlemine devam edip bitirecek ama işleme devam edilemezse bunun da **kullanıcı(client) koda** bildirilmesi gerekiyor.


❗❗❗ Bir fonksiyondan geriye fonksiyonun yaptığı işlemin başarılı ya da başarısız olması durumunu fonksiyon çağrısını yapan koda bildirmek gerekiyor, peki bunu nasıl bildirecek diye düşünülürse bu başka bir dersin konusu ve bunu yapmak için birden fazla farklı yol var. </br>
Mesela en çok kullanılan **yaklaşım(convension)** olarak böyle `Date* set_date2(Date*, int d, int m, int y);` bir **setter fonksiyon** bildiriminde fonksiyona değerleri atanması için geçilen nesne tekrardan geriye döndürülebilir, fonksiyondan geriye dönen adres kendisine geçilen adres ile aynı ise işlem başarılı ama **NULL pointer** ise işlem başarısız anlamına gelecektir.

👇 Aşağıdaki programdan `set_date2` fonksiyon çağrısı yapıldığında işlem başarılı olmama durumunda nasıl bir kod yazılabileceği incelenebilir.
```C
#include "date.h"

int main(void)
{
    Date myDate; // 'myDate' adında 'Date' türünden(esasında tür eş adı) bir yapı nesnesi tanımlanıyor(tanımlanıyor çünkü derleyici bu değişken için bellekte yer ayıracaktır).

    // 'set_date2' fonksiyonu işini başarılı biçimde yapamazsa geriye 'NULL pointer' dönecek ve bu durumda hata olduğu anlaşılacak ve ona göre yapılacak bazı işlemler yapılabilir.
    if(!set_date2(&myDate, 48, 4, 1012)){
        // error handling code 
    }
}
```

❗❗❗ 👆 Yukarıdaki programdaki `set_date2` fonksiyon çağrısında olduğu gibi her seferinde hata var mı yok mu diye kontrol ettirilmesi kodu çok daha karmaşık hale getirecektir, bu C'nin küçük bir dil olmasının sonuçlarından biri bu, C++, Java, C# gibi dillerin standardında **exception handing** aracıyla bu gibi durumlar daha kolay ele alınabilmektedir.


### 47 Ders 9. Önemli Bilgi

❗❗❗ C kursunda bir kaç defa tekrarlanan bir farkındalık olarak "**_KOD TEKRARI FELAKETTİR_**" tümcesine dikkat edilmelidir; </br>
Bir kodun kalitesinin ne olduğunu kodun ne kadar az tekrarlı olduğuna bakarak anlayabiliriz(kod tekrarı bazı özel durumlarda gerekli olabiliyor). </br>
Tekrar eden kodun sorunları;
- Kodun tekrar ettiği her yerde ayrı ayrı bağlamlarda her takrar eden yer için ayrı bir test kodu yazılması gerekecektir.
- Kodda bir değişiklik(lojik) yapılması ya da koda bir ekleme yapılması gerekirse o kadar fazla kod yazılması gerekecektir, bu da gereksiz iş yükü anlamına gelmektedir.
- Kodun tekrar etmesi aynı kod bir kaç farklı yerde olduğu için değişiklik yapılması gerektiğinde bazı yerlerde değişiklik yapılıp bazı yerlerde o değişikliğin yapılması yapılmazsa hatalara neden olacaktır.
- Kod tekrar kullanılabilir(reusable) yapılmamış olur, tekrar eden kod kendisini iyi açıklayamaz ve mecburen yorum satırlarıyla açıklamak gerekecektir, eğer tekrar eden kod bir fonksiyona alınırsa fonksiyon adından ilgili kodun ne iş yaptığı anlaşılabilir durumda olabilirdi.


### 47 Ders 10. Önemli Bilgi

❗❗❗ Tekrar eden kodu bir yere toplayıp sıklıkla o kodu bir fonksiyon haline getirmek yüksek seviyede soyutlama sağlayacaktır, bu da İngilizce olarak "_**abstraction at a higher level**_" biçiminde ifade edilir.


### 47 Ders 11. Önemli Bilgi

❗❗❗ Fonksiyonlara birden fazla görev verilmemelidir, İsviçre çakısı gibi fonksiyonlar yazılmamalıdır, verilirse aşağıdaki gibi sorunlarla karşılır;
- Fonksiyonun adı yaptığı işi açıklayamayacak hale gelecektir.
- Fonksiyon birden fazla işi yaptığı için o fonksiyonu kullanan koda kullanmak istemeyaceği bazı işlemlerin zorla kullandırılması gibi istenmeyen bir durum oluşacaktır.
- Fonksiyonu test etmek için daha fazla test kodunun yazılması gerekecektir.
- **Takrar kullanılabilirlik(reusability)** olumsuz etkilenecektir.


## 48.Ders

### 48 Ders 1. Önemli Bilgi

❗❗❗ Bir yapının elemanı, kendi türünden olamaz, bunun nedeni bu biçimdeki bir kullanımda yapının kendi türünden üyenin **incomplate type** durumunda olmasıdır. </br>
❗❗❗ Bir yapının elemanı, kendi türünden gösterici olabilir.
```C
#include <stdio.h>

struct Nec1 {
    int x, y;
    struct Nec1 nc; // 'struc Nec' is an incomplate type here. Burada sözdizim(syntax) hatası vardır.
};

struct Nec2 {
    int x, y;
    struct Nec2* p; 
};

int main(void)
{
    
}
```

### 48 Ders 2. Önemli Bilgi

❗❗❗ Bazı veri yapılarının(linked-list, tree vb.) gerçekleştirimlerinde dinamik olarak oluşturulmuş yapı nesnelerinin kendi türünden bir nesnenin pointer üyesi olduğu durumlar sıklıkla kullanılmaktadır.


### 48 Ders 3. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda iç içe yapı kullanımının daha sade bir hali incelenebilir.
```C
#include <stdio.h>

struct Nec1 {
    int x, y;

    // Aşağıdaki yapı nested olarak C11 standardından sonra adı olmadan da tanımlanabilmektedir. 
    struct {
        int a, b, c;
    };

    // En önemli soru, peki neden aşağıdaki gibi kullanmıyoruz da yukarıdaki gibi kullanıyoruz, arada ne fark var, bu sorunun cevabını 'union' konusuna gelince öğreneceğiz.
    // struct {
    int a, b, c;
    // }; 
};

// int '4 byte' ise 'struct Erg' bellek büyüklüğü en az '12 byte' olacaktır.
// int '4 byte' ise 'struct Nec1' bellek büyüklüğü en az '20 byte' olacaktır.

int main(void)
{
    printf("sizeof(struct Nec) = %zu\n", sizeof(struct Nec));

    struct Nec1 nec1;
    nec1.a;
    nec1.b;
    nec1.c;
}
```

### 48 Ders 4. Önemli Bilgi

❗❗❗ C dilinin standardo bir yapının üyelerinin bellekte sıralı olacağını kesin olarak belirtmektedir. </br>
👇 Aşağıdaki programda yukarıdaki kesinliğin doğruluğu görülebilir.
```C
#include <stdio.h>

struct Nec1 {
    int x;
    double y;
    char str[20];
};

int main(void)
{
    struct Nec nec;

    printf("%p\n", &nec.x);
    printf("%p\n", &nec.y);
    printf("%p\n", nec.str); // Burada 'array decay' uygulanıyor ve 'nec.str' ifadesi '&nec.str[0]' ifadesine dönüştürülüyor.

    // Aşağıda yazdırılan iki ifadenin de adresi sayısal olarak aynı olmak zorundadır.
    printf("%p\n", &nec);
    printf("%p\n", &nec.x);
}
```


### 48 Ders 5. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programdaki gösterilen **alignment(hizalama)** konusu incelenebilir, bu kavran sonraki derslerde detaylı olarak incelenevektir. 
```C
#include <stdio.h>

struct Nec {
    char c1;
    int i;
    char c2;
};

int main(void)
{
    printf("sizeof(struct Nec) = %zu\n", sizeof(struct Nec)); // Burada 'struct Nec' türünden nesnenin elemanlarının bellekte sıralı olacağı kesin ama 'alignment(hizalama)' durumundan dolayı bellek boyutu beklenenden büyük olabilir.
}
```


### 48 Ders 6. Önemli Bilgi

❗❗❗ 👇 Aşağıdaki programda iç içe bildirilen yapılardan iç yapının ad arama(name lookup) işleminde görünür olduğu her yerde de görünür olduğu anlaşılmalıdır.
```C
#include <stdio.h>

struct Nec {
    int x, y;

    struct Erg {
        int a, b, c;
    }e1; 
}

struct Erg e1, e2;  // Bu biçimde değişken bildirimi C dilinde legal ama C++ dilinde legal değildir.

int main(void)
{
    struct Erg x; // Bu biçimde değişken bildirimi C dilinde legal ama C++ dilinde legal değildir.
    struct Erg* ptr;  // Bu biçimde değişken bildirimi C dilinde legal ama C++ dilinde legal değildir.

    // struct Nec::Erg; // Bu kullanım C++ dilinde legaldir.
}
```

