
#include<iostream>
#include <math.h>
using namespace std;

int PrimeFactors(int *arr,int n) {
    int k=0;
   while (n%2 == 0){
      n = n/2;
      arr[k]=2;k=k+1;
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         arr[k]=i;k=k+1;
         n = n/i;
      }
   }
   if (n > 2){
   arr[k]=n;k=k+1;}
    return k;
}

 

int gcd(int m, int n){
    int arr1[100],arr2[100];
    int c1,c2;
    c1=PrimeFactors(arr1,m);
    c2=PrimeFactors(arr2,n);
    int r=1;
    int z=0;
    for(int i=0;i<c1;i++){
        for(int j=z;j<c2;j++){
            if(arr1[i]==arr2[j]){
                r=r*arr2[j];
                j++;
                z=j;
                break;
            }
        }
    }
    
    return r;
}
 

 

int main(){
    int m,n;
    cout<<"Enter two number :";
    cin >> m>>n;
    int ans = gcd(m,n);
    cout <<"GCD OF "<<m<<" and "<<n<<" is "<<ans<<endl;
}
