# numberguesser
NumberGuesser
Requested files: NumberGuesser.cpp (Download)
Type of work: Individual work

Number Guessing Game

In this assignment you will write a program in that can figure out a number chosen by a human user. The human user will think of a number between 1 and 100. The program will make guesses and the user will tell the program to guess higher or lower.

A sample run of the program might look like this:

Guess a number between 1 and 100.

Is it 50?  (h/l/c): h

Is it 75?  (h/l/c): h

Is it 87?  (h/l/c): l

Is it 81?  (h/l/c): c

Great! Do you want to play again? (y/n): y

Guess a number between 1 and 100.

Is it 50?  (h/l/c): l

Is it 25?  (h/l/c): h

Is it 37?  (h/l/c): c

Great! Do you want to play again? (y/n): n

Notice that the user inputs the characters ‘h’, ‘l’, and ‘c’ for higher, lower, and correct, respectively.

For the game to work best, every time your program makes a guess it should choose the midpoint of the remaining possible values.  Consider the first example above, in which the user has chosen the number 81:

On the first guess, the possible values are 1 to 100. The midpoint is 50.

The user responds by saying “higher”

On the second guess the possible values are 51 to 100. The midpoint of 75.

The user responds by saying “higher”

On the third guess the possible values are 76 to 100. The midpoint is 87.

The user responds by saying “lower”

On the fourth guess the possible values are 76 to 86. The midpoint is 81.

The user responds “correct”

Name your program NumberGuesser.cpp and submit it here.


Grade
Reviewed on Sunday, 11 June 2017, 11:28 AM by Courtney Brown
Grade 95 / 100
Assessment report
Need more comments.

[-]TEST 1
--Guessed correctly--
[-]TEST 2
--Guessed correctly--
[-]TEST 3
--Guessed correctly--
[-]TEST 4
--Guessed correctly--
[-]TEST 5
--Guessed correctly--
[-]TEST 6
--Guessed correctly--
