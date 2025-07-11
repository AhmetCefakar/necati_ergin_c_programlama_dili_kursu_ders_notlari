#include "nutility.h"
#include <stdio.h>
#include <stdlib.h> // bu baslik dosyasini 'rand' fonksiyonunu kullanabilmek icin ekliyoruz.
#include <time.h> // bu baslik dosyasini 'time' fonksiyonunu kullanabilmek icin ekliyoruz.


// Aşağıdaki fonksiyon aldığı tam sayının kaç basamaklı olduğu bilgisini döndürür. 
int ndigit(int x) // added in 21. lesson
{
    if(x == 0)
        return 1;

    int digit_count = 0;

    while(x){
        ++digit_count;
        x /= 10;
    }

    return digit_count;
}


// Aşağıdaki fonksiyon aldığı tam sayının basamak değerlerinin toplamını döndürür.
int sumdigit(int x) // added in 21. lesson
{
    int sum = 0;

    while(x){
        sum += x /= 10;
        x = x /= 10; 
    }

    return sum;
}


// Aşağıdaki fonksiyon kendisine gönderilen sayının asal olup olmadığını tespit edip geriye 'zero/non-zero' değer döndürmektedir. '1' sayısı asal sayı değildir.
int isprime(int x) // added in 21. lesson
{
    if(x < 2)
        return 0;

    if(x % 2 == 0)
        return x == 2;

    if(x % 3 == 0)
        return x == 3;

    if(x % 5 == 0)
        return x == 5;

    for(int i = 7; i * i <= x; i += 2){
        if(x % i == 0){
            return 0;
        }
    }

    return 1;
}


// Sakamuto algoritmasi girilen tarihten haftanin kacinci gunu oldugunu tespit eder.
// Sadece 1900'den sonraki tarihler icin gecerlidir.
// 
// return value;
// 0 ise: Pazar
// 1 ise: Pazartesi
// 2 ise: Sali
// 3 ise: Çarşamba
// 4 ise: Perşembe
// 5 ise: Cuma
// 6 ise: Cumartesi
int dayofweek(int d, int m, int y) // added in 21. lesson
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y / 4 - y / 100 + y / 400 + t[m - 1] + d) % 7;
}


// İki sayıdan büyüğünü döndüren fonksiyon
int max2(int x, int y) // added in 21. lesson
{
    return x > y ? x : y;
}


// Üç sayıdan büyüğünü döndüren fonksiyon
int max3(int x, int y, int z) // added in 21. lesson
{
    int max = x;

    if(y > max)
        max = y;
    
    if(z > max)
        max = z;
    
    return max;
}


// Kendisine argüman olarak verilen sayılardan ortanca olan sayıyı dönen foksiyon
int getmid(int x, int y, int z) // added in 21. lesson
{
    // '(x > y && x > z)' ifadesi 'x' en büyük sayı mı sorgulaması
    // '(x < y && x < z)' ifadesi 'x' en küçük sayı mı sorgulaması
    // Yukarıda açıklanan iki ifadenin veya ile birleştirilmesinden oluşan ifade de 'x'in ortanca olmama durumunun mantıksal gösterimidir.
    // Yukarıda açıklanan iki ifadenin değilinin alındığı durumdaki ifade ise 'x'in ortanca sayı olma durumunu gösterecektir.
    if( !((x > y && x > z) || (x < y && x < z)) )
        return x;

    if( !((y > x && y > z) || (y < x && y < z)) )
        return y;

    return z;
}


void putline(void) // added in 21. lesson
{
    printf("\n---------------------------------------------------------\n");
}


// p    : Yazdirilaca olan dizinin ilk elemaninin adresi.
// size : Yazdirilaca olan dizinin eleman sayisi.
void print_array(const int* p, size_t size) // added in 23. lesson, modifield in 31. lesson
{
    for(size_t i = 0; i < size; ++i){
        // dongu degiskeni 0 degilse ve 20'nin kati olan dongu adimindaysa yeni satirdan devam edilsin diye 'if statement' yazildi.
        if(i && i % 20 == 0){
            printf("\n");
        }

        // dizinin ilgili adimdaki elemani uc birimlik alana formatli yazdirilacak.
        printf("%3d ", p[i]);
    }
    
    printf("\n---------------------------------------------------------\n");
}


