#include <iostream>
#include "Vec3.h"
#include "Triangle.h"




int main(){
	int x, y, z;
	int opcion = -1;
	Vec3 v1, v2, v3;


	while(opcion != 2){
		std::cout << "************MENU********\n\n"
				  << "\t1. Crear triángulo\n"
				  << "\t2. Salir\n\n" 
				  << "Opcion: ";
		std::cin >> opcion;

		switch(opcion){
			case 1: {
				for(int i = 1; i <= 3; i++){
					std::cout << "Vértice " << i << std::endl;
					std::cout << "X: ";
					std::cin >> x;
					std::cout << "Y: ";
					std::cin >> y;
					std::cout << "Z: ";
					std::cin >> z;

					switch(i){
						case 1: {
							v1.setX(x); v1.setY(y); v1.setZ(z);
							break;
						}
						case 2: {
							v2.setX(x); v2.setY(y); v2.setZ(z);
							break;
						}
						case 3: {
							v3.setX(x); v3.setY(y); v3.setZ(z);
							break;
						}
					}
				}
				Triangle t1 (v1, v2, v3);
				std::cout << "Triángulo creado..." << std::endl;
				break;
		    }
			case 2: {
				std::cout << "***********EXEC ENDING**********" << std::endl;
				break;
			}
		}
	}

	return 0;
}//Fin main