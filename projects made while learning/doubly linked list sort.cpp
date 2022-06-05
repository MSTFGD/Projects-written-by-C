#include <stdio.h>
#include <stdlib.h>
struct dot{
	int data;
	dot *prev;
	dot *next;
}*head=NULL,*tail=NULL;

void listele(){
	dot *id=head;
	printf("list:\n");
	while(id!=NULL){
		printf("%d\t",id->data);
		id=id->next;
	}
	printf("\n");	
}

int main(){
	int data;
	do{
		
		listele();
		printf("eklenecek sayiyi girin:(pozitif girdiginiz surece devam eder)");
		scanf("%d",&data);
		if(data<0)break;
		
		if(head==NULL){
			dot *n=(dot*)malloc(sizeof(dot));
			n->data=data;
			n->next=NULL;
			n->prev=NULL;
			head=tail=n;
			continue;
		}
		if(head -> data > data){ 
			dot *n = ( dot * ) malloc ( sizeof ( dot ) );
			n->data = data;
			n->next = head;
			head->prev=n;
			head=n;
			continue;
		}
		dot *id=head;
		while(id->next!=NULL && id->data<data){
			id=id->next;
		}
		dot *n=(dot *)malloc(sizeof(dot));
		n->data=data;
		if(id->next==NULL&&id->data<data){
			id->next=n;
			n->prev=id;
			n->next=NULL;
			tail=n;
			continue;
		}
		n->prev=id->prev;
		id->prev->next=n;
		id->prev=n;
		n->next=id;
		
		
	}while(data>=0);
}
