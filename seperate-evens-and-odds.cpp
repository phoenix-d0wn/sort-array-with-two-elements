#include <iostream>
#include <vector>
using namespace std;

void segregateEvensAndOdds(vector<int> &Numbers){
    int lo = 0, hi = Numbers.size() - 1;

    while (lo < hi){
        while (Numbers[lo] % 2 == 0 && lo < hi){
            lo++;
        }

        while (Numbers[hi]  % 2 == 1 && lo < hi){
            hi--;
        }

        if (lo < hi){
            swap(Numbers[lo], Numbers[hi]);
            lo++;
            hi--;
        }
    }
}

int main(){
    //unsorted vector with odd and even numbers
    vector<int> numbers = {0, 1, 2, 3, 4, 5};

    segregateEvensAndOdds(numbers);

    for (int element : numbers){
        cout << element;
    }

    return 0;
}