#pragma once
#include <string>
#include <algorithm>
#include "recipes.h"
#include <iostream>

using namespace std;

void displayDirectory(string items[], int itemCount, string categoryName, string& navigate);
void directoryBaseItems(string& navigate);
void directorySingleCrafts(string& navigate);
void directoryMultiCrafts(string& navigate);
void directorySmelts(string& navigate);
void directoryObtainables(string& navigate);