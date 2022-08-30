#include "StudentPromotor.hpp"

//int main()
//{
//	Promotor promotor;
//	Student dionizy(promotor); // polaczenie student->promotor
//	promotor.setStudent(dionizy); // polaczenie promotor->student
//	return 0;
//}

Promotor* createPromotor()
{
	Student* dionizy = new Student();
	Promotor* promotor = new Promotor(*dionizy);

	dionizy->setPromotor(promotor);
	dionizy->sendEmailToPromotor();

	return promotor;
}

int main()
{
	Promotor* p = createPromotor();
	p->receiveEmail("hello");
	delete p;
	//delete p->getStudent(); brakuje nam metody getStudent()
	return 0;
}

