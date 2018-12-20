/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.cpp
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/


//new implementation
#include "counter.h"
struct CounterImplementation
{
    enum directions direction;
    int value;
    int increment;


};
struct  CounterImplementation counter1 ={UNDEFINED,0,0};
struct  CounterImplementation counter2 ={UNDEFINED,0,0};
struct  CounterImplementation counter3 ={UNDEFINED,0,0};
struct  CounterImplementation counter4 ={UNDEFINED,0,0};
struct  CounterImplementation counter5 ={UNDEFINED,0,0};
struct  CounterImplementation counter6 ={UNDEFINED,0,0};
struct  CounterImplementation counter7 ={UNDEFINED,0,0};
struct  CounterImplementation counter8 ={UNDEFINED,0,0};

Counter count[COUNTER_COUNT] = {&counter1,&counter2,&counter3,&counter4,&counter5,&counter6,&counter7,&counter8};

void init()
{
    for (int i = 0; i < COUNTER_COUNT; i++)
    {
        count[i]->direction = UNDEFINED;
        count[i]->value = 0;
        count[i]->increment = 0;
    }

}
int get_increment_value(Counter c)
{
    return c->increment;

}
Counter new_counter( directions direction )
{
    for (int i = 0; i < COUNTER_COUNT; i++)
  {
    if (count[i]-> increment == 0 )
    {
      count[i]->direction = direction;
      count[i]->increment++;
      return count[i];
    }
  }
  return 0;


}
directions get_direction(Counter c)
{
    return c->direction;

}
void set_direction(Counter c,  directions direction)
{
    c->direction = direction;

}

void set_increment_value(Counter c, int n)
{
    if (n >= 0)
    {
        c->increment = n;
    }



}
int get_value(Counter c)
{
    return c->value;
}
bool set_value(Counter c, int n)
{
    if (c->direction == DOWN) {
        c->value = n;
        return true;
    }
    else
    {
        return false;
    }

}
void increment(Counter c)
{
    if (c->direction != UNDEFINED && c->direction == UP)
    {
        c->value += c->increment;
    }
    else if (c->direction == DOWN)
    {
        c->value -= c->increment;
    }
}
