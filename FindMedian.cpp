#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int Array[n];
    for (int i=0; i<n; i++) {
        cin>>Array[i];
    }
    sort(Array,Array+n);
    
    if (n%2==0) {
        int median1,median2;
        median1 = n/2 ;
        median2 = (n+2)/2 ;
        int a = Array[median1-1];
        int b = Array[median2-1];
        float result = (a+b)/2.0 ;
        cout<< "Min = " << Array[0] << endl;
        cout<< "Max = " << Array[n-1] << endl;
        cout<< "Med = " << result << endl;
        
    }else {
        int median;
        median = (n+1)/ 2;
        int result = Array[median-1];
        cout<< "Min = " << Array[0] << endl;
        cout<< "Max = " << Array[n-1] << endl;
        cout<< "Med = " << result << endl;
    }
    
    
}
