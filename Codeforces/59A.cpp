#include<iostream>
#include<cstring>
using namespace std;

int main(){

    string s;
    cin >> s;
    int lower=0,upper=0,len=s.length();

    for(int i=0; i<len; i++){
        if(s[i] >= 65 && s[i] <= 90) upper++;
        else if(s[i] >= 97 && s[i] <= 122) lower++;
    }
    if(lower >= upper){
        for(int i=0; i<len; i++){
            if(s[i] >= 65 && s[i] <= 90) s[i] = s[i] + 32;
        }
    }
    else{
        for(int i=0; i<len; i++){
            if((s[i] >= 97 && s[i] <= 122)) s[i] = s[i] - 32;
        }
    }
    cout << s << endl;
    return 0;
}