#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
typedef struct ni{
	int data;
	ni *next;  
}node;  
int main(){
	node *first ,*second;
	first=(node*)malloc(sizeof(node));
	second=(node*)malloc(sizeof(node));
	first->data=10;
	second->data=8;
	first->next=second;
	second->next=NULL;
	for(;first;first=first->next)
	{
		cout<<first->data<<" ";
	}
}

