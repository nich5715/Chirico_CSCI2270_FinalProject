#include <iostream>
#include <string>


#include "THfunctions.h"
#include "SQfunctions.h"
#include "SDLLfunctions.h"
#include "SSACfunctions.h"
#include "PMCSfunctions.h"
#include "HTDfunctions.h"



using namespace std;

int main()
{
    int option;
	do{
		cout << "======Main Menu=====" << endl;
		cout << "1. Pointers, Memory, Classes and Structs" << endl;
		cout << "2. Linked Lists: Single and Double" << endl;
		cout << "3. Stacks and Queues"
		cout << "4. Trees and Heaps" << endl;
		cout << "5. Hash Tables and Dictionaries" << endl;
		cout << "6. Searching, Sorting, and Algorithmic Complexity" << endl;
		cout << "7. Quit Data Structures Practice" << endl;
		cin >> option;
		switch (option)
		{
		case 1:
			cout << "" << endl;
			.PMCSfunctions();
			break;
		case 2:
			cout << "" << endl;
			.SDLLfunctions();
			break;
		case 3:
		    cout << "" << endl;
		    .SQfunction();
			break;
		case 4:
		    cout << "" << endl;
		    .THfunction();
            break;
        case 5:
            cout << "" << endl;
            .HTDfunction();
            break;
        case 6:
            cout << "" << endl;
            .SSACfunctions();
            break;
        }
    }
    while (option != 7);
    cout << "Goodbye!" << endl;
    return 0;
}
