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
void runMenu(Square v[]);

/**
 * puts the squares in an array
 * @param n - number of squares
 * @param v - list of squares
 */
void readValuesForSquare(int &n,Square v[],Repo& repo);

/**
 * displays the square values in the array
 * @param n - number of squares
 * @param v - array of squares
 */
void readValuesForSquare(int &n, Repo repo);

/**
 * gets the largest square in the array
 * @param n - number of squares
 * @param v - array of squares
 * @param maxim - maxim length of the side of a square in the array
 */
void getTheLargestSquare(int n,Square v[],float &maxim);

/**
 *
 * @param n - number of squares
 * @param f
 * @param start
 * @param end
 */
void getLongestSubarrayOfEqualSquares(int n,Square f[], int &start, int &end);

/**
 *
 * @param n - number of squares
 * @param v - array of squares
 * @param f
 * @param j
 */
void checkIfSquareInQuadranI(int n,Square v[],Square f[],int &j);
#endif //LAB4_CONSOLA_H
