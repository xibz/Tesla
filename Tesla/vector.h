#ifndef _VECTOR_H
#define _VECTOR_H
#include "precision.h"
#include <math.h>
namespace Tesla
{
	class Vector2i
	{
		public:
			Vector2i():x(0), y(0){}
			Vector2i(const Int32 x, const Int32 y): x(x), y(y){}
			Real magnitude() { return sqrt(x*x+y*y); }
			void operator*=(const Int32 c)
			{
				x *= c;
				y *= c;
			}
			Vector2i operator*(const Int32 c) { return Vector2i(x*c, y*c); }
			void operator+=(Vector2i& v)
			{
				x+=v.getX();
				y+=v.getY();
			}
			void operator-=(Vector2i& v)
			{
				x-=v.getX();
				y-=v.getY();
			}
			Vector2i operator+(Vector2i v){ return Vector2i(x+v.getX(), y+v.getY()); }
			Vector2i operator-(Vector2i v){ return Vector2i(x-v.getX(), y-v.getY()); }
			Int32 getX() { return x; }
			Int32 getY() { return y; }
		private:
			Int32 x, y;
	};
	
	class Vector2f
	{
		public:
			Vector2f():x(0.0f), y(0.0f){}
			Vector2f(const Real x, const Real y): x(x), y(y){}
			Real magnitude() { return sqrt(x*x+y*y); }
			void operator*=(const Real c)
			{
				x *= c;
				y *= c;
			}
			Vector2f operator*(const Real c) { return Vector2f(x*c, y*c); }
			void operator+=(Vector2f& v)
			{
				x+=v.getX();
				y+=v.getY();
			}
			void operator-=(Vector2f& v)
			{
				x-=v.getX();
				y-=v.getY();
			}
			Vector2f operator+(Vector2f v){ return Vector2f(x+v.getX(), y+v.getY()); }
			Vector2f operator-(Vector2f v){ return Vector2f(x-v.getX(), y-v.getY()); }
			Real getX() { return x; }
			Real getY() { return y; }
		private:
			Real x, y;
	};
	
	class Vector3i
	{
		public:
			Vector3i():x(0), y(0), z(0){}
			Vector3i(const Int32 x, const Int32 y, const Int32 z): x(x), y(y), z(z){}
			Real magnitude() { return sqrt(x*x+y*y+z*z); }
			void operator*=(const Int32 c)
			{
				x *= c;
				y *= c;
				z *= c;
			}
			Vector3i operator*(const Int32 c) { return Vector3i(x*c, y*c, z*c); }
			void operator+=(Vector3i& v)
			{
				x+=v.getX();
				y+=v.getY();
				z+=v.getZ();
			}
			void operator-=(Vector3i& v)
			{
				x-=v.getX();
				y-=v.getY();
				z-=v.getZ();
			}
			Vector3i operator+(Vector3i v){ return Vector3i(x+v.getX(), y+v.getY(), z+v.getZ()); }
			Vector3i operator-(Vector3i v){ return Vector3i(x-v.getX(), y-v.getY(), z-v.getZ()); }
			Int32 getX() { return x; }
			Int32 getY() { return y; }
			Int32 getZ() { return z; }
		private:
			Int32 x, y, z;
	};
	
	class Vector3f
	{
		public:
			Vector3f():x(0.0f), y(0.0f), z(0.0f){}
			Vector3f(const Real x, const Real y, const Real z): x(x), y(y), z(z){}
			Real magnitude() { return sqrt(x*x+y*y+z*z); }
			Vector3f operator*(const Real c) { return Vector3f(x*c, y*c, z*c); }
			void operator+=(Vector3f& v)
			{
				x+=v.getX();
				y+=v.getY();
				z+=v.getZ();
			}
			void operator-=(Vector3f& v)
			{
				x-=v.getX();
				y-=v.getY();
				z-=v.getZ();
			}
			Vector3f operator+(Vector3f v){ return Vector3f(x+v.getX(), y+v.getY(), z+v.getZ()); }
			Vector3f operator-(Vector3f v){ return Vector3f(x-v.getX(), y-v.getY(), z-v.getZ()); }
			Real getX() { return x; }
			Real getY() { return y; }
			Real getZ() { return z; }
		private:
			Real x, y, z;
	};
}
#endif
