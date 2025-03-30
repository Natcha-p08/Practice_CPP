#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string Name;
    getline(cin,Name);
    istringstream Word(Name);
    char tmp;
    int count;
    while (Word>>tmp) {
        if(tmp=='M'||tmp=='m'){
            count++;
        }
    }
    cout<<count<<endl;
    
    
}
