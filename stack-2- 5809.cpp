#include<iostream>

using namespace std;

const int MAX_STACK = 5;

struct Stack
{
	int top;
	int data[MAX_STACK];
};

void inisialisasi();
void push(int data);
void pop();
void clear();
bool isEmpty();
bool isFull();
void print();

Stack stack;

int main()
{
	inisialisasi();
	
	int pilihanMenu;
	int data;
	
	do
	{
		cout << ">>> PILIHLAH MENU STACK <<<" << endl;
		cout << "1. Menambah item stack" << endl;
		cout << "2. Menghapus Item stack" << endl;
		cout << "3. Menampilkan item stack" << endl;
		cout << "4. Mengosongka stack" << endl;
		cout << "5. Selesai" << endl << endl;
		
		cout << "Masukkan Pilihan Anda : "; cin >> pilihanMenu;
		cout << endl;
		 
		switch (pilihanMenu)
		{
			case 1:
				push(data);
				break;
				
			case 2:
				pop();
				break;
				
			case 3:
				print ();
				break;
				
			case 4:
				clear ();
				break;
		}	
	} while (pilihanMenu != 5);
	
	cout << endl;
	
	system("pause");
	return 0;
}

void inisialisasi()
{
	stack.top = -1;
}
void push(int data)
{
	if (stack.top < MAX_STACK -1)
	{
		cout << "Menambah Data : "; cin >> data;
		stack.top++;
		stack.data[stack.top] = data;
		cout << "Data Berhasil ditambahkan " << endl << endl;
	}
	else
	{
		cout << "Stack sudah pennuh!!" << endl;
	}
	system ("pause");

}
void pop()
{
	cout << "Data " << stack.data[stack.top] << "sudah dihapus " << endl << endl;
	stack.top--;
}
void clear()
{
	stack.top = -1;
	cout << "Stack sudah di kosongkan" << endl << endl;
}
bool isEmpty()
{
	return (stack.top == -1);
}
bool isFull()
{
	return (stack.top >= (MAX_STACK -1));
}
void print()
{
	if(isEmpty())
	{
		cout << "stack masih kosong" << endl;
	}
	cout << "Isi Stack : " << endl << endl;
	for (int i = stack.top; i >= 0; i--)
	{
		cout << stack.data[i] << endl;
	}
	cout << endl << endl;
}
