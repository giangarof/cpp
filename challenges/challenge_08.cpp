// Write a function called isPalindrome that takes in a string and returns true if the string is a palindrome and false if it is not.

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void isPalindrome(string word){
    cout << boolalpha;
    string isPalindrome;

    for(int x = word.size() - 1; x >= 0; x--){
        isPalindrome += word[x];
    }

    if(word == isPalindrome){
        cout << "Is Palindrome?: " << true;
    }else{
        cout << "Is Palindrome?: " << false;
    }
    
}


int main(){
    isPalindrome("civic");
    return 0;
}