// p    : Elemanlarina deger atanacak olan dizinin ilk elemaninin adresi.
// size : Elemanlarina deger atanacak olan dizinin eleman sayisi.
void set_array_random(int* p, size_t size) // added in 23. lesson, modifield in 27. lesson, modifield in 31. lesson
{
    while(size--)
        *p++ = rand() % 1000;

    /* ikinci versiyon
    while(size--){
        *p = rand() % 1000;
        ++p;
    }
    */
   
    /* İlk versiyon
    for(int i = 0; i < size; ++i){
        p[i] = rand() % 1000;
    }
    */
}


// 'rand' fonksiyonunun tohum değerini sistemin saat bilgisine göre değiştirmek için yazilan fonksiyon
void randomize(void) // added in 23. lesson
{
    srand((unsigned int)time(NULL));
}


// p : 'Standart Input'tan yapılan girişi 'null character'i görene kadar okuyup okunan karakterlerin yazılacağı elemanları 'char' türünden olan dizinin başlangıç adresi değeri.
void sgets(char* p) // added in 25. lesson, modifield in 31. lesson
{
    int ch;

    while((ch = getchar()) != '\n')
        *p++ = (char)ch;

    *p = '\0';

    // 25. derste yazılmış hali
    //int ch;
    //int idx = 0;
    //while((ch = getchar()) != '\n'){
    //    p[idx++] = (char)ch; // Burada int türünden char türüne atama yapıldığı için bu şekilde tür dönüşümünün bilinçli olarak yapıldığı belirtiliyor.
    //}
    //p[idx] = '\0'; // Burada yazının son karakteri 'null character' yapılıyor.
}


// p1: Takan edilecek ilk 'int' türünden nesnenin adresi
// p2: Takan edilecek ikinci 'int' türünden nesnenin adresi
void swap(int* p1, int* p2) // added in 28. lesson
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}


// 'gswap' adı 'Generic Swap' sözcüklerinden gelmektedir.
// Aşağıdaki 'gswap' fonksiyonu herhangi bir tür için takas işlemi yapmaktadır.
// 'gswap' fonksiyonu ile sadece aynı türden nesneler takas edilmelidir.
// vp1  : Takas edilecek ilk nesnenin adresi.
// vp2  : Takas edilecek ikinci nesnenin adresi.
// sz   : Kaç byte alan takas edileceği bilgisi.
void gswap(void* vp1, void* vp2, size_t sz) // added in 35. lesson
{
    char* p1 = (char*)vp1; // '(char*)' tür dönüştürme operatörü ile yapılan tür dönüşümü işlermi hem kodu okuyana hem de derleyiciye açık şekilde bildirilmiş olacaktır.
    char* p2 = (char*)vp2;

    // Aşağıdaki döngünün koşul ifadesinde idiomatik yapı kullanılmıştır ama döngü gövdesinde idiomatik yapılar kullanılmamıştır.
    //while(sz--){
    //    char temp = *p1;
    //    *p1 = *p2;
    //    *p2 = temp;
    //    ++p1;
    //    ++p2;
    //}

    // Aşağıdaki döngünün koşul ifadesinde ve gövdesinde idiomatik yapılar kullanılmıştır.
    while(sz--){
        char temp = *p1;
        *p1++ = *p2;
        *p2++ = temp;
    }
}


