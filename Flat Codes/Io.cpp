#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

int main(){
int fd;
char buf1[50]="Hello Tridentians";
char buf2[50];
fd =  open("akash.txt",O_RDWR);
printf("%d",fd);
printf("\nFile Have Present The Text %s \n",buf1);
write(fd,buf1,sizeof(buf1));
lseek(fd,0,SEEK_SET);
read(fd,buf2,sizeof(buf2));
printf("\n %s is inserted to the file\n",buf2);
close(fd);
printf("\n");
return 0;
}
