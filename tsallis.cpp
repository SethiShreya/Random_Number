#include<bits/stdc++.h>

using namespace std;

double cal_entropy(string str, double n, int q){
    double count_1=0;
    double count_0=0;
    double p1, p0, pi;
    while(1){
        int i=0;
        for (i=0; i<str.size(); i++){
            if (str[i]=='1'){
                count_1++;
            }
            else if (str[i]=='0'){
                count_0++;
            }
        }
        if (i==str.size()){
            break;
        }
    }
    
    p1= count_1/n;
    p0= count_0/n;
    pi= pow(p1, q) + pow(p0, q);
    double entropy= (1/((double)q-1))*(1-pi);
    return entropy;
}

int main(){
    ifstream in("input_tsallis.csv");
    ofstream out("output_tsallis.csv");
    string str="", s;
    int n;
    int window_size = 0, count_entropy = 0 ;
    while (in.good()){
        in>>s;
        str.append(s);
    }
    n= str.size();
    window_size= 5;
    for (int i=0; i<n; i++){
        if (i+window_size > n)
            break;

        count_entropy++;
    }
    for (int i=0; i<count_entropy; i++){
        for (int j=2; j<=4; j++){
            out<<"Entropy "<<i+1<<" for q = "<<j<<" = "<<cal_entropy(str.substr(i, window_size), window_size, j)<<endl;
        }
    }
    cout<<"CSV file generated";
    out.close();
    in.close();
    return (0);
}