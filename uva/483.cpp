#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>

using namespace std;


int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string str;

    while(getline(cin, str)){
        for(int i=0,j=0;j<str.size();j++){
            if(str[j] == ' '){
                reverse(&str[i], &str[j]);
                i=j+1;
            }else if(j+1==str.size()){
                reverse(&str[i], &str[j+1]);
            }
        }
        cout<<str<<endl;
    }

    return 0;
}
