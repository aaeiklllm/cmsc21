#include <iostream>
using namespace std;


int sumOfDigitsOf(int n); 

int main (){
    int integer = 0;
    int output = 0;

cout << "Please enter a non-negative integer: ";
cin >> integer;
output = sumOfDigitsOf(integer);

cout << "Sum of it's digits: ";
cout << output;
}

int sumOfDigitsOf(int n){
int result = 0;

    if (n == 0){
        return 0;
    }
        
    else {
        return result = (n % 10) + sumOfDigitsOf(n/10);
        
    }
}