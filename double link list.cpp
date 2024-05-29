#include <iostream>

using namespace std;

struct Node
{
	int data;
	Node *next, *prev;
};

Node *head, *tail, *print, *del, *newNode;

bool isEmpty();
void insertNode (int data);
void deleteFromFront();
void printNode();

bool isEmpty()
{
	return head == NULL;
}
void insertNode(int data)
{
	newNode =new Node;
	newNode->data=data;
	newNode->next=NULL;
	newNode->prev=NULL;
	
	if(isEmpty()==1)
	{
		head = newNode;
		head->next=NULL;
		head->prev=NULL;
		tail=head;
	}
	else
	{
		tail->next=newNode;
		newNode->prev= tail;
		tail = newNode;
	}
}
void deleteFromFront()
{
	int simpan;
	if(head!=NULL)
	{
		if(head->next!=NULL)
		{
			del = head;
			simpan = head->data;
			cout << "\n" << simpan<< "telah dihapus" << endl;
			head = head->next;
			head->prev = NULL;
			delete del;
		}
		else
		{
			simpan = head->data;
			cout << "\n" << simpan << "telah dihapus " << endl;
			head = NULL;
		}
	}
	else
	{
		cout << "\n Linked list kosong, pengahpusan tidak dapat di lakukan" << endl;
	}
}
void printNode ()
{
	 print = head;
    if (head != NULL)
    {
        cout << "Isi linked list: ";
        while (print != NULL)
        {
            cout << print->data;
            if (print->next != NULL)
            {
                cout << " <= => ";
            }
            print = print->next;
        }
        cout << endl;
    }
    else
    {
        cout << "\n Tidak ada data dalam linked list" << endl;
    }
}
int main()
{
	int pilihan, data;
	while (true)
	{
	
		cout << "--------------------------------" << endl;
		cout << "DOUBLE LINKED LIST NON CIRCULAR" << endl;
		cout << "--------------------------------" << endl;
		cout << "Menu" << endl;
		cout << "1. Menambah Node" << endl;
	    cout << "2. Menghapus Node dari depan" << endl;
		cout << "3. Menampilkan Semua Node" << endl;
	    cout << "4. Selesai" << endl;
	    cout << "--------------------------------" << endl;
	    
	    cout << endl;
	        
	    cout << "Masukkan Pilihan anda: "; cin >> pilihan;
	    
	    switch (pilihan)
	    {
	    	case 1:
	            cout << "Masukkan data: "; cin >> data;
	            insertNode(data);
	            break;
	        case 2:
	        	deleteFromFront();
	            break;
	        case 3:
	        	printNode();
	        	break;
	        case 4:
	        	return 0;
	        dafault :
	        	cout << "Pilihan tidak valid" << endl; 	
		}
	}
	return 0;
}
