#include <iostream>
#include "Stack.h"

using namespace std;

template <typename T>
Stack<T>::Stack()
{
    top_ = nullptr;
    size_ = 0;

}

template <typename T>
Stack<T>::~Stack()
{
    delete top_;

}

template <typename T>
size_t Stack<T>::size() const
{
    return size_t(size_);


}


template <typename T>
void Stack<T>::push(const T& elem)
{
    node<T>* newNode = new node<T>;
    newNode->value = elem;
    newNode->next = top_;
    top_ = newNode;
    size_++;
}

template <typename T>
bool Stack<T>::pop(T& elem)
{
    if (top_ == nullptr) {
        return false;
    }
    elem = top_->value;
    node<T>* temp = top_->next;
    delete top_;
    top_ = temp;
    size_--;
    return true;
}

template <typename T>
bool Stack<T>::peek(T& elem) const
{
    if (top_ == nullptr) {
        return false;
    }
    elem = top_->value;
    return true;
}

