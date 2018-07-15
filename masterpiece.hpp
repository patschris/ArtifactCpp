#ifndef _MASTERPIECE_
#define _MASTERPIECE_

class Masterpiece: public Artifact {
	private:
		Movement movement; // impressionism, expressionism, naturalism
		Condition condition; // bad, good, excellent
	public:
		Masterpiece(int, char *, int, Movement, Condition);
		virtual ~Masterpiece();
		virtual void getInfo();
		Movement getMove();
		Condition getCond();
		virtual bool evaluate(Movement, Condition)=0;
};

#endif