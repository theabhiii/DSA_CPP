#include<iostream>
using namespace std;

class Solution {

private:
    bool valid(char ch){
        if( (ch >= 'a' && ch <= 'z' ) || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9') ){
            return 1;
        }
        return 0;
    }

    char toLowercase(char ch){

         if( (ch >= 'a' && ch <= 'z' ) ||  (ch >= '0' && ch <= '9') ){
            return ch;
        }
        
        char chr = ch - 'A' + 'a';
        return chr;
    }

    bool checkPalindrome(string s){
        int st = 0;
        int e = s.length()-1;
        while(st<e){
            if(s[st] != s[e]){
                return 0;
            }
            st++;
            e--;
        }
        return 1;
    }

public:
    bool isPalindrome(string s) {

        string temp;

        for (int j = 0; j < s.length(); j++){
            if (valid(s[j])){
                temp.push_back(s[j]);
            }
        }
        
        for (int j = 0; j < temp.length(); j++){
            temp[j] = toLowercase(temp[j]);
            
        }

        return checkPalindrome(temp);

    }
};