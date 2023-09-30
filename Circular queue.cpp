//#include <iostream>
//#define MAX 5
//using namespace std;
//
//int qarr[MAX];
//int rear = -1;
//int front = -1;
//
//void enqueue()
//{
//int item;
//if((front==0 && rear==(MAX-1)) || (rear!=-1 && front==rear+1)){
//cout<<"\nQueue overflow\n";
//return;
//}
//else
//{
//cout<<"\nEnter item to enqueue: ";
//cin>>item;
//rear = (rear+1)%MAX;
//qarr[rear] = item;
//if(front == -1){
//front = rear;
//}
//}
//}
//
//void dequeue()
//{
//if(front == -1)
//{
//cout<<"\nQueue underflow\n";
//return;
//}
//else
//{
//cout<<"\nElement deleted after dequeue is: "<<qarr[front];
//cout<<"\n";
//if(front == rear){
//front = rear = -1;
//}
//else{
//front = (front+1)%MAX;
//}
//}
//}
//
//void display()
//{
//if(front == -1){
//cout<<"\nQueue is empty\n";
//}
//else
//{
//cout<<"\nQueue is: ";
//if(front <= rear){
//for(int i=front; i<=rear; i++)
//{
//cout<<qarr[i]<<" ";
//}
//}
//else{
//for(int i=front; i<=MAX-1; i++){
//cout<<qarr[i]<<" ";
//}
//for(int i=0; i<=rear; i++){
//cout<<qarr[i]<<" ";
//}
//}
//cout<<"\n";
//}
//}
//
//int main()
//{
//int choice;
//
//while(1)
//{
//cout<<"\nChoice: 1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\n";
//cout<<"\nEnter your choice: ";
//cin>>choice;
//switch(choice)
//{
//case 1:
//enqueue();
//break;
//case 2:
//dequeue();
//break;
//case 3:
//display();
//break;
//case 4:
//exit(0);
//default:
//cout<<"\nWrong choice\n";
//}
//}
//return 0;
//}

//#include<iostream>
//#define MAX 5
//using namespace std;
//int arr1[MAX];
//int front=-1;
//int rear=-1;
//void enqueue(){
//	int item;
//	if(front==0&&rear==(MAX-1)||(rear!=-1&& front==rear+1)){
//		cout<<"Overflow"<<endl;
//		return;
//	}else{
//		cout<<"Enter item to enqueue ";
//		cin>>item;
//		rear=(rear+1)%MAX;
//		arr1[rear]=item;
//		if(front==-1){
//			front=rear;
//		}
//	}
//}
//void dequeue(){
//	if(front==-1){
//		cout<<"Overflow"<<endl;
//		return;
//	}
//	cout<<"Item dequeue is "<<arr1[front]<<endl;
//	if(front==rear){
//		front=rear=-1;
//	}else{
//		front=(front+1)%MAX;
//	}
//}
//void display(){
//	if(front==-1){
//		cout<<"Queue is empty"<<endl;
//		
//	}
//	if(front<=rear){
//	
//	for(int i=front;i<=rear;i++){
//		cout<<arr1[i]<<" ";
//	}
//	}else{
//		for(int i=front;i<=MAX-1;i++){
//			cout<<arr1[i]<<" ";
//		}
//		for(int i=0;i<=rear;i++){
//			cout<<arr1[i]<<" ";
//		}
//	}
//	cout<<endl;
//}
//int main(){
//	enqueue();
//	enqueue();
//	enqueue();
//	enqueue();
//	display();
//	dequeue();
//	display();
//}


#include<iostream>
#define MAX 5
using namespace std;
int front=-1;
int rear=-1;
int arr1[MAX];
void enqueue(){
	int item;
	if(front==0&&rear==(MAX-1)||(rear!=-1&&front==rear+1)){
		cout<<"Overflow"<<endl;
		return;
		
	}
	cout<<"Enter item to enqueue ";
	cin>>item;
	rear=(rear+1)%MAX;
	arr1[rear]=item;
	if(front==-1){
		front=rear;
	}
}
void dequeue(){
	if(front==-1){
		cout<<"Underflow"<<endl;
		return;
	}
	cout<<"Item dequeue is "<<arr1[front];
	if(front==rear){
		front=rear=-1;
	}else{
		front=(front+1)%MAX;
	}
}
void display(){
		if(front==-1){
		cout<<"Queue is empty"<<endl;
		
	}
	if(front<=rear){
	
	for(int i=front;i<=rear;i++){
		cout<<arr1[i]<<" ";
	}
	}else{
		for(int i=front;i<=MAX-1;i++){
			cout<<arr1[i]<<" ";
		}
		for(int i=0;i<=rear;i++){
			cout<<arr1[i]<<" ";
		}
	}
	cout<<endl;
}
int main(){
	int choice;
	while(true){
		cout<<"\nChoice 1.Enqueue\t2.Dequeue\t3.Display\t4.Exit\n";
		cout<<"Enter your choice ";
		cin>>choice;
		switch(choice){
			case 1:
				enqueue();
				break;
			case 2:
				dequeue();
				break;
			case 3:
				display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nWrong choice\n";
			
		}
	}
	return 0;
}

