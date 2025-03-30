#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int Array[n];
    int CountMax = 0;
    int CountMin = 0;
    int Max,Min;
    for (int i=0; i<n; i++) {
        cin>>Array[i];
    }
    for (int i=0; i<n-1; i++) {
        Max=Array[0];
        Min=Array[0];
        if(Max<Array[i]){
            Max=Array[i];
            CountMax++;
        }
        if(Min>Array[i]){
            Min=Array[i];
            CountMin++;
        }
    }
    cout<< CountMax << " " << CountMin ;

    
    return 0 ;
}
