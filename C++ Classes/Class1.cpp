#include <string>
#include "enumerationClass1.cpp"

using namespace std;

class baseClass1 {

public: 

	int numberOfHydraHeads = 3; 
	string nameOfBasalisk = "Rocko";
	bool cyclopsWillChallengeOddyseus = true;


	virtual void Read(ostream& ostream, istream& istream);

	virtual void Write(ostream& ostream) {
	}
	;

	enumerationClass1 getType();

	

};