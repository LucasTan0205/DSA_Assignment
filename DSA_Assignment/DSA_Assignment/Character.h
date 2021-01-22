#pragma once
class Character
{
	protected:
		int health;

	public:
		Character();
		Character(int);

		void setHealth(int);
		int getHealth();

		void display();

};

