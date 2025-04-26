#pragma once

class Animal
{
public:
	//Animal() {}
	Animal() { m_limbs = 0; }
	virtual void Travel();


	int GetLimbs() {return m_limbs; }
	void SetLimbs(int limbs) { m_limbs = limbs; };

protected:
	int m_limbs;

	//m stands for members
	
};
