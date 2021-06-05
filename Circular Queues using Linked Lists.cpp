#include<bits/stdc++.h>

using namespace std;

class SLL
{
	public:
		int data;
		SLL *next;
		SLL(int val)
		{
			this->data=val;
			this->next=NULL;
		}
};

class CQ
{
	public:
		SLL *front, *rear;
		CQ()
		{
			front=rear=NULL;
		}
		void push(int val)
		{
			SLL *node = new SLL(val);
			if(front==NULL)
			{
				front=rear=node;
				
			}
			else if(front==rear)
			{
				front->next=node;
				rear=node;
				rear->next=front;
			}
			else
			{
				rear->next=node;
				rear=node;
				rear->next=front;
			}
		}
		void pop()
		{
			if(front==NULL)
			{
				cout<<"Queue is empty"<<endl;
			}
			else if(front==rear)
			{
				cout<<"Deleted element is "<<front->data<<endl;
				front=rear=NULL;
			}
			else
			{
				cout<<"Deleted element is "<<front->data<<endl;
				front=front->next;
				rear->next=front;
			}
		}
		void display()
		{
			SLL *temp=front;
			//temp=temp->next;
			while(temp!=rear)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<rear->data<<endl;
		}
};

int main()
{
	CQ q;
	q.push(1);	
	q.push(2);	
	q.push(3);	
	q.push(4);	
	q.push(5);	
	q.push(6);	
	q.push(7);
	q.display();
	q.pop();
	q.display();
	q.push(8);
	q.display();	
	return 0;
}
