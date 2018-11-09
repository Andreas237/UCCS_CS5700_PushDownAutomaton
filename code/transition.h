#ifndef TRANSITION_H
#define TRANSITION_H

#include <iostream>

template <class T>
class Transition{

  private:
    int startState;     ///< State from which the transition starts
    T inputVar;         ///< variable read from the input
    T stackVar;         ///< variable read from the stack
    int endState;       ///< State in which the transition ends

  public:
    Transition(int, T, T, int);
    Transition getTransition(){ return this;}
    void printTransition(void);

};// end class Transition


# endif
