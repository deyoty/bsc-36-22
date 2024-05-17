#include<iostream>
using namespace std;

void SwapNumbers(int *varA, int *varB){
    int varC = *varA;
    *varA = *varB;
    *varB = varC;

}

int main(){
    int varA = 25;
    int varB = 100;

    cout<<"varA before swap: "<<varA<<endl;
    cout<<"varB before swap: "<<varB<<endl;

    SwapNumbers(&varA, &varB);

    cout<<"varA after swap: "<<varA<<endl;
    cout<<"varB after swap: "<<varB<<endl;

    return 0;

}
