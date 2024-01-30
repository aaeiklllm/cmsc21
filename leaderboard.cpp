#include <iostream>
#include <fstream>

using namespace std;
    
    bool isHighScore(int timeTaken, int level)
    {
        if (level == 0){
            ifstream input("beginner.txt");
        }

        else if (level == 1){
            ifstream input("intermediate.txt");
        }

        else if (level == 2){
            ifstream input("expert.txt");
        }
        
        ifstream fsInput(g_sFile);
        int Score5, Line = 1;
        string Name5, inLine;

        while (getLine(fsInput, scoreLine))
        {
            if (inLine == 5)
            {
                fsInput >> Score5>> Name5'
            }
            inLine++
            
            if (time_used > S5 && != 0)
            return false;
            if (time_used < S5 || == 0)
            return true;
            
            fsInput.close();
        }
        
    }
    
    int main(){
        int timeTaken = 0;
        int level = 0;

        cin >> timeTaken;
        cin >> level;

        isHighScore(timeTaken, level);


    }