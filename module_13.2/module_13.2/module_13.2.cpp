#include <iostream>
#include "Tree.h"
#include "Forest.h"

unsigned Tree::idNext = 1;

int main()
{
    Forest forest;

    Tree tree("cherry", "fruit");
    forest.changeID(10);
    Tree tree2("cherry", "fruit");

    tree.print();
    tree2.print();
    
}
