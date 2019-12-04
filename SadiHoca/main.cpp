
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#include <cstring>
#include <string.h>
#include <fstream>
#include <vector>

using namespace std;
/**
int f(int *p)
{
    p[2]=20;
}
int main()
{

int g(int x){
    x=20;
}
int f(int *x)
{
    *x=20;
}



bool asalmi(int x){
    for(int a=1; a<x; a++){
        if(x%a==0){
            return false;
        }
    }return true;
}

int asal(int n)
{
    double x;
    int y=0;
    for(x=2; y<20; x++){
        if(asalmi(x)){
            y++;
        }
    }return x-1;
}

int main()
{
    int a[8]={3,9,8,4,7,6,2,1};
    int b1=a[0];
    int b2=a[0];
    int b3=a[0];
    int toplam=0;
    int carpim=1;
    int tektoplam=0;
    int ttsayisi=0;
    int eb=a[0], ek=a[0];
    for(int i=0; i<8; i++){
        if(b1<a[i]){
            b3=b2;
            b2=b1;
            b1=a[i];
        }
        else if(b2<a[i]){
            b3=b2;
            b2=a[i];
        }
        else if(b3<a[i]){
            b3=a[i];
        }
    }
    cout<<b1<<","<<b2<<","<<b3<<","<<endl;
    cout<<b1+b2+b3<<endl;
    for(int z=0; z<8; z++){
        toplam+=a[z];
        carpim*=a[z];
    }
    for(int u=0; u<8; u++){
        if(a[u]%2==1){
            tektoplam+=a[u];
            ttsayisi++;
        }
    }
    for(int v=0; v<8; v++){
        if(a[v]>eb){
            eb=a[v];
        }else if(a[v]<ek){
            ek=a[v];
        }
    }
    cout<<toplam<<carpim<<endl;
    cout<<tektoplam<<","<<ttsayisi<<endl;
    cout<<"ek:"<<ek<<"eb:"<<eb;



    int n;
    cin>>n;
    int m[n];
    int toplam=0;
    for(int x=0; x<n; x++){
        cin>>m[x];
    }
    for(int y=0; y<n; y++){
        toplam+=m[y];
    }
    cout<<toplam<<endl;

    int a[5];
    cout<<"lutfen 5 sayi giriniz"<<endl;
    for(int p=0; p<5; p++){
        cin>>a[p];

    }

    int ek=a[0];
    int eb=a[0];
    int toplam=a[0];
    for(int o=1; o<5; o++){
        toplam+=a[o];
        if(a[o]<ek){
            ek=a[o];
        }
        else if(a[o]>eb){
            eb=a[o];
        }
    }
    cout<<"en buyuk deger:"<<toplam-ek<<endl;
    cout<<"en kucuk deger:"<<toplam-eb<<endl;

    int a[3]={1,2,3};
    int b[10]={4,5,0,1,2,3,8,1,2};
    int aboyut=3;
    int bboyut=9;
    for(int x=0; x<bboyut; x++){
        bool esit=true;
        for(int y=0; y<aboyut; y++){
            if(a[y]!=b[x+y]){
                esit = false;
                break;
            }
        }
        if(esit){
            cout<<"alt elemani vardir"<<x<<" 'dan baslar"<<endl;
        }
    }


    int n;
    cin>>n;
    srand(time(NULL));
    int skor=0;
    for(int a=0; a<n; a++){
        int z1= rand()%6+1;
        int z2= rand()%6+1;
        cout<<z1<<" "<<z2<<endl;
        if(z1>z2){
            skor++;
        }else if(z1<z2){
            skor--;
        }
    }if(skor>0){
        cout<<"z1 kazandi"<<endl;
    }else if(skor<0){
        cout<<"z2 kazandi"<<endl;
    }else{
        cout<<"berabere"<<endl;
    }

    int a[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j];
        }cout<<endl;
    }
//    int b[3][3];
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            int g=a[j][i];
            a[j][i]=a[i][j];
            a[i][j]=g;

        }
    }

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<a[i][j];
        }cout<<endl;
    }

    int toplam[3][3];
    int a[3][3]={1,2,3,4,5,6,7,8,9};
    int b[3][3]={9,8,7,6,5,4,3,2,1};
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            toplam[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int a=0; a<3; a++){
        for(int b=0; b<3; b++){
            cout<<toplam[a][b];
        }cout<<endl;
    }

    int a=11;
    int *p;
    p=&a;

    cout<<"a:"<<a<<endl;
    cout<<"p:"<<p<<endl;
    cout<<"*p:"<<*p<<endl;
    cout<<"&p:"<<&p<<endl;
    cout<<"&a:"<<&a<<endl;
    int *q;
    int x[3]={1,2,3};
    //q=x;
    q=&x[2];
    cout<<q[2]<<endl;
    cout<<x[2]<<endl;
    q[2]=12;
    cout<<x[2]<<endl;


    int a=10;
    int *p;
    p=&a;
    g(&a);
    cout<<a<<endl;
    f(p);
    cout<<a<<endl;


    //int a[5];
    int *p;
    p=(int*)malloc(sizeof(int)*5);
    for(int i=0; i<5; i++){
        cin>>*(p+i); //p[i]
    }
    for(int i=0; i<5; i++){
        cout<<*(p+i); //p[i]
    }

    int a[3] ={1,2,3};
    int *p;
    p = a;
    cout<<a[2]<<endl;
    f(p);
    cout<<a[2]<<endl;

    return 0;
}
**/

