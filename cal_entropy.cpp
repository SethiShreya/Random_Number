#include<iostream>
#include<cmath>
#include<string>
using namespace std;

double entropyCal(string str, int beg, int end){
    int one = 0 ;
    for (int i=beg; i<end; i++){
        if (str[i]=='1'){
            one++;
        }
    }
    double p;
    p = ((double) one/(double) str.size());
    return -(p * log(p));
}

int main(){
    int beg = 0, end = 0, no=0, size_of_window = 0;
    string str;
    cout<<"Enter the Random String: ";
    cin>>str;
    cout<<"Enter the number of windows you want: ";
    cin>>no;
    size_of_window = str.size()/no;
    end= size_of_window;
    cout<<"Entropy value of whole string: "<<entropyCal(str, 0, str.size())<<endl;
    for (int i=1; i<=no; i++){
        cout<<"Entropy value of "<<i<<" window: "<<entropyCal(str, beg, end)<<endl;
        beg+=size_of_window;
        end= (i+1)*size_of_window;
    }


return (0);
}