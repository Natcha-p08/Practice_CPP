#include <iostream>
using namespace std;
int main(){
    string bug;
    getline(cin,bug);
    int CountA=0,CountB=0,CountC=0,CountD=0,CountE=0;
    for(char i:bug){
        switch (i) {
            case 'A':
                CountA++;
                break;
            case'B':
                CountB++;
                break;
            case'C':
                CountC++;
                break;
            case'D':
                CountD++;
                break;
            case'E':
                CountE++;
                break;
        }
    }
    cout<<CountA<<endl;
    cout<<CountB<<endl;
    cout<<CountC<<endl;
    cout<<CountD<<endl;
    cout<<CountE<<endl;
}
