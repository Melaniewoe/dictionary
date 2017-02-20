//
//dictionary.cpp
//woeHW5
//class implementation

#include "dictionary.h"


//public
dictionary::dictionary()
{
    word = "";
}


// typedef string wordType;
wordType dictionary::getWord()
{
    return word;
}

void dictionary::setWord(wordType _word)
{
    word = _word;   //word equals to _word
}

bool operator <(const dictionary& first, const dictionary& second)
{
    return first < second;
}

int searchForward(list<dictionary> &wordList,wordType &findString)   //search  list from front to end
{
    int count = 0;
    for(list<dictionary>::iterator n = wordList.begin(); n != wordList.end(); ++n) //forward iterator
    {
        if(n->getWord() == findString)   //if the word is found, the loop ends
        {
            return count;   //return how many searched
        }
        ++count;
    }
    return -1;
}

int searchBackward(list<dictionary> &wordList,wordType &findString)   //search list from back to front
{
    int count = 0;
    for(list<dictionary>::iterator n = wordList.end(); n != wordList.begin();)  //reverse iterator
    {
        --n;
        if(n->getWord() == findString)  //the word is found, the loop ends
        {
            return count;    //return how many searched
        }
        ++count;
    }
    return -1;
}

void revPrintList(ostream& output, list<dictionary> &wordList)   //print out the list
{
    for(list<dictionary>::iterator n = wordList.end(); n != wordList.begin();)  //print each word
    {
        --n;
        output << n->getWord() << " ";
    }
    output << endl;
}

bool comp(dictionary& first, dictionary& second)
{
    return first.getWord() == second.getWord();
}

