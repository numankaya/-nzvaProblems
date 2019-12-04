#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
/*
int main()
{

    int a = 20;
	printf("bi say say:");
	scanf("%d", &a);
	if (a > 20 && a<30) {
		printf("20 den buy\n");
	}
	if (a < 20) {
		printf("20 den kl");
	}
	if (a == 20) {
		printf("20 ye es");
	}
    return 0;
}
*/
//int main() {
//	int a;
//	printf("bir sayi sayiniz:");
//	scanf_s("%d", &a);
//	if (a > 20 && a<30) {
//		printf("20 den büyük\n");
//	}
//	if (a < 20) {
//		printf("20 den kücük");
//	}
//	if (a == 20) {
//		printf("20 ye esit");
//	}
//
//	return 0;
//}

//int main() {
//	int ilkSayi;
//	int ikinciSayi;
//
//	printf("Lütfen iki tane sayi giriniz");
//	scanf_s("%d%d", &ilkSayi, &ikinciSayi);
//
//	if (ilkSayi < ikinciSayi) {
//		printf("ilk sayi ikinci sayidan küçüktür");
//	}
//	else {
//		printf("olmayabilir");
//	}
//	return 0;
//}

//int main() {
//	int a, b, c, d, e;
//	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
//
//	int toplam = a + b + c + d + e;
//	int ortalama = toplam / 5;
//
//	printf("ortalama: %d", ortalama);
//
//	return 0;
//}
//int main() {
//	int toplam = 0;
//	int i=1;
//	printf("5 sayi yazýn");
//
//	for (int i = 0; i < 5; i++) {
//		int a;
//		printf("%d. sayiyi yazýn:", i);
//		scanf("%d", a);
//		printf("%d\n",i);
//	}
//	printf("%d", i);
//}

//int main() {
//	int sayilar;
//	scanf_s("%d", &sayilar);
//	int sayac;
//	int toplam;
//	for (sayac = 1; sayac <= sayilar; sayac++) {
//		int a;
//		scanf_s("%d", &a);
//		toplam = toplam + a;
//	}
//	printf("ortalama: %d", (toplam / sayilar));
//}

//int main() {
//	int toplam = 0;
//	int sayac = 0, yazilanSayi;
//	scanf_s("%d", &yazilanSayi);
//
//	while (yazilanSayi != 0) {
//		toplam += yazilanSayi;
//		sayac++;
//		scanf_s("%d", &yazilanSayi);
//	}
//
//	printf("Ortalama: %d\n", toplam / sayac);
//
//	return 0;
//
//}
//
//int sayiAl() {
//	int sayi;
//	printf("sayi yaziniz.");
//	scanf_s("%d", &sayi);
//	return sayi;
//}
//void toplaVeYazdir(int sayi1, int sayi2) {
//	printf("Toplam = %d", sayi1 + sayi2);
//
//}
//int main() {
//	int toplam = 0;
//	int yazilanSayi;
//	int sayac = 0;
//
//	while (1) {
//		scanf_s("%d", &yazilanSayi);
//		if (yazilanSayi == 0) {
//			break;
//		}
//		else if (yazilanSayi < 0) {
//		printf("negatif sayi yazmayiniz");
//		continue;
//}
//		toplam += yazilanSayi;
//		sayac++;
//	}
//	printf("ort: %d\n", toplam / sayac);
//	int a, b;
//	a = sayiAl();
//	b= sayiAl();
//
//	toplaVeYazdir(a, b);
//}sgv

