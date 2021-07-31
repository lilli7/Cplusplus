// Name: jade ainsworth + lilibeth hunter
// Class: CS 3305
// Term: Summer 2021
// Instructor: Dr. Haddad
// Assignment: 8

#include <iostream>
#include <string>

using namespace std;

//just returns the probes for the sake of neatness
int sumProbes(int const probes)
{
	return probes;
}

//linear probing
int HF1(int table[][2], int keys[], int size)
{
	int probe = 0;
	//keep track of sum
	int sProbes = 0;
	int h, t;
	for(int i = 0; i < size; i++)
	{
		h = keys[i] % size;
		//spot is empty
		if(table[h][0] == NULL )
		{
			sProbes = sProbes+ probe;
			table[h][0] = keys[i];
			table[h][1]= probe;
		}
		
		else //spot is not empty
		{
			bool found= false;
			int j = h;
			while(!found)
			{
				probe++;
				j++;
				if(j == size)
				{
					j = 0;
				}

				if(table[j][0] == NULL)
				{
					sProbes = sProbes+ probe;
					table[j][0] = keys[i];
					table[j][1]= probe;
					found = true;
				}
			}
			
		}
		probe = 0;
	}
	return sProbes;
}

//quadratic probing
int HF2(int table[][2], int keys[], int size)
{
	int probe = 0;
	int sProbes = 0;
	int h, t;
	for(int i = 0; i < size; i++)
	{
		//find intended spot
		h = keys[i] % size;
		
		//if intended spot is clear
		if(table[h][0] == NULL )
		{
			sProbes = sProbes+ probe;
			table[h][0] = keys[i];
			table[h][1]= probe; //probe=0
		}
		
		else //if inteneded spot has something in it
		{			
			for(int j=1; j<size; j++){
				probe++;
				t = (h + (j*j)) % size; 
				//exit forloop when spot is found
				if(table[t][0] == NULL){
					sProbes = sProbes+ probe;
					table[t][0] = keys[i];
					table[t][1]= probe;
					break;
				}
			}
			
		}
		probe = 0;
	}
	return sProbes;
}


int HF3(int table[][2], int keys[], int size)
{
	int probe = 0;
	int sProbes = 0;
	int h1,h2,spot;
	int j = 0;
	

	for(int i = 0; i < size; i++)
	{
		h1= keys[i] % size;
		h2= 30-keys[i] % 25;
		spot = h1 + j*h2;
		
		if(table[spot][0] == NULL)
		{
			sProbes = sProbes+ probe;
			table[spot][0] = keys[i];
			table[spot][1]= probe; //probe =0
		}
		
		else
		{
			for(int j=1; j<size; j++){
				probe++;
				spot = h1 + j*h2;
				if (spot >= size){
					spot = spot % size;
				}
				if(table[spot][0] == NULL)
				{
					sProbes = sProbes+ probe;
					table[spot][0] = keys[i];
					table[spot][1]= probe;
					break;
				}
				
				if (probe >=49){
					cout <<"Unable to hask key " << keys[i] << " to the table."<<endl;
					cout<< endl;
					cout<< endl;
					break;
				}
			}
			

		}
		probe = 0;
	}
	return sProbes;
}

void printArray(int table[][2],  int size)
{
	for(int i = 0; i < size; i++)
	{
		cout << i << "\t";
		for(int j = 0; j < 2; j++)
		{
			cout << table[i][j] << "\t";
		}
		cout << endl;
	}
}

void menu()
{
	cout<<endl;
	cout<<endl;
	cout << "-------MAIN MENU-------"<<  endl;
	cout << "0- Exit Program" << endl;
	cout << "1- Run  HF1 (Division method with Linear Probing)" << endl;
	cout << "2- RunHF2 (Division method with Quadratic Probing)" << endl;
	cout << "3- Run HF3 (Division method with Double Hashing)" << endl;
	cout<<endl;
	cout<<endl;
}

int main()
{
	int keys[] = {1234, 8234, 7867, 1009, 5438, 4312, 3420, 9487, 5418, 5299,
 5078, 8239, 1208, 5098, 5195, 5329, 4543, 3344, 7698, 5412,
 5567, 5672, 7934, 1254, 6091, 8732, 3095, 1975, 3843, 5589,
 5439, 8907, 4097, 3096, 4310, 5298, 9156, 3895, 6673, 7871,
 5787, 9289, 4553, 7822, 8755, 3398, 6774, 8289, 7665, 5523};

int p1;
int p2;
int p3;
int table[50][2];
int size = 50;

for(int i =0; i < size; i++)
{
	for(int j =0; j < 2; j++)
	{
		table[i][j] = NULL;
	}
}

	int option;
	menu();
	cin >> option;
	cin.ignore();
	while(option !=0)
	{
		switch(option)
		{
			case 1:
				cout << "Hash table resulted from HF1: " << endl;
				cout << endl;
				
				p1= HF1(table, keys, size);
				cout << "Index\tKey\tProbes" << endl;
				cout << "-----------------------------"<<endl;
				printArray(table, size);
				cout << "-----------------------------"<<endl;
				cout << "sum of probes: " << sumProbes(p1) << endl;
				for(int i =0; i < size; i++)
				{
					for(int j =0; j < 2; j++)
						{
							table[i][j] = NULL;
						}
				}

				break;
			
			case 2:
				cout << "Hash table resulted from HF2: " << endl;
				cout << endl;
				p2=HF2(table, keys, size);
				cout << "Index\tKey\tProbes" << endl;
				cout << "-----------------------------"<<endl;
				printArray(table, size);
				cout << "-----------------------------"<<endl;
				cout << "sum of probes: " <<sumProbes(p2) << endl;
				for(int i =0; i < size; i++)
				{
					for(int j =0; j < 2; j++)
						{
							table[i][j] = NULL;
						}
				}
				break;
			
			case 3:
				cout << "Hash table resulted from HF3: " << endl;
				cout << endl;
				p3=HF3(table, keys, size);
				cout << "Index\tKey\tProbes" << endl;
				cout << "-----------------------------"<<endl;
				printArray(table, size);
				cout << "-----------------------------"<<endl;
				cout << "sum of probes: " << sumProbes(p3) << endl;
				for(int i =0; i < size; i++)
				{
					for(int j =0; j < 2; j++)
						{
							table[i][j] = NULL;
						}
				}
				break;
		}
		menu();
		cin >> option;
		cin.ignore();
	}

}