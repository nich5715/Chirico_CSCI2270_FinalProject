#include <string>
#include <iostream>
#include <vector>

using namespace std;

#ifndef QUIZ_H_
#define QUIZ_H_

struct node{
	string question;
	vector<string> options;
	char choice;
	char answer;
	node *left;
    node *right;
};
class quiz{

private:
	node *root;
	int total;
	int count;
	void reset(node *temp);
	void insertQuestion(node *&root, node *q);
	void displayQuestion(node *q);
	void clear(node *&q);
	void display(node *q);
public:
	quiz();
	~quiz();
	void clear();
	void reset();
	int size();
	void insertQuestion(string question, vector<string> options, char answer);
	void displayQuestions();
	void display();
	int getScore();
};

#endif

