#ifndef __VEC3_H__
#define __VEC3_H__

template <class T>

class vec3 {

private:

	T x;
	T y;
	T z;

public:
	vec3() : x(0), y(0), z(0) {}

	vec3(T _x, T _y, T _z) : x(_x), y(_y), z(_z) {}

	vec3(vec3 &_copy) : x(_copy.x), y(_copy.y), z(_copy.z) {}

	~vec3() {}

	vec3 operator + (const vec3 &aux) const {
		vec3 res;

		res.x = x + aux.x;
		res.y = y + aux.y;
		res.z = z + aux.z;

		cout << res.x << " " << res.y << " " << res.z << " " << endl;

		return res;
	}

	vec3 operator - (const vec3 &aux) const {
		vec3 res;

		res.x = x -= aux.x;
		res.y = y -= aux.y;
		res.z = z -= aux.z;

		cout << res.x << " " << res.y << " " << res.z << " " << endl;

		return res;
	}

	bool operator += (const vec3 &aux) {

		x += aux.x;
		y += aux.y;
		z += aux.z;

		return true;
	}

	bool operator -= (const vec3 &aux) {

		x -= aux.x;
		y -= aux.y;
		z -= aux.z;

		return true;
	}

	bool operator = (const vec3 &aux) {
		x = aux.x;
		y = aux.y;
		z = aux.z;

		return true;
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

		x = 0;
		y = 0;
		z = 0;
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
