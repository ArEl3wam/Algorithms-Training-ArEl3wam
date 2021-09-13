#include <bits/stdc++.h>
 
using namespace std;

int remainFibo(long n){
    int dummy = n%60;
    if(n<=1){
        return  n;
    }
    else{
        int arr[n+2];
        arr[0]=0;
        arr[1]=1;
    
        for(int i=2; i<=dummy; i++){
            arr[i]=((arr[i-1]%10)+(arr[i-2]%10))%10;
        }
        return   arr[dummy];
}
}

int main()
{
    long n; cin >> n;
    cout << remainFibo(n);

}
