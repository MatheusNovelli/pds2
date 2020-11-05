#include "Node.hpp"
#include <iostream>

Node::Node(int data, Node *next){
    _data = data;
    _next = next;
}

void Node::setData(int data){
    _data = data;
}

void Node::setNext(Node *next){
    _next = next;
}

int Node::getData() const{
    return(_data);
}

Node* Node::getNext() const{
    return(_next);
}