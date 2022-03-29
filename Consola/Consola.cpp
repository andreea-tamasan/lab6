//
// Created by Home on 22.03.2022.
//
#include <iostream>
#include "Consola.h"
#include "../Square/Square.h"
#include "../Repository/Repository.h"
#include <vector>

using namespace std;

void Options(){
    cout << endl << "1.Read list of squares."<<endl;
    cout << "2.Show all entities of type Square."<<endl;
    cout << "x.Inchideti aplicatie."<<endl;
}

void readValuesForSquare(int &n,Square v[], Repo& repo) {
    int a, b, c, d, i = 0;
    cout<<"Dati nr. de patrate pe care doriti sa le introduceti: "; cin>>n;
    for (i =0; i < n; i++) {
        cout << "Square " << i << ":" << endl;
        cout << "Coordinates for down left point, x: ";
        cin >> a;
        cout << "Coordinates for up right point, x: ";
        cin >> b;
        cout << "Coordinates for down left point, y: ";
        cin >> c;
        cout << "Coordinates for up right point, y: ";
        cin >> d;
        if(abs(b-a)==abs(d-c) && b>a && d>c){
            Square S(a, c, b, d);
            v[i] = S;
            repo.addSquare(S);
        }
        else
        {
            i--;
            n--;
            cout<<"Square coordinates not good."<<endl;
        }
    }
}

void printSquares(int &n,Repo repo){
    for(auto& S:repo.get_all())
        cout << "Square " << ":" << endl << S << endl;
    }


void runMenu(Square v[]){
    int ok=1,n;
    char option;
    Repo repo;
    while(ok==1)
    {
        Options();

        cout<<"Give option: ";
        cin>>option;
        switch(option)
        {
            case '1':{
                readValuesForSquare(n,v,repo);
                break;
            }
            case '2': {
                printSquares(n,repo);
                break;
            }
            case 'x':
                ok = 0;
                break;
            default:
                cout<<"Try again!"<<endl;
        }
    }
}
