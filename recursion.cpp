// #include<bits/stdc++.h>
// using namespace std;
// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     return sum(n-1)+n;
// }
// int main(){

// int n;
// cin>>n;
// cout<<"sum is ="<<sum(n)<<endl;
// }

















#include<bits/stdc++.h>
using namespace std;

int sum(int n){
    if(n==1) return 1;
    
    return sum(n-1) +n;
}

int main(){
    int n;
    cin>>n;

    cout<<"sum ="<<sum(n)<<endl;

}