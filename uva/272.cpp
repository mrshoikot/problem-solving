#include<iostream>
#include<string>
#include<cstdio>

using namespace std;

int main(){

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    string str, temp;
    while(getline(cin, temp)){
        str += temp+"\n";
    }

    str.erase(str.end()-1,str.end());

    int left = 1;
    for(int i=0;i<str.length();i++){
        if(str[i]=='"'){
            if(left){
                str.replace(i,2, "``");
                left = 0;
            }else{
                str.replace(i,2, "''");
                left = 1;
            }
        }
    }
    cout<<str<<endl;

    return 0;
}
