#ifndef TYPE_H
#define TYPE_H

class Type {
private:
	
public:
	Type(){};
	virtual ~Type() = 0;
	//virtual bool isValid(char *value) = 0;
	virtual void setValue(char *email) = 0;
	virtual const char *getValue() = 0;
};

#endif