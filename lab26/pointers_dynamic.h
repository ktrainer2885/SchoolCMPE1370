// ***********************************************************************************
// Author:		Rogelio Sergio Ramirez III
// Class:		CSCI/CMPE 1170
// Lab:			Pointers and dynamic memory
// ***********************************************************************************


// -----------------------------------------------------------------------------------
// simple class to hold question/answer pairs and print them with style.

class QA
{
private:
	// private data members
	string question, answer;

public:
	// default constructor
	QA();
	// constructor with initial question value
	QA( string initq );

	// public method to set values
	void SetQuestion( string setq );
	void SetAnswer( string seta );

	// print method
	void Print();
};

QA::QA()
{
	question = "er...";
}

QA::QA( string initq )
{
	question = initq;
}

void QA::SetQuestion( string setq )
{
	question = setq;
}

void QA::SetAnswer( string seta )
{
	answer = seta;
}

void QA::Print()
{
	cout << endl
		 << "=================================================================" << endl;
	cout << "Tell me, oh great one: " << question << endl;
	cout << "..." << endl;
	cout << answer << "!!!" << endl;
	cout << "=================================================================" << endl << endl;
}
