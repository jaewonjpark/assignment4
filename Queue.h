// Jaewon Park / Meghana Shastri
// jaepark@chapman.edu / shastri@chapman.edu
// 2328614     / 2317343
// CPSC 350 - 02 / CPSC 350 - 02
// Assignment #4 / Assignment #4

#include <iostream>
#include "DoublyLinkedList.h"
using namespace std;

template <class E>
class Queue
{
  public:
    Queue(); // default constructor
    Queue(int maxSize); // overload constructor
    ~Queue(); // destructor

    //core functions
    void insert(E);
    E remove();

    //aux functions
    E peek();
    bool isFull();
    bool isEmpty();

    //vars
    int size;
    int numElements;
    int getSize();

    DoublyLinkedList<E> *myQueue; //DoublyLinkedList
};

template <class E>
Queue<E>::Queue(){
  //default constructor
  //myQueue = new DoublyLinkedList();
}

template <class E>
Queue<E>::Queue(int maxSize){
  myQueue = new DoublyLinkedList<E>();
  size = maxSize;
  numElements = 0;
}

template <class E>
Queue<E>::~Queue(){
  delete myQueue;
}

template <class E>
void Queue<E>::insert(E e) {
  myQueue->insertBack(e);
  ++numElements;
}

template <class E>
E Queue<E>::remove() {
  return myQueue->removeFront();
  --numElements;
}

template <class E>
E Queue<E>::peek() {
  return myQueue.back->data;
}
template <class E>
bool Queue<E>::isFull() {
  return (numElements == size);
}

template <class E>
bool Queue<E>::isEmpty() {
  return (numElements == 0);
}
template <class E>
int Queue<E>::getSize() {
  return numElements;
}
