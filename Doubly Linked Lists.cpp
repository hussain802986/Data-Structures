#include<bits/stdc++.h>

using namespace std;

class DLLnode
{
	public:
		int data;
		DLLnode *next, * prev;
		DLLnode(int val)
		{
			this->data=val;
			this->next=this->prev=NULL;
		}
};

class DLL
{
	public:
		DLLnode *head;
		DLL()
		{
			head=NULL;
		}
		void insertbegin(int val)
		{
			DLLnode *temp=head;
			DLLnode *node = new DLLnode(val);
			if(head==NULL)
				head=node;
			else
			{
				while(temp->next!=NULL)
					temp=temp->next;
				temp->next=node;
				node->prev=temp;
				temp=node;
			}
		}
		void deletebegin()
		{
			if(head==NULL)
				cout<<"List  is empty"<<endl;
			else
			{
				head=head->next;
				head->prev=NULL;
			}
		}
		void deleteend()
		{
			DLLnode *temp=head;
			if(head==NULL)
				cout<<"List is empty";
			else
			{
				DLLnode *prev=temp;
				while(temp->next!=NULL)
				{
					prev=temp;
					temp=temp->next;
				}
				prev->next=NULL;
				temp->prev=NULL;
			}
		}
		void display()
		{
			DLLnode *temp=head;
			if(head==NULL)
				cout<<"List is empty"<<endl;
			else
			{
					while(temp)
					{
						cout<<temp->data<<" ";
						temp=temp->next;
					}
			}			
		}
};

int main()
{
	DLL l;
	l.insertbegin(1);
	l.insertbegin(2);
	l.insertbegin(3);
	l.insertbegin(4);
	l.insertbegin(5);
	l.insertbegin(6);
	l.insertbegin(7);
	l.insertbegin(8);
	l.insertbegin(9);
	l.insertbegin(10);
	l.deletebegin();
	l.deleteend();
	l.display();
	return 0;
}
