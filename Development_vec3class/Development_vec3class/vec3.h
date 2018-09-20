#ifndef __VEC3_H__
#define __VEC3_H__

template <class TYPE>

class vec3 {

public:

	TYPE x, y, z;


	vec3() {}

	vec3(const TYPE &x, const TYPE &y, const TYPE &z) : x(x), y(y), z(z) {}

	vec3(const vec3 &to_copy) : x(to_copy.x), y(to_copy.y), z(to_copy.z) {}


	vec3 operator + (const vec3 &vec) const {
		return vec3(x + vec.x, y + vec.y, z + vec.z);
	}

	vec3 operator - (const vec3 &vec) const {
		return vec3(x - vec.x, y - vec.y, z - vec.z)
	}

	vec3 operator += (const vec3 &vec) {

		x += vec.x;
		y += vec.y;
		z += vec.z;

		return *this;
	}

	vec3 operator -= (const vec3 &vec) {

		x -= vec.x;
		y -= vec.y;
		z -= vec.z;

		return *this;
	}

	vec3 operator = (const vec3 &vec) {
		x = vec.x;
		y = vec.y;
		z = vec.z;

		return *this;
	}

	bool operator == (const vec3 &vec) const {
		return x == vec.x && y == vec.y && z == vec.z;
	}


	void normalize() {

		x = x / sqrt(x*x + y*y + z*z);
		y = y / sqrt(x*x + y*y + z*z);
		z = z / sqrt(x*x + y*y + z*z);

	}

	void zero() {

		x = y = z = (TYPE)0;
	}

	bool is_zero() const {

		return x == (TYPE)0 && y == (TYPE)0 && z == (TYPE)0;
	}

	TYPE distance_to(const vec3 &vec) const {

		TYPE a = (x - vec.x)*(x - vec.x);
		TYPE b = (y - vec.y)*(y - vec.y);
		TYPE c = (z - vec.z)*(z - vec.z);

		return sqrt(a+b+c);
	}

	TYPE distance_to_squared(const vec3 &vec) const {

		TYPE a = (x - vec.x)*(x - vec.x);
		TYPE b = (y - vec.y)*(y - vec.y);
		TYPE c = (z - vec.z)*(z - vec.z);

		ret(a + b + c);
	}

};



#endif
