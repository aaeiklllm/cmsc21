#include <iostream>
using namespace std;


int digitalRootOf(int n); 

int main (){
    int integer = 0;
    int output = 0;

cout << "Please enter a non-negative integer: ";
cin >> integer;
output = digitalRootOf(integer);

cout << "Digital root: ";
cout << output;
}

int digitalRootOf(int n){
int result = 0;

    if (n == 0){
        return 0;
    }
        
    else {
        result = (n % 10) + digitalRootOf(n/10);
            if (result == 0){
                return 0;
            }

            else {
                return result = (result % 10) + digitalRootOf(result/10);
            }
    }
}