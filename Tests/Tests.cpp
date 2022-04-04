//
// Created by Home on 17.03.2022.
//
#include <iostream>
#include "Tests.h"
#include "../Square/Square.h"
#include "../Consola/Consola.h"
#include "../Repository/Repository.h"
#include "assert.h"
#include <math.h>

void test_Constr(){
    Square S;
    assert(S.get_Length() == 0.0);
}

void test_Setter(){
    Square S;
    S.set_coordinates_and_id(1,2,4,3,5);
    assert(S.get_Length()==2.0);
}

void test_Constr_2(){
    Square S(1,2,3,4,5);
    assert(S.get_Length() == 2.0);
}

void test_CalculatePerimeter(){
    Square S;
    S.set_coordinates_and_id(1,2,4,3,5);
    assert(S.calculate_perimeter() == 8.0);
}

void test_calculateArea(){
    Square S;
    S.set_coordinates_and_id(1,2,4,3,5);
    assert(S.calculate_area() == 4.0);
}

void test_Operations(){
    Square S1(1,2,3,4,5);
    Square S2(2,5,6,7,8);
    Square S3(3,1,1,1,1);
    S3=S2;
    assert(S3.get_Length() == 2.0);

    assert(!(S1 == S2));
    assert(S3 == S2);

}
void test_getTheLargestSquare(){
    Square S1(0,1,1,3,3);
    Square S2(1,1,1,4,4);
    Square S3(2,1,1,4,4);
    int m = 3;
    int id_maxim = -1;
    Repo test_repo;
    test_repo.addSquare(S1);
    test_repo.addSquare(S2);
    test_repo.addSquare(S3);
    getTheLargestSquare(m,test_repo,id_maxim);
    assert(id_maxim == 1);
}

void test_checkIfSquareInQuadranI(){
    Square S1(0,1,1,3,3);
    Square S2(1,-1,-1,4,4);
    Square S3(2,1,1,4,4);
    int n=3;
    int j=0;
    Repo test_repo;
    Repo test_repo2;
    test_repo.addSquare(S1);
    test_repo.addSquare(S2);
    test_repo.addSquare(S3);
    test_repo2.addSquare(S1);
    test_repo2.addSquare(S3);
    assert(sizeof(test_repo2)==sizeof(checkIfSquareInQuadranI(n,test_repo,j)));
}

void test_getLongestSubarrayOfEqualSquares(){
    int start,end;
    Square S1(0,1,1,3,3);
    Square S2(1,1,1,4,4);
    Square S3(2,2,1,5,4);
    int n=3;
    Repo test_repo;
    test_repo.addSquare(S1);
    test_repo.addSquare(S2);
    test_repo.addSquare(S3);
    getLongestSubarrayOfEqualSquares(n,test_repo,start,end);
    assert(start == 1);
    assert(end == 2);
}

void Tests(){
    test_Constr();
    test_Setter();
    test_Constr_2();
    test_CalculatePerimeter();
    test_calculateArea();
    test_Operations();
    test_getTheLargestSquare();
    test_checkIfSquareInQuadranI();
    test_getLongestSubarrayOfEqualSquares();
}