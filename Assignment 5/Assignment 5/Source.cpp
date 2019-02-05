#include <algorithm>
#include<vector>
#include<iostream>
#include<string>
#include<list>
#include<string>

using namespace std;

class Patient
{
private:

public:
	string Name;
	int IDNumber;
	string Priority;
	int TimeLog;
};

bool sortByTime_log(Patient &A, Patient &B)
{
	return (A.TimeLog < B.TimeLog);
}

bool sortyByPriority(Patient &A, Patient &B)
{
	return(A.Priority > B.Priority);
}

int main()
{
	int choice, data,DoctorChoice;

	list<Patient>PList;				//Declare a list called PList
	Patient Person;					//Temporary Storage for Patient
	string Search_Item;
	Patient P;



	list<Patient>::iterator PIt;
	PIt = PList.begin();

	while (1)

	{
		
		cout << "\n1.Add a Patient";
		cout << "\n2.Display All List";
		cout << "\n3.Doctors calling on Patients: ";
		cout << "\nEnter your Choice: ";
		cin >> choice;

		switch (choice)
		{

		case 1:


			for (int i = 0; i < 3; i++)
			{
				cout << "Register Patient " << i + 1 << " - Name  |  ID_No.  |  Priority/Non_Priority  |  Time Log: " << endl;
				cin >> Person.Name >> Person.IDNumber >> Person.Priority >> Person.TimeLog;
				PList.push_back(Person);
			}

			break;

		case 2:

			cout << "\nList Sort By Timelog\n";
			PList.sort(sortByTime_log);
			PIt = PList.begin();

			while (PIt != PList.end())
			{

				cout << (*PIt).Name << " " << (*PIt).IDNumber << " " << (*PIt).Priority << " " << (*PIt).TimeLog << endl;
				PIt++;
			}

			break;

		case 3:

			cout << "\n1.Dr.Lee";
			cout << "\n2.Dr.Strange";
	

			cin >> DoctorChoice;

			switch (DoctorChoice)
			{


			case 1:

				PIt = PList.begin();
				cout << "Doctor Lee is attending to this patients: " << endl;


				P = PList.front();
				cout << P.Name << " " << P.IDNumber << " " << P.Priority << " " << P.TimeLog << endl;
				PList.pop_front();


				P = PList.front();
				PIt = PList.begin();
				cout << "Waiting List on Doctor Lee" << endl;
				while (PIt != PList.end())
				{

					cout << (*PIt).Name << " " << (*PIt).IDNumber << " " << (*PIt).Priority << " " << (*PIt).TimeLog << endl;
					PIt++;
				}

				break;


			case 2:

				PIt = PList.begin();
				cout << "Doctor Strange is attending to this patients: " << endl;


				P = PList.front();
				cout << P.Name << " " << P.IDNumber << " " << P.Priority << " " << P.TimeLog << endl;
				PList.pop_front();


				P = PList.front();
				PIt = PList.begin();
				cout << "Waiting List on Doctor Lee" << endl;
				while (PIt != PList.end())
				{

					cout << (*PIt).Name << " " << (*PIt).IDNumber << " " << (*PIt).Priority << " " << (*PIt).TimeLog << endl;
					PIt++;
				}








				break;


			}			//end of Doctor Choice statment




			break;		//end of case 3 statment

		}				//end of choice switch statment


	}					//end of while loop statment

	return 0;

}















