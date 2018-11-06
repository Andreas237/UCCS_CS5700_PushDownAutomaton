# Push Down Automaton
Author: Andreas Slovacek
Due:    4 November 2018
CS5700, University of Colorado Colorado Springs


## Abstract
Read a machine description file, generate the machine, process input strings.


## Technical Approach

### `PDA.h`
Implements a PDA as a class, which implements `Stack` and `Transition`.
  - Reads an machine description file to fill in the machine details
  - Reads input string file to make transitions through the machine
  - Writes accepted strings to _basename.txt_
  - Writes _basename.log_ with Validity, States, Input Alphabet, Stack Alphabet, Accepted Strings (count)

### `Stack.h`
The stack will be a singly linked list.  Available functions are:
  - `push`  add a value to the stack
  - `pop`   remove a value from the stack
  - `size`  returns the size of the current stack
  - `topValue`  read the top value from the stack, will call pop


### `Transition.h`
Generates the transitions based on *valid* inputs from a machine description file.
Sets the machine's current state given an input, if the machine is able.
