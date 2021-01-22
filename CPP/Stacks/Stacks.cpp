#include<iostream>
#include<string>

using namespace std;

//Stack class is created with hall the variables and functions that will be associated with any stack object that will be created.
class Stack
{

private:
	int top;
	int arr[5];


public:
	// STACK CONSTRUCTOR IS CREATED IN THE STACK CLASS
	//Note:- Constructor is a special method that is called whenever an object of a class is created
	Stack() {
		//top value is used to store the position of the topmost element
		//since stack is empty is the beginning, it is given a value of
		// -1, just before 1st element is added to stack, top value is increased and
		//it becomes 0 because the first element will occupy position corresponding
		// to the 0th index
		top = -1;
		for (int i = 0; i < 5; i++)
		{
			arr[i] = 0;
		}
	}

	//THE FOLLOWING WILL BE THE FUNCTIONS ASSOCIATED WITH ANY OBJECT OF THE STACK CLASS

	//checks is stack is empty
	bool isEmpty() {
		if (top == -1)
		{
			return true;
		}

		else
		{
			return false;
		}
	}

	//checks if stack is full
	bool isFull() {
		if (top == 4)
		{
			return true;
		}
		else
		{
			return false;
		}


	}

	//void because we aren't returning anything
	//adds an element to the stack
	void push(int val) {
		if (isFull()) {
			cout << "Stack Overflow" << endl;
		}
		else
		{
			top++;
			arr[top] = val;
		}
	}

	//int because we are returning the removed value for the array which
	// is of type int
	//removes an element from stack
	int pop()
	{
		if (isEmpty())
		{
			cout << "Stack Underflow" << endl;
			return 0;
		}

		else
		{
			int popval = arr[top];
			arr[top] = 0;
			top--;
			return popval;
		}

	}

	//returns the no of elements in the stack
	int count() {
		return (top + 1);
	}

	//returns element in i-th position
	int peek(int pos) {
		if (isEmpty())
		{
			cout << "Stack Underflow" << endl;
			return 0;
		}
		else
		{
			return arr[pos];
		}

	}

	//changes a certain element of the stack
	void change(int pos, int val) {
		if (isEmpty())
		{
			cout << "Stack Underflow" << endl;
		}
		else
		{
			arr[pos] = val;
			cout << "Value changed to" << val << " at location" << pos << endl;
		}

	}

	//displays all the elements of the stack
	void display() {
		cout << "Elements of the stack are" << endl;
		for (int i = 4; i >= 0; i--)
		{
			cout << arr[i] << endl;
		}
	}




};

int main() {
	Stack s;
	int option, position, value;

	do
	{
		cout << "Enter the number of the operation that you want to perform. Enter 0 to end this program" << endl;
		cout << "1. Push()" << endl;
		cout << "2. Pop()" << endl;
		cout << "3. isEmpty()" << endl;
		cout << "4. isFull()" << endl;
		cout << "5. peek()" << endl;
		cout << "6. count()" << endl;
		cout << "7. change()" << endl;
		cout << "8. display()" << endl;
		cout << "9. Clear Screen()" << endl;

		cin >> option;

		switch (option)
		{
		case 1:
			cout << "Enter value to be pushed to the stack" << endl;
			cin >> value;
			s.push(value);
			break;
		case 2:
			cout << "The value " << s.pop() << " was popped from the top of the stack" << endl;
			break;
		case 3:
			if (s.isEmpty())
			{
				cout << "Stack is Empty" << endl;
			}
			else
			{
				cout << "Stack is not Empty" << endl;
			}
			break;
		case 4:
			if (s.isFull())
			{
				cout << "Stack is Full" << endl;
			}
			else
			{
				cout << "Stack is not Full" << endl;
			}
			break;
		case 5:
			cout << "Enter position of element you want to see" << endl;
			cin >> position;
			cout << "Value of the element at " << position << " is " << s.peek(position) << endl;
			break;
		case 6:
			cout << "No. of elements in the stack currently is " << s.count() << endl;
			break;
		case 7:
			cout << "Enter position of element you want to change" << endl;
			cin >> position;
			cout << "Enter the value you want to change it to" << endl;
			cin >> value;
			s.change(position, value);
			cout << "The value of element at " << position << " is changed to " << value << endl;
			break;
		case 8:
			s.display();
			break;
		case 9:
			//predefined function that clears out the screen. Some compilers
			//need you to include the conio header file for this
			system("cls");
			break;

		default:
			cout << "Enter a proper option number" << endl;
		}
	} while (option != 0);

	return 0;
}