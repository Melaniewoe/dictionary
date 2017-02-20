//WoeHW5
//
//

#include <fstream>
#include "dictionary.h"

int main()
{
    ifstream in;      //input file
    in.open("dictionary.txt");   //open dictionary.txt
    string words;             //words type string
    list<dictionary> myList;
    
    while(in >> words)
    {
        dictionary dc;
        dc.setWord(words);
        myList.push_back(dc);
    }
    
    revPrintList(cout, myList);   //print out
    in.close();    //close file
    
    
    
    in.open("findwords.txt");  //to open findwords.txt
    while(in >> words)
    {
        int index = searchForward(myList, words);   //set index equals to searchfrorward
        cout << "searching for " << words << " in the list" << endl;
        if(index == -1)   //if not found
        {
            cout << words << " not found in list" << endl;
            dictionary dc;
            dc.setWord(words);
            myList.push_back(dc);
        }
        else   //if found
        {
            cout << "Made " << index + 1 << " number of searches from the beginning" << endl;
            index = searchBackward(myList, words);   //search backward
            cout << "Made " << index + 1 << " number of searches from the end" << endl;
        }
    }
    
    in.close();  //close file
    revPrintList(cout, myList);
    
    ofstream out;  //outfile
    out.open("revsorted.txt");  //open outfile
    revPrintList(out, myList);    //print out list to outfile
    out.close();    //close outfile
    
    return 0;
}