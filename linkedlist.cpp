#include<iostream>
#include<string>
#include"node.cpp"

using namespace std;

class lnkl{


private:

node * head;
node * current;
node * tail;
public:

lnkl(){
head = NULL;
head = new node;
tail = head;
current = head;
}

void add_node()
{
cout<<"Adding node"<<endl;
tail->set_next(new node); 
tail->get_next()->set_previous(tail);
tail->get_next()->set_next(NULL);
tail = tail->get_next();
}

void set_data(int data){
current->set_info(data);
}

void print(){
cout<<" Value: ";
cout<<current->get_data()<<endl;
}

void node_at(int indx){
current = head;
cout<<"moving to node ";
while(indx>0 && current->get_next()!=NULL){
cout<< " "<<indx;
current = current->get_next();
indx--;
}
cout<<endl;

}


};
