#include<stdio.h>
#include<math.h>
int main(void)
{
//function type : user defined ,library or bulid-in function

//user defined are those fun which is user defined on his requirement
 
//built- in fun are those fun which are already defined

//square root funtion defined in math.h

printf("the square is 25 =%f\n",sqrt(25));

//power fun defined in math.h 
//first base then power 
printf(" the fifth power of 2 is =%f\n",pow(2,5));

//common log  function :defined inn math.h
printf("the common log of 1900 is = %f\n",log10(1900));

//natural lg fun defined in math.h
printf("the natural of 20 is =%f \n",log(20));

//lograthmic fun :allof them are defined in math.h      //    sin ,cos,tan,sec,cosec,cot 
printf("the tan 45 radian is =%f degree \n",tan(45));   //trignometic fun
printf("the sin of 45 rad is = %f degree\n ",asin(1));   //trignimetic inverse 


// aswer of relational operater always 0 and 1  : relatioanl perater (==   !=    <  >  <=    >=)
return 0; 
}
