#ifndef STACK_H
#define STACK_H

template <class T>
class Stack{

private:

  StackNode* top; ///< Pointer to top of the stack
  ///< stackNode
  /*!
  Container for each node in the stack
  */
  stuct StackNode{
    T value;
    StackNode *next;
  };


protected:
public:
  Stack();
  ~Stack();
  bool isEmpty(void);
  void push(const T);
  bool pop(T &);
  T topValue(void);

};//end class Stack

#endif
