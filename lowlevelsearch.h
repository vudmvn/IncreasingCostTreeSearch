#include <iostream>
#include <vector>
#include <string>
#include <iostream>
#include <fstream>

#include "generatePaths.h"

using namespace std;

bool pathsHaveConflict(vector<int> pathA, vector<int> pathB);

void getAtLeastOnePathPerAgentWithoutConflict(vector<Agent> agentList, vector<int> optimalCostList);