/**
int ust (int t, int u) // t = taban , u = ussu
{
int sonuc =1;
for (int i=1; i<=u; i++) {
       sonuc = sonuc * t ; // t^u = t*t*t*t*... (u tane)
}
return sonuc;
}
//asal sayılarının örnek kodları

bool asalmi (int x)
    {
    for (int i=2; i<x; i++)
    {
    if (x%i==0) /*eğer 2 (ve artan değerler) değerlerine bölündüğünde
     // kalıyorsa false (yanlış-asal değil)
     // olarak ata diyoruz.
        {
        return false;
        }
    }
    return true; //diğer durumlarda asal sayı olduğu için true (doğru) döndürüyoruz.
    }

int main()
{
    cout << "diziler - asal mersanne" << endl;

    int c=0; // kontrol değişkeni olarak atanmıştır, içinde asal mersanne sayılarını tutacaktır
    for (double i=2;  c<20; i++) {
        if (asalmi(ust(2,i)-1)) {

            cout << ust(2,i)-1 << endl;
            c++;
            }
        }
    return 0;
}

int f(int x)
{
    cout<<x<<endl;
    return x+3;
}
void g(int x)
{
    cout<<x+6<<endl;
}

int faktoriyel(int x)
{
    int carpim=1;
    int a;
    for(a=x; a>0; a--){
        carpim*=a;
    }
    return carpim;
}

int kombinasyon(int n, int r)
{
    int komb= faktoriyel(n)/(faktoriyel(r)* faktoriyel(n-r));
    return komb;
}

int fakatoriyelr(int n)
{
    if(n==1){
        return 1;
    }
    return n*faktoriyelr(n-1);
}

int carpma(int sayi, int miktar)
{
    int sonuc=0;
    for(int i=0; i<miktar; i++){
        sonuc=sonuc+sayi;
    }
    return sonuc;
}

int carpmaR(int sayi, int miktar)
{
    if(sayi==0 || miktar==0){
        return 0;
    }else if(miktar<0){
        return carpmaR(0-sayi, 0-miktar);
    }
    return sayi+carpmaR(sayi, miktar-1);
}


int ust(int sayi, int t)
{
    int sonuc=1;
    int x;
    for(x=0; x<t; x++){
        sonuc*=sayi;
    }
    return sonuc;
}

bool asalSayi(int sayi)
{
    for(int i=2; i<sayi; i++){
        if(sayi%i==0){
            return false;
        }
    }return true;
}
int ust(int sayi, ust)
{
    int sonuc=1;
    for(int a=1; a<=ust; a++){
        sonuc=sonuc * sayi;
    }
    return sonuc;
}
**/
/**
int ust (int t, int u) // t = taban , u = ussu
{
    int sonuc =1;
    for (int i=1; i<=u; i++) {
       sonuc = sonuc * t ; // t^u = t*t*t*t*... (u tane)
    }

    return sonuc;
}

bool asalmi(int x)
{
    for(int i=0; i<x; i++){
        if(x%i==0){
            return false;
        }
    }return true;
}
int main()
{
   cout<<f(3)<<endl;
    cout<<f(7)<<endl;
    g(5);
    cout<<"f, k"<<endl;
    cout<<faktoriyel(5)<<endl;
    cout<<kombinasyon(5,3)<<endl;
    cout<<"yineleme:"<<endl;
    cout<<fakatoriyelr(6)<<endl;
    cout<<mersanne()<<endl;
    asalSayi();
    cout<<carpma(4,33)<<endl;
    cout<<carpmaR(-3,4)<<endl;
    cout<<carpmaR(3,-6)<<endl;
    cout<<carpmaR(4,5)<<endl;
    for(int a=0; a<20; a++){
        cout<<ust(2,a)-1<<endl;
    }
    for(int b=0; b<500; b++){
        if(asalSayi(b)){
            cout<<b<<","<<endl;
        }
    }


    int rg;
    srand(time(NULL));

    rg=rand()%6+1;
    cout<<rg<<endl;

    rg=rand()%2;
    cout<<rg<<endl;

    rg=rand()%100;
    cout<<rg<<endl;
    cout<<"arrayler"<<endl;

    int a[3]={1,3,2};
    cout<<a[1]<<endl;
    cout<<a[2]<<endl;
    a[2]=4;
    cout<<"for dongusu"<<endl;
    for(int i=0; i<3; i++){
        cout<<a[i]<<endl;
    }
    int b[5];
    b[0] = 12;
    b[1] = 11;
    cin>>b[2];
    cin>>b[3];
    for(int t=0; t<5; t++){
        cout<<"-"<<b[t]<<endl;

    int dizi[5];
    int b;
    for(int a=0; a<5; a++){
        cin>>b;
        dizi[a]=b;
    }
    cout<<dizi[4]<<"-sayi"<<endl;
    int buyuk;
    buyuk=dizi[0];
    for(int i=1; i<5; i++){
       if(dizi[i]>buyuk){
        buyuk=dizi[i];
       }
    }
    cout<<"buyuk:"<<buyuk<<endl;

    int kucuk;
    kucuk=dizi[0];
    for(int x=0; x<5; x++){
        if(dizi[x]<kucuk){
            kucuk=dizi[x];

        }
    }
    cout<<"kucuk:"<<kucuk<<endl;


    int toplam=0;
    int z;
    for(z=0; z<5; z++){
        toplam +=dizi[z];
    }
    int ortalama=0;
    ortalama = toplam/(z);
    cout<<"toplam:"<<toplam<<endl;
    cout<<"ortalama:"<<ortalama<<endl;



    int c=0;
    for(int y=2; c<20; y++){
        if(asalmi(ust(2,y)-1)){
            cout<<ust(2,y)-1 <<endl;
            c++;
        }
    }
    return 0;
}
**/


