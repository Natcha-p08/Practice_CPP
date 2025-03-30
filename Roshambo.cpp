#include <iostream>
using namespace std;

int main(){
    int n ;
    cin>>n;
    int a=0,b=0,countA=0,countB=0;
    int x=0,y=1,z=2;
    
    for (int i=0; i<n; i++) {
        cin>>a >>b;
        
        if (a==x && b==z) {
            countA++;
        }else if (a==z && b==x) {
            countB++;
        }else if (a==y && b==x) {
            countA++;
        }else if (a==x && b==y) {
            countB++;
        }else if (a==z && b==y) {
            countA++;
        }else if (a==z && b==y) {
            countB++;
        }
        
    }

    int Reward=0;
    if(countA>countB){
        cout<<"1"<<endl;
        Reward = 5*(countA-countB);
        cout<<Reward;
    }
    if(countB>countA){
        cout<<"2"<<endl;
        Reward = 5*(countB-countA);
        cout<<Reward;
    }else if(countA==countB){
        cout<<"0"<<endl;
        cout<<"0"<<endl;
    }
    
    return 0 ;
}


