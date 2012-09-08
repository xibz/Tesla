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
		private:
			Real x, y, z;
	};
}
#endif
