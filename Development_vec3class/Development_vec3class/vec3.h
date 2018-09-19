#ifndef __VEC3_H__
#define __VEC3_H__

template <class T>

class vec3 {

public:

	T x, y, z;


	vec3() {}

	vec3(const T x, const T y, const T z) : this->x(x), this->y(y), this->z(z) {}

	vec3(const vec3 &copy) : x(copy.x), y(copy.y), z(copy.z) {}


	vec3 operator + (const vec3 &aux) const {
		return vec3(x + aux.x, y + aux.y, z + aux.z);
	}

	vec3 operator - (const vec3 &aux) const {
		return vec3(x - aux.x, y - aux.y, z - aux.z)
	}

	vec3 operator += (const vec3 &aux) {

		x += aux.x;
		y += aux.y;
		z += aux.z;

		return *this;
	}

	vec3 operator -= (const vec3 &aux) {

		x -= aux.x;
		y -= aux.y;
		z -= aux.z;

		return *this;
	}

	vec3 operator = (const vec3 &aux) {
		x = aux.x;
		y = aux.y;
		z = aux.z;

		return *this;
	}

	bool operator == (const vec3 &aux) const {
		return x == aux.x && y == aux.y && z == aux.z;
	}

	T length() const {
		return sqrt(x*x + y*y + z*z);
	}

	void normalize() {

		x = x / length();
		y = y / length();
		z = z / length();

	}

	void zero() {

		x = 0.0f;
		y = 0.0f;
		z = 0.0f;
	}

	bool is_zero() const {

		return x == 0 && y == 0 && z == 0;
	}

	T distance_to(const vec3 &aux) const {

		return sqrt((x - aux.x)*(x - aux.x) + (y - aux.y)*(y - aux.y) + (z - aux.z)*(z - aux.z));
	}

	void printvec() const {
		cout << x << " " << y << "  " << z << endl;
	}

};



#endif
