#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int count=0;

int newcig(int n, int k){
    if(n<k){
        int n=count;
        count=0;
        return n;
    }else{
        count += n/k;
        return newcig(n/k+n%k, k);
    }
}

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int a,b;

    while(cin>>a>>b){
        cout<<a+newcig(a,b)<<endl;
    }

    return 0;
}
