#include "quiz.h"

quiz::quiz(){
	total = 0;
	count = 0;
	root = NULL;
}

quiz::~quiz(){
	clear();
}

void quiz::clear(){
	clear(root);
	count = 0;
	total = 0;
}

void quiz::clear(node *&q){
	if (q == NULL){
		return;
	}
	else{
		clear(q->left);
		clear(q->right);
		delete q;
		q = NULL;
	}
}

int quiz::size(){
	return count;
}

void quiz::reset(){
	reset(root);
}

void quiz::reset(node *temp){
	if (temp == NULL){
		return;
	}
	else{
		reset(temp->left);
		temp->choice = 'z';
		reset(temp->right);
	}
}

void quiz::insertQuestion(string question, vector<string> options, char answer){
	node *temp = new node;
	temp->question = question;
	for (int i = 0; i < options.size(); ++i){
		temp->options.push_back(options[i]);
	}
	temp->answer = answer;
	temp->choice = 'z';
	temp->left = NULL;
	temp->right = NULL;
	if (root == NULL){
		root = temp;
	}
	else{
		insertQuestion(root, temp);
	}
}

void quiz::insertQuestion(node *&root, node *q){
	if (root == NULL){
		root = q;
		count++;
		return;
	}
	else{
		if (q->question < root->question){
			insertQuestion(root->left, q);
		}
		else if (q->question > root->question){
			insertQuestion(root->right, q);
		}
	}
}

void quiz::displayQuestions(){
	displayQuestion(root);
}

void quiz::displayQuestion(node *q){
	if (q == NULL){
		return;
	}
	else{
		displayQuestion(q->left);
		cout << "Q) " << q->question << endl;
		for (int i = 0; i < q->options.size(); ++i){
            cout<<"\n";
			cout << (char)('a' + i) << ") " << q->options[i] << endl;
		}
		cout << "\nAnswer: ";
		char ans;
		cin >> ans;
		if (ans == q->answer){
                cout << "Correct, great job!\n"<<endl;
            //for (i=0; i < 45; i++){
            //}
			total++;
		}
		displayQuestion(q->right);
	}
}

int quiz::getScore(){
	return total;
}

void quiz::display(){
	display(root);
}

void quiz::display(node *q){
	if (q == NULL){
		return;
	}
	else{
		display(q->left);
		cout << "Q) " << q->question << endl;
		for (int i = 0; i < q->options.size(); ++i){
			cout << (char) ('a' + i) << ") " << q->options[i] << endl;
		}
		cout << endl;
		display(q->right);
	}
}

