#include "LinkedListOfInts.h"
#include "Test.h"

#include <iostream>
using namespace std;

Test::Test()
{
  score=0;
}


void Test::RunTests() {
  Test1();
  Test2();
  Test3();
  Test4();
  Test5to7();
  Test8();
  Test9();
  Test10to12();
  Test13();
  Test14();
  ScorePrint();
}

void Test::Test1()
{
  if (sample->isEmpty())
  {
    score++;
    cout<< "Test1 Passed\t isEmpty returns correct value while list is empty\n";
  }
  else
  {
    cout<< "Test1 Failed \tisEmpty returns incorrect value while list is empty\n";
  }
}


void Test::Test2()
{
  if (sample->size()== 0)
  {
    score++;
    cout<< "Test2 Passed\tStarting value is correct.\n";
  }
  else
  {
    cout<< "Test2 Failed \tStarting value is not Zero.\n";
  }
}
void Test::Test3()
{
  if (!sample->removeBack())
  {
    score++;
    cout<< "Test3 Passed\tTried to removeBack from empty list\n";
  }
  else
  {
    cout<< "Test3 Failed \tTried to removeBack from empty list\n";
  }

}


void Test::Test4()
{
  if (!sample->removeFront())
  {
    score++;
    cout<< "Test4 Passed\tTried to removeFront from empty list\n";
  }
  else
  {
    cout<< "Test4 Failed \tTried to removeFront from empty list\n";
  }
}




void Test::Test5to7()
{
  cout << "--------------Testing addFront-----------------\n";
  for (int j=0; j<=10; j++)
  {
sample-> addFront(j);
std::vector<int> list= sample->toVector();
int i;
for( i=0; i < list.size(); i++)
{
  cout << list[i]<<" ";

}
if(list[0]==(i-1))
{
  score++;
  total++;
  cout <<"\tTest5 Passed: Added value to the list ";
}
else{
  total++;

  cout<< "Test5 Failed: To added value";
}
cout <<"\tSize: "<< sample->size()<< endl;
}


  if (!sample->isEmpty())
{
  total++;
  score++;
  cout<< "\tTest6 Passed:\tisEmpty returns false while the list is not empty\n";
}
else
{
  total++;

  cout<< "\tTest6 Failed:\tisEmpty returns true while the list is not empty\n";
}

if(sample->size() == 11)
{
  total++;

  score++;
  cout<< "\tTest7 Passed:\t Size is incremented corrently \n";
}else{cout << "\tTest7 Failed:\tSize was not incremented correctly\n";}
}



void Test::Test8()
{
  cout << "--------------Testing removeFront-----------------\n";

  for (int j=0; j<=3; j++)
  {
if (sample->removeFront())
{
std::vector<int> list= sample->toVector();

for(int i=0; i < list.size(); i++)
{
  cout << list[i]<<"\t";
  score++;
  total++;
  cout << "Test8 Passed: RemoveFront Success";
}
cout << endl;
}
else
{
  total++;

  cout <<"Test8 Failed: To Remove Item from Front!!\n";
}

}
}



void Test::Test9()
{
  cout << "--------------Testing removeBack-----------------\n";

  for (int j=0; j<=2; j++)
  {
if (sample->removeBack())
{
std::vector<int> list= sample->toVector();

for(int i=0; i < list.size(); i++)
{
  cout << list[i]<<"\t";
  total++;

  cout << "Test9 Passed: RemoveBack Success";
  score++;
}
cout << endl;
}
else
{
  total++;

  cout <<"Test9 Failed: To Remove Item from Back!!\n";
}

}
}




void Test::Test10to12()
{
  cout << "--------------Testing addBack-----------------\n";

  for (int k=0; k<=10; k++)
  {
sample-> addBack(k);
std::vector<int> list= sample->toVector();
int c;
for( c=0; c < list.size(); c++)
{
  cout <<
  list[c]<<" ";

}
if(list[list.size()]==c)
{
  score++;
  total++;

  cout <<"Test10 Passed: Added value to the list correctly";
}
else{
  total++;

  cout<< "Test10 Failed: To added value correctly";
}
cout <<"\tSize: "<< sample->size()<< endl;
}


  if (!sample->isEmpty())
{
  score++;
  total++;

  cout<< "Test11 Passed:\tisEmpty returns false while the list is not empty\n";
}
else
{
  total++;

  cout<< "Test11 Failed:\tisEmpty returns true while the list is not empty\n";
}

if(sample->size() == 22)
{
  score++;
  total++;

  cout<< "Test12 Passed:\t Size is incremented correctly \n";
}else{cout << "Test12 Failed:\tSize was not incremented correctly\n";}
  }




  void Test::Test13()
  {
  cout << "--------------Testing Searching-----------------\n";


    std::vector<int> list= sample->toVector();

for (int l=0; l<list.size()/2; l++)
{
  if (sample->search(list[l]))
  {
    score++;
    total++;

    cout << "Test13 Passed: search function searches correctly.\n";
  }else{
    total++;

    cout << "Test13 Failed: find a value in the list.\n";
  }
}

  }

void Test::Test14()
{
  cout << "--------------Testing destructor-----------------\n";
 try{
  // sample->~LinkedListOfInts();
}
catch(...)
{
  cout << "Failed: to Delete the whole List." ;
}

  if (sample->isEmpty())
{
  score++;
  total++;

  cout<< "\tTest14 Passed:\tisEmpty returns false while the list is not empty\n";
}
else{

total++;

  cout<< "\tTest14 Failed:\tisEmpty returns true while the list is not empty\n";
}

if(sample->size() == 0)
{
  score++;
  total++;

  cout<< "Test15 Passed:\t Size is decremented correctly \n";
}else{cout << "Test15 Failed:\tSize was not decremented correctly\n";}
  }






void Test::ScorePrint()
{
  cout << "--------------All Tests Complete Final Score -----------------\n";
  cout << score << "/" << total << "\t";

  float percent =(score/total)*100;
  cout << percent << "%\n";

}
