#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<stdlib.h>
#include<time.h>
using namespace std;

/**
bool isPrime(int num){
    bool flag=true;
    for(int i = 2; i <= num / 2; i++) {
       if(num % i == 0) {
          flag = false;
          break;
       }
    }
    return flag;
}

void kayaPrime(int n)
{
    long int i;
	cout<<"Enter the number: ";
	int a=0;
//	cout<<endl<<"Divisors of "<<n<<" are";

	for(i=1;i<=n;++i)
	{
		if(n%i==0){
//			cout<<" "<<i;
			a++;
		}
	}
	cout<<a<<endl;
	cout<<"\n"<<isPrime(a);
}
bool isKayaPrime()
{
    int testCase;
	cin>> testCase;
	for(int i =2;i<testCase+2; i++){
        kayaPrime(i);
	}
}
int main()
{


	return 0;
}
**/
/**
const int MAX_CHAR = 26;  // assuming lower case only

int countSubstringWithEqualEnds(string s)
{
    int result = 0;
    int n = s.length();

    // Calculating frequency of each character
    // in the string.
    int count[MAX_CHAR] = {0};
    for (int i=0; i<n; i++)
        count[s[i]-'a']++;

    // Computing result using counts
    for (int i=0; i<MAX_CHAR; i++)
        result += (count[i]*(count[i]+1)/2);

    return result;
}

// Driver function
int main()
{
    string s("abcab");
    cout << countSubstringWithEqualEnds(s);
    return 0;
}
**/

/**

int main() {

    int numberOfChairs;
    cin>> numberOfChairs;
    char seating[numberOfChairs];
    cin>>seating;
    char True;
    if(numberOfChairs<=1000 && numberOfChairs>=1){

    if(numberOfChairs==3){
        if((seating[0]==seating[2])){
            cout<<"Yes";
        }

    }

    else if(seating[0]=='0'){
        for(int i =1; i<numberOfChairs; i+=2){

            if(seating[i]=='1'&&seating[i-1]=='0'){
                True = 'a';
            }else{
                True = 'b';
                break;
            }
        }
        if(True == 'a'){
            if(seating[numberOfChairs-1]==seating[numberOfChairs-2]&&seating[numberOfChairs-1]=='1'){
                cout<<"No";
            }
            else if(seating[numberOfChairs-1]==seating[numberOfChairs-2]&&seating[numberOfChairs-1]=='0'){
                cout<<"Yes";
            }else{
                cout<<"Yes";
            }
        }else{
            cout<<"No";
        }
    }
    else if(seating[0]=='1'){
        for(int i =1; i<numberOfChairs; i+=2){
            if(seating[i]=='0'&&seating[i-1]=='1'){
                True = 'a';
            }else{
                True = 'b';
                break;
            }
        }
        if(True == 'a'){
            if(seating[numberOfChairs-1]==seating[numberOfChairs-2]&&seating[numberOfChairs-1]=='1'){
                cout<<"No";
            }
            else if(seating[numberOfChairs-1]==seating[numberOfChairs-2]&&seating[numberOfChairs-1]=='0'){
                cout<<"Yes";
            }else{
                cout<<"Yes";
            }
        }else{
            cout<<"No";
        }
    }
    else{
        cout<<"No";
    }

    }
    return 0;
}
**/

