#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>
#include <list>
#include <queue>
#include <map>
#include <set>
#include <iterator>
#include <deque>

using namespace std;

class Foo
{
public:
	template <typename T>
	T Greater(T const &a, T const &b)
	{
		return a > b ? a:b;
	}
};

int main()
{
	vector<int> input = { 1,4,2,6};
	vector<int>::iterator ptr;

	/*int number = 0;*/
	/*char reply;*/
	/*do
	{
		cout << "Enter number: ";
		cin >> number;
		input.push_back(number);
		cout << "Enter another number? (Y/N)";
		cin >> reply;

	} while (reply == 'y' || reply == 'Y');*/

	//sort vector in descending order
	sort(input.begin(), input.end(),greater<int>());

	//display elements of vector
	for (ptr= input.begin(); ptr < input.end(); ptr++)
	{
		cout << *ptr<<" ";
	}
	cout << endl;
	stack<int,vector<int>> myStack(input); //assign elements of vector to Stack in copy constructor
	queue<int> myQueue; 
	;
	//Print stack
	cout << "Element" << "\t" << "-->"<<"\t"<<"Next Greater Number"<<endl;
	myQueue.push(myStack.top());
	while (!myStack.empty())
	{
		cout << myStack.top() << "\t" << "-->";
		myStack.pop();
		if (myStack.empty())
		{
			cout << "\t" <<"null"<< endl;
			break;
		}
		cout << "\t" << myStack.top()<<endl;
		myQueue.push(myStack.top());
	}
	
	while (!myQueue.empty())
	{
		cout << myQueue.front() << " ";
		myQueue.pop();
	}
	
	return 0;
}