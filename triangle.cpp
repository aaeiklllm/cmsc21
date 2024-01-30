#include <iostream>
using namespace std;


void determineTriangle(int a, int b, int c); 

int main (){
    int side1 = 0;
    int side2 = 0;
    int side3 = 0;

cout << "Please enter three sides of a Triangle" << endl;

cout << "Side 1: "; 
cin >> side1;

cout << "Side 2: ";
cin >> side2;

cout << "Side 3: ";
cin >> side3;

determineTriangle(side1, side2, side3);
}

void determineTriangle(int a, int b, int c){
    if (a == b && b == c && c == a){
        cout << "The triangle is EQUILATERAL";
    }

    else if (a == b || b == c || a == c){
        cout << "The triangle is ISOSCELES";
    }

    else {
        cout << "The triangle is SCALENE";
    }

}