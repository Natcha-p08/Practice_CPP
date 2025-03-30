#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main(){
    string n;
    getline(cin,n);
    istringstream weight(n);
    int tmp;
    while (weight>>tmp) {
        int x,a,b;
        x=22*tmp;
        if (tmp==0) {
            return 0;
        }
        a=x/100;
        b=(x-(100*a))/50;
        
        cout<< a << " " << b <<endl;
    }

    return 0 ;
}
