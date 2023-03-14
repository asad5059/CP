//C191008
//Md Mosleh Uddin

#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
#define pb push_back
#define ff first
#define ss second
#define MAX 100
using namespace std;
void fastio()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
}
class Stack {
	int top;

public:
	int a[MAX]; 

	Stack() { top = -1; }
	bool push(int x);
	int pop();
	int size();
	int topElement();
};

bool Stack::push(int x)
{
	if (top >= (MAX - 1)) {
		cout << "Stack Overflow";
		return false;
	}
	else {
		a[++top] = x;
		cout << x << " pushed into stack\n";
		return true;
	}
}
int Stack::size()
{
	return top+1;
}

int Stack::topElement()
{
	return a[top];
}
int Stack::pop()
{
	if (top < 0) {
		cout << "Stack Underflow";
		return 0;
	}
	else {
		int x = a[top--];
		return x;
	}
}
int main()
{
	class Stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(100);
	s.push(70);
	while(s.size()!=0)
	{
		cout<<"Stack Size is : "<<s.size()<<"\n";
		cout<<s.topElement()<<" poped\n";
		s.pop();
		cout<<"Now Stack Size is : "<<s.size()<<"\n";
	}
	return 0;
}