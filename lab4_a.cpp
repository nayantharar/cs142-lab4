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


class Stack{
	public:
	node*top;
	LinkedList l1: 
	 Stack(){
	 	top=l1.head;
	 	
	 }
	 
	 //pushes on the top
	 void push(int value){
	 	//void insertAt(int value,int pos)
	 	l1.insertAt(value,1);
	 	//top=new head
	 	top=l1.head;
	 }
	 //pops the top
	 void pop(){
	 	//void deleteAT(int pos)
	 	deleteAt(1);
	 	//top=new head
	 	top=l1.head;
	 	}
	bool isEmpty(){
		if(top==NULL) return true;
		returm false;
	} 	
	 	
	int size(){
	return count();
	
	} 	
	 	
	void topDisplay (){
	}	
	
	void display(){
		}
	 
};

int main(){
	Stack s1;
	
	for(int i=0;i<5;i++)
	s1.push(i);
	s1.display();
	s1.pop();
		s1.display();

s1.pop();
		s1.display();
		
		return 0;	
}
	 	
	 
	 

