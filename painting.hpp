#ifndef _PAINTING_
#define _PAINTING_

class Painting: public Masterpiece {
	private:
		/* 
		 * Painting's length
		 */
		int length;
		/* 
		 * Painting's width
		 */
		int width;
		/* 
		 * Painting's technique (Oil, Aquarelle, Tempera)
		 */
		Technique technique;
	public:
		Painting(int, char *, int, Movement, Condition, int, int, Technique);
		~Painting();
		void getInfo();
		bool evaluate(Movement, Condition);
};

#endif