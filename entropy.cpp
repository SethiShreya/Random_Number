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
    ifstream in("input.csv");
    ofstream out("output.csv");
    string str="", s;
    int n;
    int window_size = 0, count_entropy = 0 ;
    while (in.good()){
        in>>s;
        str.append(s);
    }
    n= str.size();
    window_size= n-99;
    for (int i=0; i<n; i++){
        if (i+window_size > n)
            break;

        count_entropy++;
    }
    for (int i=0; i<count_entropy; i++){
        out<<"Entropy "<<i+1<<" = "<<cal_entropy(str.substr(i, window_size), window_size)<<endl;
    }
    cout<<"CSV file generated";
    out.close();
    in.close();
    return (0);
}