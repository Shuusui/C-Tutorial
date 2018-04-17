#pragma once

#include <cmath>

namespace C_Tut
{
	namespace Mainframework
	{
		struct Pos
		{
		public:
			int X;
			int Y;

			Pos(int x, int y) : X(x), Y(y) {};
			Pos() :X(1), Y(1) {};



			inline bool operator==(const Pos& pos) const
			{
				return X == pos.X && Y == pos.Y ? true : false;
			}
			inline bool operator!=(const Pos& pos) const
			{
				return X != pos.X || Y != pos.Y ? true : false; 
			}
			inline bool operator<(const Pos& pos) const
			{
				return X < pos.X && Y < pos.Y ? true : false;
			}
			inline bool operator<=(const Pos& pos) const
			{
				return X <= pos.X && Y <= pos.Y ? true : false;
			}
			inline bool operator>(const Pos& pos) const
			{
				return X > pos.X && Y > pos.Y ? true : false; 
			}
			inline bool operator>=(const Pos& pos) const
			{
				return X >= pos.X && Y >= pos.Y ? true : false; 
			}
			inline void operator=(const Pos& pos)
			{
				X = pos.X; 
				Y = pos.Y;
			}
			inline Pos operator+(const Pos& pos) const
			{
				return Pos(X + pos.X, Y + pos.Y);
			}
			inline Pos operator+(const int& value) const
			{
				return Pos(X + value, Y + value);
			}
			inline Pos operator-(const Pos& pos) const
			{
				return Pos(X - pos.X, Y - pos.Y); 
			}
			inline Pos operator-(const int& value) const
			{
				return Pos(X - value, Y - value);
			}
			inline Pos operator*(const Pos& pos) const
			{
				return Pos(X*pos.X, Y*pos.Y);
			}
			inline Pos operator*(const int& value) const
			{
				return Pos(X*value, Y*value);
			}
			inline Pos operator/(const Pos& pos) const
			{
				return Pos(X / pos.X, Y / pos.Y);
			}
			inline Pos operator/(const int& value) const
			{
				return Pos(X / value, Y / value);
			}
			inline void operator+=(const Pos& pos)
			{
				X += pos.X; Y += pos.Y;
			}
			inline void operator+=(const int& value)
			{
				X += value; Y += value;
			}
			inline void operator-=(const Pos& pos)
			{
				X -= pos.X; Y -= pos.Y;
			}
			inline void operator-=(const int& value)
			{
				X -= value; Y -= value;
			}
			inline void operator*=(const Pos& pos)
			{
				X *= pos.X; Y *= pos.Y;
			}
			inline void operator*=(const int& value)
			{
				X *= value; Y *= value;
			}
			inline void operator/=(const Pos& pos)
			{
				X /= pos.X; Y /= pos.Y;
			}
			inline void operator/=(const int& value)
			{
				X /= value; Y /= value;
			}

		};
	}
}