#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void deduplicate(vector<string> vec_str){ // https://www.geeksforgeeks.org/stdunique-in-cpp/

        auto it = unique(vec_str.begin(), vec_str.end());

        vec_str.resize(distance(vec_str.begin(), it));
        
        for (it = vec_str.begin(); it != vec_str.end(); ++it){
            cout << *it << endl;
        }
}

int main(){
    vector<string> hidden_figures = {
        "Katherine Johnson", 
        "Katherine Johnson",
        "Katherine Johnson",
        "Mary Jackson",
        "Dorothy Vaughan",                                                
        "Dorothy Vaughan"
    };

    deduplicate(hidden_figures);
}

