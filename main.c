#include <stdio.h>

int main(void) {
  int hours,minutes, repeats;
  start :
  printf("Enter the hours : ");
  scanf("%d",&hours);
  printf("Enter the minutes : ");
  scanf("%d",&minutes);
  printf("Enter the repeats ( odd number ) : ");
  scanf("%d",&repeats);
  if (hours<0 || hours >24 || minutes > 59 || minutes < 0 || repeats%2==0 )
    goto start;
  for (int i=0 ; i<(repeats/2) ; i++)
  {
    if(minutes < 30 )
      minutes += 30;
    else if (minutes >= 30)
      minutes-=30;
    if(hours == 0 )
    {
      if(minutes >= 30)
        hours=23;
      continue;
    }
    if (minutes >= 30)
      hours--;
  }
  printf("\n==============\n\n");
  for (int i=0 ; i<repeats ; i++)
  {
    printf("%02d : %02d\n",hours,minutes);
    if( minutes < 30 )
      minutes += 30;
    else if (minutes >= 30)
      minutes-=30;
    if(hours == 23 )
    {
      if(minutes < 30)
        hours=0;
      continue;
    }
    if (minutes < 30)
      hours++; 
  }
  return 0;
}