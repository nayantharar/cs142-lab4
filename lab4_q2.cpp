//queue from stack
#include<iostream>
#include <iostream>
using namespace std;

class node{
	//type 
    public:
    // Data 
    int data;
    // Pointer to the next Node
    node * next;
    // Construct 
    node(){
        next = NULL;
    }

};

   class LinkedList{
       //type
       public:
       // Head -> Node type ptr
       node * head;
       node * tail;
       // Construct
       LinkedList(){
          head = NULL;
          tail = NULL;
    } 
   
   
   
    // Insert
    void insert(int value){
       // addition of first node
       node * temp = new node; 
       // Insert value in the node
       temp -> data = value;
       // for first node
       if(head == NULL){
            head = temp;
       }
       // for other nodes
       else{
            tail->next = temp;
       }
       tail = temp;
    } 


     //insertAt
     void insertAt( int value,int pos){
        // Reach the place before the pos
        node * current = head;
        int i =1;
        
        while(i < pos-1){
            i++;
            current = current->next;
        }

        // Create a node
        node*temp = new node;
        temp->data = value;

        // pointers moving
        temp->next = current->next;
        current->next = temp;
        
        

    }

    // Deletion of last element
    void delet(){
        // store the tail in temp
        node * temp = tail;
        // before tail has to point to null
        node * current = head;
        while(current->next != tail){
            current = current->next;
        }
        current->next = NULL; 

        // update tail
        tail = current;
        // delete temp
         delete temp;
    }
    
    //count
    void count(){
    	node*current=head;
    	int i=1;
    	while(current!=tail)
    	{
		current=current->next;
    	i++;
		}
		cout<<i<<endl;
	}
        
        
        //deletAt
    
    void deletAt(int pos){
        // Reach the place before the pos
        node * current = head;
        int i =1;
        
        while(i < pos-1){
            i++;
            current = current->next;
        }

        // delet a node
        node*del = current->next;
        current->next=del->next;
        delete del ;
    }

       
        
        // Display
    void display(){
        node * current = head;
        while(current != NULL){
            cout << current->data << "->";
            current = current->next;
        }
        cout << endl;
    }
};


int main(){
    LinkedList l1;
    l1.insert(1);
    l1.insert(2);
    l1.insert(3);
    l1.insert(4);
    l1.display();
    l1.delet();
    l1.display();
    l1.insertAt(1,3);
    l1.display();
    l1.count();
    l1.display();
   l1.deletAt(2);
    l1.display();
    
    return 0;
}

using namespace std;

class stack{
    public:
    node * top;
    LinkedList l1;
    stack(){
        top = NULL;
    }
    // Pushes on top
    void push(int value,int pos){
        // void insertAt(int value, int pos){
        l1.insertAt(value,1);
        //top = new_head;
        top = l1.head ;
    }
    // Pops the top
    void pop(){
        // void deleteAt(int pos){
        l1.deletAt(1);
        //top = new_head;
        top = l1.head;
    }
    bool isEmpty(){
        if(top == NULL) return true;
        return false;
    }
    int size(){
        return l1.count();
    }
    void topDisplay(){
    }
    void display(){
        l1.display();
    }
};





int main(){
    stack s1;

    for(int i = 0; i < 5 ; i++)
        s1.push(i);
    s1.display();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
    s1.pop();
    s1.display();
    */
}
using namespace std;

class queue{
	public:
	int end,front;
	stack s1;
	stack s2;
	queue(){
		front=s1.top+1;
		end=s1.top;
	}
   //add element
	void enqueue(int value){	
		s1.push(value);
	}
	//dequeue
	void dequeue(){
		//create a new stack s2 to store elements of stack s1
		while(s1.top!=-1){
			//s2 stores the value of s1
			s2.push(s1.topelement());
			//the elements delete from s1 
			s1.pop();
		}
		//delete top most element of s2 which we need to remove from queue
		s2.pop();
		//s1 restores the elements from s2
		while(s2.top!=-1){
			s1.push(s2.topelement());
			//delete elements from s2 and s2 becomes empty
			s2.pop();
		}
	}
	//display
	void display(){
		s1.display();
	}
	//is empty
	bool isempty(){
		s1.isempty();
	}
	//size
	void size(){
		s1.size();
	}
	//top element
	void topelement(){
		cout<<"top element is "<<s1.topelement()<<endl;
	}
};

int main(){
	queue q1;
	q1.enqueue(89);
	q1.enqueue(78);
	q1.enqueue(25);
	q1.enqueue(43);
	q1.topelement();
	q1.display();
	q1.isempty();cout<<q1.isempty()<<endl;
	q1.size();
	
	q1.dequeue();
	q1.display();
}
