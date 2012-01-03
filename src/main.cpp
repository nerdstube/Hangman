#include <iostream>
#include <cstdlib>
#include "hangman.h"

using namespace std;

void clear();
void ending();

int main()
{

    string word;
    int wordlenght, typ;
    cout<<"Bitte gib das Wort ein:"<<endl;
    cin>>word;
    wordlenght=word.size();

    if(wordlenght>=20)
    {
        cout<<"Das Spiel wäre zu schwer! Das Wort hat "<<wordlenght<<" Bustaben"<<endl;
    }else{
    clear();
    if(wordlenght<=5)
     typ=1;
     else
     typ=2;
    }

    switch(typ)
    {
    case 1:
      cout<<"Dein Wort hat "<<wordlenght<< " Bustaben. Du hast 5 Versuche zum lösen!"<<endl;
      break;
    case 2:
      cout<<"Dein Wort hat "<<wordlenght<< " Bustaben. Du hast 7 Versuche zum lösen!"<<endl;
      break;
    }

    ending();
    return 0;
}

void clear()
{
#ifdef WIN32
system("cls");
#else
system("clear");
#endif
}

void ending()
{
#ifdef WIN32
system("stop");
#else
cout<<endl<<endl;
cout<<"HAHA! Ich bin ein Linux ich brauch kein System(\"stop\")";
#endif
}
