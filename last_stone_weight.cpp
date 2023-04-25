//Last Stone Weight

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //Test info
    vector<int> stones{2,7,4,1,8,1};
    //Variables
    vector<int>::const_iterator stone_one;
    vector<int>::const_iterator stone_two;
    int difference;
    //Order vector
    sort(stones.begin(), stones.end());
    //Grab two heaviest stones
    stone_one = stones.end() - 1;
    stone_two = stones.end() - 2;
    //Subtract
    difference = *stone_one - *stone_two;

    cout << difference << endl;
    return 0;
}