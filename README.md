# Chirico_CSCI2270_FinalProject
                                    CSCI-2270 Data Structures and Algorithms
Instructor: Hoenigman
Assignment: Final Project
Due:	 
Phase 1: April 19th, 5pm
Phase 2: April 26th, 5pm
Phase 3: May 3, 5pm
      
Program Summary

This program is a single-user quiz game, where the user must go through 3 quizzes that are created objects of class quiz about:

Stacks and Queues
Binary Trees
Algorithmic complexity and searching functions

“quiz” class is actually a binary search tree in which each node represents a question of the quiz. we insert questions using insertQuestion function and after inserting all the questions, we display all the questions to the user to get the answers from the user through inorder traversal of the tree using displayQuestions function. then after user finishes a quiz we will post the scores onto the screen. getScore function gives the total number of questions which are correctly answered by the user and size function gives the total number of questions in the quiz.


The program class has different functions to track:
-total score
-count to keep track of questions and answers
-a function to reset the quiz’s tree
-a function to insert the question into the tree
-a function to display the question
-a function to clear the tree(used by destructor)

How to run the quiz:
Start the program by typing downloading things.zip onto your computer.

Unzip the file to view what's inside.

Move/copy the following files into a folder connected to what program you're trying to run the code on, I.E. Code::blocks, Geanie, ect:
main.cpp
quiz.cpp
quiz.h
SaQ.txt
searching.txt
trees.txt

To run the program, open up your terminal, and type ./a.out main.cpp

This will start the program.  The quiz is multiple choice.  Upon starting the quiz, it will ask you to enter a letter for your answer.  This letter is a SINGLE CHARACTOR: either 'a' 'b' 'c' or 'd'

Just to show you an example of what a question would be like on the quiz see the following:

// The question would look like this


Q)     A) What day did Biggie Smalls die?
a) March 9th, 1997
b) March 7th, 1990
c) December 5th, 1996
d) December 7th, 1996

// The prompt where you answer will look like this:
Answer:
// what you answer is found below:
a

You will answer fifteen of these questions, then a new quiz will start.  The first quiz is on stacks and heaps, second quiz will be majoritingly on searching, and third quiz will be on trees.  you will answer a single character just like shown above, until all questions are answered.  At the end of each quiz, you will be prompted how well you did; like if you got a perfect score, you'd see:

You got 15 out of 15

At the end of each quiz, you'll see what's above.  Once you're finished with all three quizzes, the program will show your last quiz score, and you can review your questions in the terminal or click enter to exit.

Dependencies There are no dependencies. System Requirements This program is designed for Code::Blocks and uses the g++ compiler. 


