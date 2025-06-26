#### Aşağıdaki sabitlerin _(constants)_ türlerini yazınız. Geçersiz olanları belirtiniz.

**int** türü 4 byte boyutunda olduğu kabul edildiğinde cevaplar aşağıdaki gibi olacaktır;

- 0. → double türündedir.
- 0.F → float türündedir.
- 34f → Geçersiz kullanım çünkü tam sayı türü float olarak kullanılmaya çalışılıyor, doğru kullanım `34.f` şeklinde olmalıdır.
- 3E3 → int türündedir.
- 2.5e+2 → int türündedir.
- 45.3L → Geçersiz kullanım çünkü kayan noktalı bir sayı long türü olarak kullanılmak isteniyor. 
- 4.1l → Geçersiz kullanım çünkü kayan noktalı bir sayı long türü olarak kullanılmak isteniyor.
- .5 → double türündedir.
- 3.2e-2f → float türündedir.
- 67F → Geçersiz kullanım çünkü tam sayı türü float olarak kullanılmaya çalışılıyor, doğru kullanım `67.F` şeklinde olmalıdır.
