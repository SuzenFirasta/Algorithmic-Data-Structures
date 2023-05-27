
#include<iostream>
#include <math.h>

using namespace std;
int gcdMiddleSchool(){
	return 0;
}
int* primeFac(int n){
	int a = 0;
	int f[10];
	for (int i = 2 ; i<n ; i++){
		while(n%i==0){
			f[a]=i;
			n = n/i;
			a++;
		}
	}
	return f;
}
int f[10];
void printPrimeFactors(int n) {
	int count = 0;
   while (n%2 == 0){
      f[count] = 2;
      n = n/2;
      count++ ; 
   }
   for (int i = 3; i <= sqrt(n); i = i+2){
      while (n%i == 0){
         f[count] = i;
         count++;
         n = n/i;
      }
   }
   if (n > 2)
   cout<<n<<"\t";
   count++;
}
int main(){
//int a = 0;
//int n = 10;
//	int f[10];
//	for (int i = 2 ; i< n ; i++){
//		while(n%i==0){
//			f[a]=i;
//			n = n/i;
//			a++;
//		}
//	}
//	for(int i = 0; i<n;i++){
//		cout<< f[i]<< " ";
//	}
	printPrimeFactors(10);
		return 0;
}
