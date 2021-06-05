#include<bits/stdc++.h>

using namespace std;

class SLLnode
{
	public:
		int data;
		SLLnode *next;
		SLLnode(int val)
		{
			this->data=val;
			this->next=NULL;
		}
};

class SLL
{
	public:
		SLLnode *head;
		SLL()
		{
			head=NULL;
		}
		void insertbegin(int val)
		{
			SLLnode *node = new SLLnode(val);
			if(head==NULL)
			{
				head=node;	
			}
			else 
			{
				node->next=head;
				head=node;	
			}
		}
		void insertend(int val)
		{
			SLLnode *node = new SLLnode(val);
			SLLnode *temp=head;
			if(head==NULL)
				head=node;
			else
			{
				while(temp->next!=NULL)
					temp=temp->next;
				temp->next=node;
			}
		}
		void insertpos(int val, int pos)
		{
			SLLnode *node = new SLLnode(val);
			int c=0;
			SLLnode *temp=head;
			while(temp)
			{
				
				temp=temp->next;
				c++;
			}
			if(pos==1)
			{
				if(head==NULL)
					head=node;
				else
				{
					node->next=head;
					head=node;
				}
			}
			else if(pos>1 && pos<=c)
			{
				SLLnode *prev;
				temp=head;
				for(int i=2;i<=pos;i++)
				{
					prev=temp;
					temp=temp->next;
				}
				node->next=temp;
				prev->next=node;
			}
			else
			{
				cout<<"Position out of range!!"<<endl;
			}
			
		}
		void deletebegin()
		{
			if(head==NULL)
				cout<<"List is empty"<<endl;
			else
			{
				cout<<"Deleted element is "<<head->data<<endl;
				head=head->next;
			}
		}
		void deleteend()
		{
			SLLnode *temp=head;
			if(head==NULL)
				cout<<"List is empty"<<endl;
			else
			{
				SLLnode *prev;
				while(temp->next!=NULL)
				{
					prev=temp;
					temp=temp->next;
				}
				cout<<"Deleted element is "<<temp->data<<endl;
				prev->next=NULL;
			}
		}
		void deletepos(int pos)
		{
			int c=0;
			SLLnode *temp=head;
			while(temp)
			{
				c++;
				temp=temp->next;
			}
			if(pos==1)
			{
				if(head==NULL)
					cout<<"List is empty"<<endl;
				else
				{
					head=head->next;
				}
			}
			else if(pos>1 && pos<=c)
			{
				temp=head;
				SLLnode *prev;
				for(int i=2;i<=pos;i++)
				{
					prev=temp;
					temp=temp->next;
				}
				prev->next=temp->next;
			}
		}
		void reverse()
		{
			if(head==NULL)
			{
				cout<<"List is empty"<<endl;
			}
			else
			{
				SLLnode *ptr1,*ptr2,*ptr3;
				ptr1=head;
				ptr2=ptr1->next;
				ptr3=ptr2->next;
				ptr1->next=NULL;
				ptr2->next=ptr1;
				while(ptr3)
				{
					ptr1=ptr2;
					ptr2=ptr3;
					ptr3=ptr3->next;
					ptr2->next=ptr1;
				}
				head=ptr2;
			}
		}
		void display()
		{
			SLLnode *temp=head;
			while(temp->next!=NULL)
			{
				cout<<temp->data<<" ";
				temp=temp->next;
			}
			cout<<temp->data<<endl;
		}
};

int main()
{
	SLL l;
	l.insertend(1);
	l.insertend(2);
	l.insertend(3);
	l.insertend(4);
	l.insertend(5);
	l.insertend(6);
	l.insertend(7);
	l.insertend(8);
	l.insertend(9);
	l.insertend(10);
	l.deletebegin();
	l.display();
	l.insertbegin(11);
	l.display();
	l.deleteend();
	l.display();
	l.insertpos(1,1);
	l.display();
	l.insertend(12);
	l.display();
	l.insertpos(15,6);
	l.display();
	l.deletepos(6);
	l.display();
	l.reverse();
	l.display();
	return 0;
}
