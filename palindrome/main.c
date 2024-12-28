#include <stdio.h>
#include <math.h>

int main () {
    printf("Palindromga tekshirilmoqchi bo'gan sonni kiriting: ");
    int number;  
    scanf("%d", &number); // misol sifatida 2332 kiritildi
    int count = 0; // kiritilgan sonning nechta xonaligini o'zlashtirishish uchun o'zgaruvchi yaratdik
    int number2 = number; // kiritilgan sonni boshqa o'zgaruvchiga saqlab qo'ydik
    while (number2 > 0) { // bu sikl sonning nechta xonaligini aniqlaydi sonni 10 ga bo'lib butun qismini olib borish kerak.
        number2 = number2 / 10; // bu holat #1 siklda 233 bo'ladi # 2 siklda 23 bo'ladi #3 siklda 2 bo'ladi #4 siklda 0 bo'ladi 
        count++; // count sikl yakunida 4 ga teng bo'ladi
    }


    for (int i = count - 1; i >= 0; i -= 2) { 
        if (number / (int) pow(10, i) == number %10){ //bu yerda sonning 1 chi va oxirgi raqamlari solishtirilyapti yani 2 va 2 bu shart bajarilsa
            number = number % (int) (pow(10, i)); 
            number  = number / 10; //number ning qiymatini 2 chetidagi sonlarni obtashgandagi qiymatiga tenglaymiz yani 33 ga
        } else { 
            printf("Yo'q\n");
            return 0;
        }
    }
    
    printf("Ha\n");
    return 0;
}