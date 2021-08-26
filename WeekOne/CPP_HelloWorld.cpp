#include <iostream>

int main()
{
    /*
        Part A: the basic practice. Helloworld demo 
    */
    std::cout<<"My first C++ demo on Chromebook"<<std::endl;
    int varA, varB;
    std::cout<<"Please type in two number"<<std::endl;
    std::cin>>varA>>varB;
    std::cout<<"the sum of the two variable is: "<<varB+varA<<" ;"<<std::endl;

    /*
        Part B: The test of some control flow
    */

   int Sum_Total=0;
   int VarC;
   int Count=0;
   while (true)
   {
       /* code */
       std::cout<<"please input a number"<<std::endl;
       if (std::cin>>VarC)
       {
           Sum_Total+=VarC;
           Count+=1;
       }
   }
   std::cout<<"you input "<<Count<<"  numbers. And the sum of the numbers are:"<<Sum_Total<<std::endl;

    return 0;

}