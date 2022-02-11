#include<iostream>
using namespace std;
int main(){
    string str;
    int arr[8]= {0, 0, 0, 0, 0, 0, 0, 0};
    cout<<"Enter the random string: ";
    getline(cin, str);
    for (int i=0; i<str.size(); i++){
        if (str[i]=='0' && str[i+1]=='0' && str[i+2]=='0'){
            arr[0]++;
            i+=2;
        }
        else if(str[i]=='0' && str[i+1]=='0' && str[i+2]=='1'){
            arr[1]++;
            i+=2;
        }
        else if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='0'){
            arr[2]++;
            i+=2;
        }
        else if(str[i]=='0' && str[i+1]=='1' && str[i+2]=='1'){
            arr[3]++;
            i+=2;
        }
        else if(str[i]=='1' && str[i+1]=='0' && str[i+2]=='0'){
            arr[4]++;
            i+=2;
        }
        else if(str[i]=='1' && str[i+1]=='0' && str[i+2]=='1'){
            arr[5]++;
            i+=2;
        }
        else if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='0'){
            arr[6]++;
            i+=2;
        }
        else if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='1'){
            arr[7]++;
            i+=2;
        }
    }
    cout<<"Total no of 0's and 0's and 0's pairs are: "<<arr[0]<<endl;
    cout<<"Total no of 0's and 0's and 1's pairs are: "<<arr[1]<<endl;
    cout<<"Total no of 0's and 1's and 0's pairs are: "<<arr[2]<<endl;
    cout<<"Total no of 0's and 1's and 1's pairs are: "<<arr[3]<<endl;
    cout<<"Total no of 1's and 0's and 0's pairs are: "<<arr[4]<<endl;
    cout<<"Total no of 1's and 0's and 1's pairs are: "<<arr[5]<<endl;
    cout<<"Total no of 1's and 1's and 0's pairs are: "<<arr[6]<<endl;
    cout<<"Total no of 1's and 1's and 1's pairs are: "<<arr[7]<<endl;

return (0);
}