#include <stdio.h> 
 int main() {
/*
x take input of units by the user
y total calculated bill of the user
*/
int x; 
float y;
//while is used to implement the code infinitely 
while (1){
printf("Enter monthly consumption units: ");
scanf("%d",&x);
//the input is checked weather it is an positive integer
if(0<x){
         if (x<=30){
                 y=30+(x*2.5);
                   }
        else if (x<=60){
                y=60+(30*2.5+((x-30)*4.85)); 
                       }
       else if(x<=90){
               y=90+7.85*60+(x-60)*10;
                     }
       else if(x<=120){
              y=480+7.85*60+10*30+(x-90)*27.75;
                      }
       else{
          y=540+7.85*60+10*30+30*27.75+60*32+(x-180)*45;
           }
   
//two decimal places are created
printf("the total cost is rs. %.2f\n",y);
      }
else { 
printf("-1\n");
     }
        }
return 0;
          }
            
