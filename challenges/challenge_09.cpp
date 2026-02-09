// Write a function called countVowels that takes in a string and returns the number of vowels in the string.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void countVowels(string word){
    int total = 0;
    vector<char> vowels = {'a','e','i','o','u'};
    for(char c : vowels){
        // cout << c << endl;
        for(int x = 0; x < word.size(); x++){
            if(c == word[x]){
                total += 1;
            }
        }
    }
    cout << total;
}

int main(){
    countVowels("greeting");
    return 0;
}