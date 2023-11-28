#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void main(){
	char arxiu[100], buf[1];
	int linies, fd, num;
	printf("Introdueix el nombre de l'arxiu:\n");
	scanf("%s", arxiu);
	printf("Nombre de línies a imprimir:\n");
	scanf("%d", &linies);
      	//printf("%s, %d\n", arxiu, linies);
	fd = open(arxiu, O_RDONLY); 
	if (fd<0) {
		printf("ERROR: L'arxiu no existeix");
	}else{	
		if (linies<=0){
			printf("Error: Línies igual a zero o negatives");
		}else{
			num=read(fd, buf, 1);
			for (int i =0; i<linies; ){
				if (buf[0]==10){
					i++; 
				}
				write(1,buf,1);
				num=read(fd,buf,1); 
				
			}
		}
	}
	close(fd);	
}
