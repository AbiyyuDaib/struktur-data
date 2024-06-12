#include <iostream>

using namespace std;

int main()
{
	int jumlah_vertex, jumlah_edge;
	
	cout << " Jumlah Vertex : "; cin >> jumlah_vertex;
	cout << " Jumlah Edge   : "; cin >> jumlah_edge;
	
	int matrix[100][100];
	
	for (int i = 1;i <= jumlah_vertex;i++)
	{
		for(int j=1;j<=jumlah_vertex; j++)
		{
			matrix[1][j]= 0;
		}
	}
	
	for (int i=1; i<=jumlah_edge;i++)
	{
		int sumber, tujuan;
		cout <<"vertex_sumber : "; cin >> sumber;
		cout << "vertex_tujuan : "; cin >> tujuan;
		matrix[sumber][tujuan] = 1;
		matrix[tujuan][sumber] = 1;
	}
	int i = 1;
	bool nolsemua = false;
	bool ketemu;
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
