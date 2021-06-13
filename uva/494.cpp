#include<iostream>
#include<string>
#include<cstdio>
#include<vector>
#include<algorithm>

using namespace std;

bool isLetter(char c){
    return (c>='a'&&c<='z') || (c>='A'&&c<='Z') ? true : false;
}

int main(){

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    string str;

    while(getline(cin, str)){
        int n=0,test=0;
        for(int i=0;i<str.size();i++){
            char x=str[i];
            if(!isLetter(x) && test){
                n++;
                test=0;
            }else if(isLetter(x)){
                test=1;
            }
        }
        if(test){
            n++;
        }
        cout<<n<<endl;
    }

    return 0;
}
