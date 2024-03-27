#include <iostream>
#include <conio.h>

using namespace std;

const int MAX_QUEUE = 5;

struct Queue 
{
	int depan;
	int belakang;
	int data[MAX_QUEUE];
};

Queue queue;

void inisialisasi();
void enqueue(int data);
void dequeue();
void clear();
bool isEmpty();
bool isFull();
void print();

int main()
{
inisialisasi();
	
	int pilihanMenu;
	int data;
	
	do
	{
		cout << ">>> PILIHLAH MENU QUEUE <<<" << endl;
		cout << "1. Menambah item Queue" << endl;
		cout << "2. Menghapus Item Queue" << endl;
		cout << "3. Menampilkan item Queue" << endl;
		cout << "4. Mengosongka Queue" << endl;
		cout << "5. Selesai" << endl << endl;
		
		cout << "Masukkan Pilihan Anda : "; cin >> pilihanMenu;
		cout << endl;
		 
		switch (pilihanMenu)
		{
			case 1:
				enqueue(data);
				break;
				
			case 2:
				dequeue();
				break;
				
			case 3:
				print ();
				break;
				
			case 4:
				clear ();
				break;
			case 5:
				continue;
				break;
			default:
				cout << "PILIHAN TIDAK ADA !!!" << endl;
				cout << "Enter untuk kembali !!!" << endl << endl;
				getch();
		}	
	} while (pilihanMenu != 5);
	
	cout << endl;
	
	system("pause");
	return 0;
}

void inisialisasi()
{
	queue.depan = queue.belakang = -1;
}

void enqueue(int data)
{
	if (!isFull())
	{
		
		cout << "Masukkan Data : "; cin >> data;
		queue.depan = 0;
		queue.belakang++;
		queue.data[queue.belakang] = data;
		cout << "Data Berhasil ditambahkan " << endl << endl;
	}
	else
	{
		cout << "Queue sudah pennuh!!" << endl;
	}
	system ("pause");
}

void dequeue()
{
	cout << "DATA " << queue.data[queue.depan] << " SUDAH DIHAPUS" << endl << endl;
	for (int i = queue.depan; i <= queue.belakang; i++)
	{
		queue.data[i] = queue.data[i+1];
	}
	queue.belakang--;
}

void clear()
{
	queue.depan = queue.belakang = -1;
	cout << "Queue sudah dikosongkan" << endl << endl;
}

bool isEmpty()
{
	return (queue.belakang == -1);
}

bool isFull()
{
	return (queue.belakang >= (MAX_QUEUE -1));
}

void print()
{
	if(isEmpty())
	{
		cout << "Queue masih kosong!!!" << endl << endl;
	}
	else 
	{
		cout << "Isi Queue : " << endl << endl;
	for (int i = queue.depan; i <= queue.belakang; i++)
	{
		cout << queue.data[i] << " ";
	}
	cout << endl << endl;
	}
}
