#pragma once

#include "stack.h"






template <class T>
Stack<T>::Stack(){
  this->top = (StackNode*)0; // initialize the top to a null member
}// end Stack::Stack()






///< ~Stack()
/*!
Recursively delete all the nodes in the stack
*/
template <class T>
Stack<T>::~Stack(){
  StackNode* currentNode = this->top;
  StackNode* temp;
  while( currentNode != (StackNode*)0 ){
    temp = currentNode;
    currentNode = currentNode->next;
    delete temp;
  }// end while( currentNode != (*StackNode)0 )

}// end Stack<T>::~Stack()






///< isEmpty(void)
bool Stack<T>::isEmpty(void){
  return (this->top == (StackNode*)0;
}// end bool Stack<T>::isEmpty(void)







///< push(const T inval)
/*!
Push a value onto the stack and move the top pointer
*/
template <class T>
void Stack<T>::push(const T inval){
  StackNode* temp, node = new StackNode;
  node->value = T;
  temp = top;
  top = node;
  node->next = temp;
}// end void Stack<T>::push(const T inval)






///< pop(T & outval)
/*!
Remove the value from the top of the stack
*/
template <class T>
T Stack<T>::pop(T & outval){
  return (T)0;//type T;
}// end bool Stack<T>::pop(T & outval)







T Stack<T>::topValue(void);
