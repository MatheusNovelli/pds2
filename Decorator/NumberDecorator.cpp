#include <sstream>
#include <vector>
#include <iostream>
#include <cctype>
#include <cstring>
#include <string>

#include "NumberDecorator.hpp"

using namespace std;

string NumberDecorator::toString() {
    string line = StreamDecorator::toString();

    vector <string> number;

    stringstream is(line);

    string str;

    while (getline(is, str, ' ')) {
        number.push_back(str);
       
        //se a palavra for um numero inteiro positivo adicionar um "+"
 
    }

    bool isPositiveNum = 1;
    
    for (string& num : number) {
        for(char gorila : num){
        if(!isdigit(gorila)){
          isPositiveNum = 0;
            }
        }
        if(isPositiveNum){
          num = '+' + num;
        }
        num = ' ' + num;
        isPositiveNum = 1;
    }

    string w;
    for (const auto& piece : number) w += piece;

    str = "";
    for(int i = 0; i < number.size(); i++){
        str += number[i];
    }
    
    return str;
}