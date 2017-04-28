#ifndef TASK_SET_H
#define TASK_SET_H
#include <iostream>
#include<vector>
#define MAX_TIME 1000
#include <math.h>


class Task_set
{
public:
	int id;
	int period;
	int execution;
	int priority;

    Task_set();
    ~Task_set();

   bool utilization( const std::vector<Task_set> );
   void rms( const std::vector<Task_set>, long int );




};


#endif // TASK_SET_H
