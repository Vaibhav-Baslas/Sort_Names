#include <stdio.h>
#include <string.h>
#include <strings.h>

int main(void) {
  int n,i,j,k;
  printf("Enter the number of names\n");
  scanf("%d",&n);
  char names[n][20];
  printf("Enter names starting with Capital first letter\n");
  for(i=0;i<n;i++)
  {
    scanf("%s",names[i]);
  }
  for(i=0;i<n;i++)
  { 
    for(j=0;j<n;j++){
      
        if(strcmp(names[i],names[j])<0){
        char temp[]="";
        strcpy(temp,names[i]);
        strcpy(names[i],names[j]);
        strcpy(names[j],temp);
      }
    }
  }
  printf("The names in ascending order are \n");
  for(i=0;i<n;i++){
    printf("%s\n",names[i]);
  }
  return 0;
}