#include<stdio.h>
#include<math.h>
int main()
{
  int edge;
  float Volume;
  printf("Enter edge of dodecahedron:");
  scanf("%d",&edge);
  Volume=((15+7*sqrt(5))/4)*(edge*edge*edge);
  printf("The volume of Dodecahedron:%.2f",Volume);
    return 0;
}
