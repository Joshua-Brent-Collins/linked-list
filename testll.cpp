#include"linkedlist.cpp"

int main(){

lnkl mylist;

mylist.add_node();
mylist.add_node();
mylist.add_node();
mylist.add_node();

mylist.set_data(1);
mylist.node_at(1);
mylist.set_data(2);
mylist.node_at(2);
mylist.set_data(3);
mylist.node_at(3);
mylist.set_data(4);

mylist.node_at(0);
mylist.print();
mylist.node_at(1);
mylist.print();
mylist.node_at(2);
mylist.print();
mylist.node_at(3);
mylist.print();


}
