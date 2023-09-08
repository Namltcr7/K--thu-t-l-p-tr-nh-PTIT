#include<iostream>
#include<math.h>
#include<tgmath.h>
using namespace std;
 long long power(long long x, int n) { 
     long long result = 1;
      for (int i = 0; i < n; i++) { 
        result *= x; 
         } return result;}
int dem(long long n){
    int cnt=0;
    while(n!=0){
        int t=n%10;
        cnt++;
        n/=10;
    }
    return cnt;
}
long long arm(long long n){
    long long sum=0;
    int k=dem(n);
    while(n!=0){
        long long t=n%10;
        sum+=power(t,k);
        n/=10;
        
    }
return sum;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    long long n;
    cin>>n;
    arm(n);
    if(arm(n)==n) cout<<"1"<<endl;
    else cout<<"0"<<endl;}
      return 0;
}