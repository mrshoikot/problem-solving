#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>

using namespace std;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    long long int n;
    cin>>n;

    for(long long int i=0;i<n;i++){
        long long int a;
        cin>>a;
        a = (((((((a*567)/9)+7492)*235)/47)-498)%100)/10;
        if(a<0){
            a *= -1;
        }
        cout<<a<<endl;
    }

    return 0;
}
