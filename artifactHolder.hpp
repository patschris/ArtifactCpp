#ifndef _ARTIFACTHOLDER_
#define _ARTIFACTHOLDER_

class ArtifactHolder {
	private:
		/*
		 * Amount of artifacts 
		 */
		int N;
		/*
		 * Artifact's condition for evaluation
		 */
		Condition cond;
		/*
		 * Artifact's movement for evaluation
		 */
		Movement mvmt;
		/*
		 * Array that holds pointers to artifacts
		 */
		Artifact **array;
	public:
		ArtifactHolder(int, Movement, Condition);
		~ArtifactHolder();
		void auction();
};

#endif