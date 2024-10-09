#include<stdio.h>
int main()
{
  char Gender,MaritalStatus;
  int Age;
  printf("Enter Marital Status (M/U):");
  scanf("%c",&MaritalStatus);
  printf("Enter Gender(M/F):");
  scanf(" %c",&Gender);
  printf("Enter Age:");
  scanf(" %d",&Age);
  if(MaritalStatus=='M')
  {
      printf("Driver is insured");
  }
  else if(MaritalStatus=='U' && Gender=='M' && Age>=30)
  {
      printf("Driver is insured ");
  }
  else if(MaritalStatus=='U' && Gender=='F' && Age>=25)
  {
      printf("Driver is insured ");
  }
    return 0;
}
