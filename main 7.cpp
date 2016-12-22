//
//  main.cpp
//  Ch. 5 #24
//
//  Created by Demetrius King on 10/16/15.
//  Copyright © 2015 Demetrius King. All rights reserved.
//


#include <iostream>
#include <fstream>
#include<string>
using namespace std;





//using namespace std;

class HashEntry {
private:
    int key;
    int value;
public:
    HashEntry(int key, int value) {
        this->key = key;
        this->value = value;
    }
    
    int getKey() {
        return key;
    }
    
    int getValue() {
        return value;
    }
};
class hash{
    
private:
    static const int tableSize = 10;
    
    struct item{
        std::string name;
        std::string drink;
        item* next;
    };
    item* hashTable[tableSize];
    
public:
    hash();
    int Hash(std::string key);
    void AddItem(std::string name, std::string);

hash::hash()
{
    for(int i = 0; i < tableSize; i++)
    {
        hashTable[i] = new item;
        hashTable[i]->name = "empty";
        hashTable[i]->drink = "empty";
       hashTable[i]->next = NULL;
        
    }
    
}
void AddItem(std::string name, std::string drink)
{
    
    
}


/*
int hash::Hash(string key)
{
    int hash = 0;
    int index;
    
}
*/
int main ()
{
  
    
    
    
    
}
