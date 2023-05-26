#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "bird.h"
#include "colleague.h"

using namespace std;
class Mediator
{
protected:
   vector <AbstractColleague*> colleagues;//list of colleagues

public:
   void notify(string message)
   {
      if (message == string("move"))
      {
	      for (AbstractColleague* colleague : colleagues)
         {
            colleague->notify("move");
            colleague->notify("draw");
         }
      }
   }

   void addColleague(AbstractColleague* newCol)
   {
      colleagues.push_back(newCol);
   }

   // This block was changed / added ***************
   // Destructor to delete dynamically allocated colleagues
   ~Mediator()
   {
       for (AbstractColleague* colleague : colleagues)
       {
           delete colleague;
       }
   }
};

