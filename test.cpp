#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int sum(int n){
    int sum=0;
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int reduce(int n){
    if(n<10){
        return n;
    }else{
        return reduce(sum(n));
    }
}

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    while(1){
        int n, set=0;
        cin>>n;
        if(n==0){ break;}
        cout<<reduce(n)<<endl;
    }

    return 0;
}
