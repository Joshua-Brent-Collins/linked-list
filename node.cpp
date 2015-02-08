#include<iostream>
#include<string>


using namespace std ;

class node{


private:
 
node * next;
node * previous;

int data;

public:

node(){
next = NULL;
previous = NULL;
}

node* get_next(){
return next;
}

node* get_previous(){
return previous;
}

int get_data(){
return data;
}

void set_next(node* nxtptr){
next = nxtptr;
}

void set_previous(node* prvptr){
previous = prvptr;
}

void set_info(int info){
data = info;
}

};
