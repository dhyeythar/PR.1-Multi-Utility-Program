#include <stdio.h>

int main() {
    int a = 0;
    printf("1. Temperature Converter\n");
    printf("2. Gross Salary Calculator\n");
    printf("3. Triangle Angle Finder\n");
    printf("4. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&a);
    
while (a != 4){
    switch (a) {
        
        case 1:
            float c,f;
            
            printf("Enter Temperature in celcius :- ");
            scanf("%f",&c);
            
            f = ((9.0/5.0) * c) + 32;
            
            printf("Temperature in Fahranheit :- %.3f\n\n",f);
            
            break;
            
        case 2:
            int sal;
            float hra,da,ta;
            
            printf("Enter Base Salary :- ");
            scanf("%d",&sal);
            
            printf("Enter HRA percentage :- ");
            scanf("%f",&hra);
            
            printf("Enter DA percentage :- ");
            scanf("%f",&da);
            
            printf("Enter TA percentage :- ");
            scanf("%f",&ta);
            
            float gs = 0.0;
            
            gs = sal + (sal * (hra/100.0)) + (sal * (da/100.0)) + (sal * (ta/100.0));
            
            printf("Gross Salary = %.3f\n\n",gs);
            
            break;
            
        case 3:
            
            float a1,a2,a3;
            
            printf("Enter First Angle :- ");
            scanf("%f",&a1);
                        
            printf("Enter Second Angle :- ");
            scanf("%f",&a2);
            
            while ((a1 + a2) >= 180){
                printf("Invalid Angles !!! \n\n");
                printf("Enter First Angle :- ");
                scanf("%f",&a1);
                                
                printf("Enter Second Angle :- ");
                scanf("%f",&a2);
            }
            
            
            a3 = 180 - (a1 + a2);
            
            printf("Third Angle :- %.2f\n\n",a3);
            
            break;
            
        default:
            printf("Invalid Choice !!! \n\n");
            break;
            
    }
    printf("1. Temperature Converter\n");
    printf("2. Gross Salary Calculator\n");
    printf("3. Triangle Angle Finder\n");
    printf("4. Exit\n");
    printf("Enter your choice :- ");
    
    scanf("%d",&a);
}

    return 0;
}