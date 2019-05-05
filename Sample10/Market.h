class Market{
public:

	Market(){}

	Market( int v, double k ){
		ID = v;
		miktar = k;
	}

	int getID(){
		return ID;
	}

	double getMiktar(){
		return miktar;
	}

	void setMiktar(double m)
	{
		miktar=m;
	}
	void setID(int m)
	{
		ID=m;
	}

private:
	int ID;
	double miktar;
};
