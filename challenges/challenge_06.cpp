// Write a function called titleCase that takes in a string and returns the string with the first letter of each word capitalized.

#include <iostream>
#include <string>
#include <vector>

using namespace std;

string titleCase(string word){
    string newWord;
    for(int x = 0; x < word.size(); x++){
        if (word[x - 1] == ' '){
            newWord += toupper(word[x]);
        } else{
            newWord += tolower(word[x]);
        }
    }
    newWord[0] = toupper(newWord[0]);
    return newWord;
}

int main(){

    cout << titleCase("woRLD wIde weB LOL");
    return 0;
}
