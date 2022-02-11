#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    int arr[4]= {0, 0, 0, 0};
    cout<<"Enter the random string: ";
    getline(cin, str);
    for (int i=0; i<str.size(); i++){
        if (str[i]=='0' && str[i+1]=='0'){
            arr[0]++;
            i++;
        }else if(str[i]=='1' && str[i+1]=='1'){
            arr[3]++;
            i++;
        }else if(str[i]=='0' && str[i+1]=='1'){
            arr[1]++;
            i++;
        }else if (str[i]=='1'&& str[i+1]=='0'){
            arr[2]++;
            i++;
        }

    }
    cout<<"Total no of 0's and 0's pairs are: "<<arr[0]<<endl;
    cout<<"Total no of 0's and 1's pairs are: "<<arr[1]<<endl;
    cout<<"Total no of 1's and 0's pairs are: "<<arr[2]<<endl;
    cout<<"Total no of 1's and 1's pairs are: "<<arr[3]<<endl;
return (0);
}