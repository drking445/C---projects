//
//  main.cpp
//  Data Structures Final
//
//  Created by Demetrius King on 12/5/16.
//  Copyright © 2016 Demetrius King. All rights reserved.
//

#include <iostream>
#include <queue>
#include <string>

using namespace std;
//Define the stack class, set default stack size to 2
//use a template to define type at later point
template<class T,int size=2>
class stack{
private: T data[size];
    int stack_ptr;
public:
    stack(void);
    void push(T x);
    T pop();
};
//constructor function to initialize stack and data
template<class T,int size>
stack<T,size>::stack(void)
{
    int i;
    for(i=0;i<size;i++) data[i]=0;
    stack_ptr=0;
}

template<class T,int size>
void stack<T,size>::push(T x)
{
    if(stack_ptr>=size)
    {
        cout<<"cannot push data: stack full"<<endl;
        return;
    }
    data[stack_ptr++]=x;
    cout<<"Pushed\t" << x << "\tonto the stack"<<endl;
    return;
}

template<class T,int size>
T stack<T,size>::pop()
{
    if(stack_ptr<=0)
    {
        cout<<"cannot pop data: stack empty"<<endl;
        return data[0];
    }
    cout<<"popped\t"<< data[--stack_ptr]<< "\tfrom stack"<<endl;
    return data[stack_ptr];
}
class Queue2
{
    string input;
    int in;
    
};

class Stack
{
    
};

#include <iostream>
#include <queue>
#include <string>

using namespace std;

int main (void)
{
    queue <char> q;
    string letter;
    int length;
    
    cout<<"Please enter a series of characters."<<endl;
    getline (cin, letter);
    
    bool isPalindrome = false;
    
    if (letter.size() > 0)
    {
        int length = letter.size() / 2;
        
        for (int i=0; i<length; i++)
        {
            q.push(letter[i]);
        }
        
        isPalindrome = true;
        
        for (int i = 1; i <= length && isPalindrome; ++i)
        {
            isPalindrome = q.front() == letter[letter.size() - i];
            q.pop();
        }
    }
    
    if(!isPalindrome)
    {
        cout<<"Is not a palindrome."<<endl;
    }
    else
    {
        cout<<"Is a palindrome."<<endl;
    }


    
    
    
    
    
    
}
