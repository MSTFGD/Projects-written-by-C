#include<stdio.h>
#include<stdlib.h>
struct dot{
	int data;
	struct dot *next;
}*head=NULL,*heada=NULL,*tail=NULL;

//stack yapýsýnda baþa ekleme
void stackPush(int toPush){
	struct dot *n=(struct dot *)malloc(sizeof(struct dot));
	n->data=toPush;
	n->next=head;
	head=n;
}

//stack yapýsýnda listeden çýkarma
void stackOut(int *data){
	if(head==NULL){
		data=NULL;
		return;
	}
	else{
		dot *temp=head;
		
		*data=temp->data;
		
		head=head->next;
		free(temp);
	}
}
	
//queue yapýsýnda sona ekleme
void enqueue(int data){
	dot *yeni=(struct dot*)malloc(sizeof(dot*));
	yeni->data=data;
	yeni->next=NULL;
	if(heada==NULL){
		heada=tail=yeni;
		return;
	}
	else{
		tail->next=yeni;
		tail=yeni;
	}
	
}


//queue yapýsýnda listeden çýkarma
void dequeue(int *data){
		dot *temp=heada;
		
		*data=temp->data;
		
		heada=heada->next;
		free(temp);
	}

int main(){
	int data,i=1,j;
	for(i=1;i<=3;i++){
		printf("%d.veriyi giriniz:",i);
		scanf("%d",&data);
		stackPush(data);
		enqueue(data);
	}
	
	printf("\n\ngirilen verilerin stack gosterimi:\n");
	for(j=1;j<=3;j++){
		stackOut(&data);
		printf("%d\n",data);
    }
    
    printf("\n\ngirilen verilerin queue gosterimi:\n");
    for(j=1;j<=3;j++){
    	dequeue(&data);
		printf("%d\n",data);
	}
	
	return 0;
}











