#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int total = 0;
int temp = 0;
int rem = 0;

int reduce(int n){
    if (n<3){
        rem = n;
        return n;
    }else{
        temp += n/3;
        return reduce(n/3 + n%3);
    }
}

int count(int n){
    total = n;
    temp = 0;
    rem = 0;
    reduce(n);
    total += temp;
    return total;
}

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;

    while (cin>>n){

        int res = count(n);

        if (rem==2){
            res++;
        }

        cout<<res<<endl;

    }


    return 0;
}
