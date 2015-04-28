#ifndef PMCSFUNCTIONS_H
#define PMCSFUNCTIONS_H
#include <string>

class quiz
{
    protected:
    private:
        int howManyQuestions;
        char answer [50];
        string question [50];
        int plusOrMinus;
        string minus;
    public:
        quiz();
        virtual ~quiz();
        void set_plusOrMinus_answers(string pluss, string minuss);
        void set_howManyQuestions(int hmqq);
        void set_q_a(int qn, string q, char ca);
        void run_quiz();
        virtual ~SDLLfunctions();

};

#endif // PMCSFUNCTIONS_H
