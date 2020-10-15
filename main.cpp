#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <algorithm>
#include "end.h"
#include "setDict.h"
#include "findWord.h"
#include "pullDict.h"
#include "letterDistance.h"
using namespace std;

int main() {
  setDict();
  string str1;
  string str2=findWord(str1);

  pullDict();
  letterDistance(str1,str2);
}