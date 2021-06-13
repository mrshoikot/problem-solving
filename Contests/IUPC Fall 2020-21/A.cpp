#include<iostream>
#include<cstdio>

using namespace std;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    int n;

    while (cin>>n){

        if (n>=39 && n<=42){
            cout<<"Senior division"<<endl;
        }else if(n>=43 && n<=46){
            cout<<"Junior division"<<endl;
        }else{
            cout<<"Out of the division"<<endl;
        }

    }

    return 0;
}
