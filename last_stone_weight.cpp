//Last Stone Weight

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //Test info
    vector<int> stones{2,6,4,1,8,1};
    //Variables
    vector<int>::const_iterator stone_one;
    vector<int>::const_iterator stone_two;
    int difference;
    //Loop over information
    while(stones.size() > 1){
    //Order vector
    sort(stones.begin(), stones.end());
    //Grab two heaviest stones
    stone_one = stones.end() - 1;
    stone_two = stones.end() - 2;
    //Subtract
    difference = *stone_one - *stone_two;
    //Remove the two heaviest stones
    stones.pop_back();
    stones.pop_back();
    //Add the new stone
    stones.push_back(difference);
    }
    stone_one = stones.begin();
    cout << *stone_one << endl; 
    return 0;
}