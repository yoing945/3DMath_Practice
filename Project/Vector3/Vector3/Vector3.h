#pragma once

class Vector3
{
public:
	float x, y, z;
	
	Vector3(){}
	//copy constructor
	Vector3(const Vector3& a) :x(a.x), y(a.y), z(a.z) {}
	Vector3(float nx, float ny, float nz) :x(nx), y(ny), z(nz) {}

	Vector3& operator = (const Vector3& a);

	bool operator == (const Vector3& a);

	bool operator != (const Vector3& a);

	//置为零向量
	void zero();

	//重载一元 "-"(负号运算符)
	Vector3 operator - ();

	//重载二元+运算符
	Vector3 operator + (const Vector3 &a);

	//重载二元-运算符
	Vector3 operator - (const Vector3 &a);

	//与标量乘法
	Vector3 operator * (const float a);

	//与标量除法
	Vector3 operator / (const float a);

	//自增
	Vector3 &operator += (const Vector3 &a);

	//自减
	Vector3 &operator -= (const Vector3 &a);

	//自乘
	Vector3 &operator *= (const float a);

	//自除
	Vector3 &operator /= (const float a);

	//向量标准化
	void normallize();

	//向量点乘
	float operator *(const Vector3 &a);

};

/*----------------------非成员函数----------------------*/

//求向量模
inline float vectorMag(const Vector3 &a);

//计算两向量的叉乘
inline Vector3 crossProduct(const Vector3 &a, const Vector3 &b);

//标量左乘
inline Vector3 operator * (float k, const Vector3 &a);

//计算两点间距
inline float distance(const Vector3 &a, const Vector3 &b);

/*----------------------非成员函数----------------------*/
//全局零向量
extern const Vector3 kZeroVector;
