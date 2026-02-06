// Write a function called countOccurrences() 
// that takes in a string and a character 
// and returns the number of occurrences of that character in the string.

#include <iostream>
#include <string>

using namespace std;

int countOcurrences(string word, char c){

    int total = 0;

    for(int x = 0; x < word.size(); x++){
        if (word[x] == c){
            total += 1;
        }
    }
    return total;
}

int main(){

    cout << countOcurrences("avatar", 'a');
    return 0;
}