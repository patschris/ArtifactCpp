#ifndef _SCULPTURE_
#define _SCULPTURE_

class Sculpture: public Masterpiece {
	private:
		/* 
		 * Sculpture's volume
		 */
		int volume;
		/* 
		 * Sculpture's material (Iron, Stone, Wood)
		 */
		Material material;
	public:
		Sculpture(int, char *, int, Movement, Condition, int, Material);
		~Sculpture();
		void getInfo();
		bool evaluate(Movement, Condition);
};

#endif