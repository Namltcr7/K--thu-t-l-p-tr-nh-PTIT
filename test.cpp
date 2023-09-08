#include<iostream>
#include<math.h>
#include<tgmath.h>
using namespace std;
 long long power(long long x, int n) { 
    // Tính x mũ n với x và n là số nguyên
     long long result = 1;
      // Khởi tạo kết quả bằng 1 
      for (int i = 0; i < n; i++) { 
        // Lặp n lần 
        result *= x; 
        // Nhân kết quả với x
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
double arm(long long n){
    double sum=0;
    int k=dem(n);
    while(n!=0){
        long long t=n%10;
        sum+=power(t,k);
        n/=10;
        
    }
    
    return sum;
}
int main(){
    long long n;
    cin>>n;
    cout <<dem(n)<<endl;
     cout<<arm(n)<<endl;
}