#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    long long int n;

    while(1){
        cin>>n;
        if(n<0){break;}

        cout<<((n*(n+1))/2)+1<<endl;
    }

    return 0;
}
