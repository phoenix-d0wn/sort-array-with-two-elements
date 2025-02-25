#include <iostream>
#include <vector>
using namespace std;

vector<int> binarySort(vector<int> &Binary){
    //count the number of 0s
    int count = 0;
    for (int element : Binary){
        if (element == 0){
            count++;
        }
    }

    //fill vector with 0s
    for (int i=0; i < count; i++){
        Binary.at(i) = 0;
    }

    //fill rest of vector with 1s
    for (int i=count; i < Binary.size(); i++){
        Binary.at(i) = 1;
    }

    return Binary;
}

int main(){
    //unsorted binary array
    vector<int> binary = {0, 1, 1, 0, 0, 1, 0};

    binarySort(binary);

    //print sorted binary array
    cout << endl;
    for (int element : binary){
        cout << element;
    }

    return 0;
}