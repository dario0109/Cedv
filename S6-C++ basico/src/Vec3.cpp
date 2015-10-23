#include "Vec3.h"

Vec3::Vec3(){
	_x = 0;
	_y = 0;
	_z = 0;
}

Vec3::Vec3 (int x, int y, int z){
	_x = x;
	_y = y;
	_z = z;
}
Vec3::~Vec3 () {};
 
// Funciones de acceso.
int Vec3::getX () const{
	return _x;
}//Fin getX

int Vec3::getY () const{
	return _y;
}//Fin getY

int Vec3::getZ () const{
	return _z;
}//Fin getZ

//Funciones de modificacion
void Vec3::setX (int x){
	_x = x;
}//Fin setX

void Vec3::setY (int y){
	_y = y;
}//Fin setY

void Vec3::setZ (int z){
	_z = z;
}//Fin setZ
 
// Sobrecarga de operadores.
void Vec3::operator+ (const Vec3 &op){
	_x += op.getX();
	_y += op.getY();
	_z += op.getZ();
}//Fin operator+

void Vec3::operator- (const Vec3 &op){
	_x -= op.getX();
	_y -= op.getY();
	_z -= op.getZ();
}//Fin operator-