/**
int numberOfChairs;
    cin>> numberOfChairs;
    char seating[numberOfChairs];
    cin>>seating;
    char True;
    if(numberOfChairs<=1000 && numberOfChairs>=1){
        for(int i =0; i<numberOfChairs; i++){
            while(seating[i]=='0'){
                if(seating[i+1]=='0'){
                    cout<<"Yes";
                }else{
                    continue;
                }
            }
        }
    }
**/
/**
struct Address
{
    string cityName;
    int no;
};

struct Employee
{
    int id;
    string name;
    string department;
    Address* address;
};

int main()
{
    Employee employee = {12, "numan", "bilisim"};
    Address adress = {"istanbul", 5};

    employee.address = &adress;

    Employee* ptr = &employee;

    cout<<ptr -> address -> cityName<<endl;
    cout<<employee.address -> no<<endl;

    return 0;
}
**/
/**
//-------------------------------------------------------------
class construct
{
public:
    int a,b;

    construct()
    {
        a = 10;
        b = 20;
    }
};
//------------------------------------------------------------
class Test
{
public:
    Test();
};

Test::Test()
{
    cout<<"Constructor Called\n";
}

Test test1;
//------------------------------------------------------------
class Point
{
private:
    int x,y;
public:

    Point(int x1, int y1)
    {
        x = x1;
        y = y1;
    }

    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
    cout<<"main() started"<<endl;
    construct c;
    cout<<"a: "<<c.a<<endl<<"b: "<<c.b<<endl;
    Point p1(10,15);
    cout<<"p1.x = "<<p1.getX()<<",p1.y = "<<p1.getY()<<endl;

    return 0;
}
**/
/**
int search(int arr[], int n, int x)
{
    int i;
    for(int i =0; i< n; i++){
        if(arr[i]==x){
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1,2,3,4,53,5};
    int x=1;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result = search(arr, n, x);
    cout<<result<<endl;
}
**/
/**
int series[3][5], z;

int jumpSearch(int arr[], int n, int x)
{
    int step = sqrt(n);
    int prev = 0;

    while(arr[min(step, n)-1]<x){
        prev = step;
        step += sqrt(n);
        if(prev>n){
            return -1;
        }
    }
    while(arr[prev]<x){

        prev++;

        if(prev == min(step, n)){
            return -1;
        }
    }
    if(arr[prev] == x){
        return prev;
    }
    return -1;
}

int binarySearch(int arr[], int l, int r, int x)
{
    if(r>=l){
        int mid = l+(r-l)/2;
        if(x==arr[mid]){
            return mid;
        }
        if(x<arr[mid]){
            return binarySearch(arr, l, mid-1, x);
        }
        if(x>arr[mid]){
            return binarySearch(arr, mid+1, r, x);
        }
    }
    return -1;
}

int printing(int row)
{
    for(int z=0; z<5; z++){
        cout<<series[row][z]<<" ";
    }
    cout<<"\n";
}

int main()
{
    int arr2[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,
                34, 55, 89, 144, 233, 377, 610 };
    int n2 = sizeof(arr2)/sizeof(arr2[0]);
    cout<<jumpSearch(arr2, n2, 55)<<endl;

    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, 40);
    if(result == -1) {
        cout<<"Element is not present in array\n";
    }else {
        cout<<"Element is present at index :"<<result<<endl;
    }
    cout<<"serie:"<<endl;
    for(int z =0; z<3; z++){
        printing(z);
    }
    return 0;
}
**/

/**
int A[3][5], i;

void printingRow(int row)
{
    for(i=0; i<5; i++){
        cout<<A[row][i]<<" ";
    }
    cout<<"\n";
}


int main()
{
    for(i=0; i<3; i++){
        printingRow(i);
    }

    return 0;
}
**/

/**
#selection sort
int main()
{
    int min;
    int arr[] = {12,3,2,334,23,32,4,5,6};
    int n =sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<n-1; i++){

        min=i;
        for(int j=i; j<n; j++){

            if(arr[j]<arr[min]){
                min = j;
            }
        }
        swap(arr[min],arr[i]);
    }
    cout<<arr[0]<<arr[1]<<arr[2]<<arr[8];
    return 0;
}
**/
/**
int main()
{
    int long size = 100000;
    int long arr[size];

    srand((unsigned)time(0));

    for(int i=0; i<size; i++){
        arr[i] = (rand()%100)+1;

        cout << arr[i] << endl;
 }

    int n = sizeof(arr)/sizeof(arr[0]);
    int j;
    int deger;
    for(int i=1; i<n; i++){
        deger = arr[i];
        j = i-1;

        while(j>=0 && arr[j]>deger){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = deger;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
**/
/**
int main()
{
    int tmp;
    int A[] = {12,6,5,4,3,2,1,23,32,334};
    int n= sizeof(A)/sizeof(A[0]);
    for(int i=0; i<n; i++)
    {
    int sirali=1;
      for(int j=n-4 ; j>0;j--)
      {
        if(A[j-1]>A[j]) //þayet buraya girmiyorsak dizi sýralý demektir
        {
          sirali=0;  //þayet giriyorsak sýralý deðil demektir
          tmp=A[j-1];
          A[j-1]=A[j];
          A[j]=tmp;
        }
      }
      if(sirali)//þayet dizinin üstünden geçtiðimiz halde
                //hiç bir deðer yer deðiþtirmiyorsa
                // dizi sýralýdýr döngüden çýkýlabilir
         break;
    }
    for(int i =0; i<n; i++){
        cout<<A[i]<<" ";
    }
}
**/

int main()
{
    int A[] = {12,32,32,1,12,3,45,6,4};
    int Aux[9];
    int sortedA[9];
    int N = sizeof(A)/sizeof(A[0]);
    int K = 0;
    for(int i =0; i<N; i++){
        K = max(K,A[i]);
    }

    for(int i=0; i<=K; i++){
        Aux[i] = 0;
    }

    for(int i=0; i<N; i++){
        Aux[A[i]]++;
    }

    int j =0;
    for(int i =0; i<=K; i++){
        int tmp = Aux[i];

        while(tmp--){
            sortedA[j] = i;
            j++;
        }
    }
}
