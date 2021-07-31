// Name: Jade Ainsworth + Lilibeth Hunter
// Class: CS 3305
// Term: Summer 2021
// Instructor: Dr. Haddad
// Assignment: 6

#include "bintree.h"
#include "bst.h"
#include <iostream>
#include <string> 
#include <sstream>
#include <cstdlib>

using namespace std;

void removeDup(string w[],binary_search_tree<string> myBST)
{
	for(int i =0; i< sizeof(w); i++)
	{
		for(int j =i+1; j < sizeof(w); j++)
		{
			if(w[i] == w[j])
			{
				myBST.remove(w[j]);
			}
		}
	}

}
void printValue (const string& stringData) { cout << stringData << " ";}

string Begin(string input){
	//cout<< "Enter a line: " << endl;
	//cout << "press space after each word, Enter to finish input" << endl;
	getline(cin,input);
	input += ' '; 
	//the loop was stopping early becuase there usually isnt a space atthe end, this ensures that no matter whatthe user does at the end, there is always a space
	return input;
}

int findSpaces(string input){
	int words = 0;
	for(int i = 0; i < input.size(); i++)
	{
		if(input[i] == ' ')
		{
			words++;
		}
	}
	return words;
}
void CreateTree(string input, binary_search_tree<string> &myBST,string w[]){
	string temp = "";
	int wordCounter=0;
	for(int i = 0; i < input.size(); i++)
	{
		if (input[i] != ' '){
			temp += input[i];
		}
		else{
			w[wordCounter]=temp;
			myBST.insert(w[wordCounter]);
			temp="";
			wordCounter ++;
		}

	}
}

int main()
{

	string input; 
	binary_search_tree<string> myBST;

	input=Begin(input);
	int words= findSpaces(input);
	string w[words];
	CreateTree(input, myBST,w);
	cout <<endl;
	cout <<"original Text:"<<endl;
	cout << input << endl;
	cout <<endl;
	cout <<"Processed Text:"<<endl;
	removeDup(w,myBST);
	inorder(printValue, myBST.get_root());	
	cout <<endl;
	cout <<endl;


	
return 0; 
}