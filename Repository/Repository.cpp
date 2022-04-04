//
// Created by Home on 22.03.2022.
//
#include "Repository.h"
#include "../Square/Square.h"

Repo::Repo() {
    this->squares = vector<Square>();
}

Square& Repo::getSquare(float a,float b,float c ,float d) {
    for (Square &S: squares)
        if (S.get_x1() == a && S.get_x2()==b && S.get_y1() == c && S.get_y2()==d)
            return S;
    throw std::runtime_error("No entity with specified coordinates found");
}


    void Repo::addSquare(Square S) {
        this->squares.push_back(S);
    }

std::vector<Square> Repo::get_all() {
    return squares;
}

Square &Repo::getSquareById(int id) {
    for (Square &S: squares)
        if (S.get_id() == id)
            return S;
    throw std::runtime_error("No entity with specified coordinates found");
}

float Repo::getSideById(int id) {
    for(Square S: squares)
        if (S.get_id() == id)
        {
        return S.get_Length();}}

bool Repo::checkIfSquareInQuadranI(Square S) {
    if(S.get_x1()>0 && S.get_y1()>0)
        return true;
    return false;
}


