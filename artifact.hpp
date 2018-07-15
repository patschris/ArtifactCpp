#ifndef _ARTIFACT_
#define _ARTIFACT_


class Artifact {
	private:
		/* 
		 * Artifact's index
		 */
		int index;
		/* 
		 * Artifact's creator
		 */
		char *creator;
	 	/* 
		 * Artifact's year of creation 
		 */
		int year;
	public:
		Artifact(int, char *, int );
		virtual ~Artifact();
		virtual void getInfo();
		void getIndex();
		virtual bool evaluate (Movement, Condition)=0; /* pure virtual */
};

#endif