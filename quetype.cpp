#include "quetype.h"


template<class T>
QueType<T>::QueType() {
  maxQue = 501;
  front = maxQue - 1;
  rear = maxQue - 1;
  items = new T[maxQue];
}
template<class T>
QueType<T>::~QueType() {
  delete [] items;
}
template<class T>
void QueType<T>::MakeEmpty() {
  front = maxQue - 1;
  rear = maxQue - 1;
}
template<class T>
bool QueType<T>::isEmpty() {
  return (rear==-1 && front ==-1);
}
template<class T>
bool QueType<T>::isFull() {
  return ((rear+1)%maxQue == front);
}
template<class T>
void QueType<T>::Enqueue(T newItem) {
  if (IsFull())
    throw FullQueue();
  else if(isEmpty())
    rear=0;
    front=0;
  else
    rear=rear+1;
  info[rear]=item;
}
template<class T>
void QueType<T>::Dequeue(T& item) {
  if (IsEmpty())
    throw EmptyQueue();
  else {
    front = (front + 1) % maxQue;
    item = items[front];
  }
}

template<class T>
int QueType<T>::Front() {
    return info[front];


}
