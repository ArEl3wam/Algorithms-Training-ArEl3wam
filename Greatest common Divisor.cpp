#include <bits/stdc++.h>
     
using namespace std;
int GCD(long a , long b){
    if( b== 0){
        return a;
    }
    else{
        return GCD(b ,a%b);
    }
}

int main()
{
    long a,b;
    cin >> a>>b;
    if(b>a){
        swap(a,b);
    }
    cout << GCD(a,b);

}
