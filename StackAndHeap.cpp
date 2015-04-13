#include <iostream>
#include <stack>
#include <queue>

using namespace std;

int main(){
	stack<int> s1, s2;
	queue<int> q;
	s1.push(45);
	s1.push(22);
	s1.push(19);
	s1.push(18);
	s1.push(11);
	s1.push(10);
	while (s1.size() != 0){
		s2.push(s1.top());
		s1.pop();
	}
	while (s2.size() != 0){
		q.push(s2.top());
		s2.pop();
	}
	// printing the elements of queue
	for (int i = 0; i < q.size(); ++i){
		cout << q.front() << "  ";
		int t = q.front();
		q.pop();
		q.push(t);
	}
	cout << endl;
	return 0;
}
