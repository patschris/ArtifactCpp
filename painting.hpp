#ifndef _PAINTING_
#define _PAINTING_

class Painting: public Masterpiece {
	private:
		int length;
		int width;
		Technique technique; //oil, aquarelle, tempera
	public:
		Painting(int, char *, int, Movement, Condition, int, int, Technique);
		~Painting();
		void getInfo();
		bool evaluate(Movement, Condition);
};

#endif