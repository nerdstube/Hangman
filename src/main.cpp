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
      cout<<"Dein Wort hat "<<wordlenght<< " Bustaben. Du hast 5 Versuche zum lösen!"<<endl;
      char bustabe;
      Hangman typ;
      typ.setword(word);
      typ.setlaenge(wordlenght);
      typ.settry(5);

      cout<<"Bitte gib nun dein ersten Bustaben ein: "<<endl;
      cin>>bustabe;
      typ.loesen(bustabe);
    }
      break;
    case 2:
    {
      cout<<"Dein Wort hat "<<wordlenght<< " Bustaben. Du hast 7 Versuche zum lösen!"<<endl;
      Hangman typ;
      typ.setword(word);
      typ.setlaenge(wordlenght);
      typ.settry(7);
      //typ.loesen(bustabe);
    }
      break;
    }

    ending();
    return 0;
}


