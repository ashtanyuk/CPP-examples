/* cpp-examples by A.A.Shtanyuk */
/* mymap.h - The definition of the MyMap template */

template<class Key,class Value>
class MyMap
{
public:
	MyMap(int size):msize(size),pos(0)
	{
		keys=new Key[msize];
		values=new Value[msize];
	}
	~MyMap()
	{
		delete[] keys;
		delete[] values;
	}
	MyMap():keys(0),pos(0),values(0),msize(0)
	{}
	bool push_pair(Key k,Value v)
	{
		if(pos>=msize)
			return false;
		keys[pos]=k;
		values[pos++]=v;
	}
	Value get_value(Key k)
	{
		for(int i=0;i<pos;i++)
			if(keys[i]==k)
				return values[i];
		return Value();
	}
private:
	Key *keys;
	Value *values;
	int msize;
	int pos;
};

