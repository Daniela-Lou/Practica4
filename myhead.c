#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
void main() {
	char nombre[100],buf[1],contenido[10000000000000]; 
	int lineas,fd,num;
	printf("Introduce el nombre del archivo: \n");
    	scanf("%s", nombre);

	printf("Introduce el número de líneas: \n");
	scanf("%d", &lineas);
    	
	fd = open(nombre, O_RDONLY);
	if (fd == -1){
		printf("El archivo no existe\n");
	}
	else{
		while(read(fd,buf,1)>0){
			if (buf=="\n") ;}
	}
	close(fd);
	printf("%d", contenido);
}

