#include <iostream>
#include <cstdlib>
#include "hangman.h"
#include "os.h"

using namespace std;

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
    {
      int count;
      count=wordlenght+3;
      cout<<"Dein Wort hat "<<wordlenght<< " Bustaben. Du hast "<<count<<" Versuche zum lösen!"<<endl;
      Hangman typ;
      typ.setword(word);
      typ.setlaenge(wordlenght);
      typ.settry(count);
      typ.loesen();
    }
      break;
    case 2:
    {
      int count;
      count=wordlenght+5;
      cout<<"Dein Wort hat "<<wordlenght<< " Bustaben. Du hast "<<count<<" Versuche zum lösen!"<<endl;
      Hangman typ;
      typ.setword(word);
      typ.setlaenge(wordlenght);
      typ.settry(count);
      typ.loesen();
    }
      break;
    }

    ending();
    return 0;
}


