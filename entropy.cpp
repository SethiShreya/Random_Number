#include<bits/stdc++.h>

using namespace std;

double cal_entropy(string str, double n){
    double count=0;
    while(1){
        int i=0;
        for (i=0; i<str.size(); i++){
            if (str[i]=='1'){
                count++;
            }
        }
        if (i==str.size()){
            break;
        }
    }
    double entropy= -((count/n)*log2f(count/n));
    return entropy;
}

int main(){
    ifstream in("test3.csv");
    ofstream out("output.csv");
    string str;
    int n;
    int window_size = 2, count_entropy = 0 ;
    in>>str;
    count_entropy= str.size()-1;
    n= str.size();
    for (int i=0; i<count_entropy; i++){
        out<<"Entropy "<<i+1<<" = "<<cal_entropy(str.substr(i, window_size), n)<<endl;
    }
    cout<<"CSV file generated";
    out.close();
    in.close();
    return (0);
}