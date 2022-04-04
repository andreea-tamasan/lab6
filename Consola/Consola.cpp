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
    cout << "3.Determinate the largest square."<<endl;
    cout << "4. Identify if the Square is in quadran I."<<endl;
    cout << "5. Get the longest subarray with equal squares."<<endl;
    cout << "x.Inchideti aplicatie."<<endl;
}

void readValuesForSquare(int &n, Repo& repo) {
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
            Square S(i,a, c, b, d);
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

void getTheLargestSquare(int n,Repo repo,int& id_maxim){
    float maxim = 0.0;
    for(int i=0;i<n;i++)
        if(repo.getSideById(i)>maxim){
            maxim = repo.getSideById(i);
            id_maxim = i;
        }
    cout<<repo.getSquareById(id_maxim);
}

Repo checkIfSquareInQuadranI(int n,Repo repo,int &j){
    Repo repo2;
    j=0;
    for(int i=0;i<n;i++){
        if(repo.checkIfSquareInQuadranI(repo.getSquareById(i))){
            repo2.addSquare(repo.getSquareById(i));
            j++;
        }}
    return repo2;
}

void getLongestSubarrayOfEqualSquares(int n,Repo repo, int &start, int &end){
    start=0;end=0;
    int l=0;
    int k = -1;
    for(int i=0;i<n-1;i++){
        if(repo.getSideById(i) == repo.getSideById(i+1)){
            l++;
            if(l>k)
            {
                k=l;
                start = i-l+1;
                end=i+1;
            }
        }
        else
            l=0;
    }
}


void runMenu(Repo repo){
    int ok=1,n;
    char option;
    while(ok==1)
    {
        Options();

        cout<<"Give option: ";
        cin>>option;
        switch(option)
        {
            case '1':{
                readValuesForSquare(n,repo);
                break;
            }
            case '2': {
                printSquares(n,repo);
                break;
            }
            case '3':{
                int id_maxim =0;
                getTheLargestSquare(n,repo,id_maxim);
                break;
            }
            case '4':{
                int j=0;
                printSquares(j,checkIfSquareInQuadranI(n,repo,j));
                break;
            }
            case '5': {
                int start, end;
                getLongestSubarrayOfEqualSquares(n, repo, start, end);
                for (int i = start; i <= end; i++)
                    cout << "Square " << i << " :" << repo.getSquareById(i) << endl;
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
