#include "transition.h"



///< Transition(int, T, T, int)
/*!
Set member variables of this transition based on parameters
*/
template <class T>
Transition::Transition(int startState, T inputVar, T stackVar, int endState){
  this->startState = startState;
  this->inputVar = inputVar;
  this->stackVar = stackVar;
  this->endState = endState;
}// end Transition::Transition(int, T, T, int)

///< void printTransition(void)
/*!
Print the member of the transition
*/
void printTransition(void){
  std::cout << "[start state|input variable|stack variable|end state]=";
  std::cout << "[" << startState << "|"
            << inputVar << "|"
            << stackVar << "|"
            << endState << "]" << std::endl;
}// end void printTransition(void)
