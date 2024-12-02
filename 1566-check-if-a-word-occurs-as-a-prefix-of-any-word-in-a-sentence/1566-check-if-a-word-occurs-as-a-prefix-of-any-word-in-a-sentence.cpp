class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
      std::  istringstream xyz(sentence);
        string word;

        int index=1;
     while(xyz>>word){
        if(word.find(searchWord)==0) return index;
        index++;

     }
return -1;
       


        
    }
};