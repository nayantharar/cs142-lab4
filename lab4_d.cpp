//queue from array
//inclue library
#include <iostream>
using namespace std;

//class  
class queue{
	public:
	
	int front,end;
	int arr[20];
	queue(){
		front=0;
		end=-1;
	}
	
	
	//addition of element
	void enqueue(int value){
		arr[++end]=value;
			}
			
			
	//to display
	void display(){
		if(end==-1){cout<<"no elements"<<endl;}
		else{
		//loop from end to reach
		for(int i=end;i>=front;i--){
			cout<<arr[i]<<" ";
		}
		cout<<endl;	}
	}

	void topelement(){
		cout<<"top element is "<<arr[end]<<endl;
	}
	
	
	
	//deletion
	void dequeue(){
		for(int i=front;i<end;i++){
			arr[i]=arr[i+1];
		}
		end=end-1;
	}
	
	
	// size
	void size(){
		cout<<"size = "<<end+1<<endl;
	}
	
	
	//is empty
	bool isempty(){
		if(end==-1)
		{return true;}
		else
		{ return false;}
	}
};

int main(){
	queue q1;
	q1.enqueue(34);
	q1.enqueue(9);
	q1.enqueue(67);
	q1.enqueue(5);
	q1.enqueue(78);
	q1.enqueue(4);
	q1.topelement();
	q1.display();
	q1.size();
	q1.dequeue();
	q1.display();
	q1.isempty();cout<<q1.isempty()<<endl;
}
