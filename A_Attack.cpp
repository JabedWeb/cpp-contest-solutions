#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int a,b;cin>>a>>b;
    long long value=a%b==0 ? a/b : (a/b)+1;
    cout <<value;
}