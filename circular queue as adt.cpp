#include<iostream>
#include<stdlib.h>
#define max 50
using namespace std;

int main(){
	int n,cqueue[max],front,rear,item,i;
	string q;
	do{
	
		cout<<"enter 1 to create empty circular queue"<<endl;
		cout<<"enter 2 to enqueue"<<endl;
		cout<<"enter 3 for dequeue"<<endl;
		cout<<"enter 4 for traversal"<<endl;
		cout<<"enter 5 for exit"<<endl;
		cin>>n;
		
		switch(n){
			case 1:
				front=max-1;
				rear=max-1;
				cout<<"empty circular queue is created."<<endl;
				break;
				
			case 2:
				cout<<"enter the element to enqueue::";
				cin>>item;
				if(front==(rear+1)%max){
					cout<<"queue is overflow"<<endl;
				}else{
					rear=(rear+1)%max;
					cqueue[rear]=item;
				}
				break;
				
			case 3:
				if(rear==front){
					cout<<"circular queue is underflow"<<endl;
				}else{
				
					front=(front+1)%max;
					item=cqueue[front];
				
					cout<<"deleted element is "<<item<<endl;
				}
				break;
				
			case 4:
				if(rear==front){
					cout<<"circular queue is underflow"<<endl;
				}else{
					cout<<"elements in circular queue are::"<<endl;
						for(i=(front+1)%max;i!=rear;i=(i+1)%max){
							cout<<cqueue[i]<<"\t";
					}
					cout<<cqueue[rear];
				}	
				break;
				
			case 5:
				exit(0);
				
			default:
				cout<<"enter the valid case!!"<<endl;
		}
		cout<<"\n";
		cout<<"do u want to continue??";
		cin>>q;
	}while(q=="y");
	return 0;
}
