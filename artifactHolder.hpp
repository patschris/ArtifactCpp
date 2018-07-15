#ifndef _ARTIFACTHOLDER_
#define _ARTIFACTHOLDER_

class ArtifactHolder {
	private:
		int N;
		Condition cond;
		Movement mvmt;
		Artifact **array;
	public:
		ArtifactHolder(int, Movement, Condition);
		~ArtifactHolder();
		void auction();
};

#endif