// Write a function called findMaxNumber that takes in a vector of numbers and returns the largest number in the array.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int findmaxnumber(vector<int> n){

    int max = 0;

    for(int x = 0; x < n.size(); x++){
        if (n[x] > max){
            max = n[x];
        }
    }
    return max;

}
int main(){
    vector<int> numbers = {3,4,5,1,2};
    cout << findmaxnumber(numbers);
    return 0;
}