#ifndef _MASTERPIECE_
#define _MASTERPIECE_

class Masterpiece: public Artifact {
	private:
		/* 
		 * Masterpiece's movement (Impressionism, Expressionism, Naturalism)
		 */
		Movement movement;
		/* 
		 * Masterpiece's movement (Bad, Good, Excellent)
		 */
		Condition condition;
	public:
		Masterpiece(int, char *, int, Movement, Condition);
		virtual ~Masterpiece();
		virtual void getInfo();
		Movement getMove();
		Condition getCond();
		virtual bool evaluate(Movement, Condition)=0;
};

#endif