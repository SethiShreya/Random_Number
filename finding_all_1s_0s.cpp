#include<iostream>
#include<string>
using namespace std;

int main(){
    string str;
    int zero=0, one=0;
    cout<<"Enter the random string: ";
    getline(cin, str);
    for (int i=0; i<str.size(); i++){
        if (str[i]=='0'){
            zero++;
        }else{
            one++;
        }
    }
    cout<<"Total number of o's present are "<<zero<<endl;
    cout<<"Total number of 1's present are "<<one;
return (0);
}   