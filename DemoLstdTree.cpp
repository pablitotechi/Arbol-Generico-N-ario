

#include "LstdTree.h"

int main()
{
    // create a tree of ints
    lstdTreeNode<int> tree(1);
    // add some children
    tree.addChild(2);
    tree.addChild(3);
    // add a child to the 2nd child
    tree.getChildren()[1].addChild(5);
    // add children to the 1st child of the 2nd child
    tree.getChildren()[1].getChildren()[0].addChild(6);
    tree.getChildren()[1].getChildren()[0].addChild(7);
    tree.getChildren()[1].getChildren()[0].getChildren()[0].addChild(8);
    tree.getChildren()[1].getChildren()[0].getChildren()[0].getChildren()[0].addChild(9);
    tree.addChild(4);
    tree.print();
    cout << endl;
    // remove a child
    tree.removeChild(5); 
    // debug print
    tree.print();
    return 0;
} 