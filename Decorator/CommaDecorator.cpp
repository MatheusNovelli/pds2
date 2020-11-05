#include <sstream>
#include <vector>
#include <iostream>

#include "CommaDecorator.hpp"

using namespace std;

string CommaDecorator::toString() {
    string line = StreamDecorator::toString(); 
      
    //Vetor que salva tokens
    vector <string> tokens; 
      
    stringstream is(line); 
      
    string str; 
      
    while(getline(is, str, ' ')){ 
        tokens.push_back(str); 
        tokens.push_back(" , ");
    }    

    if (!tokens.empty()) {
    tokens.pop_back(); 
    }
  
    string s;
    for (const auto &piece : tokens) s += piece;
    
  return s;
}