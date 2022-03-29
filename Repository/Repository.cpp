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

    //Square &Repo::updateSquare(Square S) {
    //    Square &toUpdate = getSquare(S.get_Length());
    //}

std::vector<Square> Repo::get_all() {
    return squares;
}
//
//void Repo::deleteSquare(Square e) {
//
//}
//
//Square Repo::getBiggestEntity() {
//    return Square();
//}
//
//vector<Square> Repo::getMaxEqualEntitiesSequence() {
//    return vector<Square>();
//}





//Square Repo::getSquare(int id) {
//    return Square();
//}
//
//void Repo::addSquare(Square S) {
//    return this->squares.push_back(S);
//}
//
//Square Repo::getBiggestEntity() {
//    return Square();
//}
//
//vector<Square> Repo::getMaxEqualEntitiesSequence() {
//    return vector<Square>();
//}
//
//Square &Repo::updateEntity(Square S) {
//    return <#initializer#>;
//}
//
//void Repo::deleteEntity(Square e) {
//
//}
