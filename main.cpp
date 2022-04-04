#include <iostream>
#include "Square/Square.h"
#include "Tests/Tests.h"
#include "Consola/Consola.h"
#include "Repository/Repository.h"
#include <vector>
using namespace std;
int main() {
    Tests();
    Repo repo;
    runMenu(repo);
    return 0;
}
