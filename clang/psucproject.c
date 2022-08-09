#include<stdio.h>
#include<string.h>
struct cricket
{
  char num[15];
  char tnm[10];
  int btruns;
};

int main()
{
  struct cricket player[100];
  int i,n;
  char ch,team[10];
  printf("how many players do you want?\n");
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
    
      printf("\n input name of batsman %d:",i+1);
      scanf("%s",player[i].num);
      printf("\n input team name of the player %d:",i+1);
      
      scanf("%s",player[i].tnm);
      printf("\n input runs of batsman %d:",i+1);
      scanf("%d",&player[i].btruns);
    
      
  }
  printf("\nName  Team   Runs\n");
  for(i=0;i<n;i++){
  printf("\n%s  %s  %d\n",player[i].num,player[i].tnm,player[i].btruns);
  }
  // for(i=0;i<n;i++){
  // print("Input  name of Team you want to see");  
  // scanf("%d",&player[i]);
  // }
  // printf("\nName  Team   Runs\n");
  // for(i=0;i<n;i++){
  // //print("Input  name of Team you want to see");  
  // printf("%d",&player[i]);
  // }

    return 0;
  
}