//int main() {
//	int a = 1;
//	int b = 1;
//	int x;
//	scanf_s("%d", &x);
//	while (a < x) {
//		a, b = b, a + b;
//		a++;
//	}
//	printf("%d", &b);
//}
/*
int main(){
    enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
    enum Weekday today = Wednesday;

    switch(today)
    {
        case Sunday:
            printf("Today is Sunday");
            break;
        case Monday:
            printf("Today is Monday");
            break;
        case Wednesday:
            printf("Today is Wednesday");
            break;
        default:
            printf("whatever");
            break;
}
return 0;
}


#define PAYRATE 12.00
#define TAXRATE_300 .15
#define TAXRATE_150 .20
#define TAXRATE_REST .25
#define OVERTİME 40

int main() {
    int hours = 0;
    double grossPay = 0.0;
    double taxes = 0.0;
    double netPay = 0.0;

    printf("Please enter the number of hours:");

    scanf( "%d", &hours);

    if( hours <= 40){
        grossPay = hours * PAYRATE;
    }
    else{
        grossPay = 40 * PAYRATE;
        double overTimePay = (hours - 40) * (PAYRATE * 1.5);
        grossPay += overTimePay;
    }
    if(grossPay <= 300){
        taxes = grossPay * TAXRATE_300;
    }
    else if(grossPay <=450){
        taxes = 300 * TAXRATE_300;
        taxes += (grossPay - 300) * TAXRATE_150;
    }
    else(grossPay > 450);{
        taxes = 300 * TAXRATE_300;
        taxes += 150 * TAXRATE_150;
        taxes += (grossPay -450) * TAXRATE_REST;
    }
    netPay = grossPay - taxes;

    printf("your gross pay  this week is: %.2f\n",grossPay);
    printf("your taxes this week is: %.2f\n", taxes);
    printf("your net pay this week is: %.2f\n", netPay);

    return 0;
}


int main() {
    int toplam = 0;
    printf("Ortalamasi hesaplanacak sayilari yaziniz. (0 yazarak listeyi sonlandirabilirsiniz)\n");

    int sayac = 0;
    int yazilanSayi = 1;
    while(1 == 1) {
        scanf("%d", &yazilanSayi);
        if(yazilanSayi == 0) {
            break;
        }
        toplam = toplam + yazilanSayi;
        sayac++;
    }

    if(sayac != 0) {
        printf("Ortalama: %d\n", toplam / sayac);
    } else {
        printf("Hi sayi yazmadiniz -_-\n");
    }

return 0;
}


int fibonacci(int m){
    int prev1 = 0;
    int prev2 = 1;
    int sonuc = 0;
    if(m == 1){
        return 1;
    }
    while(m != 1){
        sonuc = prev1 + prev2;
        prev2 = prev1;
        prev1 = sonuc;
        m--;
    }
    return sonuc;

}
int main(){
    int a;
    printf("lutfen bir sayi yaziniz");
    scanf("%d", &a);

    printf("%d. faktoriyel = %d", a, fibonacci(a));
    return 0;
}

void add(int sayi1, int sayi2){
    printf("%d + %d = %d", sayi1, sayi2, sayi1+sayi2);
}
int main(){
    int sayi1,sayi2;
    printf("birinci sayi yaziniz");
    scanf("%d", &sayi1);
    printf("ikinci sayi yaziniz");
    scanf("%d", &sayi2);

    add(sayi1, sayi2);

}


int sayiAl(){
    int sayi;
    scanf("%d", &sayi);
    return sayi;
}
int main(){
    int a=sayiAl();
    printf("sayi:%d", a );
    return 0;
}

int sayiAl(){
    int sayi1;
    scanf("%d", &sayi1);
    return sayi1;
}

int topla(int sayi1, int sayi2){
    return sayi1 + sayi2;
}

int main() {
    int a= sayiAl();
    int b= sayiAl();

    int toplam = topla(a,b);

    printf("%d + %d = %d", a, b, toplam);
    return 0;

}

void swap(int sayi1, int sayi2) {
    int gecici = sayi1;
    sayi1 = sayi2;
    sayi2 = gecici;
}

int main() {
    int a, b;

    printf("Bir sayi yaziniz: ");
    scanf("%d", &a);
    printf("Bir sayi daha yaziniz: ");
    scanf("%d", &b);

    swap(a, b);

    printf("a=%d b=%d\n", a, b);

    return 0;
}


int main() {
    int a=1;
    for(int i=1; i<6; i++){
        printf("i= %d\n", i);
    }
    while(a<6){
        printf("a= %d\n", a);
        a++;
    }
}

int main() {
    int toplam=0;
    int sayac=-1;
    int yazilanSayi=0;

    while(1==1){
        scanf("%d", &yazilanSayi);
        sayac++;
        toplam += yazilanSayi;

        if(yazilanSayi == 0){
            break;
        }
    }
    if(sayac != 0){
        printf("ortalama %d", toplam/sayac);
    }else{
        printf("hic bisey yazmadiniz");
    }
    return 0;
}

int main() {
    int a[100];
    int n;
    scanf("%d", &n);
    if(n>100){
        printf("100 den fazla sayi olmaz");
    }else{
        int i;
        for(i=0;i<n;i++){
            int girilenSayi;
            scanf("%d", &girilenSayi);
            a[i] = girilenSayi;
        }
        for(i=n-1; i>=0; i--){
            printf("%d,", a[i]);
        }
        printf("\n");
    }
    return 0;
}

int main() {
    int sayi, a;

    scanf("%d", &sayi);
    if(sayi<0){
        printf("yanlis sayi");
    }
    else{
        for(a=0;a<sayi;a++){
            if(sayi % a==0){
                printf("asal sayi degildir");
            }
            printf("asal sayidir");
            }
        }

    return 0;
}


int main() {
    int a = 5;

    unsigned long ulong = (unsigned long) &a;

    // Address of operator
    printf("%ld\n", ulong);

    int * p = &a;

    printf("Value of p = %d\n", p);

    printf("Value of *p = %d\n", *p);
    printf("Value of  a = %d\n", a);

    *p = 10;

    printf("Value of *p = %d\n", *p);
    printf("Value of  a = %d\n", a);

    a = 13;

    printf("Value of *p = %d\n", *p);
    printf("Value of  a = %d\n", a);


    return 0;
}



int main() {
    int a = 1024;
    char *ip = &a;

    char c = *(ip + 1);

    printf("%d", c);

    return 0;
}



int main() {
    char characterName[] = "John";
    int characterAge = 67;
    printf("there once was a man, %s", characterName);
    printf("he really liked being %d", characterAge);
    characterAge = 33;
    printf("he doesn't like being %d\n", characterAge);
    printf("%f", 5+5);
    printf("%f", pow(3,4);
    printf("%f", sgrt(64)); //ceil, floor
    return 0;
}

int main() {
    char name[20];
    fgets(name, 20, stdin);
//    scanf("%s", name);
    printf("%s", name);
}

int main(){
    int a,b;
    scanf("%d", &a);
    scanf("%d", &b);
    printf("%d + %d = %d\n",a,b, (a+b));
    printf("%d - %d = %d\n",a,b, (a-b));
    printf("%d * %d = %d\n",a,b, (a*b));
    printf("%d / %d = %d",a,b, (a/b));
    char color[20], celebrity[20], pluralNoun[20];

    scanf("%s", color);
    scanf("%s", celebrity);
    scanf("%s", pluralNoun);
    printf("color: %s", color);
    printf("celebrity: %s", celebrity);
    printf("plural Noun: %s", pluralNoun);

    int sayilar[] = {1,21,4,54,5,34,45};
    printf("%d %d %d\n", sayilar[1], sayilar[5], sayilar[1]+sayilar[5]);
    int sayi[5];
    sayi[2] = 23;
    printf("%d", sayi[2]);
    char isim[3]="numan";
    printf("%s", isim);
    return 0;
}


int main()
{
    printf("merhaba\n");
    bilgiler("numan", 23);
    bilgiler("kaya", 34);
    bilgiler("ali", 21);
    printf("tesekkurler");

return 0;
}

void bilgiler(char name[], int age)
{
    printf(" hi my name%s ,\nyou are %d years old", name, age);
}


double cube(double num);

int main()
{
    printf("result is %f", cube(2.0));
    return 0;
}

double cube(double num)
{
    double result;
    result = num *num* num;
    return result;
}


int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", max(a,b));

}

int max(sayi1, sayi2)
{
    int result;
    if(sayi1>sayi2){
        result= sayi1;
    }else{
        result = sayi2;
    }
    return result;
}


int topla(int num1, int num2);
int cikart(int num1, int num2);

int main()
{
    char islem[20];
    int a,b;
    printf("ilk:");
    scanf("%d", &a);
    printf("islem:");
    scanf("%s", islem);
    printf("ikinci:");
    scanf("%d", &b);

    if(islem == "+"){
        printf("%d",topla(a,b));
    }
    else if(islem == "-"){
        printf("%d",cikart(a,b));
    }
}

int topla(int num1, int num2)
{
    return num1 + num2;
}
int cikart(int num1, int num2)
{
    return num1 - num2;
}


int main() {

    char operator;
    double firstNumber,secondNumber;

    printf("Enter an operator (+, -, *,/): ");
    scanf("%c", &operator);

    printf("Enter two operands: ");
    scanf("%lf %lf",&firstNumber, &secondNumber);

    switch(operator)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
            break;

        case '-':
            printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
            break;

        case '*':
            printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
            break;

        case '/':
            printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
            break;

        // operator doesn't match any case constant (+, -, *, /)
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}

int main()
{
    char operator;
    double firstNumber, secondNumber;

    printf("choose operator (+,-,*,/):");
    scanf("%c", &operator);

    printf("\nwrite tow arguments:");
    scanf("%lf %lf", &firstNumber, &secondNumber);

    switch(operator)
    {
        case '+':
            printf("%lf", firstNumber+secondNumber);
            break;
        case '-':
            printf("%lf", firstNumber-secondNumber);
            break;
        case '*':
            printf("%lf", firstNumber*secondNumber);
            break;
        case '/':
            printf("%lf", firstNumber/secondNumber);
            break;
        default:
            printf("error......");
    }
    return 0;
}

struct Student
{
    char name[50];
    char department[40];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    strcpy(student1.department, "cet");
    strcpy(student1.name, "numan");
    student1.age = 21;
    student1.gpa = 3.6;

    struct Student student2;
    strcpy(student2.name, "ali");
    strcpy(student2.department, "cet");
    student2.age = 12;
    student2.gpa = 2.1;

    printf("%lf, %s", student2.gpa, student1.name);
    return 0;
}


int main()
{
    int a = 0;
    while(a<6){
        printf("%d\n",a);
        a++;
    }

    do{
        printf("%d\n", a);
        a--;
    }while(a>0);

    return 0;
}


int main()
{
    int secretNumber=5;
    int guess;
    int guessLimit=3;
    int guessCount=0;
    int outofGuess=0;

    while(guess != secretNumber && outofGuess==0){
        if(guessCount<guessLimit){
            printf("enter guess");
            scanf("%d", &guess);
            guessCount++;
        }else{
            outofGuess=1;

        }
    }
    if(outofGuess==1){
        printf("out of guess");
    }else{
        printf("you ein");
    }
    return 0;
}


int main()
{
    int luckynumbers[]={12,32,13,23,42,34,2};
    for(int i=0;i<7;i++){
        printf("%d\n",luckynumbers[i]);
    }

    int numbers[3][2]={{1,2},{3,2},{3,4}};
    printf(",%d,", numbers[0][1]);

    int age= 20;
    char name="numan";
    double gpa= 3.2;

    printf("age: %p\n name:%p\n gpa:%p");
    return 0;
}
*/
int main()
{
    char text[255];
    FILE * fpointer = fopen("employees.txt", "r");
    fgets(text, 255, fpointer);
    printf("%s", text);
    fclose(fpointer);
    return 0;
}











