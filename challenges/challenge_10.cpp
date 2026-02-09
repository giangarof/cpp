// Write a function called removeDuplicates that takes in an array of integers and returns a new array with duplicates removed.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void removeDuplicates(vector<int> numbers){
    vector<int> newList;
    
  
    for(int x = 0; x < numbers.size(); x++){
        bool match = false;

        for (int y : newList){
            if(y == numbers[x]){
                match = true;
                break;
            }
        }

        if(!match){
            newList.push_back(numbers[x]);
        }
        
    }
    





    for(int x : newList){
        cout << x;
    }


}

int main(){
    vector<int> numbers = {1,1,2,2,3,4,2,3,5};
    removeDuplicates(numbers);
    return 0;
}