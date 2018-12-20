/*-----------------------------------------------------------------------------
*				HTBLA-Leonding / Class: <your class name here>
*-----------------------------------------------------------------------------
* Exercise Number: #exercise_number#
* File:			counter.h
* Author(s):	<your name here>
* Due Date:		#due#
*-----------------------------------------------------------------------------
* Description:
* A counter to count up and count down.
*-----------------------------------------------------------------------------
*/
#ifndef ___COUNTER_H
#define ___COUNTER_H

#define COUNTER_COUNT 8 //deleted ;




typedef struct CounterImplementation* Counter;
enum directions{UP, DOWN, UNDEFINED};

void init();
int get_increment_value(Counter c);
Counter new_counter( directions direction );  //type Datatype for the function + changed the parameters
enum directions get_direction(Counter c);
void set_direction(Counter c,directions direction);  //same

void set_increment_value(Counter c, int n);  // void not int
int get_value(Counter c);
bool set_value(Counter c, int n);  //other type
void increment(Counter c);


#endif
