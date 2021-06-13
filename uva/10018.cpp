#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

long long int rev(long long int n){
    long long int sum=0;
    while(n!=0){
        sum = sum*10 + n%10;
        n /= 10;
    }
    return sum;
}

int count=0;

long long int operation(long long int n){
    if(n==rev(n) && ::count>0){
        cout<<::count<<" "<<n<<endl;
        ::count = 0;
        return n;
    }else{
        ::count++;
        return operation(n+rev(n));
    }
}

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int T;
    cin>>T;

    for(int t=0;t<T;t++){
        long long int n;
        cin>>n;
        operation(n);
    }

    return 0;
}
