#include <iostream>
using namespace std;
int main(){
    int ArrayA[4],ArrayB[4];
    for(int i=0;i<4;i++){
        cin>>ArrayA[i];
    }
    for(int i=0;i<4;i++){
        cin>>ArrayB[i];
    }
    int bh1 = ArrayA[0];
    int bm1 = ArrayA[1];
    int eh1 = ArrayA[2];
    int em1 = ArrayA[3];
    
    int bh2 = ArrayB[0];
    int bm2 = ArrayB[1];
    int eh2 = ArrayB[2];
    int em2 = ArrayB[3];
    
    //กำลังเขียนว่าเริ่มนัดกี่โมงกี่นาที
    if (bh2<eh1) {
        cout<<bh2<<" "<<bm2;
    }else if(bh2==eh1){
        if(bm2<em1){
            cout<<bh2<<" "<<bm2;
        }else{
            cout<< "0 0 0 0" ;
            return 0;
        }
    }else{
        cout<< "0 0 0 0" ;
        return 0;
    }
    cout<< " " ;
    
    //กำลังเขียนว่าแยกย้ายกี่โมงกี่นาที
    if (eh1>eh2) {
            cout<<eh2<<" "<<em2;
    }else if(eh1==eh2){
        if (em2<em1) {
            cout<<eh1<<" "<<em2;
        }else{
            cout<<eh1<<" "<<em1;
        }
    }else{
        cout<<eh1<<" "<<em1;
    }
    cout<<endl;
    return 0;
}
