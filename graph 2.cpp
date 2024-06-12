#include <iostream>

using namespace std;

int main()
{
	int jumlah_vertex, jumlah_edge, pilihan,bobot;
	
	cout << "Pilih Jenis Graph :" << endl;
	cout << "1. Undirect Graph" << endl;
	cout << "2. Digraph" << endl;
	cout << "3. weight Graph" << endl;
	
	cout << "Masukkan Pilihan : "; cin >> pilihan;
	
	cout << " Jumlah Vertex : "; cin >> jumlah_vertex;
	cout << " Jumlah Edge   : "; cin >> jumlah_edge;
	
	int matrix[100][100];
	int weight[100][100];
	
	for (int i = 1;i <= jumlah_vertex;i++)
	{
		for(int j=1;j<=jumlah_vertex; j++)
		{
			matrix[1][j]= 0;
			weight[1][j]= 0;
		}
	}
	
	for (int i=1; i<=jumlah_edge;i++)
	{
		int sumber, tujuan;
		cout <<"vertex_sumber : "; cin >> sumber;
		cout << "vertex_tujuan : "; cin >> tujuan;
		
		if (pilihan == 3)
		{
			cout << "Bobot : "; cin >> bobot;
		}
		
		matrix[sumber][tujuan] = 1;
		if (pilihan ==1)
		{
			matrix[tujuan][sumber] = 1;
		}
		if (pilihan == 3)
		{
			weight[sumber][tujuan] = bobot;
			if (pilihan == 1)
			{
				weight[tujuan][sumber] = bobot;
			}
		}
	}
	int i = 1;
	bool nolsemua = false;
	bool ketemu = false;
	while (i<= jumlah_vertex && nolsemua == false)
	{
		int j =1 ;
		ketemu = false;
		while (j<=jumlah_vertex && ketemu == false)
		{
			if (matrix[i][j]==1)
			{
				ketemu = true;
			}
			else
			{
				j++;
			}
		}
		if (ketemu == false)
		{
			nolsemua= true;
		}
		else
		{
			i++;
		}
	}
	if(nolsemua==true)
	{
		cout << "graph tidak terhubung";
	}
	else
	{
		cout << "graph terhubung";
	}
	
	return 0;
}
