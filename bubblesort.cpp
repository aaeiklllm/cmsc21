#include <iostream>

using namespace std;

template<typename Type> 
void BubbleSort(Type arr[], int n);

int main(){

    int number[] = {1,3,7,5,6,9,8,546,675,65,87,34,57,23,78,45,23};
    int numberSize = sizeof(number)/sizeof(number[0]);

    BubbleSort<int>(number, numberSize);

    cout << "Sorted Array: "  <<endl;
        for (int i = 0; i < numberSize; ++i){
            cout << number[i] << " ";
        }

    return 0;
}

template<typename Type> 
void BubbleSort(Type arr[], int n){

    int holder = 0;
        for (int j = 0; j < n-1; ++j){
            for (int i = 0; i < n-1; ++i){
                if (arr[i] > arr[i+1]){
                    holder = arr[i+1];
                    arr[i+1] = arr[i];
                    arr[i] = holder;
                }
            }
        }
    }