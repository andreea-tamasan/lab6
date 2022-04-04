//
// Created by Home on 22.03.2022.
//

#ifndef LAB4_REPOSITORY_H
#define LAB4_REPOSITORY_H
#include <vector>
#include "../Square/Square.h"
using namespace std;
class Repo{
private:
    vector<Square> squares;
public:
    /**
     * Constructor
     */
    Repo();

    //Read 1
    /**
     * Gets an entity by values of coordinates
     * @param a,b,c,d - the squares coordinates x1,x2,y1,y2
     * @return the entity
     */
    Square& getSquare(float a,float b,float c ,float d);

    //Read 2
    /**
     * Gets an entity by id
     * @param id - the id of the square
     * @return the entity
     */
    Square& getSquareById(int id);

    //Create
    /**
     * Adds an entity to the repo
     * @param S
     */
    void addSquare(Square S);

    /**
     * gets the length of a side of the square by id
     * @param id - id if the square
     * @return the length of the square
     */
    float getSideById(int id);

    /**
     * verify if a square is in Quadran I
     * @param S - square
     * @return true if S is in Quadran I, false if not
     */
    bool checkIfSquareInQuadranI(Square S);

    /**
     * gets all the squares
     * @return all the squares in the vector
     */
    std::vector<Square> get_all();
};

#endif //LAB4_REPOSITORY_H
