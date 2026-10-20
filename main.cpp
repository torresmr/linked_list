#include <iostream>
#include "node.hpp"
#include "linkedList.hpp"
using namespace std;
using namespace CS270;
int main() { 
    // Create a forward link list with integer numbers
    forward_list<int> first_forward_list;
    // Push front the number 12
    first_forward_list.push_front(12);
    // Push front the nunmber 14
    first_forward_list.push_front(14);
    // Push fron the number 21
    first_forward_list.push_front(21);
    // Get the head of the forward linked list and print it
    cout << first_forward_list.get_head() -> getData() << endl;
    return 0;
}