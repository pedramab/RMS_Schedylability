#include "Task_set.h"

Task_set::Task_set()
{
    id=execution=period = 0;

}

Task_set::~Task_set()
{

}

bool Task_set::utilization( const std::vector<Task_set> new_tasks){
    double hyperbolic = ((double)(new_tasks[0].execution) / (double)(new_tasks[0].period) +1);;


    double bound = 0;
   unsigned int i=0;
    for(i=0;i<new_tasks.size();i++)
    {
   bound += (double)(new_tasks[i].execution) / (double)(new_tasks[i].period);
   hyperbolic *= ((double)(new_tasks[i+1].execution) / (double)(new_tasks[i+1].period) +1);

    }



        if (bound >1 ){
            std:: cout << "Utilization bound " << bound << " > 1 :   Tasks Not Schedulable\n";

        return false;

    }
    else if(bound < hyperbolic) {std::cout<< "The task Set is Schedulable" << std::endl ; return true;}
    else { std::cout<<"Should be Checked\n"; return true;}




}






void Task_set::rms( const std::vector<Task_set> new_tasks, long int hyper ) {


bool deadline_miss= false;
unsigned int s = new_tasks.size();
unsigned int time=0;

while(hyper >=time){

        for(int j=0;j<=s;j++)
         {

            if ((new_tasks[j].execution + time) <= (new_tasks[j].period+time)  ){

            std::cout<<"From time: " <<time<<" to : " <<time + new_tasks[j].execution <<"   TASK " << new_tasks[j].id << " is executed \n";
            time += new_tasks[j].execution;
            }
            else{

                time++;
            }


          }
}
}








