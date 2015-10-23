#include "Triangle.h"

Triangle::Triangle (const Vec3 &v1, const Vec3 &v2, const Vec3 &v3){
	_v1 = new Vec3(v1.getX(), v1.getY(), v1.getZ());
	_v2 = new Vec3(v2.getX(), v2.getY(), v2.getZ());
	_v3 = new Vec3(v3.getX(), v3.getY(), v3.getZ());
}//Fin constructor

Triangle::Triangle (const Triangle &t){
	Vec3 v1 = t.getV1();
	Vec3 v2 = t.getV2();
	Vec3 v3 = t.getV3();

	_v1 = new Vec3(v1.getX(), v1.getY(), v1.getZ());
	_v2 = new Vec3(v2.getX(), v2.getY(), v2.getZ());
	_v3 = new Vec3(v3.getX(), v3.getY(), v3.getZ());
}//Fin constructor copia

Triangle::~Triangle () {
	delete _v1;
	delete _v2;
	delete _v3;
}//Fin destructor
 
Vec3 Triangle::getV1 () const{
	return *_v1;
}//Fin getV1

Vec3 Triangle::getV2 () const{
	return *_v2;
}//Fin getV2

Vec3 Triangle::getV3 () const{
	return *_v3;
}//Fin getV3
 
Triangle& Triangle::operator= (const Triangle &t){
	Vec3 v1 = t.getV1();
	Vec3 v2 = t.getV2();
	Vec3 v3 = t.getV3();

	_v1 = new Vec3(v1.getX(), v1.getY(), v1.getZ());
	_v2 = new Vec3(v2.getX(), v2.getY(), v2.getZ());
	_v3 = new Vec3(v3.getX(), v3.getY(), v3.getZ());

	return *this;
}//Fin operator=