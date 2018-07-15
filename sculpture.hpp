#ifndef _SCULPTURE_
#define _SCULPTURE_

class Sculpture: public Masterpiece {
	private:
		int volume;
		Material material; //iron, stone, wood
	public:
		Sculpture(int, char *, int, Movement, Condition, int, Material);
		~Sculpture();
		void getInfo();
		bool evaluate(Movement, Condition);
};

#endif