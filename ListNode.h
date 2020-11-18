// Jaewon Park
// jaepark@chapman.edu
// 2328614
// CPSC 350 - 01
// Assignment #4 

#include <iostream>
using namespace std;
template <class E>
class ListNode {
  public:
    E data;
    ListNode *next;
    ListNode *prev;

    //constructor/destructor
    ListNode();
    ListNode(E e);
    ~ListNode();
};

template <class E>
ListNode<E>::ListNode() {
  next = NULL; //nullptr
  prev = NULL; //nullptr
}

template <class E>
ListNode<E>::ListNode(E e) {
  ListNode();
  data = e;
}

template <class E>
ListNode<E>::~ListNode() {
  /*(if next == NULL) {
    delete next;
  }*/
}
