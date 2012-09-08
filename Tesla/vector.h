#ifndef _VECTOR_H
#define _VECTOR_H
#include "precision.h"
#include <math.h>
namespace Tesla
{
	class Vector
	{
		virtual Real magnitude() = 0;
	};
	class Vector2i:Vector
	{
		public:
			Vector2i():x(0), y(0){}
			Vector2i(const uInt32 x, const uInt32 y): x(x), y(y){}
			virtual Real magnitude() { return sqrt(x*x+y*y); }
		private:
			uInt32 x, y;
	};
	
	class Vector2f:Vector
	{
		public:
			Vector2f():x(0.0f), y(0.0f){}
			Vector2f(const Real x, const Real y): x(x), y(y){}
			virtual Real magnitude() { return sqrt(x*x+y*y); }
		private:
			Real x, y;
	};
	
	class Vector3i:Vector
	{
		public:
			Vector3i():x(0), y(0), z(0){}
			Vector3i(const uInt32 x, const uInt32 y, const uInt32 z): x(x), y(y), z(z){}
			virtual Real magnitude() { return sqrt(x*x+y*y+z*z); }
		private:
			uInt32 x, y, z;
	};
	
	class Vector3f:Vector
	{
		public:
			Vector3f():x(0.0f), y(0.0f), z(0.0f){}
			Vector3f(const Real x, const Real y, const Real z): x(x), y(y), z(z){}
			virtual Real magnitude() { return sqrt(x*x+y*y+z*z); }
		private:
			Real x, y, z;
	};
}
#endif
