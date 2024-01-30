#include <iostream>
#include <string> 


using namespace std;

int checkPalindrome(string str);

int main (){
    string word; 

    cout << "Enter a word: ";
    getline (cin, word);

    for (int i = 0; i < word.length(); ++i){ //removes punctuation marks
        if (ispunct(word[i])){
            word.erase(i--, 1);
        }
    }

    remove(word.begin(), word.end(), ' '); //removes spaces

    for (int i = 0; i < word.length(); ++i){ //makes everything lowercase
        word[i] = tolower(word[i]);
    }
    
    int result = checkPalindrome(word);
        if (result == -1){
            cout << "Not a Palindrome";
        }

        else if (result == 1){
            cout << "Palindrome";
        }
        
return 0;
}

int checkPalindrome(string str){
    int i = 0; //first letter
    const int n = str.length();
    int j = n-1; //last letter

    if (str[i] != str[j]){
        return -1;
    }

    if ((n == 1) || (n == 0)){
        return 1;
    }

    checkPalindrome(str.substr(i+1, j-1));
    return 1;
}
    
    