#pragma once

namespace C_Tut
{
	namespace Mainframework
	{
		class Pos
		{
		public:
			int X;
			int Y;

			Pos(int x, int y) : X(x), Y(y) {};

			inline bool operator==(const Pos& pos) const
			{
				return X == pos.X && Y == pos.Y ? true : false;
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