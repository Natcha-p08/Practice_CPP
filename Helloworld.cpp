#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string name;
    char gender;
    getline(cin, name);
    cin>>gender;
    
    istringstream tmp(name);
    string first,last;
    tmp>>first>>last;
    
    if(gender=='F'){
        cout<< "Hello Ms."+last+", "+first;
    }else{
        cout<< "Hello Mr."+last+", "+first;
    }
    return 0;
}
/*
 
int main(){
    string fullname;
    char gender;
    getline(cin,fullname);
    cin>>gender;
    istringstream name(fullname);
    string first,last;
    name>>first>>last;
 
    string word;
    while(name>>word){
        for(char i :word){
            if(i=='M' || i=='m'){
                count++;
            }
    }
}

*/

































