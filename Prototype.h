#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype
{
public:
	Prototype(void);
	virtual ~Prototype(void);
public:
	virtual Prototype* Clone() = 0;
};

#endif

