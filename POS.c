//created by A3 
19.9.2022//

#include<stdio.h>
#include<stdlib.h>
 int main(){

     int choice=0;
     int id=0;
     int UserName=0;
     int Password=0;
     int Amount=0;
     int Age=0;
     int Location=0;

     printf("Id\t\tUserName\t\tPassword\t\tAmount\t\tAge\t\tLocation\n\n");
     printf("111\t\tKgly\t\t\t2028\t\t\t1500\t\t28\t\tMaymyo\n");
     printf("112\t\tLindar\t\t\t2011\t\t\t2500\t\t27\t\tKalaw\n");
     printf("113\t\tOlivia\t\t\t2022\t\t\t3000\t\t26\t\tAungpan\n");
     printf("114\t\tVenessa\t\t\t2033\t\t\t3500\t\t25\t\tPinlaung\n");
     printf("115\t\tEmily\t\t\t2044\t\t\t4000\t\t24\t\tTaungGyi\n");
     printf("116\t\tYumi\t\t\t2055\t\t\t3000\t\t23\t\tHehoe\n");
     printf("117\t\tOzey\t\t\t2066\t\t\t2000\t\t22\t\tYangon\n");
     printf("118\t\tUranus\t\t\t2077\t\t\t4500\t\t25\t\tPathein\n");
     printf("119\t\tCupitar\t\t\t2088\t\t\t4000\t\t25\t\tShweBo\n");
     printf("120\t\tKgmaly\t\t\t2099\t\t\t3000\t\t27\t\tHinthada\n");
     printf("You need to choose\n");
     printf("Press 1 to InsertData||Press 2 to FindData||Press 3 to Update(reload)\n");
if(choice<1 || choice>3){

        printf("Invalid");
     }
     else if(choice==1)
        {
        printf("Please enter your id");
        scanf("%d",&id);
        printf("Please enter Username");
        scanf("%c",&UserName);
        printf("Please enter Password");
        scanf("%d",&Password);
        printf("Please enter Amount");
        scanf("%d",&Amount);
        printf("Please enter Age");
        scanf("%d",&Age);
        printf("Please enter Location");
        scanf("%c",&Location);


     }
     else if(choice==2)
        {
        printf("Please enter UserName");
        scanf("%c",UserName);

     }




 return 0;
 }
