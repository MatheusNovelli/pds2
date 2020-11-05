#include "WordCounter.hpp"
#include "Word.hpp"
#include <vector>
#include <set>

using namespace std;

WordCounter::WordCounter(int num_words) {

	words = new Word[num_words];
}

WordCounter::~WordCounter(){
    
    delete []words;
}

class WordComparator{
public:
   bool operator()(const Word& w1, const Word& w2) {
    return w1.word < w2.word;
   }
};

void WordCounter::addWord(string w){
    
    Word *name = new Word();
    name->word = w;
    name->count = 1;
     
    for(int i = 0; i < names.size(); i++){
        if(names.at(i).word == w){
          names.at(i).incrementFreq();  
        }
    }
    
    names.push_back(*name);
   
    
}

void WordCounter::print() const{
    set<Word, WordComparator> orderAlphabetic;
    for(int i = 0; i < names.size(); i++){
        orderAlphabetic.insert(names.at(i));
    }
    for(auto it = orderAlphabetic.begin(); it != orderAlphabetic.end(); ++it){
        cout << it->word;
        cout << " ";
        cout << it->count << endl;
    }
}
