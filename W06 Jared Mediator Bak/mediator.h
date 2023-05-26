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
   std::vector <AbstractColleague*> colleagues;//list of colleagues

public:
   void notify(string message)
   {
      if (message == string("move"))
      {
         for (AbstractColleague* colleague : colleagues)
         {
            colleague-colleague.notify("advance");;
         }
      }
   }

   void addColleague(AbstractColleague* newCol)
   {
      colleagues.push_back(newCol);
   }

   // Destructor to delete dynamically allocated colleagues
   ~Mediator()
   {
       for (AbstractColleague* colleague : colleagues)
       {
           delete colleague;
       }
   }

};

