#include<iostream>
#include<ioapiset.h>
#include<ctime>
using namespace std;
typedef struct vi {
	int data;
	vi *next;
}node;
void add(node *p) {
	node *temp;
	int x=0;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		node *n = new node;
		x=1 + rand() % 50;
		n->data = x;
		if (p->next == NULL)
		{
			p->next = n;
			p=n;
		}
		cout<<n->data<<"->";
		temp->next=n;
		n->next = NULL;
				
	}
}
void print(node *p) {
	while(p->next!=0)
	{
		cout<<p->data;
		p=p->next;
	}

}
int main() {
	node *head;
	add(head);
	cout<<endl;
	print(head);
	system("pause");
	return 0;
}
