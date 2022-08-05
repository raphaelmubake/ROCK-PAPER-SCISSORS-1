#include "Human.h"
#include <iostream>
using namespace std;


Human::Human( ){

}
char Human::makeMove(){

    char Humanplayer;
  /*  cout << "Rock, Paper and Scissors Game!" << endl;
    cout << "Choose one of the following options"  << endl;
    cout << "(R) for Rock " << endl << "(P) for Paper" << endl << "(S) for Scissors " << endl;
    cin >> Humanplayer;
    
    while (Humanplayer!='R' && Humanplayer!='P' && Humanplayer!='S' )
    {
        cout << "Enter move: " << endl;
        cout << "(R) for rock " << endl << "(P) for paper" << endl << "(S) for scissors " << endl;
        cin >> Humanplayer;
    }
 
    return Humanplayer;

    void Showmove(char option) {
    if (option == 'R') cout << "Rock" << endl;
    if (option == 'P') cout << "Paper" << endl;
    if (option == 'S') cout << "Scissors" << endl;

    } */
    cout<<"Enter move: ";
    cin >> Humanplayer;
    return Humanplayer;
}