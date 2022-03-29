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

    //Read
    /**
     * Gets an entity by id
     * @param id - the entity id
     * @return the entity
     */
    Square& getSquare(float a,float b,float c ,float d);

    //Create
    /**
     * Adds an entity to the repo
     * @param S
     */
    void addSquare(Square S);

    //Update
    /**
     * Updates an entity in the repo
     * @param e
     */
    Square& updateSquare(Square S);

    //Delete
    /**
     * Deletes an entity from the repo
     * @param e
     */
    void deleteSquare(Square e);

    /**
     * Returns the biggest entity from the repo
     * Compares entities using operator==
     * @return the biggest entity
     */
    Square getBiggestEntity();

    /**
     * Returns the maximal sequence of equal entities
     * Assumes entities are ordered by ID
     * @return a vector of equal entities
     */
    vector<Square> getMaxEqualEntitiesSequence();

    std::vector<Square> get_all();
};

#endif //LAB4_REPOSITORY_H
