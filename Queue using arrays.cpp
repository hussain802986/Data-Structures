#include<bits/stdc++.h>

using namespace std;

class Queue
{
	public:
	int front,rear;
	int a[1000];
	Queue()
	{
		front=rear=-1;	
	}
	void push(int val)
	{
		if(front==-1)
		{
			front=rear=0;
			a[front]=val;	
		}
		else
		{
			rear++;
			a[rear]=val;	
		}	
	}	
	void pop()
	{
		if(front==-1)
		{
			cout<<"Queue is empty";
		}
		else
		{
			cout<<"The Deleted element is "<<a[front]<<endl;
			front++;
		}
	}
	void display()
	{
		for(int i=front;i<=rear;i++)
		{
			cout<<a[i]<<" ";
		}
	}
};

int main()
{
	Queue q;
	q.push(5);
	q.push(6);
	q.push(7);
	q.push(8);
	q.pop();
	q.display();
	return 0;
}
