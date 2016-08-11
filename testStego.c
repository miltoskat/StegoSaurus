#include <stdio.h>
#include <stdlib.h>
#define KGRN  "\x1B[32m"
#define KWHT  "\x1B[37m"

int main(){
  FILE *g,*pic;
  int c=0,flag=0;
  char oa[1000];
  char ob[1000];
  unsigned int buffer,buffer1;
  printf("\n Please give path of the file: ");
  gets(oa);
  g=fopen(oa,"rb+");
  if(!g){
    printf("\n File not found");
    return -1;
  }else
  printf("\n File successfully opened\n");
  printf("\n Please give the path of the picture: ");
  gets(ob);
  pic=fopen(ob,"rb+");
  if(!pic){
    printf("\n File not found");
    return -1;
  }else
  printf("\n File successfully opened\n");

while(!feof(g)){
  fread(&buffer1,sizeof(char),1,g);
  printf("\n Outer counter print c=%d",c);
  while(!feof(pic) && flag==0){
    c++;
    fread(&buffer,sizeof(char),1,pic);
    if(buffer1==buffer){
      printf("\n Match found");
      printf("\n %sInner counter print %sc=%d",KGRN,KWHT,c);
      flag=0;
    }
  }
  flag=0;
  c=0;
}
printf("\n");
return(0);
}
