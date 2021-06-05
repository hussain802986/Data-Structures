#include<bits/stdc++.h>
#include<conio.h>
#define max 10

using namespace std;

class CQ
{
	public:
	int front,rear;
	int a[max];
	CQ()
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
		else if((rear+1)%max==front)
		{
			cout<<"Queue is full"<<endl;
		}
		else
		{
			if(rear==max-1)
				rear==0;
			else
				rear++;
			a[rear]=val;
		}
	}
	void pop()
	{
		if(front==-1)
		{
			cout<<"Queue is empty"<<endl;
		}
		else if(front==rear)
		{
			cout<<"Deleted element is "<<a[front];
			front=rear=-1;
		}
		else
		{
			cout<<"Deleted element is "<<a[front]<<endl;
			front++;
		}
	}
	void display()
	{
		if(front==-1)
		{
			cout<<"Queue is empty"<<endl;
		}
		else
		{
			int i=front;
			while(i!=rear)
			{
				cout<<a[i]<<" ";
				i=(i+1)%max;
			}
		}
		cout<<a[rear]<<endl;
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
	q.push(8);
	q.push(9);
	q.push(10);
	q.push(11);
	q.push(12);
	q.pop();
	q.push(11);
	q.display();
	return 0;
}
