#include<iostream>
#include<cmath>

using namespace std;

// Divide method

int decimalToBinary(int decimalNum){

    int binaryNum = 0;
    int i = 0;

    while(decimalNum > 0){
        int bit = decimalNum%2;
        binaryNum = bit*pow(10,i++) + binaryNum;
        decimalNum = decimalNum/2;
    }

    return binaryNum;
}

// bitwise AND method
int convertToBinary(int value){
    int binaryNum = 0;
    int i =0;
    
    while(value > 0){
        int bit = value & 1;

        binaryNum += bit*pow(10,i++);

        value = value >> 1;
    }

    return binaryNum;
}

int main(){
    int decimalValue;

    cout<<"Enter a number in a decimal :\n";

    cin>>decimalValue;

    int binaryNum = decimalToBinary(decimalValue);

    cout<<"Binary value is : "<<binaryNum<<"\n";

    return 0;
}