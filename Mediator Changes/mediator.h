#pragma once
#include <iostream>
#include <vector>
#include <string>
#include "bird.h"
#include "colleague.h"

using namespace std;

// This block was changed / added ***************
// Define enum for messages, instead of magic strings
enum class Message {
    MOVE,
    ADVANCE,
    DRAW
};

class Mediator
{
protected:
   vector <AbstractColleague*> colleagues;//list of colleagues

public:
   void notify(string message)
   {
	  // This block was changed / added ***************
      if (message == string("move"))
      {
		 // for (AbstractColleague colleague : colleagues)
		 // This block was changed / added ***************
         for (AbstractColleague* colleague : colleagues)
         {
            colleague.notify(Message::ADVANCE);
            colleague.notify(Message::ADVANCE);
         }
      }
   }

   // void addStandard(StandardColleague newCol)
   // {
   //   colleagues.push_back(newCol);
   // }
   
   // This block was changed / added ***************
   // includees dynamic mem alloc
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

