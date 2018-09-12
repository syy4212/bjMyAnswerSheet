#include <stdio.h>
 
int main(void)
{
    int m, d, t, day;
    t=0;
 
    day = 7;
 
    scanf("%d %d", &m, &d);
 
    switch(m) {
        case 1:
            t +=d;
                break;
        case 2:
            t = t+31+d;
                break;
        case 3:
            t = t+59+d;
                break;
        case 4:
            t = t+90+d;
                break;
        case 5:
            t = t+120+d;
                break;
        case 6:
            t = t+151+d;
                break;
        case 7:
            t = t+181+d;
                break;
        case 8:
            t = t+212+d;
                break;
        case 9:
            t = t+243+d;
                break;
        case 10:
            t = t+273+d;
                break;
        case 11:
            t = t+304+d;
                break;
        case 12:
            t = t+334+d;
                break;
        default:
            break; }
                if(t%day==1)
                    printf("MON \n");
                if(t%day==2)
                    printf("TUE \n");
                if(t%day==3)
                    printf("WED \n");
                if(t%day==4)
                    printf("THU \n");
                if(t%day==5)
                    printf("FRI \n");
                if(t%day==6)
                    printf("SAT \n");
                if(t%day==0)
                    printf("SUN \n");
 
    return 0;
}