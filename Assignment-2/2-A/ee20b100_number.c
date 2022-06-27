/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()

{
    int d1,m1,y1,d2,m2,y2,diff_yrs,diff_months,diff_weeks,diff_days;
    printf("Enter the Date1 as : (dd/mm/yyyy)");
    scanf("%d/%d/%d", &d1,&m1,&y1);
    printf("Enter the Date2 as : (dd/mm/yyyy)");
    scanf("%d/%d/%d", &d2,&m2,&y2);
    if(y1>=y2 && m1>=m2 && d1>=d2){
        diff_yrs=y1-y2;
        diff_months=m1-m2;
        diff_weeks=(d1-d2)/7;
        diff_days=(d1-d2)%7;
        printf("differnece between years %d years %d months %d weeks %d days \n",diff_yrs,diff_months,diff_weeks,diff_days);
    }
    else if(y1>=y2 && m1>=m2 && d1<d2){
        diff_yrs=y1-y2;
        diff_months=(m1-m2)-1;
        if (m1 == 3){
            diff_weeks=(28-(d2-d1))/7;
            diff_days=(28-(d2-d1))%7; 
        }
        else if(m1 == 5 || m1 == 7 || m1 == 10 || m1 == 12){
            diff_weeks=(30-(d2-d1))/7;
            diff_days=(30-(d2-d1))%7; 
        }
        else if(m1==2 || m1== 4|| m1==6||  m1 == 8 || m1 == 9|| m1== 11 ){
            diff_weeks=(31-(d2-d1))/7;
            diff_days=(31-(d2-d1))%7;
        }
        else if(m1==1){
            diff_weeks=(31-(d2-d1))/7;
            diff_days=(31-(d2-d1))%7;
            diff_yrs=y1-y2-1;
            diff_months=12-(m2-m1)-1;
        }
        

        printf("differnece between years %d years %d months %d weeks %d days \n",diff_yrs,diff_months,diff_weeks,diff_days);
    }
    else if(y1>=y2 && m1<m2 && d1>=d2){
        diff_yrs=y1-y2;
        diff_months=12-(m1-m2);
        diff_weeks=(d1-d2)/7;
        diff_days=(d1-d2)%7;
        printf("differnece between years %d years %d months %d weeks %d days \n",diff_yrs,diff_months,diff_weeks,diff_days);
    }
    else if(y1>=y2 && m1<m2 && d1<=d2){
        diff_yrs=y1-y2-1;
        diff_months=12-(m1-m2)-1;
        if (m1 == 3){
            diff_weeks=(28-(d2-d1))/7;
            diff_days=(28-(d2-d1))%7; 
        }
        else if(m1 == 5 || m1 == 7 || m1 == 10 || m1 == 12){
            diff_weeks=(30-(d2-d1))/7;
            diff_days=(30-(d2-d1))%7; 
        }
        else if(m1==2 || m1== 4|| m1==6||  m1 == 8 || m1 == 9|| m1== 11 ){
            diff_weeks=(31-(d2-d1))/7;
            diff_days=(31-(d2-d1))%7;
        }
        else if(m1==1){
            diff_weeks=(31-(d2-d1))/7;
            diff_days=(31-(d2-d1))%7;
            diff_yrs=y1-y2-1;
            diff_months=12-(m2-m1)-1;
        }

        printf("differnece between years %d years %d months %d weeks %d days \n",diff_yrs,diff_months,diff_weeks,diff_days);
    }
    else if(y1<=y2 && m1>=m2 && d1>=d2){
        diff_yrs=(y2-y1)-1;
        diff_months=12-(m1-m2)-1;
        if (m1 == 3){
            diff_weeks=(28-(d1-d2))/7;
            diff_days=(28-(d1-d2))%7; 
        }
        else if(m1 == 1 ||m1 == 2|| m1 == 3 || m1 == 5 || m1== 7  || m1 == 10 || m1 == 12){
            diff_weeks=(31-(d1-d2))/7;
            diff_days=(31-(d1-d2))%7; 
        }
        else if(m1== 4|| m1==6 || m1 == 8|| m1 == 9|| m1== 11){
            diff_weeks=(30-(d1-d2))/7;
            diff_days=(30-(d1-d2))%7;
        }
        printf("differnece between years %d years %d months %d weeks %d days \n",diff_yrs,diff_months,diff_weeks,diff_days);
    }
    else if(y1<=y2 && m1>=m2 && d1<d2){
        diff_yrs=(y2-y1)-1;
        diff_months=12-(m1-m2);
        diff_weeks=(d2-d1)/7;
        diff_days=(d2-d1)%7;
        printf("differnece between years %d years %d months %d weeks %d days \n",diff_yrs,diff_months,diff_weeks,diff_days);
    }
    else if(y1<=y2 && m1<m2 && d1>=d2){
        diff_yrs=y2-y1;
        diff_months=(m2-m1)-1;
        if (m2 == 3){
            diff_weeks=(28-(d1-d2))/7;
            diff_days=(28-(d1-d2))%7; 
        }
        else if(m2 == 1 || m2 == 2 || m2 == 5 || m2== 7 ||  m2 == 10 || m2 == 12){
            diff_weeks=(31-(d1-d2))/7;
            diff_days=(31-(d1-d2))%7; 
        }
        else if(m2== 4|| m2==6|| m2 == 8 || m2 == 9|| m2== 11){
            diff_weeks=(30-(d1-d2))/7;
            diff_days=(30-(d1-d2))%7;
        }
        printf("differnece between years %d years %d months %d weeks %d days \n",diff_yrs,diff_months,diff_weeks,diff_days);
    }
    else if(y1<=y2 && m1<m2 && d1<=d2){
        diff_yrs=y2-y1;
        diff_months=m2-m1;
        diff_weeks=(d2-d1)/7;
        diff_days=(d2-d1)%7;
        printf("differnece between years %d years %d months %d weeks %d days \n",diff_yrs,diff_months,diff_weeks,diff_days);
    }
    return 0;
}
