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

class queueLL
{
	public:
	SLL *front, *rear;
	queueLL()
	{
		this->front=this->rear=NULL;
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
			node->next=front;
			rear=node;
		}
		else
		{
			node->next=rear;
			rear=node;
		}
	}
	void pop()
	{
		SLL *temp=rear;
		if(front==NULL)
		{
			cout<<"Queue is empty";
		}
		else if(front==rear)
		{
			cout<<"The deleted element is "<<front->data<<endl;
			front=rear=NULL;
		}
		
		else
		{
			cout<<"The deleted element is "<<front->data<<endl;
			while(temp->next!=front)
			{
				temp=temp->next;
			}
			front=temp;
		}
	}
	void display()
	{
		SLL *temp=rear;
		while(temp->next!=NULL)
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		
	}
};

int main()
{
	queueLL q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	q.pop();
	q.display();
	return 0;
}
