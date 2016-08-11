#include <stdio.h>
#include <stdlib.h>

int main(){
  FILE *g;
  int c1=0,c2=0;
  char oa[1000];
  unsigned int buffer;
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
  if(!feof(g)){
  printf("%02x", buffer);
  c1++;
  c2++;
  if(c1==2){
    c1=0;
    printf(" ");
  }
  if (c2==16){
    c2=0;
    printf("\n");
  }
}
}
printf("\n");
return(0);
}
