#include <bits/stdc++.h>
using namespace std;

int main() {
    //break and continue 
    //iteration
    int n;
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++) cin >> arr[i];

    //for(int i=1;i<=n;i++) cout << arr[i] << " ";

    // continue
    //condition mil pabe tokhon oi iteration skip kore dibe
    

    // for(int i=1;i<=n;i++){
    //     cout << arr[i] << " ";
    //     if(arr[i]%2==0){
    //         continue;
    //     }
    //     //cout << arr[i] << " ";
    // }



    //break;
    // loop thake ber hoye jai jokhon condition mil khuje pabe
    
      for(int i=1;i<=n;i++){
        cout << arr[i] << " ";
        if(arr[i]%2==0){
            break;
        }
        //cout << arr[i] << " ";
     }
}
