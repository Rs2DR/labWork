class Machine
{
public:
	int money, price;
	double residue{ 0 };
	
	void remainder();
	void credit(int debt);
private:
	double precent{ 0.05 };
};
