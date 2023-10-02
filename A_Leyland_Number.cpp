#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b;cin>>a>>b;

    int sum1=1,sum2=1;

    for(int i=0;i<b;i++) sum1*=a;

    for(int i=0;i<a;i++) sum2*=b;
    
    cout<<sum1+sum2<<endl;
}