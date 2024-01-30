#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int syllablesIn(string line); //http://english.glendale.cc.ca.us/phonics.rules.html

int main(){
    string line1 = "";
    string line2 = "";
    string line3 = "";
    int a = 0;
    int b = 0;
    int c = 0;

    cout << "Enter First Line: ";
    getline(cin, line1);

    cout << "Enter Second Line: ";
    getline(cin, line2);

    cout << "Enter Third Line: ";
    getline(cin, line3);

    a = syllablesIn(line1);
    b = syllablesIn(line2);
    c = syllablesIn(line3);

    cout << "Syllables: ";
    cout << a << " "  <<  b  << " " << c << endl;
    
    if (a == 5 && b == 7 && c ==5){
        cout << "Haiku";
    }

    else {
        cout << "Not a Haiku";
    }
return 0;
}

int syllablesIn(string line){

    int syllables = 0;
    int length = line.length();

    for (int i = 0; i < line.length(); ++i){ //makes everything lowercase
        line[i] = tolower(line[i]);

        if (ispunct(line[i])){ // removes punctuation
            line.erase(i--, 1);
        }
    }


        if (line[length-2] == 'l' && line.back() == 'e'){
                syllables += 1;
        }

        if (line[length-3] == ' ' && line[length-2] == 'm' && line.back() == 'e'){
                syllables += 1;
        }

        if (line[length-3] == ' ' && line[length-2] == 'b' && line.back() == 'e'){
                syllables += 1;
        }

        if (line[length-3] == 't' && line[length-2] == 'h' && line.back() == 'e'){
                syllables += 1;
        }


        if (line[length-3] == 's' && line[length-2] == 'h' && line.back() == 'e'){
                syllables += 1;
        }

        if (line[length-3] == ' ' && line[length-2] == 'h' && line.back() == 'e'){
                syllables += 1;
        }

        if (line[length-2] == 'e' && line.back() == 'e'){
                syllables += 1;
        }

        if (line.back() == 'e'){
            syllables -= 1;
        }

    line.insert(0, " ");


    for (int i = 0; i < line.size(); ++i){
        if (line[i] == 'a') {
            syllables += 1;
        }

        else if (line[i] == 'e') {
            syllables += 1;
        }

        else if (line[i] == 'i') {
            syllables += 1;
        }
        
        else if (line[i] == 'o') {
            syllables += 1;
        }

        else if (line[i] == 'u') {
            syllables += 1;
        }

        else if (line[i] == 'y') {
            syllables += 1;
        }

        //A diphthongs

        if (line[i] == 'a' && line[i+1] == 'e'){
            syllables -= 1;
        }
        
        else if (line[i] == 'a' && line[i+1] == 'i'){
            syllables -= 1;
        }

        else if (line[i] == 'a' && line[i+1] == 'u'){
            syllables -= 1;
        }

        else if (line[i] == 'a' && line[i+1] == 'y'){
            syllables -= 1;
        }

        //E diphthongs

        else if (line[i] == 'e' && line[i+1] == 'a'){
            syllables -= 1;
        }

        else if (line[i] == 'e' && line[i+1] == 'e'){
            syllables -= 1;
            
            if (line[i+2] == ' '){
                syllables +=1;
            }
        }

        else if (line[i] == 'e' && line[i+1] == 'i'){
            syllables -= 1;
        }

        else if (line[i] == 'e' && line[i+1] == 'y'){
            syllables -= 1;
        }

        //I diphthongs

        else if (line[i] == 'i' && line[i+1] == 'o'){
            syllables -= 1;
        }

        else if (line[i] == 'i' && line[i+1] == 'e'){
            syllables -= 1;
        }

        //O diphthongs

        else if (line[i] == 'o' && line[i+1] == 'a'){
            syllables -= 1;
        }

        else if (line[i] == 'o' && line[i+1] == 'e'){
            syllables -= 1;
        }

        else if (line[i] == 'o' && line[i+1] == 'i'){
            syllables -= 1;
        }

        else if (line[i] == 'o' && line[i+1] == 'o'){
            syllables -= 1;
        }

        else if (line[i] == 'o' && line[i+1] == 'u'){
            syllables -= 1;
        }

        else if (line[i] == 'o' && line[i+1] == 'y'){
            syllables -= 1;
        }

        //U diphthongs
        else if (line[i] == 'u' && line[i+1] == 'a'){
            syllables -= 1;
        }

        else if (line[i] == 'u' && line[i+1] == 'i'){
            syllables -= 1;
        }

        else if (line[i] == 'u' && line[i+1] == 'o'){
            syllables -= 1;
        }

        //Y diphthongs
        else if (line[i] == 'y' && line[i+1] == 'o'){
            syllables -= 1;
        }

        else if (line[i] == 'y' && line[i+1] == 'e'){
            syllables -= 1;
        }


        // Double space diphthongs
        
        // else if (line[i] == 'i' && line[i+2] == 'o'){
        //     syllables -= 1;
        // }

      
        //Special case
        else if (line[i+1] == ' ' && line[i] == 'e'){
            syllables -= 1;
        }

        else if (line[i] == ' ' && line[i+1] == 'm' && line[i+2] == 'e' && line[i+3] == ' '){
            syllables += 1;
        }

        else if (line[i] == ' ' && line[i+1] == 'b' && line[i+2] == 'e' && line[i+3] == ' '){
            syllables += 1;
        }

        else if (line[i] == ' ' && line[i+1] == 'h' && line[i+2] == 'e' && line[i+3] == ' '){
            syllables += 1;
        }

        else if (line[i] == ' ' && line[i+1] == 't' && line[i+2] == 'h' && line[i+3] == 'e' && line[i+4] == ' '){
            syllables += 1;
        }
        else if (line[i] == ' ' && line[i+1] == 's' && line[i+2] == 'h' && line[i+3] == 'e' && line[i+4] == ' '){
            syllables += 1;
        }


        //plural form

        if (line[i] == 'a' && line[i+2] == 'e' && line[i+3] == 's'){
            syllables -= 1;
        }

        else if (line[i] == 'e' && line[i+2] == 'e' && line[i+3] == 's'){
            syllables -= 1;
        }

        else if (line[i] == 'i' && line[i+2] == 'e' && line[i+3] == 's'){
            syllables -= 1;
        }

        else if (line[i] == 'o' && line[i+2] == 'e' && line[i+3] == 's'){
            syllables -= 1;
        }
    }

    return syllables;
}