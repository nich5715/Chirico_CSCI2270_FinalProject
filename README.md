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

“quiz” class is actually a binary search tree in which each node represents a question of the quiz. we insert questions using insertQuestion function and after inserting all the questions, we display all the questions to the user to get the answers from the user through inorder traversal as in left, parent, right of the tree using displayQuestions function. then after user finishes a quiz we will post the scores onto the screen. getScore function gives the total number of questions which are correctly answered by the user and size function gives the total number of questions in the quiz.


The program class has different functions to track:
-total score
-count to keep track of questions and answers
-a function to reset the quiz’s tree
-a function to insert the question into the tree
-a function to display the question
-a function to clear the tree(used by destructor)

How to run the quiz:
Start the program with the three .txt inside the zip folder, the driver, class and header files.  Run the program and follow the instructions in the terminal.

Dependencies There are no dependencies. System Requirements This program is designed for Code::Blocks and uses the g++ compiler. 


