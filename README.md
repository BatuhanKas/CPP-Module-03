# CPP-Module-03

Bu projenin amaci size Class'lari miras aldirmayi ogretmektir. Base Class'tan miras alarak Derived Class'lar olusturacaksiniz ve gerekli islemleri yapacaksiniz.

## **Ex00**

Ilk Class'imi olustururken Class'im Base Class'im olacagi icin temeli saglam atiyorum. Gerekli olan tum fonksiyonlari yaziyorum. Tum get ve set fonksiyonlarini yaziyorum. Orthodox Canonical Form'un gerekliliklerini yaziyorum. Ayriyetten kendime kolaylik saglamak icin ***display, war, setInformation***  gibi ekstra fonksiyonlarda ekliyorum. ClapTrap CPP dosyasini dolduruyorum. PDF'in benden istedigi gereklilikleri yapiyorum.


## **Ex01**

Bu kisimda ScavTrap Class'im Base Class'imdan public miras alarak olusturulacak. Cogu Zaman zaten Base Class'ima gonderiyorum gerekli yerlerde ben eklemeleri yapiyorum. Burada benden Constructor, Destructor, Attack fonksiyonlari farkli mesaj bastirsin istemis fakat ben onlarda bile kolaylik olmasi icin Base Class'ima gonderiyorum. Base Class'imdaki cogu fonksiyonu public miras aldigim icin ve ben yukarida kolaylik olmasi icin setInformation fonksiyonunu yazdigim icin, direkt setInformation'a gonderiyorum. Attack fonksiyonunuda kendim yazdim fakat aynisi sadece ekrana print ettigi text farkli. GuardGate fonksiyonuna falan kontrol eklemisim o kadar. mainde de atalaya vura vura test yapmistim galiba. Aynen oyle yapmisim. Can falan basiyor yani.

## Ex02

Bu kisim FragTrap yine Base Class'tan inherit aliyor. Gerekli yerlerde yine base class'a yolluyorum. Yukarida yaptigim inherit islemlerinin aynisini fragtrap icinde yapiyorum bu kisimda pek farkli bir sey yok. Sadece main'e bir kac yeni testcase eklemisim hepsi bu kadar. Ha bir de ekstra çak beşlik fonksiyonu var. Bu fonksiyona enerjisi varmi, oldumu, kaldimi kontrolu yapmayi unutmusum. Siz eklemek istiyorsaniz ekleyebilirsiniz, Eger olduyse ekrana yazdirmasin enerjisi yoksa yine yazdirmasin eger her ikiside varsa yazdirsin gibi. Savunursan Opsiyonel olabilir.

## Ex03

Simdi geldik en guzel ve en ogretici kisima. Ben yine de bu kisimda aciklama yapacagim fakat daha detayli bir kaynak istiyorsan [notion](https://alike-dirigible-d37.notion.site/CPP-Notlarim-86e5660b50d740b5bd6b8803c8ae99f0?pvs=4) hesabima bakabilirsin. 

Bu kismi anlamak icin ilk basta Virtual Inheritence nedir? Diamond Problemi nedir? bunlari bilmemiz gerekiyor.

Eger biz bir class’i virtual olarak inheritence alirsak, ayni 2 class’in çakışmasını engellemiş oluruz. Eger biz bir Class’i virtual olarak miras almazsak normal olarak miras alirsak, ve ayni class’i birden fazla class’ta miras alirsak , Her iki class’inda icerisinde Base class’tan 2 tane olusmus gibi dusunebiliriz.

```
class  A {
	public:
	 int value;
};

class  B : public A {};
class  C : public A {};
  
class  D : public B,  public C {};
```

![Eger virtual olarak almazsak yasayacagimiz durum budur.](https://miro.medium.com/v2/resize:fit:498/1*vFlGOtFoP3aU-fWNUqg2qQ.jpeg)

Yukaridaki ornek hatali bir ornektir. A class’i benim Base class’im. 
Bu Class’tan B ve C’ye miras aliyorum fakat aldigim miras **direkt public** aliyorum.

Ben D class’ima ise B ve C’yi inherit aldiriyorum. Fakat burada yukarida yaptigim islem yanlis. Cunku her iki Class’iminda icerisinde kendi A Class’i var gibi dusunebilirsiniz. 
Eger ben Su durumda D Classimdan A class’ina ulasmaya calisirsam compiler ambigious hatasi verir. Cunku her iki class’imin icerisindede A class’i var. Bu sorunu nasil cozebiliriz?

Virtual inheritance, C++'ta kullanılan ve birden fazla miras alınan sınıflar arasında "diamond problem" olarak bilinen durumu çözen bir özelliktir. Bu problem, aynı temel sınıfın birden fazla yol üzerinden miras alınması durumunda, türetilmiş sınıfta bu temel sınıfın birden fazla kopyasının oluşmasıyla ortaya çıkar. Virtual inheritance, temel sınıfın yalnızca bir tane kopyasının oluşturulmasını sağlar.

```
class  A {
	public:
	 int value;
};

class  B : virtual public A {};
class  C : virtual public A {};
  
class  D : public B,  public C {};
```
Bu örnekte, D sınıfı A sınıfının yalnızca bir kopyasını içerir, çünkü B ve C sınıfları A sınıfını virtual olarak miras almıştır. Bu sayede B ve C classlarinda sadece 1 adet A class’i oldugu icin D class’indan A class’ina erisebiliriz.

![](https://i.hizliresim.com/2kfli0x.png)
