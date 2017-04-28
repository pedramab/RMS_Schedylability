#include <iostream>
#include "Task_set.h"
#include<limits>
#include <string>
#include <vector>
#include <algorithm>

std::vector<Task_set> my_tasks;

bool sort_rms(const Task_set &my_tasks1, const Task_set &my_tasks2) { return my_tasks1.period < my_tasks2.period; }

int hyper_period(const std::vector<Task_set> new_tasks );
int gcd(int a, int b);
long int hyperperiod;

int main()
{

    int x=0;
    std::cout << " Enter The Number of Taks : MAX =1000" << std::endl;
    while (!(std::cin >> x))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Only integer Numbers: \n ";
    }



    std:: cout << "         ID, Execution, Peiod" << std::endl;

    int i=0;

    Task_set task_obj;

    for(i; i < x; i++)
    {
        std::cout << "Taks-" <<i +1 <<"  " ;
        std::cin >> task_obj.id >> task_obj.execution >> task_obj.period ;
        std::cin.ignore();
        my_tasks.push_back(task_obj);
         // std:: cout<< task_obj.execution << task_obj.id <<task_obj.period;


    }





    if ((task_obj.utilization(my_tasks))){

    sort(my_tasks.begin(), my_tasks.end(), sort_rms);
    hyperperiod = hyper_period(my_tasks);
    task_obj.rms(my_tasks,hyperperiod);


        }







    return 0;
}





int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b, a%b);
}


int hyper_period(const std::vector<Task_set> new_tasks ){





    long int lcm = new_tasks[0].period;
    int s= new_tasks.size();

    for (int i=1; i<s; i++)
        lcm = ( ((new_tasks[0].period*lcm)) / (gcd(new_tasks[0].period, lcm)) );


return lcm;
}

