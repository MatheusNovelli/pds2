#include "List.hpp"
#include "Node.hpp"
#include <iostream>

List::List(){
    head = nullptr;
}

void List::insert(int value){
    Node* node = new Node(value, nullptr);
    if(size() != 0){
       node->setNext(head);
    }
    head = node; 
}

int List::remove(){
    if(head == nullptr){
	    return -1;
	}
	else{
	Node* current = head;
	head = head->getNext();
	int newCurrent = current->getData();
	delete current;
	return newCurrent;
	}
}

//teste
void List::print(){
    Node* percorre = head;
    for(int i = 0; i < size(); i++){
	    std::cout << percorre->getData() << " ";
	    percorre = percorre->getNext();
	}
}

int List::isEmpty(){
    if(head == nullptr){
        return 1;
    }
    else return 0;
}

unsigned List::size() const{
    
    int size = 0;
    Node* current = head;
    while(current != nullptr){
        current = current->getNext();
        size++;
    }
    
    return size;
}

int List::middle() const{
    Node* current = head;
    for(int i = 1; i <= size()/2; i++){
        current = current->getNext();
    } 
    return current->getData();
}

int List::last() const{
    Node* current = head;
    for(int i = 1; i < size(); i++){
        current = current->getNext();
    }
    return current->getData();
}

void List::rotate(){
    Node* current = head;
    int tam = size();
    
        for(int i = 1; i < size(); i++){
            current = current->getNext();
        }
        
        //std::cout << "Ultimo elemento: " << current->getData() <<" Primeiro elemento: " << head->getData() <<  std::endl;
        
        current->setNext(head);
        head = head->getNext();
        current = current->getNext();
        current->setNext(nullptr);
} 

  List::~List(){
    int tam = size();
    while(size()>0){
      remove();
      tam--;
    }
       
}