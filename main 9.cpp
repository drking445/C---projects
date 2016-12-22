//
//  main.cpp
//  Final #3
//
//  Created by Demetrius King on 12/8/15.
//  Copyright © 2015 Demetrius King. All rights reserved.
//

#include <iostream>
#include <stack>
#include <vector>
using namespace std;

    
    


int main()
{
    string a("This is my string to try and reverse");
    
    // Reverse word order
    vector<string> words;
    string::size_type pos = 1;
    while(pos != string::npos) {
        pos = a.find(" ");
        if(pos != string::npos) {
            words.push_back(string(a.begin(),a.begin()+pos));
            a.erase(a.begin(),a.begin()+pos+1);
        }
        else {
            words.push_back(string(a.begin(),a.end()));
            a.erase(a.begin(),a.end());
        }
    }
    reverse(words.begin(), words.end());
    for(int i=0; i<words.size(); i++) a.append(words[i].append(" "));
    cout << a << endl;
}

int celcius (int temps)
{
    
    temps = (5/9)* (temps - 32);
    
    return temps;
    
}
