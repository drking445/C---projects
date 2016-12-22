//
//  main.cpp
//  Data Structure Finals
//
//  Created by Demetrius King on 12/5/16.
//  Copyright © 2016 Demetrius King. All rights reserved.
//

#include <iostream>
#include <queue>
#include <string>
#include <stack>





using namespace std;
int main( )
{
    std::queue<char> t;
    std::stack<char> r;
    std::string the_string;
    int line = 0;
    
    std::cout << "Enter a palindrome:" << std::endl;
    int i = 0;
    
    while (std::cin.peek() != '\n')
    {
        std::cin >> the_string[i];
        if (isalpha(the_string[i]))
        {
            t.push(toupper(the_string[i]));
            r.push(toupper(the_string[i]));
        }
        i++;
    }
    
    while ((!t.empty()) && (!r.empty()))
    {
        if (t.front() != r.top())
            ++line;
        
        t.pop();
        r.pop();
    }
    
    if (line == 0)
        cout << "This is a palindrome" << endl;
    else
        cout << "This is not a palindrome" << endl;
    
    
}
