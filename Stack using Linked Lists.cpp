#include<iostream>

using namespace std;

class SLL
{
	public:
		int data;
		SLL *next;
		SLL(int node_data)
		{
			this->data=node_data;
			this->next=NULL;
		}
};

class stackLL
{
	public:
		SLL *top;
		stackLL()
		{
			top=NULL;
		}
		void push(int data)
		{
			SLL *node = new SLL(data);
			if(top==NULL)
			{
				top=node;
			}
			else
			{
				node->next=top;
				top=node;
			}
		}
		void pop()
		{
			if(top==NULL)
			{
				cout<<"Stack is empty";
			}
			else
			{
				cout<<"Deleted element is "<<top->data<<endl;
				top=top->next;
			}
		}
		void display()
		{
			SLL *temp=top;
			while(temp)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
		}
};

int main()
{
	stackLL s;
	s.push(5);
	s.push(6);
	s.push(7);
	s.push(8);
	s.pop();
	s.display();
	return 0;
}
