#include <iostream>
#include <cmath> // sqrt fonksiyonunu kullanabilmek için gerekli kütüphane
using namespace std;

int main()
{
    //* Dairenin alanını bulan program
    /*
    float r, area;
    cout << "enter r: ";// Kullanıcıdan dairenin yarıçapını girmesini istiyoruz
    cin>> r;
    area = 3.1425f * r * r; // Alanı hesaplıyoruz: Alan = pi * r * r
    /// Buradaki 3.1425f ifadesindeki 'f', sayının 'float' türünde olduğunu belirtir.
    /// 'float' türü, 'double' türüne göre daha düşük hassasiyete sahiptir ve daha az bellek kullanır.
    /// Eğer 'f' eklemeseydik, 3.1425 sayısı varsayılan olarak 'double' türünde kabul edilirdi.
    
    cout << "area is: " << area;
    */
    //* Üçgenin alanını bulan program
    /*
    ///Kullanıcıdan alınacak üçgenin taban (b) ve yüksekliği (h) , alan değişkenleri
    double b, h, a; /// 'double' türü kullanarak daha hassas sonuçlar elde edebiliriz.
    cout << "enter b and h: ";
    cin >> b >> h; ///cin otomatik tür dönüşümü yapar
    a = (b * h) / 2.0; /// Üçgenin alanını hesaplayan formül: (taban * yükseklik) / 2
    cout << "Ucgenin alani: " << a << endl;
    */
    //* n'e kadar olan sayıların toplamını bulan program
    /*
    int n, sum; /// 'n' sayısı ve 'sum' toplamı için iki tam sayı değişkeni tanımlanır
    cout << "Bir sayi girin: " << endl;
    cin >> n;
    /// 1'den 'n' kadar olan sayıların toplamını hesaplamak için formül kullanılır
    sum = n * (n + 1) / 2; /// Matematiksel olarak: sum = 1 + 2 + 3 + ... + n
    cout << "Sonuc: " << sum << endl;
    */
    //* ikinci dereceden denklemin köklerini hesaplamak için kullanılan bir  program
    /*
    /// Değişkenler tanımlanıyor:
    /// a, b, c: ikinci derece denklem katsayıları
    /// r1, r2: hesaplanacak kökler
    float a, b, c, r1, r2;
    cout << "a, b, c degerlerini girin: ";/// Kullanıcıdan a, b, c katsayılarını girmesini iste
    cin >> a >> b >> c;
    /// 'a' sıfır olamaz çünkü birinci dereceden denklem olur ve bu durumda ikinci dereceden kökler hesaplanamaz
    if (a == 0)
    {
        cout << "Hata: 'a' katsayısı sifir olamaz!" << endl;
        return 1; // Programdan hata kodu ile çıkış
    }
    /// Diskriminant hesaplanır: b² - 4ac, köklerin gerçek mi yoksa karmaşık mı olacağını belirler
    float discriminant = b * b - 4 * a * c; // diğer adıyla delta
    /// Diskriminant durumlarına göre farklı hesaplamalar
    if (discriminant > 0)
    {
        /// Diskriminant pozitif ise: İki farklı gerçek kök vardır
        /// Köklerin hesaplanması için ikinci derece denklem çözüm formülü kullanılır
        r1 = (-b + sqrt(discriminant)) / (2 * a); // Birinci kök (+) ile
        r2 = (-b - sqrt(discriminant)) / (2 * a); // İkinci kök (-) ile
        cout << "İki gerçek kök:" << endl;
        cout << "r1: " << r1 << endl;
        cout << "r2: " << r2 << endl;
    }
    else if (discriminant == 0)
    {
        /// Diskriminant sıfır ise: Bir tane gerçek kök (çift kök) vardır
        r1 = -b / (2 * a);
        cout << "Bir tane gerçek kök (çift kök):" << endl;
        cout << "r1 = r2: " << r1 << endl;
    }
    else
    {
        /// Diskriminant negatif ise: İki karmaşık kök vardır
        /// Karmaşık kökler gerçek ve sanal kısımlardan oluşur
        float realPart = -b / (2 * a); /// Gerçek kısım
        float imaginaryPart = sqrt(-discriminant) / (2 * a); /// Sanal kısım
        cout << "Karmaşık kökler:" << endl;
        cout << "r1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "r2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }*/
    return 0;
}
