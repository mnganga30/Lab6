

#ifndef TEST_H
#define TEST_H

#include "LinkedListOfInts.h"


class Test {

public:
  Test();
  void RunTests();
  void Test1();
  void Test2();
  void Test3();
  void Test4();
  void Test5to7();
  void Test8();
  void Test9();
  void Test10to12();
  void Test13();
  void Test14();
  void ScorePrint();


private:

float score;
float total =0;
LinkedListOfInts* sample = new LinkedListOfInts();


};
#endif
