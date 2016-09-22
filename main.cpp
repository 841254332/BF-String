 //
//  main.cpp
//  BF-string
//
//  Created by luojiahua on 16/9/22.
//  Copyright © 2016年 luojiahua. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int index(string S, string T){
    int i = 0;
    int j = 0;
    while (i<=S.length()-1&&j<=T.length()-1) {
        if(S[i] == T[j]){
            i++;
            j++;
        }else{
            i = i - j + 1;
            j = 0;
        }
        cout<<i<<endl;
        
    }
    if (j > T.length()-1) {
        cout<< (int)(i-T.length());
    }else{
        cout<<-1;
    }
    return 0;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    string s = "abcde";
    string t = "c";
    index(s, t);
    return 0;
}
