#include <iostream>
using namespace std;

int main(){
    string input;
    getline (cin,input);
    int count=0;
    for (char integer : input) {
        switch (integer) {
            case '0':
                count++;
                break;
            case '4':
                count++;
                break;
            case '6':
                count++;
                break;
            case '9':
                count++;
                break;
            case '8':
                count=count+2;
            default:
                break;
        }
    }
    cout<<count;

    
    
    
    
}
