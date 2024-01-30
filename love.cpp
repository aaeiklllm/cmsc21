#include <iostream>
#include <string>
#include <vector>

using namespace std;

void compute_compatibility(string name1,string name2); 

int main(){
  string name1 = "";
  string name2 = "";

  cout << "Enter the name: ";
  getline(cin, name1);

  cout << "Enter the name of the partner: ";
  getline(cin, name2);

  for (int i = 0; i < name1.length(); ++i){ //makes name one uppercase
        name1[i] = toupper(name1[i]);
    }

for (int i = 0; i < name2.length(); ++i){ //makes name two uppercase
        name2[i] = toupper(name2[i]);
    }

  compute_compatibility(name1, name2);

}

void compute_compatibility(string name1,string name2) {
vector<int> truelove = {0, 0, 0, 0, 0, 0, 0, 0};
int output;


    for (int i = 0; i<name1.size(); ++i){
        if (name1[i] == 'T') {
            truelove.at(0) += 1;
        }
        else if (name1[i] == 'R') {
            truelove.at(1) += 1;
        }
        else if (name1[i] == 'U') {
            truelove.at(2) += 1;
        }
        else if (name1[i] == 'E') {
           truelove.at(3) += 1;
           truelove.at(7) += 1;
        }
        else if (name1[i] == 'L') {
            truelove.at(4) += 1;
        }
        else if (name1[i] == 'O') {
            truelove.at(5) += 1;
        }
        else if (name1[i] == 'V') {
            truelove.at(6) += 1;
        }
    }

    for (int i = 0; i<name2.size(); ++i){
        if (name2[i] == 'T') {
            truelove.at(0) += 1;
        }
        else if (name2[i] == 'R') {
           truelove.at(1) += 1;
        }
        else if (name2[i] == 'U') {
            truelove.at(2) += 1;
        }
        else if (name2[i] == 'E') {
            truelove.at(3) += 1;
            truelove.at(7) += 1;
        }
        else if (name2[i] == 'L') {
            truelove.at(4) += 1;
        }
        else if (name2[i] == 'O') {
            truelove.at(5) += 1;
        }
        else if (name2[i] == 'V') {
            truelove.at(6) += 1;
        }
    }

    for (int j = 0; j < 6; ++j){
        for (int i = 0; i < truelove.size()-1; ++i){
            truelove.at(i) = truelove.at(i) + truelove.at(i+1);
            if (truelove[i] > 9){
                truelove[i] = truelove[i] % 10;
            }
        }
        truelove.pop_back();
    }

    cout << "Love Percentage: " << truelove.at(0) << truelove.at(1) <<"%";
}