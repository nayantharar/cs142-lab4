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
     void insertAt(int pos, int value){
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
        int i=1;
        
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


class Queue{
	public:
	node*end;
	node*front;
	LinkedList l1;
	 Queue(){
	 	end=l1.head;
	 	front=l1.tail;
	 	
	 }
	 
	 //adds on the top
	 void enqueue(int value){
	 	//void insertAt(int value,int pos)
	 	l1.insert(value);
	 	//top=new head
	 	end=l1.head;
	 }
	 
	 
	 //removes from the bottom
	 void dequeue(){
	 	//void delet
	 	l1.delet();
	 	//top=new head
	 	front=l1.tail;
	 	}
	 	
	 	
	bool isEmpty(){
		if(end==NULL) return true;
		return false;
	} 	
	 	
	void size(){
	 l1.count();
	
	} 	
	 		
	
	void display(){
	l1.display();
		}
	 
};

int main(){
	Queue q1;
	
	for(int i=0;i<10;i++)
	q1.enqueue(i);
	q1.display();
	q1.size();
	q1.dequeue();
	q1.display();
    q1.size();
	q1.dequeue();
	q1.display();
    q1.size();
		
	return 0;	
}
	 	
	 
	 