// Rastgele ad verisi almak için kullanılan fonksiyon.
const char* random_name(void)
{
    static const char* const p[] = {
        "ata", "emrecan", "adem", "burhan", "korhan", "demir", "bilal", "emrecan", "celik", "zahide",
        "dost", "lale", "baran", "saniye", "poyraz", "saadet", "aynur", "yeliz", "berivan", "mukerrem",
        "melih", "necati", "cezmi", "muslum", "azize", "atif", "rupen", "alev", "haldun", "hulusi",
        "yelda", "billur", "yasemin", "tarcan", "yasar", "tarkan", "refik", "berk", "kenan", "izzet",
        "adnan", "sefa", "kazim", "gursel", "huseyin", "suheyla", "binnaz", "nusret", "aykut", "efecan"
        "esra", "tonguc", "kunter", "yurdanur", "abdi", "fugen", "ayse", "aydan", "edip", "nazli",
        "nucahit", "onat", "cumhur", "yalcin", "ziya", "ali", "ismail", "recep", "sarp", "yilmaz",
        "hilal", "atakal", "cemre", "emirhan", "ceylan", "sabriye", "necmettin", "nagehan", "muhsin", "perihan",
        "suleyman", "zeliha", "cahide", "beril", "askin", "zahit", "sevim", "ege", "utku", "ercument",
        "seyhan", "sadegul", "yenes", "sadi", "candan", "cemile", "tansel", "turgut", "sumeyye", "aylin",
        "hakan", "ferhunde", "cebnail", "nihat", "alparslan", "osman", "efa", "ece", "soner", "necmi",
        "polat", "daci", "pelinsu", "keram", "eylul", "beste", "mert", "akin", "kamile", "kerem",
        "bekir", "nalan", "bulent", "tijen", "durmus", "cansu", "sadri", "atil", "yesim", "sevilay",
        "furkan", "ediz", "helin", "sadettin", "gulden", "samet", "binnur", "celal", "murat", "sezer",
        "bilge", "yunus", "cem", "temel", "sefer", "petek", "haluk", "teoman", "aslican", "aycan",
        "azmi", "nazife", "nurullah", "yasin", "nedim", "abdulmuttalip", "gulsen", "devlet", "mahin", "tarik",
        "yurduagul", "nisan", "derya", "emre", "sade", "leyla", "fadime", "tamer", "julide", "busra",
        "feramuz", "dilek", "dilber", "tansu", "abdullah", "mehmet", "nuri", "gizem", "nefes", "yavuz",
        "demet", "zekai", "zerrin", "umit", "gul", "emine", "sezen", "ugur", "turhan", "aziz",
        "tuncer", "handan", "irkam", "lamia", "can", "kelami", "ceyhan", "cahit", "metin", "bilgin",
        "su", "tayyar", "ferhat", "nuriye", "cemal", "engin", "pelin", "yusuf", "garo", "iffet",
        "galip", "deniz", "belgin", "muzaffer", "hiyazi", "kayahar", "hulki", "kaya", "necmiye", "kasim",
        "hulya", "sidre", "esin", "suphi", "cengiz", "olcay", "rumeysa", "tugay", "asim", "yurdakul",
        "feraye", "derin", "cuneyt", "keriman", "nuriye", "esen", "tevfik", "naz", "gurbuz", "cetin",
        "bora", "taci", "sadullah", "gulsah", "menekse", "semsit", "burak", "fikret", "cahan", "ceyda",
        "selenay", "alicap", "figen", "hasullah", "oesim", "zubeyde", "sezai", "melike", "nurdan", "arda",
        "nazif", "fuat", "gunay", "tufan", "fahri", "handesu", "kezban", "halime", "beyhan", "ciler",
        "tayyip", "afacan", "mustafa", "kunthar", "tugra", "ahmet", "hasan", "hakkı", "metin", "dytac",
        "pinat", "selin", "kaan", "melisa", "sevde", "nihal", "nevsin", "pakize", "teslime", "tunc",
        "nahit", "ceyhun", "hismet", "ede", "malik", "ani", "cağan", "egemen", "hande", "hilmı",
        "muvvafet", "cemil", "diana", "tayfun", "zarife", "tekin", "murathan", "caner", "devrim", "agah",
        "kamil", "ayla", "papatya", "kayhan", "durriye", "melek", "tanuj", "sinem", "jade", "sadiye",
        "refika", "birhan", "sami", "orkun", "erdem", "ufuk", "dogan", "atalay", "fazilet",
        "tancer", "polathan", "bennur", "aslihan", "cihat",
    };

    return RANDOM_ELEM(p);
}


