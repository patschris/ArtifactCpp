#ifndef _ARTIFACT_
#define _ARTIFACT_


class Artifact {
	private:
		int index;
		char *creator;
		int year;
	public:
		Artifact(int, char *, int );
		virtual ~Artifact();
		virtual void getInfo();
		void getIndex();
		virtual bool evaluate (Movement, Condition)=0;
};

#endif