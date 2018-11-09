# ifndef PDA_H
# define PDA_H

#include "transition.h"
#include <set>            // include for states
#include <vector>         // include for stack
#include <map>





///< class Pda
/*!
Implementes the functionality of a PDA.
Makes transitions given an input tape and stack
Knows whether it is in an accept state or not
*/
template <class T>
class Pda{
public:
  std::set<int>                 states;       ///< states in the PDA
  std::set<int>                 acceptStates; ///< accept states in the PDA
  std::vector<T>                stack;        ///< stack for the PDA
  std::map<Transition<char>,int>  transitions;  ///< transitions map

}; // end class Pda









///< addTransition
/*!
Given a list of transition parameters create a transition and return it
*/











# endif
