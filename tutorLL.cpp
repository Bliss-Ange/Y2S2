//#include <iostream>
//#include <cstdio>
//#include <istream>
//#include <stdio.h>
//#include <conio.h>
//#include <Windows.h>
//#include <algorithm>
//#include <string>
//#include <iomanip>
//using namespace std;
//
//static int ID = 1;
//
//struct tutor {
//	int tid;
//	string name;
//	string dj;
//	string dt;
//	int hr;
//	int ph;
//	string address;
//	string tcc;
//	string tcn;
//	string sc;
//	string sn;
//	int r;
//	tutor* next;
//
//}*head, * lastptr;
//
//void add() {
//	tutor* p;
//	p = new tutor;
//
//	a:
//	cout << "Tutor ID: ";
//	cout << ID << endl;
//	p->tid = ID;
//	ID++;
//	fflush(stdin);
//
//	cout << endl << "Enter Tutor Full Name: ";
//	cin.ignore();
//	getline(cin, p->name);
//	fflush(stdin);
//
//	//date
//	dateJ:
//	int d, m, y;
//	char s;
//	cout << endl << "Enter Date Joined (DD/MM/YYYY): ";
//	cin >> d >> s >> m >> s >> y;
//	cin.clear();
//	cin.ignore();
//	if (cin.fail()) {
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		goto dateJ;
//	}
//	else if (s != '/') {
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		goto dateJ;
//	}
//	else if (d > 31 || d == 0 || m > 12 || m == 0 || y < 1900 || y == 0) {
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		goto dateJ;
//	}
//	else {
//		p->dj = to_string(d) + "/" + to_string(m) + "/" + to_string(y);
//		fflush(stdin);
//	}
//
//	dateT:
//	cout << endl << "Enter Date of Termination (DD/MM/YYYY): ";
//	cin >> d >> s >> m >> s >> y;
//	cin.clear();
//	cin.ignore();
//	if (cin.fail()) {
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		goto dateT;
//	}
//	else if (s != '/') {
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		goto dateT;
//	}
//	else if (d > 31 || d == 0 || m > 12 || m == 0 || y < 2015 || y == 0) {
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		goto dateT;
//	}
//	else {
//		p->dt = to_string(d) + "/" + to_string(m) + "/" + to_string(y);
//		fflush(stdin);
//	}
//	
//	b:
//	cout << endl << "Enter Tutor Hourly Rate (must be range from RM40-RM80): ";
//	cin >> p->hr;
//	if (cin.fail()) {
//		cin.clear();
//		cin.ignore();
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		goto b;
//	}
//	else if (p->hr > 80 || p->hr < 40) {
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t=====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t| Value Of Hourly Rate must be in between 40 and 80 |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t=====================================================" << endl << endl;
//		goto b;
//	}
//	else
//		//Value is correct
//	fflush(stdin);
//	
//	c:
//	int ph;
//	cout << endl << "Enter Tutor Phone number (Excluding initial '0' e.g. 1162320511): ";
//	cin >> ph;
//	if (cin.fail()) {
//		cin.clear();
//		cin.ignore();
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          | Please use integer values |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		goto c;
//	}
//	else if (ph < 1000000000) {
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		goto c;
//	}
//	else if (ph > 9999999999) {
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t | Please Enter the Correct Format |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t ===================================" << endl;
//		goto c;
//	}
//	else {
//		p->ph = ph;
//	}
//	fflush(stdin);
//	
//	string add;
//	cout << endl << "Enter Tutor Address: ";
//	cin.ignore();
//	getline(cin, add);
//	for (int i = 0; i < add.length(); i++) {
//		add[i] = toupper(add[i]);
//	}
//	p->address = add;
//	fflush(stdin);
//	
//	cout << endl << "Enter Tuition Centre Code: ";
//	cin >> p->tcc;
//	fflush(stdin);
//	cout << endl << "Enter Tuition Centre Name: ";
//	cin >> p->tcn;
//	fflush(stdin);
//	cout << endl << "Enter Tutor Subject Code: ";
//	cin >> p->sc;
//	fflush(stdin);
//	cout << endl << "Enter Tutor Subject Name: ";
//	cin >> p->sn;
//	fflush(stdin);
//	
//	d:
//	cout << endl << "Enter Tutor Rating (must be range from 1-5, where '1' is 'Very Poor Performance' and '5' is 'Excellent Performance'):" << endl;
//	cin >> p->r;
//	if (cin.fail()) {
//		cin.clear();
//		cin.ignore();
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		goto d;
//	}
//	else if (p->r < 1 || p->r > 5) {
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t ====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t | Value Of Tutor Rating must be in between 1 and 5 |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t ====================================================" << endl << endl;
//		goto d;
//	}
//	else
//		//Value is correct
//	fflush(stdin);
//	
//	p->next = NULL;
//
//	if (head == NULL) {
//		head = p;
//		lastptr = p;
//	}
//	else {
//		lastptr -> next = p;
//		lastptr = p;
//	}
//	system("cls");
//	cout << "\t\t\t\t\t\t\t\t\t\t\t\t ================" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t\t\t\t | Record Added |" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t\t\t\t ================" << endl;
//}
//
//void modify() {
//	tutor* ptr;
//	tutor* prev = head;
//	tutor * current = head;
//
//	if (current == NULL) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t=====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t|  There are Currently no Tutor Records to  Update  |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t=====================================================" << endl;
//	}
//
//	int tid;
//	y:
//	cout << "Enter Tutor ID to search: " << endl;
//	cin >> tid;
//	if (cin.fail()) {
//		cin.clear();
//		cin.ignore();
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		goto y;
//	}
//	x:
//	int x = 0;
//	while (current != NULL) {
//		if (current->tid == tid) {
//			c:
//			cout << "Enter Tutor Phone number (Excluding initial '0' e.g. 1162320511): " << endl;
//			cin >> current->ph;
//			if (cin.fail()) {
//				cin.clear();
//				cin.ignore();
//				cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//				cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//				cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//				goto c;
//			}
//			fflush(stdin);
//
//			string add;
//			cout << "Enter Tutor Address: " << endl;
//			cin.ignore();
//			getline(cin, add);
//			for (int i = 0; i < add.length(); i++) {
//				add[i] = toupper(add[i]);
//			}
//			current->address = add;
//			fflush(stdin);
//
//			system("cls");
//			cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t\t    | Record Modified |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//			current = current->next;
//			x++;
//		}
//		else if (current->tid != tid) {
//			prev = current;
//			current = current->next;
//		}
//	}
//	if (x == 0) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    | No Record Found |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//	}
//}
//
//void searchbyID() {
//	tutor* prev = head;
//	tutor* current = head;
//
//	if (current == NULL) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  | There are Currently no Tutor  Records  to  Search |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//	}
//
//	int tid;
//	a:
//	cout << "Enter Tutor ID: " << endl;
//	cin >> tid;
//	if (cin.fail()) {
//		cin.clear();
//		cin.ignore();
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		goto a;
//	}
//	int x = 0;
//	b:
//	
//	cout << endl;
//	cout << "\t   " << string(190, '-') << endl;
//	cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//	cout << "\t   " << string(190, '-') << endl;
//	while (current != NULL) {
//		if (current->tid == tid) {
//			cout << "\t   " << "| " << setw(4) << current->tid << "| " << setw(27) << current->name << "| " << setw(13) << current->dj << "| " << setw(12) << current->dt << "| " << setw(9) << "RM" << current->hr << "| " << setw(4) << "0" << current->ph << "| " << setw(15) << current->address << "| " << setw(14) << current->tcc << "| " << setw(12) << current->tcn << "| " << setw(13) << current->sc << "| " << setw(19) << current->sn << "| " << setw(11) << current->r << "| \n";
//			cout << "\t   " << string(190, '-') << endl;
//			current = current->next;
//			x++;
//		}
//		else if (current->tid != tid) {
//			prev = current;
//			current = current->next;
//		}
//	}
//	if (x == 0) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    | No Record Found |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//	}
//}
//
//void searchbyAddress() {
//	tutor* current = head;
//	string add;
//
//	if (current == NULL) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  | There are Currently no Tutor  Records  to  Search |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//	}
//
//	cout << "Enter Rating to search tutors: " << endl;
//	cin.ignore();
//	getline(cin, add);
//
//	system("cls");
//	for (int i = 0; i < add.length(); i++) {
//		add[i] = toupper(add[i]);
//	}
//	int x = 0;
//	cout << endl;
//	cout << "\t   " << string(190, '-') << endl;
//	cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//	cout << "\t   " << string(190, '-') << endl;
//	while (current != NULL) {
//		if (current->address == add) {
//			cout << "\t   " << "| " << setw(4) << current->tid << "| " << setw(27) << current->name << "| " << setw(13) << current->dj << "| " << setw(12) << current->dt << "| " << setw(9) << "RM" << current->hr << "| " << setw(4) << "0" << current->ph << "| " << setw(15) << current->address << "| " << setw(14) << current->tcc << "| " << setw(12) << current->tcn << "| " << setw(13) << current->sc << "| " << setw(19) << current->sn << "| " << setw(11) << current->r << "| \n";
//			cout << "\t   " << string(190, '-') << endl;
//			current = current->next;
//			x++;
//		}
//		else if (current->address != add) {
//			current = current->next;
//		}
//	}
//	if (x == 0) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    | No Record Found |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//	}
//}
// 
//void searchbyRating() {
//	tutor* prev = head;
//	tutor* current = head;
//
//	if (current == NULL) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  | There are Currently no Tutor  Records  to  Search |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//	}
//
//	int rating;
//	a:
//	cout << "Enter Rating to search tutors: " << endl;
//	cin >> rating;
//	if (cin.fail()) {
//		cin.clear();
//		cin.ignore();
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		goto a;
//	}
//	int x = 0;
//	cout << endl;
//	cout << "\t   " << string(190, '-') << endl;
//	cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//	cout << "\t   " << string(190, '-') << endl;
//	while(current != NULL){
//		if (current->r == rating) {
//			cout << "\t   " << "| " << setw(4) << current->tid << "| " << setw(27) << current->name << "| " << setw(13) << current->dj << "| " << setw(12) << current->dt << "| " << setw(9) << "RM" << current->hr << "| " << setw(4) << "0" << current->ph << "| " << setw(15) << current->address << "| " << setw(14) << current->tcc << "| " << setw(12) << current->tcn << "| " << setw(13) << current->sc << "| " << setw(19) << current->sn << "| " << setw(11) << current->r << "| \n";
//			cout << "\t   " << string(190, '-') << endl;
//			current = current->next;
//			x++;
//		}
//		else if (current->r != rating) {
//			prev = current;
//			current = current->next;
//		}
//	}
//	if (x == 0) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    | No Record Found |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//	}
//}
//
//void displaybyTHPR() {
//	tutor* temp = head;
//	if (temp == NULL) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  | There are Currently no Tutor Records  to  Display |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//	}
//
//	int size = 0;
//	int min = 40;
//	while (temp != NULL) {
//		size++;
//		temp = temp->next;
//	}
//
//	temp = head;
//
//	cout << endl;
//	cout << "\t   " << string(190, '-') << endl;
//	cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//	cout << "\t   " << string(190, '-') << endl;
//	while (size != 0) {
//		while (temp != NULL) {
//			if (temp->hr == min) {
//				cout << "\t   " << "| " << setw(4) << temp->tid << "| " << setw(27) << temp->name << "| " << setw(13) << temp->dj << "| " << setw(12) << temp->dt << "| " << setw(9) << "RM" << temp->hr << "| " << setw(4) << "0" << temp->ph << "| " << setw(15) << temp->address << "| " << setw(14) << temp->tcc << "| " << setw(12) << temp->tcn << "| " << setw(13) << temp->sc << "| " << setw(19) << temp->sn << "| " << setw(11) << temp->r << "| \n";
//				cout << "\t   " << string(190, '-') << endl;
//				size--;
//				temp = temp->next;
//			}
//			else if (temp->hr != min) {
//				temp = temp->next;
//			}
//		}
//		temp = head;
//		min++;
//	}
//}
//
//void displaybyTOP() {
//	tutor* temp = head;
//	if (temp == NULL) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  | There are Currently no Tutor Records  to  Display |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//	}
//
//	int size = 0;
//	int min = 1;
//
//	while (temp != NULL) {
//		size++;
//		temp = temp->next;
//	}
//
//	temp = head;
//
//	cout << endl;
//	cout << "\t   " << string(190, '-') << endl;
//	cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//	cout << "\t   " << string(190, '-') << endl;
//	while (size != 0) {
//		while (temp != NULL) {
//			if (temp->r == min) {
//				cout << "\t   " << "| " << setw(4) << temp->tid << "| " << setw(27) << temp->name << "| " << setw(13) << temp->dj << "| " << setw(12) << temp->dt << "| " << setw(9) << "RM" << temp->hr << "| " << setw(4) << "0" << temp->ph << "| " << setw(15) << temp->address << "| " << setw(14) << temp->tcc << "| " << setw(12) << temp->tcn << "| " << setw(13) << temp->sc << "| " << setw(19) << temp->sn << "| " << setw(11) << temp->r << "| \n";
//				cout << "\t   " << string(190, '-') << endl;
//				size--;
//				temp = temp->next;
//			}
//			else if (temp->r != min) {
//				temp = temp->next;
//			}
//		}
//		temp = head;
//		min++;
//	}
//
//}
//
//void del() {
//	tutor* current = head;
//	tutor* ptr = NULL;
//	tutor* prev = head;
//
//	if (current == NULL) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  | There are Currently no Tutor  Records  to  Delete |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//	}
//
//	int tid;
//	a:
//	cout << "Enter Tutor ID to Delete: " << endl;
//	cin >> tid;
//	if (cin.fail()) {
//		cin.clear();
//		cin.ignore();
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		goto a;
//	}
//	b:
//	if(current->tid != tid) {
//		prev = current;
//		current = current->next;
//		goto b;
//	}
//	else if(current->tid == tid){
//		if (current == head) {
//			if (current->next == NULL) {
//				head = NULL;
//				lastptr = NULL;
//				delete current;
//			}
//			else {
//				head = current->next;
//				delete current;
//			}
//		}
//		else if (current->next == NULL) {
//			lastptr = prev;
//			prev->next = current->next;
//			delete current;
//		}
//		else {
//			prev->next = current->next;
//			delete current;
//		}
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    | Record  Deleted |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t\t    ===================" << endl;
//	}
//}
//
//void display() {
//	tutor* temp = new tutor;
//	temp = head;
//	if (temp == NULL) {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  | There are Currently no Tutor Records  to  Display |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t  =====================================================" << endl;
//	}
//	cout << endl;
//	cout << "\t   " << string(190, '-') << endl;
//	cout << "\t   " << "| " << setw(4) << "ID" << "| " << setw(27) << "Tutor Name" << "| " << setw(13) << "Date Joined" << "| " << setw(12) << "Termin. Date" << "| " << setw(11) << "Pay Rate" << "| " << setw(14) << "Phone Num." << "| " << setw(15) << "Address" << "| " << setw(14) << "Center Code" << "| " << setw(12) << "Center Name" << "| " << setw(13) << "Subject Code" << "| " << setw(19) << "Subject Name" << "| " << setw(11) << "Rating" << "| \n";
//	cout << "\t   " << string(190, '-') << endl;
//	while(temp != NULL) {
//		cout << "\t   " << "| " << setw(4) << temp->tid << "| " << setw(27) << temp->name << "| " << setw(13) << temp->dj << "| " << setw(12) << temp->dt << "| " << setw(9) << "RM" << temp->hr << "| " << setw(4) << "0" << temp->ph << "| " << setw(15) << temp->address << "| " << setw(14) << temp->tcc << "| " << setw(12) << temp->tcn << "| " << setw(13) << temp->sc << "| " << setw(19) << temp->sn << "| " << setw(11) << temp->r << "| \n";
//		cout << "\t   " << string(190, '-') << endl;
//		temp = temp->next;
//	}
//}
//
//void insert(string name, string dj, string dt, int hr, int ph, string address, string tcc, string tcn, string sc, string sn, int r) {
//	tutor* p;
//	p = new tutor;
//
//	p->tid = ID;
//	ID++;
//	p->name = name;
//	p->dj = dj;
//	p->dt = dt;
//	p->hr = hr;
//	p->ph = ph;
//	p->address = address;
//	p->tcc = tcc;
//	p->tcn = tcn;
//	p->sc = sc;
//	p->sn = sn;
//	p->r = r;
//
//	p->next = NULL;
//
//	if (head == NULL) {
//		head = p;
//		lastptr = p;
//	}
//	else {
//		lastptr->next = p;
//		lastptr = p;
//	}
//}
//
//int main() {
//
//	insert("Youssef Ehab Gamaleldin", "16/05/2020", "16/05/2023", 65, 1154376988, "SERDANG", "PR450X", "eXcel", "MAT012", "Math", 4);
//	insert("Wong Xin Yi", "1/1/2020", "1/1/2023", 50, 1786540976, "SERDANG", "PR450X", "eXcel", "ENG011", "Engineering", 3);
//	insert("Hamza Ahmed Badereldin", "1/11/2019", "1/11/2022", 75, 1876907623, "CHERAS", "PR450X", "eXcel", "CS01", "Computer Science", 5);
//	insert("Mohammed Tarek Mahfouz", "30/1/2020", "30/1/2023", 45, 1265476988, "SERDANG", "PR450X", "eXcel", "SC015", "Science", 1);
//	insert("Ahmed Belal Ramadan", "9/8/2015", "9/8/2020", 80, 1876092541, "BUKIT JALIL", "PR450X", "eXcel", "ARA01", "Arabic", 5);
//	insert("Adham Akram Mahfouz", "8/3/2019", "8/3/2022", 70, 1798456233, "BUKIT JALIL", "PR450X", "eXcel", "LAW012", "Law", 4);
//	insert("Ahmed Saad Ahmed", "7/9/2020", "7/9/2023", 40, 1163459877, "CHERAS", "PR450X", "eXcel", "DYN05", "Dynamics", 2);
//	insert("Momen Mohammed Abdelhady", "22/4/2020", "22/4/2023", 55, 1187609255, "BUKIT JALIL", "PR450X", "eXcel", "GEO03", "Geometry", 4);
//	insert("Mohammed Sherif Elazab", "29/12/2019", "29/12/2022", 60, 1765098725, "CHERAS", "PR450X", "eXcel", "BL012", "Business Law", 5);
//	insert("Ahmed Ashraf Elazab", "31/10/2020", "31/10/2023", 60, 1178976544, "SERDANG", "PR450X", "eXcel", "ATN01", "Accounting", 4);
//
//	a:
//	int x;
//	cout << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     _______________________________________________________" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |-------------< TUTOR MANAGEMENT SYSTEM >-------------|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '1' ) TO ADD A NEW  TUTOR RECORDS   ]--|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '2' ) TO VIEW TUTORS DISPLAY MENU   ]--|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '3' ) TO VIEW TUTORS SEARCH  MENU   ]--|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '4' ) TO UPDATE A TUTOR RECORD(S)   ]--|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '5' ) TO DELETE A TUTOR RECORD(S)   ]--|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |-----------------------------------------------------|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |--[   ENTER ( '6' ) TO EXIT THE TUTOR M. SYSTEM   ]--|" << endl;
//	cout << "\t\t\t\t\t\t\t\t\t     |_____________________________________________________|" << endl << endl << endl;
//	cout << "Enter Number: ";
//	cin >> x;
//	if (cin.fail()) {
//		cin.clear();
//		cin.ignore();
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//		goto a;
//	}
//	if (x == 1) {
//		system("cls");
//		add();
//		goto a;
//	}
//	else if (x == 2) {
//		b:
//		system("cls");
//		int y;
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    ___________________________________________________________" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |---------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |----------------<  TUTORS DISPLAY MENU  >----------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |---------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |--[    ENTER  ( '1' ) TO  DISPLAY  RECORDS  BY  ID    ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |---------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |--[   ENTER ( '2' ) TO  DISPLAY RECORDS BY PAY RATE   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |---------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |--[    ENTER ( '3' ) TO DISPLAY RECORDS BY  RATING    ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |---------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |--[    ENTER ( '4' )  TO  GO  BACK  TO  MAIN  MENU    ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |_________________________________________________________|" << endl << endl << endl;
//		cout << "Enter Number:";
//		cin >> y;
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore();
//			system("cls");
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			goto b;
//		}
//		else if (y == 1) {
//			system("cls");
//			display();
//			goto a;
//		}
//		else if (y == 2) {
//			system("cls");
//			displaybyTHPR();
//			goto a;
//		}
//		else if (y == 3) {
//			system("cls");
//			displaybyTOP();
//			goto a;
//		}
//		else if (y == 4) {
//			system("cls");
//			goto a;
//		}
//		else {
//			system("cls");
//			cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t        | Invalid Input |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
//			goto b;
//		}
//	}
//	else if (x == 3) {
//		c:
//		system("cls");
//		int z;
//		cout << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    ________________________________________________________" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |---------------<  TUTORS  SEARCH  MENU   >------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |--[   ENTER ( '1' )  TO  SEARCH  RECORDS  BY  ID   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |--[   ENTER ( '2' )  TO SEARCH RECORDS BY ADDRESS  ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |--[   ENTER ( '3' )  TO SEARCH RECORDS BY RATING   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |------------------------------------------------------|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |--[   ENTER ( '4' )  TO  GO  BACK  TO  MAIN MENU   ]--|" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t    |______________________________________________________|" << endl << endl << endl;
//		cout << "Enter Number:";
//		cin >> z;
//		if (cin.fail()) {
//			cin.clear();
//			cin.ignore();
//			system("cls");
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          | Please use numeric values |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t          =============================" << endl;
//			goto c;
//		}
//		else if (z == 1) {
//			system("cls");
//			searchbyID();
//			goto a;
//		}
//		else if (z == 2) {
//			system("cls");
//			searchbyAddress();
//			goto a;
//		}
//		else if (z == 3) {
//			system("cls");
//			searchbyRating();
//			goto a;
//		}
//		else if (z == 4) {
//			system("cls");
//			goto a;
//		}
//		else {
//			system("cls");
//			cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t        | Invalid Input |" << endl;
//			cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
//			goto c;
//		}
//	}
//	else if (x == 4) {
//		system("cls");
//		modify();
//		goto a;
//	}
//	else if (x == 5) {
//		system("cls");
//		del();
//		goto a;
//	}
//	else if (x == 6) {
//		exit(0);
//	}
//	else {
//		system("cls");
//		cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t        | Invalid Input |" << endl;
//		cout << "\t\t\t\t\t\t\t\t\t\t\t        =================" << endl;
//		goto a;
//	}
//}
