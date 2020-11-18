// Jaewon Park
// jaepark@chapman.edu
// 2328614
// CPSC 350 - 01
// Assignment #4 

#include <iostream>
#include "ListNode.h"
using namespace std;

template <class E>
class DoublyLinkedList {
public:
    ListNode<E> *back;
    int size; //int greater than 0
    ListNode<E> *front;
    DoublyLinkedList();
    ~DoublyLinkedList();

    void insertFront(E e);
    void insertBack(E e);
    ListNode<E> *remove(E e);
    E removeFront();
    E removeBack();
    E deletePos(int pos); //AKA removeAt()
    int find(E e); //AKA contains(0)

    bool isEmpty();
    void printList();
    int getSize();
};

template <class E>
DoublyLinkedList<E>::DoublyLinkedList(){
  size = 0;
  front = NULL;
  back = NULL;
}

template <class E>
DoublyLinkedList<E>::~DoublyLinkedList(){

}

/*template <class E>
int DoublyLinkedList<E>::getSize() {
  return size;
}
*/

template <class E>
int DoublyLinkedList<E>::getSize(){
  return size;
}

template <class E>
void DoublyLinkedList<E>::printList() {
  ListNode<E> *curr = front;
  while (curr != NULL) {
    cout << curr->data <<endl;
    curr = curr->next;
  }
}

template <class E>
void DoublyLinkedList<E>::insertFront(E e) {
  ListNode<E> *node = new ListNode<E>(e);
  if (isEmpty()) {//size == 0
    back = node;
  } else {
    //not an empty list
    node->next = front;
    front->prev = node;
  }
  front = node;
  size++;
}

template <class E>
void DoublyLinkedList<E>::insertBack(E e) {
  ListNode<E> *node = new ListNode<E>(e);
  if (isEmpty()) {//size == 0
    front = node;
  } else {
    //not an empty list
    back->next = node;
    node->prev = back;
  }
  back = node;
  size++;
}

template <class E>
E DoublyLinkedList<E>::removeFront() {
  ListNode<E> *ft = front;
  if (front->next == NULL) {
    //only one element in the list
    back = NULL;
  } else {
    //more than one element in the list
    front->next->prev = NULL;
  }
  front = front->next;
  E temp = ft->data;
  ft->next = NULL;
  size--;
  delete ft;
  return temp;
}

template <class E>
E DoublyLinkedList<E>::deletePos(int pos) {
  int index = 0;
  ListNode<E> *prev = front;
  ListNode<E> *curr = front;

  while (index != pos) {
    prev = curr;
    curr = curr->next;
  }
  //found the node to be deleted
  prev->next = curr->next;
  curr->next = NULL;
  E temp = curr->data;

  delete curr;
  size--;
  return temp;
}

template <class E>
int DoublyLinkedList<E>::find(E e) {
  int index = 0;
  ListNode<E> *curr = front;

  while (curr != NULL) {
     if (curr->data == e) {
       break;
     }
     curr = curr->next;
     index++;
  }
  if (curr == NULL) { //we did not find the value we were looking for
    index = -1;
  }
  return index;
}

template <class E>
ListNode<E>* DoublyLinkedList<E>::remove(E d)//aka int key
{
  ///check if empty before attempting to remove a node
  ListNode<E> *curr = front;
  while(curr->data != d) {
    curr = curr->next;
    //value does not exist in list
    if (curr == NULL){
      return NULL;
    }
  }
  //if we get to this point, we found the vale/node to be removed
  if (curr == front) {
    front = curr->next;
  } else {
    //it's not the front, it's somewhere in between
    curr->prev->next = curr->next;
  }
  if (curr == back) {
    back = curr->prev;
  } else {
    curr->next->prev = curr->prev;
  }

  curr->next = NULL;
  curr->prev = NULL;
  size--;

  return curr;

}
