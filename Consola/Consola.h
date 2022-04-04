//
// Created by Home on 22.03.2022.
//

#ifndef LAB4_CONSOLA_H
#define LAB4_CONSOLA_H
#include "../Square/Square.h"
#include "../Repository/Repository.h"
/**
 *Options of the program
 */
void Options();
void runMenu(Repo repo);

/**
 * puts the squares in an array
 * @param n - number of squares
 * @param repo - vector of squares
 */
void readValuesForSquare(int &n,Repo& repo);

/**
 * gets the largest square in the array
 * @param n - number of squares
 * @param repo - vector of squares
 * @param id_maxim - id of the square that has the longest side
 */
void getTheLargestSquare(int n,Repo repo,int& id_maxim);

/**
 *
 * @param n - number of squares
 * @param repo - vector of squares
 * @param start - position of start
 * @param end -  position of end
 */
void getLongestSubarrayOfEqualSquares(int n,Repo repo, int &start, int &end);

/**
 * gets a vector of squares that are in quadran I
 * @param n - number of squares
 * @param repo - vector of squares
 * @param j - the number of squares that are in quadran I
 */
Repo checkIfSquareInQuadranI(int n,Repo repo,int &j);
#endif //LAB4_CONSOLA_H