// Rastgele soyad verisi almak için kullanılan fonksiyon.
const char* random_surname(void)
{
    static const char* const p[] = {
        "acar", "acgoze", "acuka", "ademoglu", "adiguzel", "agaoglu", "akarsu", "akcalar", "akgunes", "akkay",
        "akkuyu", "aklikit", "aksakal", "akyildiz", "akyoldas", "alemdar", "alniacik", "altindag", "altinsik", "altinorak",
        "arcan", "aslan", "avci", "abyezay", "aylak", "azmak", "bahceli", "bakirci", "baklavaci", "barutcu",
        "baturalp", "bayraktar", "bekar", "belgeli", "beyaz", "bilgic", "bozkaya", "boztas", "canbay", "candamar",
        "cangoz", "cankoc", "canlikaya", "cansever", "cansiz", "celik", "celiker", "cengaver", "cevikkol", "cilingir",
        "comakci", "corbaci", "cubukay", "cuhadar", "daglarca", "damar", "degirmenci", "demirdogen", "demirel", "derin",
        "dingin", "dokmeci", "dokuzcan", "dosteli", "dumbuk", "dunyalik", "ecevit", "edepeli", "edepsiz", "efelik",
        "elebasi", "eliagir", "elibol", "elitemiz", "elkizi", "elmanli", "eloglu", "emirkulu", "engerek", "engereke",
        "erdogan", "ergin", "erim", "ersoy", "ertakan", "esereli", "esendur", "estererli", "etci", "ezgercer",
        "fakir", "fedai", "fincan", "firatonu", "fitrat", "gamsiz", "gedik", "geldik", "gilgamis", "girik",
        "gucusur", "gultekin", "gumus", "gurkas", "hamsikoylu", "harmanci", "haselici", "hepguler", "hurmaci", "iliksiz",
        "issiz", "jilet", "kabasakal", "kadersiz", "kahraman", "kalemsiz", "kalinkas", "kalpsiz", "kalpten", "kapan",
        "kapici", "kaplan", "kara", "karabatur", "karaduman", "karealmas", "karakis", "karakoyun", "karakuzyu", "karamuk",
        "karaorman", "karasaban", "karataban", "karayeyl", "kayabasi", "kazanci", "kecisakal", "kelepce", "kelleci", "keskin",
        "kesman", "kilicdar", "kilimci", "kilinc", "kiriboga", "kircisi", "koygirit", "kolcak", "komcu", "komurcu",
        "konak", "konca", "koralp", "korukcu", "kosnuk", "kotek", "koylu", "kucukkaya", "kulaksiz", "kurban",
        "kurtulus", "kusmen", "lalezar", "lokmaci", "lombak", "lufer", "maganda", "malazgirt", "malkaciran", "mazgirt",
        "merdane", "mertek", "merzifon", "mirza", "miskin", "miskinoglu", "muglali", "nazik", "nurtopu", "olmez",
        "oltu", "onan", "ongun", "ordulu", "ornancan", "ormanci", "ortaca", "osmaneli", "otaci", "ovacik",
        "oztoklu", "ozveneci", "pakdaman", "pirlanta", "polatkan", "portakol", "poturgeli", "reis", "renacan", "resimci",
        "saferikli", "safkan", "salca", "saldiray", "sallabas", "samanci", "saricakir", "sarikafa", "sarpdemir", "savaskan",
        "sefiloglu", "selercan", "semiz", "seney", "serce", "serinsun", "sessiz", "silahdar", "silifkeli", "simsek",
        "sivri", "sofougolu", "sonmez", "sonuzun", "soylu", "soysalan", "soybozuk", "sucu", "sulugoz", "supuren",
        "takes", "tamgun", "tamirci", "tantana", "tarumar", "tekinalp", "tekkaya", "tekkilic", "telek", "temiz",
        "temizel", "temizkalp", "tepecik", "tepsici", "tercan", "terlemez", "tertemiz", "tilki", "tokatci", "tombeki",
        "topatan", "topkapi", "tozkoparan", "tufancan", "tunali", "tuzcu", "tuztas", "ufukcu", "ugursuz", "ulakci",
        "uluocak", "umutsuz", "unalani", "unalmis", "unkapani", "uraz", "uslu", "uyar", "uzay", "uzunadam",
        "yagizeli", "yanardag", "yanardoner", "yangin", "yaracan", "yaradan", "yarama", "yasayavas", "yasli", "yasmek",
        "yavas", "yayasan", "yaygara", "yelden", "yeldirme", "yersiz", "yikilmaz", "yildirim", "yilgin", "yilmaz",
        "yolyapan", "yorganci", "yorgun", "yosun", "yurdakul", "yurekli", "yurekyakan", "yurtsuz", "zaimoglu", "zalim",
        "zengin", "zebani",
    };
    
    return RANDOM_ELEM(p);
}