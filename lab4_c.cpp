//stack from array
//include library
#include<iostream>
using namespace std;

//define class stack
class stack{
	int top;
	int arr[10];
	stack(){
		top=-1;
	}
//add a new element
int push(int value){
top++;
arr[top]=value;

//pop element

void pop(){
	if (top=-1){}
	else {top=top-1};
}

//is empty
bool isempty(){
	if(top=-1){
		true;
	}
	else{
		false;
	}
}

//display
void display(){
	if(top=-1){
		cout<<"no elements"<<endl;
	}
	else
	int i=top;
		while(i!=-1){
		cout<<arr[i]<<"->";
				i--;
			}
		cout<<"NULL"<<endl;}
		
		
	//top element
	void topelement(){
	cout<<"top element"<<arr[top]<<endl;
	}
	
	//size
	void size(){
		if(top==-1){
		cout<<"size=0"<<endl;}
		else{
			top+1
			}
		cout<<"size="<<top+1<<endl;}
	
};

int main(){
	stack s1;
	s1.push(90);
	s1.push(80);
	s1.push(70);
	s1.push(60);
	s1.push(50);
	s1.push(40);
	s1.isempty();cout<<s1.isempty()<<endl;
	s1.topelement();
	s1.display();
	s1.size();
	s1.pop();
	s1.display();
	s1.size();
	return 0;
}





