#include <iostream>
#include <vector>
using namespace std;

void segregateNegAndPos(vector<int> &Arr){
    int lo = 0, hi = Arr.size() - 1;

    while (lo < hi){
        while (Arr[lo] < 0 && lo < hi){
            lo++;
        }

        while (Arr[hi] >= 0 && lo < hi){
            hi--;
        }

        if (lo < hi){
            swap(Arr[lo], Arr[hi]);
            lo++;
            hi--;
        }
    }
}

int main(){
    //unsorted vector of negative and positive numbers
    vector<int> arr = {-1, 3, -2, -5, 2, 1, -10};

    segregateNegAndPos(arr);

    for (int element : arr){
        cout << element << " ";
    }

return 0;
}
