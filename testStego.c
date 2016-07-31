#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *g;
  char oa[1000];
  unsigned int *buffer;
  printf("\n Please give path of picture: ");
  gets(oa);
  g=fopen(oa,"rb+");
  if(!g){
    printf("\n File not found");
    return -1;
  }else
  printf("\n File successfully opened\n");
while(!feof(g)){
  fread(&buffer,sizeof(char),1,g);
  printf("\n %x", buffer);
}
return(0);
}
