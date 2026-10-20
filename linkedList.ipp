#include "linkedList.hpp"
#include <cstdlib>
namespace CS270{
    template <class T>
    forward_list::forward_list(){
        head_ = NULL;
    }

    template <class T>
    forward_list::~forward_list(){
        while (head_ != NULL){
            pop_front();
        }
    }

    template <class T>
    void forward_list::push_front(const T& data){
       head_ = new Node<T>(data, head_);
    }  

    template <class T>
    void forward_list::pop_front(){
        if (head_ == NULL){
            std::cout << "List is empty" << std::endl;
            return;
        }
        Node<T>* temp = head_;
        head_ = get_head()-> getNext();
        delete temp;
    }
}