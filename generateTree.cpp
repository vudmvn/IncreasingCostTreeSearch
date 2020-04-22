#include "generateTree.h"

Node generateRoot(int rootCost, int numberOfAgents) {
    list<int> rootData;
    for (int i = 0; i < numberOfAgents; i++)
    {
        rootData.push_back(rootCost);
    }
    Node root = Node();
    root.data = rootData;
    root.parent = nullptr;
    return root;
}

list<Node> generateNextLevelOfChildren(Node tree) {
    list<Node> children;
    for(int outer = 0; outer < tree.data.size(); ++outer) {
        list<int> childData;
        int inner = 0;
        for (auto parentDataIt = tree.data.begin(); parentDataIt != tree.data.end(); ++parentDataIt)
        {
            if (outer == inner) {
                childData.push_back(*parentDataIt + 1);
            }
            else {
                childData.push_back(*parentDataIt);
            }
            inner++;
        }
        Node childNode = Node();
        childNode.data = childData;
        children.push_back(childNode);
        childNode.parent = &tree;
    }
    return children;
}