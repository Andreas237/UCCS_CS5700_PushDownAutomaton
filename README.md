# Push Down Automaton
Author: Andreas Slovacek
Due:    4 November 2018
CS5700, University of Colorado Colorado Springs


## Abstract
Read a machine description file, generate the machine, process input strings.


## Technical Approach

### `PDA.h`
Implements a PDA as a class.
  - Set of `states`
  - Set of `accept states`
  - Vector `stack`
  - Map of `Transition` to `in`
  -- which implements and `Transition`.
  - Reads an machine description file to fill in the machine details
  - Reads input string file to make transitions through the machine
  - Writes accepted strings to _basename.txt_
  - Writes _basename.log_ with Validity, States, Input Alphabet, Stack Alphabet, Accepted


### `Transition.h`
Transitions composed of `start state`, `input variable`, `stack variable`,
and `end state`.  Can print itself, generates a transition with constructor.





## System Requirements

### Makefile
Compiler: clang++
Compiler Compliance: C++ 2014
