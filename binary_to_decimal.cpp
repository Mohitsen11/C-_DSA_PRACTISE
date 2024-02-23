#include<bits/stdc++.h>

using namespace std;

int binaryToDecimal(int value){
    int decimalNum = 0;
    int i = 0;

    while( value > 0){
        int digit = value%10;
        decimalNum += digit*pow(2,i++);
        value /= 10;
    }
    return decimalNum;
}

int main(){
    int num;

    cout<<"Enter a number in binary : \n";
    cin>>num;

    int decimalValue = binaryToDecimal(num);
    cout<<"Decimal value is : "<<decimalValue<<"\n";

    return 0;
}