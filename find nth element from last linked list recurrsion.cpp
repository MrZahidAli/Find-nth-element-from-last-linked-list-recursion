#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
};
class linkedList{
	public:
		node *head, *tail;
		linkedList(){
			head = NULL;
			tail = NULL;
		}
		void creatList(int value){
			node *temp = new node;
			temp -> data = value;
			temp -> next = NULL;
			if(head == NULL){
				head = temp;
				tail = temp;
			}
			else{
				tail -> next = temp;
				tail = temp;
			}
		}
		void searchLink(int value){
			node *temp = head;
			bool flag = false;
			while(temp!=NULL){
				if(temp->data == value){
					cout<<"\nfound element\n"<<value;
					flag = true;
				}
				temp = temp -> next;
			}
			if(flag == false){
				cout<<"\nelement not found\n";
			}
		}
		
		void printList(node* temp){  
		    if(temp == NULL){
		    	return;
		    }      
    		printList(temp->next);
			cout << temp->data << " ";  
    		
		} 
		void searchFromLast(node* temp, int last, int &i, int &d){  
		    i++;
			if(temp == NULL){
		    	return;
		    }
    		searchFromLast(temp->next, last, i, d);
			
		    int e = i - last;
		    d++;
		    if(e==d){
				cout << "\n" << temp->data << " ";	
		    }
    		
		}  

		
};
int main(){
	int i = 0;
	int d = 0;
	linkedList S;
	S.creatList(2);
	S.creatList(4);
	S.creatList(3);
	S.creatList(1);
	S.creatList(5);
	S.creatList(6);
	node *temp = S.head;
	S.printList(temp);
	S.searchFromLast(temp, 6, i, d);
	return 0;
}
