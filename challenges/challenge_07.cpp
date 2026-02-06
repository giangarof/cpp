// Write a function called reverseString that takes in a string and returns the reverse of that string.
// The idea is not to use built-in methods

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void reverseString(string word){
    // First way

    // using <algorithm>
    // string newWord = word;
    // reverse(newWord.begin(), newWord.end());
    // cout << newWord;

    // Second way
    //Using loops
    string newWord;
    for(int x = word.size() - 1; x >= 0; x--){
        newWord += word[x];
    }
    cout << newWord;

}

int main(){
    reverseString("boilerplate");
    return 0;
}