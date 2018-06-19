#pragma once

class Entity
{
	private:
		int id;
		bool collidable;
	public:
		Entity() {}
		~Entity() {}

		Entity(int id, bool collidable)
		{
			this->id = id;
			this->collidable = collidable;
		}
};