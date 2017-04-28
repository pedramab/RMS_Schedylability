#include "EDF.h"

EDF::EDF()
{
    //ctor
}

EDF::~EDF()
{
    //dtor
}

void EDF::edf_calculation(Task_set m[],int  s)
{

//Utilization Bound Check
int i = 0;
double utulization_bound=0;
for(i;i< s *3;i++)
{
    utulization_bound += m[i].execution/m[i].p
}
if (utulization_bound >1) std::cout << "TASK NOT SCHEDULABLE WHILE UTILIZATION BOUND HIGHER THAN 1";

}
