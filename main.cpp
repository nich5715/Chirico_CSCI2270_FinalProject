#include <fstream>
#include <string>
#include <iostream>
#include "quiz.h"

using namespace std;

void readData(string fname, quiz &quiz1){
	ifstream in;
	in.open(fname.c_str());
	string question = "", option, temp = "", answer;
	vector<string> options;
	if (in.is_open()){
		while (in >> temp){
			if (temp == "Q"){
				question = "";
				while (true){
					in >> temp;
					if (temp == "options"){
						break;
					}
					question += (temp + " ");
				}
				options.clear();

				//cout << question << endl;

				getline(in, option);
				getline(in, option);

				//cout << option << endl;

				options.push_back(option);
				getline(in, option);

				//cout << option << endl;

				options.push_back(option);
				getline(in, option);
				//cout << option << endl;

				options.push_back(option);
				getline(in, option);
				//cout << option << endl;

				options.push_back(option);
				in >> answer;

				quiz1.insertQuestion(question, options, answer[0]);
			}
		}
	}
}

int main(){
	quiz quiz1, quiz2, quiz3;  
	cout << "This quiz is for Stacks and Queues\n" << endl;
	cout << "To User: input one character from given choices following question\n\nExample: for choices from: a), b), c), d) : Type 'a' or 'b' for your answer\n__________________________________________________________________________\n" << endl;
	readData("SaQ.txt", quiz1);
	quiz1.displayQuestions();
	cout << "You got " << quiz1.getScore() << " out of " << quiz1.size() << endl << endl << endl;
	cout << "This quiz is on searching, sorting and algorithmic complexity" << endl;
	readData("searching.txt", quiz2);
	quiz2.displayQuestions();
	cout << "You got " << quiz2.getScore() << " out of " << quiz2.size() << endl << endl << endl;
	cout << "This quiz is on trees" << endl;
	readData("trees.txt", quiz3);
	quiz3.displayQuestions();
	cout << "You got " << quiz3.getScore() << " out of " << quiz3.size() << endl << endl << endl;
}
