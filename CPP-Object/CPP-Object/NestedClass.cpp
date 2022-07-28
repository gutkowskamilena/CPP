class IDCard
{
	
public:
	struct Date
	{
		int date=0, month=0, year=0;
	};
	IDCard(int dayOfBirth, int dayOfIssue)
	{
		birthDate.date = dayOfBirth;
		issueDate.date = dayOfIssue;
		//this->dayOfBirth = dayOfBirth;
		//this->dayOfIssue = dayOfIssue;
	}
	IDCard(Date birthDate, Date issueDate)
	{
		this->birthDate = birthDate;
		this->issueDate = issueDate;
	}
private:
	Date birthDate;
	Date issueDate;
};

void main_nested()
{
	IDCard Milena(16, 2);

	IDCard::Date MariaBirth;
	MariaBirth.date = 16;
	IDCard::Date MariaIssue;
	MariaIssue.date = 2;
	IDCard Maria(MariaBirth, MariaIssue);

}
