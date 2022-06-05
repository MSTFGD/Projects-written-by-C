#include <stdio.h>
#include <stdlib.h>
struct dot{
	int data;
	dot *next;
	dot *prev;
}*head=NULL,*tail=NULL,*t;

void display(){
	dot *id=head;
	printf("list:\n");
	while(id!=NULL){
		printf("%d\t",id->data);
		id=id->next;
	}
	printf("\n");
}
void ekle(int data){
	dot *n=(struct dot*)malloc(sizeof(dot));
	n->data=data;
	n->next=NULL;
	n->prev=NULL;	
	
	if(head==NULL){
		head=tail=n;	
	}
	else{
		tail->next=n;
		n->prev=tail;
		tail=n;
	}
}

void changePlace(dot *id1,dot *id2){
	int t;
	t=id1->data;
	id1->data= id2->data;
	id2->data=t;
	
}

void sSortLinkedList(){
	dot *j,*i;
	for(i=head; i!=NULL ;i= i->next){
		for(j=i->next; j!=NULL ; j=j->next){
			if(i->data > j->data)
			changePlace(i,j);
		}
	}
}

int main(){
	ekle(400);
	ekle(100);
	ekle(200);
	ekle(500);
	ekle(300);

	display();
	
	sSortLinkedList();
	
	display();
	
	return 0;
}


