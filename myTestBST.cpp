// Name: Jade Ainsworth + Lilibeth Hunter
// Class: CS 3305
// Term: Summer 2021
// Instructor: Dr. Haddad
// Assignment: 6

#include "bst.h"
#include "bintree.h"
#include <string>
#include <iostream>

using namespace std;

void ProcessArray(string words[],binary_search_tree<string> &myBST, int length)
{
        int middle = length/2;
        int leftStop = middle;
        int rightStart =middle+1;

        myBST.insert(words[middle]);

        string leftArray[leftStop];
        string rightArray[length-rightStart];
        if(length <= 1)
        {
                myBST.insert(words[middle]);
                return;
        }
        
		//make left array
        for(int i=0; i < leftStop; ++i)
        {
			leftArray[i] = words[i];
		}

		 //make right array
		int j = 0;
		for(int k= rightStart; k<length; ++k)
		{
			rightArray[j] = words[k];
			j++;
        }

		
        ProcessArray(leftArray, myBST, leftStop);
		ProcessArray(rightArray,myBST, length-rightStart);

}

int main(){
	binary_search_tree<string> myBST;
	int word_count=31;
	string words[word_count]={"After","Also","any","back", "because","come","day","even",
        "first","give","how","its","look","most","new", "now",
        "only", "other", "our","over", "than" , "then","these","think",
        "two","us","use","want","way","well","work"};

	//procArray(words, myBST, word_count);
	ProcessArray(words, myBST, word_count);
	print(myBST.get_root(), 0);
	cout<<"Depth is: " << myBST.is_balanced()<<endl;
	
	//removenode
	cout<<endl;
	string newWords = myBST.get_root()->data();
	myBST.remove(newWords);
	print(myBST.get_root(), 0);
	cout<<"Depth is: " << myBST.is_balanced()<<endl;
}
