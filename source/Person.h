#pragma once
#include "GameObject.h"

namespace OT {
	namespace Item { class Item; }
	
	class Person : public GameObject
	{
	public:
		Person(Game * game) : GameObject(game) {}
		
		Item::Item * at;
	};
}