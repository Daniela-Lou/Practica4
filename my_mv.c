#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

void main(){
	char nom[100], nou[100], buf[1];
	int fd, desc; 

	printf("Introdueix el nom de l'arxiu:\n"); 
	scanf("%s", nom); 
	printf("Nou nom/ nou lloc:\n"); 
	scanf("%s", nou); 

	//printf("%s, %s\n", nom, lloc); 
	fd = open(nom, O_RDONLY);

	if (fd<0){
		printf("ERROR: L'arxiu no existeix"); 
	}else{
		desc = open(nou, O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU); 
		if (desc<0) {
			printf("ERROR: No s'ha pogut crear"); 
		}else{
			while ((read(fd,buf,1)) >0){
				write(desc,buf,1);
			} 
		close(desc);
		}
		unlink(nom); 
	}
}
