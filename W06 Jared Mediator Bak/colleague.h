#pragma once
//
//  Colleague.h
//  Skeet
//
//  Created by Elyssa Hancock on 5/23/23.
//
#pragma once
#include <vector>
#include <string>
#include "bird.h"
#include "mediator.h"

using namespace std;

class AbstractColleague
{
protected:
   Mediator& mediator;

public:
   AbstractColleague(Mediator& mediator) : mediator(mediator) {}
   virtual void notify(string message) = 0;
   virtual void draw() = 0; // pure virtual function
   virtual void advance() = 0; // pure virtual function

};


class SinkerColleague : public AbstractColleague
{
private:
   Sinker bird;

public:
   SinkerColleague(Sinker newBird) { bird = newBird; };
   void notify(string message) override
   {
      if (message == "move")
         advance();
      if (message == "draw")
         draw();
   }
   void draw() { bird.draw(); }
   void advance() { bird.advance(); }
};

class StandardColleague : public AbstractColleague
{
private:
   Standard bird;

public:
   StandardColleague(Standard newBird) { bird = newBird; };
   void notify(string message) override
   {
      if (message == "move")
         advance();
      if (message == "draw")
         draw();
   }
   void draw() { bird.draw(); }
   void advance() { bird.advance(); }
};

class CrazyColleague : public AbstractColleague
{
private:
   Crazy bird;

public:
   CrazyColleague(Crazy newBird) { bird = newBird; };
   void notify(string message) override

   {
      if (message == "move")
         advance();
      if (message == "draw")
         draw();
   }
   void draw() { bird.draw(); }
   void advance() { bird.advance(); }
};

class FloaterColleague : public AbstractColleague
{
private:
   Floater bird;

public:
   FloaterColleague(Floater newBird) { bird = newBird; };
   void notify(string message) override
   {
      if (message == "move")
         advance();
      if (message == "draw")
         draw();
   }
   void draw() { bird.draw(); }
   void advance() { bird.advance(); }
};