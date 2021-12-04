//
//  Character.cpp
//  test 1
//
//  Created by Pedro Matos on 15/11/2021.


#include "Character.hpp"
#include <iostream>
#include <string>
#include <math.h>
#include <fstream>
using namespace std;
    

int hp;
int level;
int attack;
int stamina;
int intelligence;
int xp;
string playerName;
int loop = 1;

int playerCreation(){

    
//    Para ler
    ifstream inFile;
//    Para escrever
    ofstream createcharacter("character.txt");
    
//    nome da personagem
    string playerName;


//    Eliminar mais tarde
    if(createcharacter.is_open()) {

        cout << "The file character.txt is open!" << endl;

    } else {

        cout << "The file character-txt is NOT open!" << endl;

    }
    
//    criar a personagem
    while((loop !=0)) {
        
        cout<<"Name!"<<endl;
        cin>>playerName;
        
        
        
        
        cout << "Please enter 0 if you want to begin the game. Enter 1 if you want to start again with the character creation" << endl;
        cin >> loop;
    }
    
    
    createcharacter.close();
    
    return 0;
}