/**
int main()
{
    int a = 10;
    cout <<a<<endl;
    cout << "Hello world!" << endl;

    float pi = 3.14;
    long tl=123423;




    float xyz = 4.99;
    cout << xyz<<endl;
    int birsayi = 56;
    float fbirsayi = birsayi;
    cout << fbirsayi << endl;
    int at = 64;
    char cat = at;
    cout << (char)at<<endl;
    cout << (char)100 <<endl;
    int x,y;
    cout<< "lutfen bir sayi giriniz"<< endl;
    cin >> x;
    cout<< "lutfen ikinci sayi giriniz"<< endl;
    cin >> y;
    cout <<"girdiginiz sayi"<<x<<"ikinci sayi:"<<y<< endl;

    int sayi;
    cin >> sayi;
    if(sayi>80){
        cout<<"A"<<endl;
    }
    else if(sayi>60){
        cout<<"B"<<endl;
    }
    else if(sayi>40){
        cout<<"C"<< endl;
    }
    else {
        cout<<"kaldýnýz"<< endl;
    }

    int sayi2;
    sayi2 = 32;
    switch(sayi2){
    case 1:cout<<'bunu yaz';
        break;
    case 2:cout<<'2';
        break;
    default:
        cout<<"diger durumlar"<<endl;
    }


    int a,b,c, enbuyuksayi, enkucuksayi;
    cin >>a;
    cin >>b;
    cin >>c;
    if(a>b && a>c  ){
        enbuyuksayi=a;
        if(b>c){
            enkucuksayi = c;
        }else{
            enkucuksayi = b;
        }
    }
    else if(b>c){
        enbuyuksayi=b;
        enkucuksayi=a;
    }
    else{
        enbuyuksayi=c;
        enkucuksayi=a;
    }
    cout<<enbuyuksayi<<","<<enkucuksayi<<endl;


    float isciSayisi, is, kisiBasinaYapilanIs, isiBitirmeSuresi;
    cout<<"isci sayisini giriniz"<<endl;
    cin >> isciSayisi;
    is=20.0;
    kisiBasinaYapilanIs=10.0;

    isiBitirmeSuresi = is/isciSayisi*kisiBasinaYapilanIs;
    cout<<isiBitirmeSuresi<<endl;

    int kacisci,kacgun;
    cout<<"bir isci kac gunde bitiriyor."<<endl;
    cin>>kacgun;
    cout<<"kac isci calisiyor."<<endl;
    cin>>kacisci;

    cout<<"isi bitme suresi"<<(float)kacgun/kacisci<<"dir"<<endl;

    int a,b,c;
    cout<<"kenarlari giriniz"<<endl;
    cin>>a;
    cin>>b;

    c=sqrt(a*a+b*b);
    cout<<"h="<<c<<endl;
    cout<<"c="<<a+b+c<<endl;
    cout<<"a="<<a*b/2<<endl;

    int yol, hiz, sure, saat;
    cin>>yol;
    cin>>hiz;

    sure = yol/hiz;
    cout<<sure<<endl;
    saat =yol/hiz;
    float dakika = (float)yol/hiz - (int)yol/hiz;
    dakika=dakika*60;
    cout<<"tahmini sure"<<saat<<","<<dakika<<endl;

    int z=1;
    while(z<20){
        cin>>z;
        cout<<z<<endl;
        z+=3;
    }
    for(int y=1; y<20; y+=3){
        cin>>y;
        cout<<y<<endl;
    }

    int x=1;
    do{
        cin>>x;
        cout<<x<<endl;
        x+=3;
    }while(x<20);

    for(int q=1; q<100; q+=2){
        cout<<q<<endl;
    }
    for(int w=50; w<70; w+=2){
        cout<<w<<endl;
    }
    for(int e=100; e>70; e--){
        if(e%7==0){
            cout<<e<<endl;
        }
    }
    for(int r=1; r<100; r++){
        if(r%3==0 && r%7==0){
            cout<<r<<endl;
        }
    }

    while(t<20){
        cout<<"numan"<<endl;
        t++;
        if(t==10){
            break;
        }
    }
    while(t<20){
        cout<<"numan"<<endl;
        t++;
        if(t==7){
            continue;
        }
    }

    int a=1,b=1,c=0;
    while(c<100){
        a=b;
        b=c;
        c=a+b;
        cout<<c<<endl;
    }

    int n;
    a=1,b=1,c=0;
    cout<<"bir sayi giriniz"<<endl;
    cin>>n;
    cout<<"******************"<<endl;
    for(a=1;a<n-2;a++){
        a=b;
        b=c;
        c=a+b;
        cout<<c<<endl;
    }

    int asayisi=0, esayisi=0, ssayisi=0, n;
    cin>> n;
    int sayi=0;
    for(int v=1; v<n; v++){
        cin>>sayi;
        if(sayi<0){
            esayisi++;
        }
        else if(sayi>0){
            asayisi++;
        }
        else{
            ssayisi++;
        }
    }
    int toplam=ssayisi+esayisi+asayisi;
    cout<<"ssayi:"<<(float)esayisi/toplam<<",,,esayi:"<<(float)esayisi/toplam<<",,,asayi:"<<(float)asayisi/toplam<<endl;


    int a,b,c;
    for(a=1; a<=10; a++){
        for(b=1; b<=10; b++){

            for(c=1; c<10; c++){
                cout<<a<<" "<<b<<" "<<c<<",";
            }
        }
        cout<<endl;
    }

    int d,e;
    for(d=1; d<=4; d++){
        for(e=1; e<=4; e++){
            cout<<d*e<<"\t";
        }cout<<endl;
    }

    int f,g,h, boyut;
    cin>>boyut;
    for(f=1; f<=boyut; f++){
        for(h=1; h<=f; h++){
            cout<<" ";
        }

        for(g=1; g<=boyut-f; g++){
            cout<<"*";
        }
        cout<<endl;
    }

    int i,j, dizi;
    cin>>dizi;
    for(int i=0; i<dizi; i++){
        for(int j=0; j<dizi; j++){
            if(i+j>=dizi-1){
                cout<<"1";
            }else{
            cout<<"0";
            }
        }cout<<endl;
    }

    int a,b,c,d,e,f,g,h;
    cin>>a;
    for(b=0; b<a; b++){
        for(c=0; c<=b; c++){
            cout<<"*";
        }cout<<endl;
    }

    for(d=a; d>0; d--){
        for(e=1; e<d; e++){
        cout<<"*";
        }cout<<endl;
    }


    int a,b,boyut;
    cin >>boyut;
    for(a=0; a<boyut; a++){
        for(b=0; b<=a; b++){
            cout<<"*";
        }cout<<endl;
    }

    int c,d, e;
    for(c=0; c<boyut; c++){
        for(d=0; d<boyut-c; d++){
            cout<<" ";
        }
        for(e=0; e<=c; e++){
            cout<<"*";
        }cout<<endl;


    int a,b,c,d,e,f, boyut;
    cin >> boyut;
    for(c=0; c<boyut; c++){
        for(a=0; a<boyut-c; a++){
            cout<<" ";
        }
        for(b=0; b<=2*c; b++){
            cout<<"*";
        }
        }cout<<endl;
    cout<<endl;
    for(d=0; d<boyut; d++){
        for(e=0; e<boyut-d; e++){
            cout<<" ";
        }
        for(f=0; f<=2*d; f++){
            cout<<"*";
        }cout<<endl;
    }

    int a,b,c,d;
    cin>>d;
    for(a=d; a<26; a++){
        for(b=d; b<=a; b++){
            cout<<(char)(b+65)<<" ";
        }
        for(c=a-1; c>=d; c--){
            cout<<(char)(c+65)<<" ";
        }
        cout<<endl;
    }


    return 0;
}

int f(int *p)
{
    p[2]=10;
}

int topla(int *a, int boyut)
{
    int toplam=0;
    for(int i=0; i<boyut; i++){
        toplam+=a[i];
    }
    return toplam;
}
int f(int *a, int boyut)
{
    int eb=a[0];
    int ek=a[0];

    for(int i=0; i<boyut; i++){
        if(eb<a[i]){
            eb=a[i];
        }
        if(ek>a[i]){
            ek=a[i];
        }
    }
    return eb-ek;
}

int boyut(char *s)
{
    int b=0;
    char c=s[0];
    while(c!='\0'){
        c=s[b++];
    }
    return b;
}

string ters(string s){
    char c=s[0];
    int i=1;
    char *p,*q;
    p=&s[0];
    q=&s[0];

    while(*p!='\0'){
        p++;
    }
    p--;
    while(p>q){
        char c=*p;
        *p=*q;
        *q=c;
        p--;
        q++;
    }
    return s;
}
**/
/**
int main()
{

    int a[9]={1,3,2,4,6,4,-2,8};
    cout<<f(a,9)<<endl;

    char *b="numan";
    cout<<b<<endl;
    cout<<b[3]<<endl;
    char c[6]="numan";
    char d[5];
    d[0]='n';
    d[1]='u';
    d[2]='m';
    //b=c;
    if(strcmp(c,b)==0){
        cout<<"esitler"<<endl;
    }else if(b!=c){
        cout<<"esit degil"<<endl;
    }
    c[2]='x';
    cout<<b<<endl;
    cout<<"dfm"<<endl;
    cout<<boyut(b)<<endl;
    cout<<boyut(c)<<endl;
    cout<<strlen(c)<<endl;
    char *x=(char*)malloc(sizeof(char)*6);
    strcpy(x,b);
    cout<<x<<endl;
    string s;
    char *p="evren";
    char e[6]="evren";
    s=p;
    cout<<s.size()<<endl;
    s.append("deneme1");
    cout<<s<<endl;
    cout<<s.substr(2,8)<<endl;
//    cout<<d<<" "<<endl;
//    cout<<c<<endl;

//    int a[3]={1,2,3};
//    cout<<a[2]<<endl;
//    f(a);
//    cout<<a[2]<<endl;
//    cout<<topla(a,3)<<endl;


    char a[20];
    cin>>a;
    char *p, *q;
    p=a;
    q=a;
    while(*q!= '\0'){
        q++;
    }
    q--;
    bool polindrome=true;
    while(q>p){
        if(*p!=*q){
             polindrome=false;
        }
        p++;
        q--;
    }
    if(polindrome){
        cout<<"polindromedur"<<endl;
    }
    else{
        cout<<"polindrome degildir"<<endl;
    }


    ofstream dosya; //output file yazma
    dosya.open("deneme.txt");
    if(dosya.is_open()){
        dosya<<"Numan Kaya";
        dosya.close();
    }
    else
        cout<<"dosya acilmadi"<<endl;

    string satir;
    ifstream dosya2("deneme.txt"); //input file okuma
    if(dosya2.is_open()){
        while(getline(dosya2,satir)){
            cout<<satir<<'\n';
        }
        dosya2.close();
    }
    ofstream dosya;
    dosya.open("islemleri.txt");
    if(dosya.is_open()){
        dosya<<"cekoslovaklalistiramadiklarimizdan ? vds"<<endl;
        dosya.close();
    }
    else{
        cout<<"dosya acilmadi"<<endl;
    }
    ifstream dosya1("islemleri.txt");
    string s;
    ofstream cikti("cikti.txt");
    while(getline(dosya1,s)){
        cout<<ters(s)<<endl;
        cikti<<ters(s)<<endl;
    }
    dosya1.close();
**/
/**
void display(int arr[], int size)
{
    for(int i = 0; i<size; i++){
        cout <<arr[i] <<" ";
    }
    cout <<endl;
}
void insertionSort(int arr[], int size){
    int j, temp;
    for(int i = 0; i<size; i++){
        j=i;
        while(j>0 && arr[j-1] > arr[j]){
            temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

vector<int> myVector;                 // VEKTOR TANIMLANDI VE 5 ADET 100 DEĞERİ ATANDI
int main()
{
    const int size = 10;
    int numbers[size];
    srand(unsigned(time(0)));
    for(int i = 0; i<size; i++){
        numbers[i] = (rand()%100)+1;
        cout <<numbers[i] <<" ";
    }
    cout << endl;
    insertionSort(numbers, size);
    display(numbers, size);


    vector<int>dizi(5,100);                   // VEKTOR TANIMLANDI VE 5 ADET 100 DEĞERİ ATANDI


    for(int i=0;i<5;i++){                 // VEKTOR EKRANA YAZILDI
        cout << dizi.at(i) << endl;
}
    myVector.push_back(3);
    myVector.push_back(3);
    myVector.push_back(12);
    myVector.push_back(23);
    myVector.push_back(34);
    myVector.push_back(7);
    cout<<"vector"<<endl;
    for(unsigned int i =0; i<myVector.size(); i++){
        cout << myVector[i] <<" ";
    }
    cout << endl;

    myVector.insert(myVector.begin() + 2 , 5);
    cout << "Vector" <<endl;

    for(int a = 0; a<myVector.size(); a++){
        cout << myVector[a] <<" ";
    }

    cout << endl;
    myVector.erase(myVector.begin() + 4);

    for(int a = 0; a<myVector.size(); a++){
        cout << myVector[a] <<" ";
    }

    if(myVector.empty()){
        cout<<"empty"<<endl;
    }else{
        cout <<"is not empty" <<endl;
    }

    cout<<"ins"<<endl;

    return 0;
}




int A[3][5],i=6;

void printingRow(int row)
{
    for(int i=0; i<5; ++i){
        cout<<A[row][i]<<" ";
    }
    cout<<"\n";
    cout<<"printing row:"<<i<<endl;
}

int main()
{
    for(int i=0; i<3; ++i){
        printingRow(i);
    }
    cout<<"main i:"<<i<<endl;
    return 0;
}
**/

int Aglobal[3][3];

void addMatrix(int X)
{
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            Aglobal[i][j]+=X;
        }
    }
    cout<<"X:"<<X<<endl;
}

int sumElements()
{
    int sumElement=0;
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            sumElement+=Aglobal[i][j];
        }
    }
    return sumElement;
}
int main()
{
    addMatrix(1);
    addMatrix(10);
    addMatrix(100);
    int sumElement=sumElements();
    cout<<"sumElement:"<<sumElement<<endl;
}

