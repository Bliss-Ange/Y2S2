////#include <iostream>
////#include <string>
////#include <vector>
////#include<iomanip>
////#include <fstream>
////using namespace std;
////
////static int index = 0; //declare the objects are created
////static int ID = 1;
////
////class tutor {
////private:
////	int tid[500];
////	string name[500];
////	string dj[500];
////	string dt[500];
////	int hr[500];
////	int ph[500];
////	string address[500];
////	string tcc[500];
////	string tcn[500];
////	string sc[500];
////	string sn[500];
////	int r[500];
////
////public:
////	void add() {
////		system("cls"); //directly sent to the command prompt of Windows //claer screen
////
////		a:
////		cout << "Tutor ID: ";
////		cout << ID << endl;
////		tid[index] = ID;
////		ID++;
////		fflush(stdin); //to clean the last output buffer and move it to console. 
////
////		cout << "Enter Tutor Name: ";
////		cin.ignore();
////		getline(cin, name[index]);
////		fflush(stdin);
////
////		dateJ:
////		int d, m, y;
////		char s;
////		cout << "Enter Data Joined (DD/MM/YYYY): ";
////		cin >> d >> s >> m >> s >> y;
////		cin.clear(); //to clear the non related stuff
////		cin.ignore(); //then ignore
////		//if the format is wrong
////		if (cin.fail()) {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			goto dateJ;
////		}
////		else if (s != '/') {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			goto dateJ;
////		}
////		else if (d > 31 || d == 0 || m > 12 || m == 0 || y < 2015 || y == 0) {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			goto dateJ;
////		}
////		else {
////			dj[index] = to_string(d) + "/" + to_string(m) + "/" + to_string(y);
////			fflush(stdin);
////		}
////
////		dateT:
////		cout << "Enter Date of Termintion (DD/MM/YYYY): ";
////		cin >> d >> s >> m >> s >> y;
////		cin.clear();
////		cin.ignore();
////		if (cin.fail()) {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			goto dateT;
////		}
////		else if (s != '/') {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			goto dateT;
////		}
////		else if (d > 31 || d == 0 || m > 12 || m == 0 || y < 2015 || y == 0) {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			goto dateT;
////		}
////		else {
////			dt[index] = to_string(d) + "/" + to_string(m) + "/" + to_string(y);
////			fflush(stdin);
////		}
////
////		b:
////		cout << "Enter Hourly Pay Rate (range from RM40-RM80): ";
////		cin >> hr[index];
////		if (cin.fail()) {
////			cin.clear();
////			cin.ignore();
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
////			goto b;
////		}
////		else if (hr[index] > 80 || hr[index] < 40) {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t=====================================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t| Value Of Hourly Rate must be in between 40 and 80 |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t=====================================================" << endl << endl;
////			goto b;
////		}
////		else
////			//Value is correct
////			fflush(stdin);
////
////
////	c:
////		int pn;
////		cout << "Enter Phone number (Excluding initial '0' e.g. 1162320511) : ";
////		cin.ignore();
////		cin >> pn;
////		if (cin.fail()) {
////			cin.clear();
////			cin.ignore();
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
////			goto c;
////		}
////		else if (pn < 1000000000) {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			goto c;
////		}
////		else if(pn > 9999999999) {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
////			goto c;
////		}
////		else {
////			ph[index] = pn;
////		}
////		fflush(stdin);
////
////		string add;
////		cout << "Enter Address: ";
////		cin.ignore();
////		getline(cin, add);
////		for (int i = 0; i < add.length(); i++) {
////			add[i] = toupper(add[i]);
////		}
////		address[index] = add;
////		fflush(stdin);
////
////		cout << "Enter Tuition Center Code: ";
////		getline(cin, tcc[index]);
////		fflush(stdin);
////
////		cout << "Enter Tutor Center Name: ";
////		getline(cin, tcn[index]);
////		fflush(stdin);
////
////		cout << "Enter Subject Code: ";
////		getline(cin, sc[index]);
////		fflush(stdin);
////
////		cout << "Enter Subject Name: ";
////		getline(cin, sn[index]);
////		fflush(stdin);
////
////	d:
////		cout << "Enter Rating (range from 1-5, where '1' is 'Very Poor Performance' and '5' is 'Excellent Performance'): ";
////		cin >> r[index];
////		if (cin.fail()) {
////			cin.clear();
////			cin.ignore();
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
////			goto d;
////		}
////		else if (r[index] < 1 || r[index] > 5) {
////			cout << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t ====================================================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t | Value Of Tutor Rating must be in between 1 and 5 |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t ====================================================" << endl << endl;
////			goto d;
////		}
////		else
////			//Value is correct
////			fflush(stdin);
////
////		index++;
////
////		system("cls");
////		cout << "\t\t\t\t\t\t\t\t\t\t\t\t ================" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t\t\t\t | Record Added |" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t\t\t\t ================" << endl;
////		mainmenu();
////	}
////	void del() {
////		if (tid[0] == NULL) {
////			system("cls");
////			cout << "\t\t\t\t  ===================================================";
////			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Delete |" << endl;
////			cout << "\t\t\t\t  ===================================================" << endl;
////			mainmenu();
////		}
////		system("cls");
////		bool found = false;
////		int sid;
////		cout << "Enter tutor ID : ";
////		cin >> sid;
////		for (int i = 0; i <= index; i++) {
////			if (tid[i] == sid) {
////				if ((index + 1) == NULL) {
////					found = true;
////					index--;
////				}
////				else if ((index + 1) != NULL) {
////					found = true;
////					tid[i] = tid[i + 1];
////					name[i] = name[i + 1];
////					dj[i] = dj[i + 1];
////					dt[i] = dt[i + 1];
////					hr[i] = hr[i + 1];
////					ph[i] = ph[i + 1];
////					address[i] = address[i + 1];
////					tcc[i] = tcc[i + 1];
////					tcn[i] = tcn[i + 1];
////					sc[i] = sc[i + 1];
////					sn[i] = sn[i + 1];
////					r[i] = r[i + 1];
////					index--;
////				}
////			}
////		}
////		if (found == false) {
////			system("cls");
////			cout << "\t\t\t\t\t\t  ===================";
////			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
////			cout << "\t\t\t\t\t\t  ===================" << endl;
////		}
////		else {
////			system("cls");
////			cout << endl << "\t\t\t\t\t\t   ==================";
////			cout << endl << "\t\t\t\t\t\t   | Record Deleted |" << endl;
////			cout << "\t\t\t\t\t\t   ==================" << endl;
////		}
////		mainmenu();
////	}
////	void modify() {
////		int id;
////		bool found = false;
////		cout << "Enter Tutor ID for searching: ";
////		cin >> id;
////		if (tid[0] == NULL) {
////			system("cls");
////			cout << "\t\t\t\t  ===================================================";
////			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Update |" << endl;
////			cout << "\t\t\t\t  ===================================================" << endl;
////			mainmenu();
////		}
////		for (int i = 0; i <= index; i++) {
////			if (tid[i] == id) {
////				found = true;
////			c:
////				cout << "Enter Tutor Phone number (Excluding initial '0' e.g. 1162320511): " << endl;
////				cin >> ph[i];
////				if (cin.fail()) {
////					cin.clear();
////					cin.ignore();
////					cout << "\t\t\t\t\t     =============================" << endl;
////					cout << "\t\t\t\t\t     | Please use numeric values |" << endl;
////					cout << "\t\t\t\t\t     =============================" << endl;
////					goto c;
////				}
////				fflush(stdin);
////
////				string add;
////				cout << "Enter Tutor Address: " << endl;
////				cin.ignore();
////				getline(cin, add);
////				for (int i = 0; i < add.length(); i++) {
////					add[i] = toupper(add[i]);
////				}
////				address[i] = add;
////				fflush(stdin);
////
////				system("cls");
////				cout << "\t\t\t\t\t\t  ===================";
////				cout << endl << "\t\t\t\t\t\t  | Record Modified |" << endl;
////				cout << "\t\t\t\t\t\t  ===================" << endl;
////			}
////		}
////		if (found == false) {
////			system("cls");
////			cout << "\t\t\t\t\t\t  ===================";
////			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
////			cout << "\t\t\t\t\t\t  ===================" << endl;
////		} 
////		mainmenu();
////	}
////	void display()
////	{
////		if (index == 0) {
////			system("cls");
////			cout << "\t\t\t\t  ===================================================";
////			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Display |" << endl;
////			cout << "\t\t\t\t  ===================================================" << endl;
////			mainmenu();
////		}
////		cout << endl;
////		cout << "\t   " << string(190, '-') << endl;
////		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
////		cout << "\t   " << string(190, '-') << endl;
////		for (int i = 0; i < index; i++) {
////			cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
////			cout << "\t   " << string(190, '-') << endl;
////		}
////		mainmenu();
////	}
////	void displaybyTHPR() //display and sort by payrate
////	{
////		int size = index;
////		int i = 0;
////		int min = 40;
////
////		cout << endl;
////		cout << "\t   " << string(190, '-') << endl;
////		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
////		cout << "\t   " << string(190, '-') << endl;
////		while (size != 0) {
////			while (i < index) {
////				if (hr[i] == min) {
////					cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
////					cout << "\t   " << string(190, '-') << endl;
////					size--;
////					i++;
////				}
////				else if (hr[i] != min) {
////					i++;
////				}
////			}
////			i = 0;
////			min++;
////		}
////		mainmenu();
////	}
////	void displaybyTOP()
////	{
////		int size = index;
////		int i = 0;
////		int min = 1;
////
////		cout << endl;
////		cout << "\t   " << string(190, '-') << endl;
////		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
////		cout << "\t   " << string(190, '-') << endl;
////		while (size != 0) {
////			while (i < index) {
////				if (r[i] == min) {
////					cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
////					cout << "\t   " << string(190, '-') << endl;
////					size--;
////					i++;
////				}
////				else if (r[i] != min) {
////					i++;
////				}
////			}
////			i = 0;
////			min++;
////		}
////		mainmenu();
////	}
////	void searchbyID() //with selection search.
////	{
////		system("cls");
////		if (index == 0) {
////			system("cls");
////			cout << "\t\t\t\t  ===================================================";
////			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Search |" << endl;
////			cout << "\t\t\t\t  ===================================================" << endl;
////			mainmenu();
////		}
////		int id;
////		bool found = false;
////		a:
////		cout << "Enter Tutor ID:" << endl;
////		cin >> id;
////		if (cin.fail()) {
////			cin.clear();
////			cin.ignore();
////			cout << "\t\t\t\t\t     =============================" << endl;
////			cout << "\t\t\t\t\t     | Please use numeric values |" << endl;
////			cout << "\t\t\t\t\t     =============================" << endl;
////			goto a;
////		}
////		cout << endl;
////		cout << "\t   " << string(190, '-') << endl;
////		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
////		cout << "\t   " << string(190, '-') << endl;
////		for (int i = 0; i < index; i++) {
////			if (tid[i] == id) {
////				cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
////				cout << "\t   " << string(190, '-') << endl;
////				found = true;
////				mainmenu();
////			}
////		}
////		if (found == false) {
////			cout << "\t\t\t\t\t\t  ===================";
////			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
////			cout << "\t\t\t\t\t\t  ===================" << endl;
////		}
////		mainmenu();
////	}
////	void searchbyRating()
////	{
////		system("cls");
////		if (index == 0) {
////			system("cls");
////			cout << "\t\t\t\t  ===================================================";
////			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Delete |" << endl;
////			cout << "\t\t\t\t  ===================================================" << endl;
////			mainmenu();
////		}
////		int rate;
////		bool found = false;
////	a:
////		cout << "Enter Tutor Rating:" << endl;
////		cin >> rate;
////		if (cin.fail()) {
////			cin.clear();
////			cin.ignore();
////			cout << "\t\t\t\t\t     =============================" << endl;
////			cout << "\t\t\t\t\t     | Please use numeric values |" << endl;
////			cout << "\t\t\t\t\t     =============================" << endl;
////			goto a;
////		}
////		cout << endl;
////		cout << "\t   " << string(190, '-') << endl;
////		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
////		cout << "\t   " << string(190, '-') << endl;
////		for (int i = 0; i < index; i++) {
////			if (r[i] == rate) {
////				cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
////				cout << "\t   " << string(190, '-') << endl;
////				found = true;
////			}
////		}
////		if (found == false) {
////			cout << "\t\t\t\t\t\t  ===================";
////			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
////			cout << "\t\t\t\t\t\t  ===================" << endl;
////		}
////		mainmenu();
////	}
////	void insert(string nm, string dj1, string dt1, int hr1, int ph1, string add, string tcc1, string tcn1, string sc1, string sn1, int r1) {
////		
////		tid[index] = ID;
////		ID++;
////		name[index] = nm;
////		dj[index] = dj1;
////		dt[index] = dt1;
////		hr[index] = hr1;
////		ph[index] = ph1;
////		address[index] = add;
////		tcc[index] = tcc1;
////		tcn[index] = tcn1;
////		sc[index] = sc1;
////		sn[index] = sn1;
////		r[index] = r1;
////
////		index++;
////
////
////	}
////	void searchbyAddress()
////	{
////		system("cls");
////		if (index == 0) {
////			system("cls");
////			cout << "\t\t\t\t  ===================================================";
////			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Search |" << endl;
////			cout << "\t\t\t\t  ===================================================" << endl;
////			mainmenu();
////		}
////		string add;
////		cout << "Enter Tutor address: ";
////		cin.ignore();
////		getline(cin, add);
////		for (int i = 0; i < add.length(); i++) {
////			add[i] = toupper(add[i]);
////		}
////
////		int i = 0;
////		int	x = 0;
////
////		cout << endl;
////		cout << "\t   " << string(190, '-') << endl;
////		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
////		cout << "\t   " << string(190, '-') << endl;
////		while (i < index) {
////			if (address[i] == add) {
////				cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
////				cout << "\t   " << string(190, '-') << endl;
////				i++;
////				x++;
////			}
////			else if (address[i] != add) {
////				i++;
////			}
////		}
////
////		if (x == 0) {
////			system("cls");
////			cout << "\t\t\t\t\t\t  ===================";
////			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
////			cout << "\t\t\t\t\t\t  ===================" << endl;
////		}
////		mainmenu();
////	}
////	void displayMenu()
////	{
////		int ch;
////		cout << "\t\t\t\t\t\t\t\t\t     __________________________________________________\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |------------------------------------------------|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |----------< TUTOR MANAGEMENT SYSTEM >-----------|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |----------<        DISPLAY MENU     >-----------|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |------------------------------------------------|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--     Press ( 1 ) to display Tutor by ID     --|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |                                                |\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--  Press ( 2 ) to display by Hourly Pay Rate --|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |                                                |\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-- Press ( 3 ) to display by Performance Rate --|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |                                                |\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--    Press ( 4 ) To Go Back to  Main Menu    --|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |________________________________________________|" << endl << endl << endl;
////		cout << "Enter Number: ";
////		cin >> ch;
////		if (ch == 1) {
////			system("cls");
////			display();
////		}
////		else if (ch == 2) {
////			system("cls");
////			displaybyTHPR();
////		}
////		else if (ch == 3) {
////			system("cls");
////			displaybyTOP();
////		}
////		else if (ch == 4) {
////			system("cls");
////			mainmenu();
////		}
////
////		else {
////			cout << "Invalid Input";
////		}
////	}
////	void searchMenu()
////	{
////		int ch;
////		cout << "\t\t\t\t\t\t\t\t\t     ________________________________________________\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |---------< TUTOR MANAGEMENT SYSTEM >-----------|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |---------<         SEARCH MENU     >-----------|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--     Press ( 1 ) to Search Tutor by ID     --|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |                                               |\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--      Press ( 2 ) to Search by Rating      --|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |                                               |\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--     Press ( 3 ) to Search by  Address     --|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |                                               |\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--       Press ( 4 ) Back to Main Menu       --|\t\t\t" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |_______________________________________________|" << endl << endl << endl;
////		cout << "Enter Number: ";
////		cin >> ch;
////		if (ch == 1) {
////			system("cls");
////			searchbyID();
////		}
////		else if (ch == 2) {
////			system("cls");
////			searchbyRating();
////		}
////		else if (ch == 3) {
////			system("cls");
////			searchbyAddress();
////		}
////		else if (ch == 4) {
////			system("cls");
////			mainmenu();
////		}
////		else {
////			cout << "Invalid Input";
////		}
////
////	}
////	void mainmenu()  {
////		int ch;
////		cout << "\t\t\t\t\t\t\t\t\t     _______________________________________________________" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-------------< TUTOR MANAGEMENT SYSTEM >-------------|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '1' ) TO ADD A NEW  TUTOR RECORDS   ]--|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '2' ) TO VIEW TUTORS DISPLAY MENU   ]--|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '3' ) TO VIEW TUTORS SEARCH  MENU   ]--|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '4' ) TO UPDATE A TUTOR RECORD(S)   ]--|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '5' ) TO DELETE A TUTOR RECORD(S)   ]--|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '6' ) TO EXIT THE TUTOR M. SYSTEM   ]--|" << endl;
////		cout << "\t\t\t\t\t\t\t\t\t     |_____________________________________________________|" << endl << endl << endl;
////		cout << "Enter Number: ";
////		cin >> ch;
////		if (cin.fail()) {
////			cin.clear();
////			cin.ignore();
////			system("cls");
////			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
////		}
////		if (ch == 1) {
////			system("cls");
////			add();
////		}
////		else if (ch == 2) {
////			system("cls");
////			displayMenu();
////		}
////		else if (ch == 3) {
////			system("cls");
////			searchMenu();
////		}
////		else if (ch == 4) {
////			system("cls");
////			modify();
////		}
////		else if (ch == 5) {
////			system("cls");
////			del();
////		}
////		else if (ch == 6) {
////			exit(0);
////		}
////		else {
////			cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t        | Invalid Input |" << endl;
////			cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
////		}
////	}
////};
////
////
////int main() {
////	tutor t;
////
////	t.insert("Youssef Ehab Gamaleldin", "16/05/2020", "16/05/2023", 65, 1154376988, "SERDANG", "PR450X", "eXcel", "MAT012", "Math", 4);
////	t.insert("Wong Xin Yi", "1/1/2020", "1/1/2023", 50, 1786540976, "SERDANG", "PR450X", "eXcel", "ENG011", "Engineering", 3);
////	t.insert("Hamza Ahmed Badereldin", "1/11/2019", "1/11/2022", 75, 1876907623, "CHERAS", "PR450X", "eXcel", "CS01", "Computer Science", 5);
////	t.insert("Mohammed Tarek Mahfouz", "30/1/2020", "30/1/2023", 45, 1265476988, "SERDANG", "PR450X", "eXcel", "SC015", "Science", 1);
////	t.insert("Ahmed Belal Ramadan", "9/8/2015", "9/8/2020", 80, 1876092541, "BUKIT JALIL", "PR450X", "eXcel", "ARA01", "Arabic", 5);
////	t.insert("Adham Akram Mahfouz", "8/3/2019", "8/3/2022", 70, 1798456233, "BUKIT JALIL", "PR450X", "eXcel", "LAW012", "Law", 4);
////	t.insert("Ahmed Saad Ahmed", "7/9/2020", "7/9/2023", 40, 1163459877, "CHERAS", "PR450X", "eXcel", "DYN05", "Dynamics", 2);
////	t.insert("Momen Mohammed Abdelhady", "22/4/2020", "22/4/2023", 55, 1187609255, "BUKIT JALIL", "PR450X", "eXcel", "GEO03", "Geometry", 4);
////	t.insert("Mohammed Sherif Elazab", "29/12/2019", "29/12/2022", 60, 1765098725, "CHERAS", "PR450X", "eXcel", "BL012", "Business Law", 5);
////	t.insert("Ahmed Ashraf Elazab", "31/10/2020", "31/10/2023", 60, 1178976544, "SERDANG", "PR450X", "eXcel", "ATN01", "Accounting", 4);
////
////	t.mainmenu();
////
////}
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include<iomanip>
//#include <fstream>
//using namespace std;
//
//static int index = 0;
//static int ID = 1;
//
//class tutor {
//private:
//	int tid[500];
//	string name[500];
//	string dj[500];
//	string dt[500];
//	int hr[500];
//	int ph[500];
//	string address[500];
//	string tcc[500];
//	string tcn[500];
//	string sc[500];
//	string sn[500];
//	int r[500];
//
//public:
//	void add() {
//		system("cls"); //directly sent to the command prompt of Windows //claer screen
//
//	a:
//		cout << "Tutor ID: ";
//		cout << ID << endl;
//		tid[index] = ID;
//		ID++;
//		fflush(stdin);
//
//		cout << "Enter Tutor Name: ";
//		cin.ignore();
//		getline(cin, name[index]);
//		fflush(stdin);
//
//	dateJ:
//		int d, m, y;
//		char s;
//		cout << "Enter Data Joined (DD/MM/YYYY): ";
//		cin >> d >> s >> m >> s >> y;
//		cin.clear();
//		cin.ignore();
//		if (cin.fail()) {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			goto dateJ;
//		}
//		else if (s != '/') {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			goto dateJ;
//		}
//		else if (d > 31 || d == 0 || m > 12 || m == 0 || y < 2015 || y == 0) {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			goto dateJ;
//		}
//		else {
//			dj[index] = to_string(d) + "/" + to_string(m) + "/" + to_string(y);
//			fflush(stdin);
//		}
//
//	dateT:
//		cout << "Enter Date of Termintion (DD/MM/YYYY): ";
//		cin >> d >> s >> m >> s >> y;
//		cin.clear();
//		cin.ignore();
//		if (cin.fail()) {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			goto dateT;
//		}
//		else if (s != '/') {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			goto dateT;
//		}
//		else if (d > 31 || d == 0 || m > 12 || m == 0 || y < 2015 || y == 0) {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			goto dateT;
//		}
//		else {
//			dt[index] = to_string(d) + "/" + to_string(m) + "/" + to_string(y);
//			fflush(stdin);
//		}
//
//	b:
//		cout << "Enter Hourly Pay Rate (range from RM40-RM80): ";
//		cin >> hr[index];
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore();
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			goto b;
//		}
//		else if (hr[index] > 80 || hr[index] < 40) {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t=====================================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t| Value Of Hourly Rate must be in between 40 and 80 |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t=====================================================" << endl << endl;
//			goto b;
//		}
//		else
//			//Value is correct
//			fflush(stdin);
//
//
//	c:
//		int pn;
//		cout << "Enter Phone number (Including initial '6' e.g. 601162320511) : ";
//		cin.ignore();
//		cin >> pn;
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore();
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			goto c;
//		}
//		else if (pn < 1000000000) {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			goto c;
//		}
//		else if (pn > 9999999999) {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//			goto c;
//		}
//		else {
//			ph[index] = pn;
//		}
//		fflush(stdin);
//
//		string add;
//		cout << "Enter Address: ";
//		cin.ignore();
//		getline(cin, add);
//		for (int i = 0; i < add.length(); i++) {
//			add[i] = toupper(add[i]);
//		}
//		address[index] = add;
//		fflush(stdin);
//
//		cout << "Enter Tuition Center Code: ";
//		getline(cin, tcc[index]);
//		fflush(stdin);
//
//		cout << "Enter Tutor Center Name: ";
//		getline(cin, tcn[index]);
//		fflush(stdin);
//
//		cout << "Enter Subject Code: ";
//		getline(cin, sc[index]);
//		fflush(stdin);
//
//		cout << "Enter Subject Name: ";
//		getline(cin, sn[index]);
//		fflush(stdin);
//
//	d:
//		cout << "Enter Rating (range from 1-5, where '1' is 'Very Poor Performance' and '5' is 'Excellent Performance'): ";
//		cin >> r[index];
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore();
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			goto d;
//		}
//		else if (r[index] < 1 || r[index] > 5) {
//			cout << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t ====================================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t | Value Of Tutor Rating must be in between 1 and 5 |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t ====================================================" << endl << endl;
//			goto d;
//		}
//		else
//			//Value is correct
//			fflush(stdin);
//
//		index++;
//
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t ================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t | Record Added |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t ================" << endl;
//		mainmenu();
//	}
//	void del() {
//		if (tid[0] == NULL) {
//			system("cls");
//			cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t  | There are Currently no Tutor  Records  to  Delete |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//			mainmenu();
//		}
//		system("cls");
//		bool found = false;
//		int sid;
//	a:
//		cout << "Enter tutor ID : ";
//		cin >> sid;
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore();
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			goto a;
//		}
//		for (int i = 0; i < index; i++) {
//			if (tid[i] == sid) {
//				if ((index + 1) == NULL) {
//					found = true;
//					index--;
//				}
//				else if ((index + 1) != NULL) {
//					while (i < index) {
//						tid[i] = tid[i + 1];
//						name[i] = name[i + 1];
//						dj[i] = dj[i + 1];
//						dt[i] = dt[i + 1];
//						hr[i] = hr[i + 1];
//						ph[i] = ph[i + 1];
//						address[i] = address[i + 1];
//						tcc[i] = tcc[i + 1];
//						tcn[i] = tcn[i + 1];
//						sc[i] = sc[i + 1];
//						sn[i] = sn[i + 1];
//						r[i] = r[i + 1];
//						i++;
//					}
//					index--;
//					found = true;
//				}
//			}
//		}
//		if (found == false) {
//			system("cls");
//			cout << "\t\t\t\t\t\t  ===================";
//			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
//			cout << "\t\t\t\t\t\t  ===================" << endl;
//		}
//		else {
//			system("cls");
//			cout << "\t\t\t\t\t\t\t\t\t\t\t\t===================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t\t| Record  Deleted |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t\t===================" << endl;
//		}
//		mainmenu();
//	}
//	void modify() {
//		int id;
//		bool found = false;
//		cout << "Enter Tutor ID for searching: ";
//		cin >> id;
//		if (tid[0] == NULL) {
//			system("cls");
//			cout << "\t\t\t\t  ===================================================";
//			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Update |" << endl;
//			cout << "\t\t\t\t  ===================================================" << endl;
//			mainmenu();
//		}
//		for (int i = 0; i <= index; i++) {
//			if (tid[i] == id) {
//				found = true;
//			c:
//				cout << "Enter Tutor Phone number (Excluding initial '0' e.g. 1162320511): " << endl;
//				cin >> ph[i];
//				if (cin.fail()) {
//					cin.clear();
//					cin.ignore();
//					cout << "\t\t\t\t\t     =============================" << endl;
//					cout << "\t\t\t\t\t     | Please use numeric values |" << endl;
//					cout << "\t\t\t\t\t     =============================" << endl;
//					goto c;
//				}
//				fflush(stdin);
//
//				string add;
//				cout << "Enter Tutor Address: " << endl;
//				cin.ignore();
//				getline(cin, add);
//				for (int i = 0; i < add.length(); i++) {
//					add[i] = toupper(add[i]);
//				}
//				address[i] = add;
//				fflush(stdin);
//
//				system("cls");
//				cout << "\t\t\t\t\t\t  ===================";
//				cout << endl << "\t\t\t\t\t\t  | Record Modified |" << endl;
//				cout << "\t\t\t\t\t\t  ===================" << endl;
//			}
//		}
//		if (found == false) {
//			system("cls");
//			cout << "\t\t\t\t\t\t  ===================";
//			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
//			cout << "\t\t\t\t\t\t  ===================" << endl;
//		}
//		mainmenu();
//	}
//	void display()
//	{
//		if (index == 0) {
//			system("cls");
//			cout << "\t\t\t\t  ===================================================";
//			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Display |" << endl;
//			cout << "\t\t\t\t  ===================================================" << endl;
//			mainmenu();
//		}
//		cout << endl;
//		cout << "\t   " << string(190, '-') << endl;
//		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//		cout << "\t   " << string(190, '-') << endl;
//		for (int i = 0; i < index; i++) {
//			cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
//			cout << "\t   " << string(190, '-') << endl;
//		}
//		mainmenu();
//	}
//	void displaybyTHPR() //display and sort by payrate
//	{
//		int size = index;
//		int i = 0;
//		int min = 40;
//
//		cout << endl;
//		cout << "\t   " << string(190, '-') << endl;
//		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//		cout << "\t   " << string(190, '-') << endl;
//		while (size != 0) {
//			while (i < index) {
//				if (hr[i] == min) {
//					cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
//					cout << "\t   " << string(190, '-') << endl;
//					size--;
//					i++;
//				}
//				else if (hr[i] != min) {
//					i++;
//				}
//			}
//			i = 0;
//			min++;
//		}
//		mainmenu();
//	}
//	/*void displaybyTOP()
//	{
//		int size = index;
//		int i = 0;
//		size_t pos = 0;
//
//		cout << endl;
//		cout << "\t   " << string(190, '-') << endl;
//		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//		cout << "\t   " << string(190, '-') << endl;
//		while (size != 0) {
//			while (i < index) {
//				if (r[i] == min) {
//					cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
//					cout << "\t   " << string(190, '-') << endl;
//					size--;
//					i++;
//				}
//				else if (r[i] != min) {
//					i++;
//				}
//			}
//			i = 0;
//			min++;
//		}
//		mainmenu();
//	}*/
//	void searchbyID() //with binary search. Why? because no preconditions! faster for developing the codes
//	{
//		system("cls");
//		if (index == 0) {
//			system("cls");
//			cout << "\t\t\t\t  ===================================================";
//			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Search |" << endl;
//			cout << "\t\t\t\t  ===================================================" << endl;
//			mainmenu();
//		}
//		int id;
//		bool found = false;
//		size_t pos = 0; //position
//		string name = "youssef";
//	a:
//		cout << "Enter Tutor ID:" << endl;
//		cin >> name;
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore();
//			cout << "\t\t\t\t\t     =============================" << endl;
//			cout << "\t\t\t\t\t     | Please use numeric values |" << endl;
//			cout << "\t\t\t\t\t     =============================" << endl;
//			goto a;
//		}
//		cout << endl;
//		cout << "\t   " << string(190, '-') << endl;
//		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//		cout << "\t   " << string(190, '-') << endl;
//		for (int i = 0; i < index; i++) {
//			if (tid[i] == id){
//				cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
//				cout << "\t   " << string(190, '-') << endl;
//				found = true;
//				mainmenu();
//			}
//		}
//		if (found == false) {
//			cout << "\t\t\t\t\t\t  ===================";
//			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
//			cout << "\t\t\t\t\t\t  ===================" << endl;
//		}
//		mainmenu();
//	}
//	void searchbyRating()
//	{
//		system("cls");
//		if (index == 0) {
//			system("cls");
//			cout << "\t\t\t\t  ===================================================";
//			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Delete |" << endl;
//			cout << "\t\t\t\t  ===================================================" << endl;
//			mainmenu();
//		}
//		int rate;
//		bool found = false;
//	a:
//		cout << "Enter Tutor Rating:" << endl;
//		cin >> rate;
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore();
//			cout << "\t\t\t\t\t     =============================" << endl;
//			cout << "\t\t\t\t\t     | Please use numeric values |" << endl;
//			cout << "\t\t\t\t\t     =============================" << endl;
//			goto a;
//		}
//		cout << endl;
//		cout << "\t   " << string(190, '-') << endl;
//		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//		cout << "\t   " << string(190, '-') << endl;
//		for (int i = 0; i < index; i++) {
//			if (r[i] == rate) {
//				cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
//				cout << "\t   " << string(190, '-') << endl;
//				found = true;
//			}
//		}
//		if (found == false) {
//			cout << "\t\t\t\t\t\t  ===================";
//			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
//			cout << "\t\t\t\t\t\t  ===================" << endl;
//		}
//		mainmenu();
//	}
//	void insert(string nm, string dj1, string dt1, int hr1, int ph1, string add, string tcc1, string tcn1, string sc1, string sn1, int r1) {
//
//		tid[index] = ID;
//		ID++;
//		name[index] = nm;
//		dj[index] = dj1;
//		dt[index] = dt1;
//		hr[index] = hr1;
//		ph[index] = ph1;
//		address[index] = add;
//		tcc[index] = tcc1;
//		tcn[index] = tcn1;
//		sc[index] = sc1;
//		sn[index] = sn1;
//		r[index] = r1;
//
//		index++;
//
//
//	}
//	void searchbyAddress()
//	{
//		system("cls");
//		if (index == 0) {
//			system("cls");
//			cout << "\t\t\t\t  ===================================================";
//			cout << endl << "\t\t\t\t  | There are Currently no Tutor Records to Search |" << endl;
//			cout << "\t\t\t\t  ===================================================" << endl;
//			mainmenu();
//		}
//		string add;
//		cout << "Enter Tutor address: ";
//		cin.ignore();
//		getline(cin, add);
//		for (int i = 0; i < add.length(); i++) {
//			add[i] = toupper(add[i]);
//		}
//
//		int i = 0;
//		int	x = 0; 
//
//		cout << endl;
//		cout << "\t   " << string(190, '-') << endl;
//		cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//		cout << "\t   " << string(190, '-') << endl;
//		while (i < index) {
//			if (address[i] == add) {
//				cout << "\t   " << "| " << setw(4) << tid[i] << "| " << setw(27) << name[i] << "| " << setw(13) << dj[i] << "| " << setw(12) << dt[i] << "| " << setw(9) << "RM" << hr[i] << "| " << setw(4) << "0" << ph[i] << "| " << setw(15) << address[i] << "| " << setw(14) << tcc[i] << "| " << setw(12) << tcn[i] << "| " << setw(13) << sc[i] << "| " << setw(19) << sn[i] << "| " << setw(11) << r[i] << "| \n";
//				cout << "\t   " << string(190, '-') << endl;
//				i++;
//				x++;
//			}
//			else if (address[i] != add) {
//				i++;
//			}
//		}
//
//		if (x == 0) {
//			system("cls");
//			cout << "\t\t\t\t\t\t  ===================";
//			cout << endl << "\t\t\t\t\t\t  | No Record Found |" << endl;
//			cout << "\t\t\t\t\t\t  ===================" << endl;
//		}
//		mainmenu();
//	}
//	void displayMenu()
//	{
//		int ch;
//		cout << "\t\t\t\t\t\t\t\t\t     __________________________________________________\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |------------------------------------------------|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |----------< TUTOR MANAGEMENT SYSTEM >-----------|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |----------<        DISPLAY MENU     >-----------|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |------------------------------------------------|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--     Press ( 1 ) to display Tutor by ID     --|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |                                                |\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--  Press ( 2 ) to display by Hourly Pay Rate --|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |                                                |\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-- Press ( 3 ) to display by Performance Rate --|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |                                                |\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--    Press ( 4 ) To Go Back to  Main Menu    --|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |________________________________________________|" << endl << endl << endl;
//		cout << "Enter Number: ";
//		cin >> ch;
//		if (ch == 1) {
//			system("cls");
//			display();
//		}
//		else if (ch == 2) {
//			system("cls");
//			displaybyTHPR();
//		}
//		/*else if (ch == 3) {
//			system("cls");
//			displaybyTOP();
//		}*/
//		else if (ch == 4) {
//			system("cls");
//			mainmenu();
//		}
//
//		else {
//			cout << "Invalid Input";
//		}
//	}
//	void searchMenu()
//	{
//		int ch;
//		cout << "\t\t\t\t\t\t\t\t\t     ________________________________________________\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |---------< TUTOR MANAGEMENT SYSTEM >-----------|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |---------<         SEARCH MENU     >-----------|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--     Press ( 1 ) to Search Tutor by ID     --|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |                                               |\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--      Press ( 2 ) to Search by Rating      --|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |                                               |\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--     Press ( 3 ) to Search by  Address     --|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |                                               |\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--       Press ( 4 ) Back to Main Menu       --|\t\t\t" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |_______________________________________________|" << endl << endl << endl;
//		cout << "Enter Number: ";
//		cin >> ch;
//		if (ch == 1) {
//			system("cls");
//			searchbyID();
//		}
//		else if (ch == 2) {
//			system("cls");
//			searchbyRating();
//		}
//		else if (ch == 3) {
//			system("cls");
//			searchbyAddress();
//		}
//		else if (ch == 4) {
//			system("cls");
//			mainmenu();
//		}
//		else {
//			cout << "Invalid Input";
//		}
//
//	}
//	void mainmenu() {
//		int ch;
//		cout << "\t\t\t\t\t\t\t\t\t     _______________________________________________________" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-------------< TUTOR MANAGEMENT SYSTEM >-------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '1' ) TO ADD A NEW  TUTOR RECORDS   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '2' ) TO VIEW TUTORS DISPLAY MENU   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '3' ) TO VIEW TUTORS SEARCH  MENU   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '4' ) TO UPDATE A TUTOR RECORD(S)   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '5' ) TO DELETE A TUTOR RECORD(S)   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '6' ) TO EXIT THE TUTOR M. SYSTEM   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t     |_____________________________________________________|" << endl << endl << endl;
//		cout << "Enter Number: ";
//		cin >> ch;
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore();
//			system("cls");
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		}
//		if (ch == 1) {
//			system("cls");
//			add();
//		}
//		else if (ch == 2) {
//			system("cls");
//			displayMenu();
//		}
//		else if (ch == 3) {
//			system("cls");
//			searchMenu();
//		}
//		else if (ch == 4) {
//			system("cls");
//			modify();
//		}
//		else if (ch == 5) {
//			system("cls");
//			del();
//		}
//		else if (ch == 6) {
//			exit(0);
//		}
//		else {
//			cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t        | Invalid Input |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
//		}
//	}
//};
//
//
//int main() {
//	tutor t;
//
//	t.insert("Youssef Ehab Gamaleldin", "16/05/2020", "16/05/2023", 65, 1154376988, "SERDANG", "PR450X", "eXcel", "MAT012", "Math", 4);
//	t.insert("Farouk Tarek Aly", "1/1/2020", "1/1/2023", 50, 1786540976, "SERDANG", "PR450X", "eXcel", "ENG011", "Engineering", 3);
//	t.insert("Hamza Ahmed Badereldin", "1/11/2019", "1/11/2022", 75, 1876907623, "CHERAS", "PR450X", "eXcel", "CS01", "Computer Science", 5);
//	t.insert("Mohammed Tarek Mahfouz", "30/1/2020", "30/1/2023", 45, 1265476988, "SERDANG", "PR450X", "eXcel", "SC015", "Science", 1);
//	t.insert("Ahmed Belal Ramadan", "9/8/2015", "9/8/2020", 80, 1876092541, "BUKIT JALIL", "PR450X", "eXcel", "ARA01", "Arabic", 5);
//	t.insert("Adham Akram Mahfouz", "8/3/2019", "8/3/2022", 70, 1798456233, "BUKIT JALIL", "PR450X", "eXcel", "LAW012", "Law", 4);
//	t.insert("Ahmed Saad Ahmed", "7/9/2020", "7/9/2023", 40, 1163459877, "CHERAS", "PR450X", "eXcel", "DYN05", "Dynamics", 2);
//	t.insert("Momen Mohammed Abdelhady", "22/4/2020", "22/4/2023", 55, 1187609255, "BUKIT JALIL", "PR450X", "eXcel", "GEO03", "Geometry", 4);
//	t.insert("Mohammed Sherif Elazab", "29/12/2019", "29/12/2022", 60, 1765098725, "CHERAS", "PR450X", "eXcel", "BL012", "Business Law", 5);
//	t.insert("Ahmed Ashraf Elazab", "31/10/2020", "31/10/2023", 60, 1178976544, "SERDANG", "PR450X", "eXcel", "ATN01", "Accounting", 4);
//
//	t.mainmenu();
//
//}
