#include <stdio.h>
#include <fcntl.h>
 #include <unistd.h>

void main(){
	char arxiu[100];
	int linies;
	printf("Introdueix el nombre de l'arxiu:\n");
	scanf("%s", arxiu);
	printf("Nombre de línies a imprimir:\n");
	scanf("%d", &linies);
      	printf("\n%s, %d", arxiu, linies);

	int fd = open(arxiu, O_RDONLY);
       	if (fd == -1){
		printf("ERROR: L'arxiu no existeix\n");
	}else{
		char buf [1];
		if ((read(fd,buf,1) <=0){
			printf("ERROR: L'arxiu no té paraules");
		}else{
			char sortida []; 
			for (int i =0; i<linies; i++){
				read(fd, buf, 1);
					if (buf[0]=="\n"){
					linies--;

			}
			close(fd);

		}

	}	
}
