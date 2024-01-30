#include <iostream>
#include <map>

using namespace std;

int romanToDecimal(string romanNumeral);

int main (){
    string input;
    cout << "Enter a Roman Numeral: ";
    cin >> input; 
    
    for (int i = 0; i < input.length(); ++i){ //makes everything uppercase
        input[i] = toupper(input[i]);
    }

    cout << "Decimal value: " << romanToDecimal(input);
    
return 0;
}

int romanToDecimal(string romanNumeral){
    map<char,int> romanByKey;

    romanByKey.insert(make_pair('I',1));
    romanByKey.insert(make_pair('V',5));
    romanByKey.insert(make_pair('X',10));
    romanByKey.insert(make_pair('L',50));
    romanByKey.insert(make_pair('C',100));
    romanByKey.insert(make_pair('D',500));
    romanByKey.insert(make_pair('M',1000));

    int result = 0;
    int firstValue = 0;
    int secondValue = 0;


    for(int i = 0; i < romanNumeral.length(); ++i){
        firstValue = romanByKey.find(romanNumeral[i]) -> second;
        if (romanNumeral[i+1] != (romanNumeral[romanNumeral.length()])){
            secondValue = romanByKey.find(romanNumeral[i+1]) -> second;
        }
        
        if (firstValue < secondValue){
                result -= firstValue;
        }

        else {
                result += firstValue;
        }
    }

    return result;                                          
}