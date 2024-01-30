#include <iostream>
#include <string> 
#include <queue>
#include <stack>

using namespace std;

bool isPalindrome(string &input_string);

int main (){
    string word;
    
    cout << "Enter a word: ";
    getline (cin, word);

    int result = isPalindrome(word);
    if (result == false){
            cout << "Not a Palindrome";
        }

        else if (result == true){
            cout << "Palindrome";
        }
        
return 0;
}

bool isPalindrome(string &input_string){
    queue<char> q; 
    stack<char> s;
    int size = input_string.size()/2;

    for (int i = 0; i < input_string.length(); ++i){ //turning string to queue
        q.push(input_string[i]);
    }

    for (int i = 0; i < input_string.length(); ++i){ //turning string to stack
        s.push(input_string[i]);
    }

    if (s.top() != q.front()){
        return false;
    }

    else{
        for (int i = 0; i < size ; ++i){
            if (q.front() != s.top()){
                return false;
            }

            else {
                s.pop();
                q.pop();
            }
        }
    return true;
    }   
}

    