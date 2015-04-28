#include "PMCSfunctions.h"

PMCSfunctions::PMCSfunctions()
{
}

PMCSfunctions::~PMCSfunctions()
{
}

        void set_plusOrMinus_answers(string pluss, string minuss)
        {
            plus = pluss;
            minus = minuss;
        }
        void set_howManyQuestions(int hmqq)
        {
            howManyQuestions = hmq
        }
        void set_q_a(int qn, string q, char ca)
        {
            question[qn-1] = q;
            answer[qn - 1] = ca;
        }
        quiz()
        {
            plusOrMinus = 0;
        }
        void run_quiz(){
            char ans;
            for(int i = 0; i < howManyQuestions; i++){
                cout << question[i] << ": ";
                cin >> ans;
                if (ans = answer[i]){
                    cout  << "Correct!" << endl;
                    plusOrMinus = plusOrMinus + 1;
                }
                else{
                    cout << "Wrong! " << endl;
                    plusOrMinus = plusOrMinus - 1;
                }
                system("pause");
                system("cls");
            }
            if (plusOrMinus >= 0){
                cout << plus << endl;
                cout << "your score was " << plusOrMinus << endl;
            }
            else if(plusOrMinus < 0){
                cout << minus << endl;
                cout << "your score was: " << plusOrMinus << endl;
            }
            else{
                cout << "input not recognized" << endl;
            }
            system("pause");
        }
