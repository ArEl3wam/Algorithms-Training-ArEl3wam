#include <bits/stdc++.h>
     
using namespace std;
int GCD(long long a ,long long b){
    if( b== 0){
        return a;
    }
    else{
        return GCD(b ,a%b);
    }
}
long long LCM(long long a , long long b){
    return a*b/GCD(a,b);
}

int main()
{
    long long a,b;
    cin >> a>>b;
    if(b>a){
        swap(a,b);
    }
    cout << LCM(a,b);

}
