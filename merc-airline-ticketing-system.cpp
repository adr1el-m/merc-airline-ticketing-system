#include <iostream>
#include <string>
using namespace std;
 
int main()
{
	int passengers, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, exdbaggage, baggage, classes, p1baggage, p2baggage, p3baggage, p4baggage, p5baggage, p6baggage, p7baggage, p8baggage, p9baggage, p10baggage, exd1baggage, exd2baggage, exd3baggage, exd4baggage, exd5baggage, exd6baggage, exd7baggage, exd8baggage, exd9baggage, exd10baggage, p1payment, p2payment, p3payment, p4payment, p5payment, p6payment, p7payment, p8payment, p9payment, p10payment, p1exdbagfee, p2exdbagfee, p3exdbagfee, p4exdbagfee, p5exdbagfee, p6exdbagfee, p7exdbagfee, p8exdbagfee, p9exdbagfee, p10exdbagfee, p1totaldis, p1insuranceout, p2insuranceout, p3insuranceout, p4insuranceout, p5insuranceout, p6insuranceout, p7insuranceout, p8insuranceout, p9insuranceout, p10insuranceout, p1waytrip, p2waytrip, p3waytrip, p4waytrip, p5waytrip, p6waytrip, p7waytrip, p8waytrip, p9waytrip, p10waytrip, p1totalfees, p2totalfees, p3totalfees, p4totalfees, p5totalfees, p6totalfees, p7totalfees, p8totalfees, p9totalfees, p10totalfees, p1semicharge, p2semicharge, p3semicharge, p4semicharge, p5semicharge, p6semicharge, p7semicharge, p8semicharge, p9semicharge, p10semicharge, p1finalcharge, p2finalcharge, p3finalcharge, p4finalcharge, p5finalcharge, p6finalcharge, p7finalcharge, p8finalcharge, p9finalcharge, p10finalcharge, p1totalcharge, p2totalcharge, p3totalcharge, p4totalcharge, p5totalcharge, p6totalcharge, p7totalcharge, p8totalcharge, p9totalcharge, p10totalcharge, p1totalVAT, p2totalVAT, p3totalVAT, p4totalVAT, p5totalVAT, p6totalVAT, p7totalVAT, p8totalVAT, p9totalVAT, p10totalVAT, p1change, p2change, p3change, p4change, p5change, p6change, p7change, p8change, p9change, p10change, p1finalval, p2finalval, p3finalval, p4finalval, p5finalval, p6finalval, p7finalval, p8finalval, p9finalval, p10finalval;
	char answer, booking, type, poneinsurance, ptwoinsurance, pthreeinsurance, pfourinsurance, pfiveinsurance, psixinsurance, pseveninsurance, peightinsurance, pnineinsurance, pteninsurance, ResAgain;
	float GroupResDisFac, p1lessdisfac, p2lessdisfac, p3lessdisfac, p4lessdisfac, p5lessdisfac, p6lessdisfac, p7lessdisfac, p8lessdisfac, p9lessdisfac, p10lessdisfac, p1sencidisfac, p2sencidisfac, p3sencidisfac, p4sencidisfac, p5sencidisfac, p6sencidisfac, p7sencidisfac, p8sencidisfac, p9sencidisfac, p10sencidisfac, APCFVAL, BPCFVAL, CPCFVAL, DPCFVAL, EPCFVAL, FPCFVAL, GPCFVAL, HPCFVAL, IPCFVAL, ABCFVAL, BBCFVAL, CBCFVAL, DBCFVAL, EBCFVAL, FBCFVAL, GBCFVAL, HBCFVAL, IBCFVAL, p1VAT, p2VAT, p3VAT, p4VAT, p5VAT, p6VAT, p7VAT, p8VAT, p9VAT, p10VAT, p1discounts, p2discounts, p3discounts, p4discounts, p5discounts, p6discounts, p7discounts, p8discounts, p9discounts, p10discounts;
	string pn1, pn2, pn3, pn4, pn5, pn6, pn7, pn8, pn9, pn10, p1sencidisfacout, p2sencidisfacout, p3sencidisfacout, p4sencidisfacout, p5sencidisfacout, p6sencidisfacout, p7sencidisfacout, p8sencidisfacout, p9sencidisfacout, p10sencidisfacout, p1lessdisfacout, p2lessdisfacout, p3lessdisfacout, p4lessdisfacout, p5lessdisfacout, p6lessdisfacout, p7lessdisfacout, p8lessdisfacout, p9lessdisfacout, p10lessdisfacout, A, B, C, D, E, F, G, H, I, PC, BC, p1VATout, p2VATout, p3VATout, p4VATout, p5VATout, p6VATout, p7VATout, p8VATout, p9VATout, p10VATout, GroupResOut, GroupReservOut, APCF, BPCF, CPCF, DPCF, EPCF, FPCF, GPCF, HPCF, IPCF, ABCF, BBCF, CBCF, DBCF, EBCF, FBCF, GBCF, HBCF, IBCF;
 
    again:
	cout<< "\t\t\t\t\t\MERC AIRLINE TICKETING SERVICE" << endl;
	cout<< "\t\MERC Group of Company offers private airplane aviation reservation for certain destinations." <<endl;
	cout<<endl;
	cout<< "\t\Booking's' are for passenger/s flying LOCAL and INTERNATIONAL (All payments are cash basis)" <<endl;
	cout<<"================================================================================================================" <<endl;
	cout<< "\t\DESTINATION\t\t\TO\t\t\Private Class Fare\t\t\Business Class Fare" <<endl;
	cout<< "A\t\  Manila\t\      Batanes\t\     8650.00 pesos per person\t\         15,500 per person" <<endl;
	cout<< "B\t\  Manila\t\      Bacolod\t\     4,543.00 pesos per person\t\          9,500 per person" <<endl;
	cout<< "C\t\  Manila\t\      Palawan\t\     5,882.00 pesos per person\t\         13, 200 per person" <<endl;
	cout<< "D\t\  Manila\t\       Davao\t\     4,096.00 pesos per person\t\         9,230 per person" <<endl;
	cout<< "E\t\  Manila\t\      Malaysia\t\     6,199.00 pesos per person\t\          12,150 per person" <<endl;
	cout<< "F\t\  Manila\t\     Indonesia\t\     5,699.00 pesos per person\t\         10, 850 per person" <<endl;
	cout<< "G\t\  Manila\t\     Singapore\t\     6,899.00 pesos per person\t\         13,110 per person" <<endl;
	cout<< "H\t\  Manila\t\    South Korea\t\     12,500.00 pesos per person\t\         23, 850 per person" <<endl;
	cout<< "I\t\  Manila\t\       Japan\t\     24,800.00 pesos per person\t\        31,450.00 per person" <<endl;
	cout<<"================================================================================================================" <<endl;
	cout<<"PRIVATE JET CLASS (can accommodate up to 15 persons including the 2 pilot and 3 stewardess)" <<endl;
	cout<<"BUSINESS JET CLASS (can accommodate up to 10 persons including the including 2 pilot and 2 stewardess)" <<endl;
	cout<<"================================================================================================================" <<endl;
	cout<<"\t\t\t\t\t\MAXIMUM OF 10 PASSENGERS ONLY" <<endl;
	cout<<endl;
	cout<<"Number/s of passenger/s: ";
	cin>>passengers;
	cout<<endl;
 
	while (passengers > 10 || passengers <= 0)
    {
        cout << "Invalid number of passenger, The maximum is only 10 and a minimum of 1" << endl;
        cout<<"Number/s of passenger/s: ";
        cin >> passengers;
        cout<<endl;
    }
 
	cout<<"is it a group reservation (Y/N)? : ";
	cin>>answer;
	cout<<endl;
 
	while (answer != 'Y' && answer != 'N' && answer != 'y' && answer != 'n')
    {
        cout << "Invalid Input, use Y or N to Answer..." << endl;
        cout<<"is it a group reservation (Y/N)?  ";
        cin >> answer;
        cout<<endl;
    }
 
	if ((answer == 'y'||'Y')&&(passengers >= 5)) {
		GroupResDisFac = 0.05;
		GroupResOut = "Group Reservation";
		GroupReservOut = "5%";
	}
	else if ((answer == 'y'||'Y')&&(passengers < 5)) {
		GroupResDisFac = 0;
		GroupResOut = "Individual Reservation";
		GroupReservOut = "none";
	}
	else if (answer == 'n'||'N') {
		GroupResDisFac = 0;
		GroupResOut = "Individual Reservation";
	}
 
	cout<<"How old are each of the passenger : " <<endl;
 
	switch (passengers) // Age
	{
		case 1:
			cout<<"Passenger Age: ";
			cin>>p1;
			break;
		case 2:
			cout<<"First Passenger Age: ";
			cin>>p1;
			cout<<"Second Passenger Age: ";
			cin>>p2;
			break;
		case 3:
			cout<<"First Passenger Age: ";
			cin>>p1;
			cout<<"Second Passenger Age: ";
			cin>>p2;
			cout<<"Third Passenger Age: ";
			cin>>p3;
			break;
		case 4:
			cout<<"First Passenger Age: ";
			cin>>p1;
			cout<<"Second Passenger Age: ";
			cin>>p2;
			cout<<"Third Passenger Age: ";
			cin>>p3;
			cout<<"Fourth Passenger Age: ";
			cin>>p4;
			break;
		case 5:
			cout<<"First Passenger Age: ";
			cin>>p1;
			cout<<"Second Passenger Age: ";
			cin>>p2;
			cout<<"Third Passenger Age: ";
			cin>>p3;
			cout<<"Fourth Passenger Age: ";
			cin>>p4;
			cout<<"Fifth Passenger Age: ";
			cin>>p5;
			break;
		case 6:
			cout<<"First Passenger Age: ";
			cin>>p1;
			cout<<"Second Passenger Age: ";
			cin>>p2;
			cout<<"Third Passenger Age: ";
			cin>>p3;
			cout<<"Fourth Passenger Age: ";
			cin>>p4;
			cout<<"Fifth Passenger Age: ";
			cin>>p5;
			cout<<"Sixth Passenger Age: ";
			cin>>p6;
			break;
		case 7:
			cout<<"First Passenger Age: ";
			cin>>p1;
			cout<<"Second Passenger Age: ";
			cin>>p2;
			cout<<"Third Passenger Age: ";
			cin>>p3;
			cout<<"Fourth Passenger Age: ";
			cin>>p4;
			cout<<"Fifth Passenger Age: ";
			cin>>p5;
			cout<<"Sixth Passenger Age: ";
			cin>>p6;
			cout<<"Seventh Passenger Age: ";
			cin>>p7;
			break;
		case 8:
			cout<<"First Passenger Age: ";
			cin>>p1;
			cout<<"Second Passenger Age: ";
			cin>>p2;
			cout<<"Third Passenger Age: ";
			cin>>p3;
			cout<<"Fourth Passenger Age: ";
			cin>>p4;
			cout<<"Fifth Passenger Age: ";
			cin>>p5;
			cout<<"Sixth Passenger Age: ";
			cin>>p6;
			cout<<"Seventh Passenger Age: ";
			cin>>p7;
			cout<<"Eighth Passenger Age: ";
			cin>>p8;
			break;
		case 9:
			cout<<"First Passenger Age: ";
			cin>>p1;
			cout<<"Second Passenger Age: ";
			cin>>p2;
			cout<<"Third Passenger Age: ";
			cin>>p3;
			cout<<"Fourth Passenger Age: ";
			cin>>p4;
			cout<<"Fifth Passenger Age: ";
			cin>>p5;
			cout<<"Sixth Passenger Age: ";
			cin>>p6;
			cout<<"Seventh Passenger Age: ";
			cin>>p7;
			cout<<"Eighth Passenger Age: ";
			cin>>p8;
			cout<<"ninth Passenger Age: ";
			cin>>p9;
			break;
		case 10:
			cout<<"First Passenger Age: ";
			cin>>p1;
			cout<<"Second Passenger Age: ";
			cin>>p2;
			cout<<"Third Passenger Age: ";
			cin>>p3;
			cout<<"Fourth Passenger Age: ";
			cin>>p4;
			cout<<"Fifth Passenger Age: ";
			cin>>p5;
			cout<<"Sixth Passenger Age: ";
			cin>>p6;
			cout<<"Seventh Passenger Age: ";
			cin>>p7;
			cout<<"Eighth Passenger Age: ";
			cin>>p8;
			cout<<"ninth Passenger Age: ";
			cin>>p9;
			cout<<"Tenth Passenger Age: ";
			cin>>p10;
			break;
	}
 
	while ((p1 < 0)&&(passengers >= 1))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"First Passenger Age: ";
        cin >> p1;
        cout<<endl;
    }
 
    while ((p2 < 0)&&(passengers > 1))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"Second Passenger Age: ";
        cin >> p2;
        cout<<endl;
    }
 
	while ((p3 < 0)&&(passengers > 2))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"third Passenger Age: ";
        cin >> p3;
        cout<<endl;
    }
 
	while ((p4 < 0)&&(passengers > 3))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"Fourth Passenger Age: ";
        cin >> p4;
        cout<<endl;
    }
 
	while ((p5 < 0)&&(passengers > 4))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"Fifth Passenger Age: ";
        cin >> p5;
        cout<<endl;
    }
 
	while ((p6 < 0)&&(passengers > 5))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"Sixth Passenger Age: ";
        cin >> p6;
        cout<<endl;
    }
 
	while ((p7 < 0)&&(passengers > 6))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"Seventh Passenger Age: ";
        cin >> p7;
        cout<<endl;
    }
 
	while ((p8 < 0)&&(passengers > 7))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"Eighth Passenger Age: ";
        cin >> p8;
        cout<<endl;
    }
 
	while ((p9 < 0)&&(passengers > 8))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"ninth Passenger Age: ";
        cin >> p9;
        cout<<endl;
    }
 
	while ((p10 < 0)&&(passengers > 9))
    {
        cout << "Invalid Age, Age's that are greather or equal than 0 is valid'" << endl;
        cout<<"Tenth Passenger Age: ";
        cin >> p10;
        cout<<endl;
    }
 
	cout<<endl;
 
	switch (passengers) //names
	{
		case 1:
			cout<<"Passenger Name: ";
			cin>>pn1;
			break;
		case 2:
			cout<<"First Passenger Name: ";
			cin>>pn1;
			cout<<"Second Passenger Name: ";
			cin>>pn2;
			break;
		case 3:
			cout<<"First Passenger Name: ";
			cin>>pn1;
			cout<<"Second Passenger Name: ";
			cin>>pn2;
			cout<<"Third Passenger Name: ";
			cin>>pn3;
			break;
		case 4:
			cout<<"First Passenger Name: ";
			cin>>pn1;
			cout<<"Second Passenger Name: ";
			cin>>pn2;
			cout<<"Third Passenger Name: ";
			cin>>pn3;
			cout<<"Fourth Passenger Name: ";
			cin>>pn4;
			break;
		case 5:
			cout<<"First Passenger Name: ";
			cin>>pn1;
			cout<<"Second Passenger Name: ";
			cin>>pn2;
			cout<<"Third Passenger Name: ";
			cin>>pn3;
			cout<<"Fourth Passenger Name: ";
			cin>>pn4;
			cout<<"Fifth Passenger Name: ";
			cin>>pn5;
			break;
		case 6:
			cout<<"First Passenger Name: ";
			cin>>pn1;
			cout<<"Second Passenger Name: ";
			cin>>pn2;
			cout<<"Third Passenger Name: ";
			cin>>pn3;
			cout<<"Fourth Passenger Name: ";
			cin>>pn4;
			cout<<"Fifth Passenger Name: ";
			cin>>pn5;
			cout<<"Sixth Passenger Name: ";
			cin>>pn6;
			break;
		case 7:
			cout<<"First Passenger Name: ";
			cin>>pn1;
			cout<<"Second Passenger Name: ";
			cin>>pn2;
			cout<<"Third Passenger Name: ";
			cin>>pn3;
			cout<<"Fourth Passenger Name: ";
			cin>>pn4;
			cout<<"Fifth Passenger Name: ";
			cin>>pn5;
			cout<<"Sixth Passenger Name: ";
			cin>>pn6;
			cout<<"Seventh Passenger Name: ";
			cin>>pn7;
			break;
		case 8:
			cout<<"First Passenger Name: ";
			cin>>pn1;
			cout<<"Second Passenger Name: ";
			cin>>pn2;
			cout<<"Third Passenger Name: ";
			cin>>pn3;
			cout<<"Fourth Passenger Name: ";
			cin>>pn4;
			cout<<"Fifth Passenger Name: ";
			cin>>pn5;
			cout<<"Sixth Passenger Name: ";
			cin>>pn6;
			cout<<"Seventh Passenger Name: ";
			cin>>pn7;
			cout<<"Eighth Passenger Name: ";
			cin>>pn8;
			break;
		case 9:
			cout<<"First Passenger Name: ";
			cin>>pn1;
			cout<<"Second Passenger Name: ";
			cin>>pn2;
			cout<<"Third Passenger Name: ";
			cin>>pn3;
			cout<<"Fourth Passenger Name: ";
			cin>>pn4;
			cout<<"Fifth Passenger Name: ";
			cin>>pn5;
			cout<<"Sixth Passenger Name: ";
			cin>>pn6;
			cout<<"Seventh Passenger Name: ";
			cin>>pn7;
			cout<<"Eighth Passenger Name: ";
			cin>>pn8;
			cout<<"ninth Passenger Name: ";
			cin>>pn9;
			break;
		case 10:
			cout<<"First Passenger Name: ";
			cin>>pn1;
			cout<<"Second Passenger Name: ";
			cin>>pn2;
			cout<<"Third Passenger Name: ";
			cin>>pn3;
			cout<<"Fourth Passenger Name: ";
			cin>>pn4;
			cout<<"Fifth Passenger Name: ";
			cin>>pn5;
			cout<<"Sixth Passenger Name: ";
			cin>>pn6;
			cout<<"Seventh Passenger Name: ";
			cin>>pn7;
			cout<<"Eighth Passenger Name: ";
			cin>>pn8;
			cout<<"ninth Passenger Name: ";
			cin>>pn9;
			cout<<"Tenth Passenger Name: ";
			cin>>pn10;
			break;
	}
 
	cout<<endl;
 
	if (p1 > 60) { //for senior citizens
		p1sencidisfac = 0.20;
		p1sencidisfacout = "20%";
	}
	else {
		p1sencidisfac = 0;
	    p1sencidisfacout = "None";
	}
 
	if (p2 > 60) {
		p2sencidisfac = 0.20;
		p2sencidisfacout = "20%";
	}
	else {
		p2sencidisfac = 0;
	    p2sencidisfacout = "None";
	}
 
	if (p3 > 60) {
		p3sencidisfac = 0.20;
		p3sencidisfacout = "20%";
	}
	else {
		p3sencidisfac = 0;
	    p3sencidisfacout = "None";
	}
 
	if (p4 > 60) {
		p4sencidisfac = 0.20;
		p4sencidisfacout = "20%";
	}
	else {
		p4sencidisfac = 0;
	    p4sencidisfacout = "None";
	}
 
	if (p5 > 60) {
		p5sencidisfac = 0.20;
		p5sencidisfacout = "20%";
	}
	else {
		p5sencidisfac = 0;
	    p5sencidisfacout = "None";
	}
 
	if (p6 > 60) {
		p6sencidisfac = 0.20;
		p6sencidisfacout = "20%";
	}
	else {
		p6sencidisfac = 0;
	    p6sencidisfacout = "None";
	}
 
	if (p7 > 60) {
		p7sencidisfac = 0.20;
		p7sencidisfacout = "20%";
	}
	else {
		p7sencidisfac = 0;
	    p7sencidisfacout = "None";
	}
 
	if (p8 > 60) {
		p8sencidisfac = 0.20;
		p8sencidisfacout = "20%";
	}
	else {
		p8sencidisfac = 0;
	    p8sencidisfacout = "None";
	}
 
	if (p9 > 60) {
		p9sencidisfac = 0.20;
		p9sencidisfacout = "20%";;
	}
	else {
		p9sencidisfac = 0;
	    p9sencidisfacout = "None";
	}
 
	if (p10 > 60) {
		p10sencidisfac = 0.20;
		p10sencidisfacout = "20%";
	}
	else {
		p10sencidisfac = 0;
	    p10sencidisfacout = "None";
	}
 
	if (p1 <= 13) { //for equal and below 13
		p1lessdisfac = 0.02;
		p1lessdisfacout = "2%";
	}
	else {
		p1lessdisfac = 0;
	    p1lessdisfacout = "none";
	}
 
	if (p2 <= 13) {
		p2lessdisfac = 0.02;
		p2lessdisfacout = "2%";
	}
	else {
		p2lessdisfac = 0;
	    p2lessdisfacout = "none";
	}
 
	if (p3 <= 13) {
		p3lessdisfac = 0.02;
		p3lessdisfacout = "2%";
	}
	else {
		p3lessdisfac = 0;
	    p3lessdisfacout = "none";
	}
 
	if (p4 <= 13) {
		p4lessdisfac = 0.02;
		p4lessdisfacout = "2%";
	}
	else {
		p4lessdisfac = 0;
	    p4lessdisfacout = "none";
	}
 
	if (p5 <= 13) {
		p5lessdisfac = 0.02;
		p5lessdisfacout = "2%";
	}
	else {
		p5lessdisfac = 0;
	    p5lessdisfacout = "none";
	}
 
	if (p6 <= 13) {
		p6lessdisfac = 0.02;
		p6lessdisfacout = "2%";
	}
	else {
		p6lessdisfac = 0;
	    p6lessdisfacout = "none";
	}
 
	if (p7 <= 13) {
		p7lessdisfac = 0.02;
		p7lessdisfacout = "2%";
	}
	else {
		p7lessdisfac = 0;
	    p7lessdisfacout = "none";
	}
 
	if (p8 <= 13) {
		p8lessdisfac = 0.02;
		p8lessdisfacout = "2%";
	}
	else {
		p8lessdisfac = 0;
	    p8lessdisfacout = "none";
	}
 
	if (p9 <= 13) {
		p9lessdisfac = 0.02;
		p9lessdisfacout = "2%";
	}
	else {
		p9lessdisfac = 0;
	    p9lessdisfacout = "none";
	}
 
	if (p10 <= 13) {
		p10lessdisfac = 0.02;
		p10lessdisfacout = "2%";
	}
	else {
		p10lessdisfac = 0;
	    p10lessdisfacout = "none";
	}
 
	if (p1 < 60) { //VAT
		p1VAT = 0.12;
		p1VATout = "12%";
	}
	else {
		p1VAT = 0;
	    p1VATout = "None";
	}
 
	if (p2 < 60) {
		p2VAT = 0.12;
		p2VATout = "12%";
	}
	else {
		p2VAT = 0;
	    p2VATout = "None";
	}
 
	if (p3 < 60) {
		p3VAT = 0.12;
		p3VATout = "12%";
	}
	else {
		p3VAT = 0;
	    p3VATout = "None";
	}
 
	if (p4 < 60) {
		p4VAT = 0.12;
		p4VATout = "12%";
	}
	else {
		p4VAT = 0;
	    p4VATout = "None";
	}
 
	if (p5 < 60) {
		p5VAT = 0.12;
		p5VATout = "12%";
	}
	else {
		p5VAT = 0;
	    p5VATout = "None";
	}
 
	if (p6 < 60) {
		p6VAT = 0.12;
		p6VATout = "12%";
	}
	else {
		p6VAT = 0;
	    p6VATout = "None";
	}
 
	if (p7 < 60) {
		p7VAT = 0.12;
		p7VATout = "12%";
	}
	else {
		p7VAT = 0;
	    p7VATout = "None";
	}
 
	if (p8 < 60) {
		p8VAT = 0.12;
		p8VATout = "12%";
	}
	else {
		p8VAT = 0;
	    p8VATout = "None";
	}
 
	if (p9 < 60) {
		p9VAT = 0.12;
		p9VATout = "12%";;
	}
	else {
		p9VAT = 0;
	    p9VATout = "None";
	}
 
	if (p10 < 60) {
		p10VAT = 0.12;
		p10VATout = "12%";
	}
	else {
		p10VAT = 0;
	    p10VATout = "None";
	}
 
	cout<<"To what place is the booking? (A/B/C/D/E/F/G/H/I): ";
	cin>>booking;
	cout<<endl;
 
	while (booking != 'A' && booking != 'B' && booking != 'C' && booking != 'D' && booking != 'E' && booking != 'F' && booking != 'G' && booking != 'H' && booking != 'I' && booking != 'a' && booking != 'b' && booking != 'c' && booking != 'd' && booking != 'e' && booking != 'f' && booking != 'g' && booking != 'h' && booking != 'i')
    {
        cout << "Letter of Destination is Invalid, the only choices are (A/B/C/D/E/F/G/H/I) " << endl;
        cout<<"to what place is the booking? (A/B/C/D/E/F/G/H/I) : ";
        cin >> booking;
        cout<<endl;
    }
 
 
	cout<<"(1)Private Class or (2)Business Class: ";
	cin>>classes;
	cout<<endl;
 
	while (classes != 1 && classes != 2)
    {
        cout << "Invalid Input, use 1 and 2 to answer..." << endl;
        cout<<"(1)Private Class or (2)Business Class: ";
        cin >> classes;
        cout<<endl;
    }
 
	cout<<endl;
 
    while ((classes == 2)&&(passengers > 6))
    {
        cout<<"The Maximum Capacity of a Business class can only accomodate 6, please try again..." <<endl;
        cout<<"(1)Private Class or (2)Business Class: ";
	    cin>>classes;
	    cout<<endl;
    }
 
    cout<<endl;
 
	if ((classes == 1)&&(passengers <= 10)) {
		cout<<"Would you like to avail insurance for the trip an additional charge of four thousand five hundred P4500 (Y/N): " <<endl;
	}
 
    else if ((classes == 2)&&(passengers <= 6)) {
		cout<<"Would you like to avail insurance for the trip an additional charge of four thousand five hundred P8500 (Y/N): " <<endl;
	}
 
	switch (passengers) //insurance
	{
	case 1:
		    cout<<"Passenger 1 (Y/N): ";
		    cin>>poneinsurance;
		    break;
	case 2:
		    cout<<"Passenger 1 (Y/N): ";
		    cin>>poneinsurance;
		    cout<<"Passenger 2 (Y/N): ";
		    cin>>ptwoinsurance;
		    break;
	case 3:
			cout<<"Passenger 1 (Y/N): ";
			cin>>poneinsurance;
			cout<<"Passenger 2 (Y/N): " <<endl;
			cin>>ptwoinsurance;
			cout<<"Passenger 3 (Y/N): ";
			cin>>pthreeinsurance;
			break;
	case 4:
			cout<<"Passenger 1 (Y/N): ";
			cin>>poneinsurance;
			cout<<"Passenger 2 (Y/N): ";
			cin>>ptwoinsurance;
			cout<<"Passenger 3 (Y/N): ";
			cin>>pthreeinsurance;
			cout<<"Passenger 4 (Y/N): ";
			cin>>pfourinsurance;
			break;
	case 5:
			cout<<"Passenger 1 (Y/N): ";
			cin>>poneinsurance;
			cout<<"Passenger 2 (Y/N): ";
			cin>>ptwoinsurance;
			cout<<"Passenger 3 (Y/N): ";
			cin>>pthreeinsurance;
			cout<<"Passenger 4 (Y/N): ";
			cin>>pfourinsurance;
			cout<<"Passenger 5 (Y/N): ";
			cin>>pfiveinsurance;
			break;
	case 6:
			cout<<"Passenger 1 (Y/N): ";
			cin>>poneinsurance;
			cout<<"Passenger 2 (Y/N): ";
			cin>>ptwoinsurance;
			cout<<"Passenger 3 (Y/N): ";
			cin>>pthreeinsurance;
			cout<<"Passenger 4 (Y/N): ";
			cin>>pfourinsurance;
			cout<<"Passenger 5 (Y/N): ";
			cin>>pfiveinsurance;
			cout<<"Passenger 6 (Y/N): ";
			cin>>psixinsurance;
			break;
	case 7:
			cout<<"Passenger 1 (Y/N): ";
			cin>>poneinsurance;
			cout<<"Passenger 2 (Y/N): ";
			cin>>ptwoinsurance;
			cout<<"Passenger 3 (Y/N): ";
			cin>>pthreeinsurance;
			cout<<"Passenger 4 (Y/N): ";
			cin>>pfourinsurance;
			cout<<"Passenger 5 (Y/N): ";
			cin>>pfiveinsurance;
			cout<<"Passenger 6 (Y/N): ";
			cin>>psixinsurance;
			cout<<"Passenger 7 (Y/N): ";
			cin>>pseveninsurance;
			break;
	case 8:
			cout<<"Passenger 1 (Y/N): ";
			cin>>poneinsurance;
			cout<<"Passenger 2 (Y/N): ";
			cin>>ptwoinsurance;
			cout<<"Passenger 3 (Y/N): ";
			cin>>pthreeinsurance;
			cout<<"Passenger 4 (Y/N): ";
			cin>>pfourinsurance;
			cout<<"Passenger 5 (Y/N): ";
			cin>>pfiveinsurance;
			cout<<"Passenger 6 (Y/N): ";
			cin>>psixinsurance;
			cout<<"Passenger 7 (Y/N): ";
			cin>>pseveninsurance;
			cout<<"Passenger 8 (Y/N): ";
			cin>>peightinsurance;
			break;
	case 9:
			cout<<"Passenger 1 (Y/N): ";
			cin>>poneinsurance;
			cout<<"Passenger 2 (Y/N): ";
			cin>>ptwoinsurance;
			cout<<"Passenger 3 (Y/N): ";
			cin>>pthreeinsurance;
			cout<<"Passenger 4 (Y/N): ";
			cin>>pfourinsurance;
			cout<<"Passenger 5 (Y/N): ";
			cin>>pfiveinsurance;
			cout<<"Passenger 6 (Y/N): ";
			cin>>psixinsurance;
			cout<<"Passenger 7 (Y/N): ";
			cin>>pseveninsurance;
			cout<<"Passenger 8 (Y/N): ";
			cin>>peightinsurance;
			cout<<"Passenger 9 (Y/N): ";
			cin>>pnineinsurance;
			break;
	case 10:
            cout<<"Passenger 1 (Y/N): ";
		    cin>>poneinsurance;
		    cout<<"Passenger 2 (Y/N): ";
			cin>>ptwoinsurance;
			cout<<"Passenger 3 (Y/N): ";
			cin>>pthreeinsurance;
			cout<<"Passenger 4 (Y/N): ";
			cin>>pfourinsurance;
			cout<<"Passenger 5 (Y/N): ";
			cin>>pfiveinsurance;
			cout<<"Passenger 6 (Y/N): ";
			cin>>psixinsurance;
			cout<<"Passenger 7 (Y/N): ";
			cin>>pseveninsurance;
			cout<<"Passenger 8 (Y/N): ";
			cin>>peightinsurance;
			cout<<"Passenger 9 (Y/N): ";
			cin>>pnineinsurance;
			cout<<"Passenger 10 (Y/N): ";
			cin>>pteninsurance;
			break;
    } 
 
    while ((poneinsurance != 'Y' && poneinsurance != 'N' && poneinsurance != 'y' && poneinsurance != 'n')&&(passengers >= 1))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 1 (Y/N): ";
        cin >> poneinsurance;
        cout<<endl;
    }
 
    while ((ptwoinsurance != 'Y' && ptwoinsurance != 'N' && ptwoinsurance != 'y' && ptwoinsurance != 'n')&&(passengers > 1))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 2 (Y/N): ";
        cin >> ptwoinsurance;
        cout<<endl;
    }
 
    while ((pthreeinsurance != 'Y' && pthreeinsurance != 'N' && pthreeinsurance != 'y' && pthreeinsurance != 'n')&&(passengers > 2))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 3 (Y/N): ";
        cin >> pthreeinsurance;
        cout<<endl;
    }
 
    while ((pfourinsurance != 'Y' && pfourinsurance != 'N' && pfourinsurance != 'y' && pfourinsurance != 'n')&&(passengers > 3))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 4 (Y/N): ";
        cin >> pfourinsurance;
        cout<<endl;
    }
 
    while ((pfiveinsurance != 'Y' && pfiveinsurance != 'N' && pfiveinsurance != 'y' && pfiveinsurance != 'n')&&(passengers > 4))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 5 (Y/N): ";
        cin >> pfiveinsurance;
        cout<<endl;
    }
 
    while ((psixinsurance != 'Y' && psixinsurance != 'N' && psixinsurance != 'y' && psixinsurance != 'n')&&(passengers > 5))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 6 (Y/N): ";
        cin >> psixinsurance;
        cout<<endl;
    }
 
    while ((pseveninsurance != 'Y' && pseveninsurance != 'N' && pseveninsurance != 'y' && pseveninsurance != 'n')&&(passengers > 6))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 7 (Y/N): ";
        cin >> pseveninsurance;
        cout<<endl;
    }
 
    while ((peightinsurance != 'Y' && peightinsurance != 'N' && peightinsurance != 'y' && peightinsurance != 'n')&&(passengers > 7))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 8 (Y/N): ";
        cin >> peightinsurance;
        cout<<endl;
    }
 
    while ((peightinsurance != 'Y' && peightinsurance != 'N' && peightinsurance != 'y' && peightinsurance != 'n')&&(passengers > 8))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 9 (Y/N): ";
        cin >> pnineinsurance;
        cout<<endl;
    }
 
    while ((pteninsurance != 'Y' && pteninsurance != 'N' && pteninsurance != 'y' && pteninsurance != 'n')&&(passengers >= 9))
    {
        cout << "Invalid Input, Use 'Y' and 'N' to answer..." << endl;
        cout<<"Passenger 10 (Y/N): ";
        cin >> pteninsurance;
        cout<<endl;
    }
 
    cout<<endl;
    cout<<endl;
 
    cout<<"How much kilograms is your baggage?" <<endl;
 
    switch (passengers) //baggage
	{
		case 1:
			cout<<"Passenger baggage: ";
			cin>>p1baggage;
			break;
		case 2:
			cout<<"First Passenger baggage: ";
			cin>>p1baggage;
			cout<<"Second Passenger baggage: ";
			cin>>p2baggage;
			break;
		case 3:
			cout<<"First Passenger baggage: ";
			cin>>p1baggage;
			cout<<"Second Passenger baggage: ";
			cin>>p2baggage;
			cout<<"Third Passenger baggage: ";
			cin>>p3baggage;
			break;
		case 4:
			cout<<"First Passenger baggage: ";
			cin>>p1baggage;
			cout<<"Second Passenger baggage: ";
			cin>>p2baggage;
			cout<<"Third Passenger baggage: ";
			cin>>p3baggage;
			cout<<"Fourth Passenger baggage: ";
			cin>>p4baggage;
			break;
		case 5:
			cout<<"First Passenger baggage: ";
			cin>>p1baggage;
			cout<<"Second Passenger baggage: ";
			cin>>p2baggage;
			cout<<"Third Passenger baggage: ";
			cin>>p3baggage;
			cout<<"Fourth Passenger baggage: ";
			cin>>p4baggage;
			cout<<"Fifth Passenger baggage: ";
			cin>>p5baggage;
			break;
		case 6:
			cout<<"First Passenger baggage: ";
			cin>>p1baggage;
			cout<<"Second Passenger baggage: ";
			cin>>p2baggage;
			cout<<"Third Passenger baggage: ";
			cin>>p3baggage;
			cout<<"Fourth Passenger baggage: ";
			cin>>p4baggage;
			cout<<"Fifth Passenger baggage: ";
			cin>>p5baggage;
			cout<<"Sixth Passenger baggage: ";
			cin>>p6baggage;
			break;
		case 7:
			cout<<"First Passenger baggage: ";
			cin>>p1baggage;
			cout<<"Second Passenger baggage: ";
			cin>>p2baggage;
			cout<<"Third Passenger baggage: ";
			cin>>p3baggage;
			cout<<"Fourth Passenger baggage: ";
			cin>>p4baggage;
			cout<<"Fifth Passenger baggage: ";
			cin>>p5baggage;
			cout<<"Sixth Passenger baggage: ";
			cin>>p6baggage;
			cout<<"Seventh Passenger baggage: ";
			cin>>p7baggage;
			break;
		case 8:
			cout<<"First Passenger baggage: ";
			cin>>p1baggage;
			cout<<"Second Passenger baggage: ";
			cin>>p2baggage;
			cout<<"Third Passenger baggage: ";
			cin>>p3baggage;
			cout<<"Fourth Passenger baggage: ";
			cin>>p4baggage;
			cout<<"Fifth Passenger baggage: ";
			cin>>p5baggage;
			cout<<"Sixth Passenger baggage: ";
			cin>>p6baggage;
			cout<<"Seventh Passenger baggage: ";
			cin>>p7baggage;
			cout<<"Eighth Passenger baggage: ";
			cin>>p8baggage;
			break;
		case 9:
			cout<<"First Passenger baggage: ";
			cin>>p1baggage;
			cout<<"Second Passenger baggage: ";
			cin>>p2baggage;
			cout<<"Third Passenger baggage: ";
			cin>>p3baggage;
			cout<<"Fourth Passenger baggage: ";
			cin>>p4baggage;
			cout<<"Fifth Passenger baggage: ";
			cin>>p5baggage;
			cout<<"Sixth Passenger baggage: ";
			cin>>p6baggage;
			cout<<"Seventh Passenger baggage: ";
			cin>>p7baggage;
			cout<<"Eighth Passenger baggage: ";
			cin>>p8baggage;
			cout<<"ninth Passenger baggage: ";
			cin>>p9baggage;
			break;
		case 10:
			cout<<"First Passenger baggage: ";
			cin>>p1baggage;
			cout<<"Second Passenger baggage: ";
			cin>>p2baggage;
			cout<<"Third Passenger baggage: ";
			cin>>p3baggage;
			cout<<"Fourth Passenger baggage: ";
			cin>>p4baggage;
			cout<<"Fifth Passenger baggage: ";
			cin>>p5baggage;
			cout<<"Sixth Passenger baggage: ";
			cin>>p6baggage;
			cout<<"Seventh Passenger baggage: ";
			cin>>p7baggage;
			cout<<"Eighth Passenger baggage: ";
			cin>>p8baggage;
			cout<<"ninth Passenger baggage: ";
			cin>>p9baggage;
			cout<<"Tenth Passenger baggage: ";
			cin>>p10baggage;
			break;
	}
 
	cout<<endl;
	cout<<endl;
 
    // exceeded baggage
    if ((p1baggage > 8)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
    	exd1baggage = p1baggage-8;
	}
	else if (p1baggage <= 8){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 8)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
    	exd2baggage = p2baggage-8;
	}
	else if (p2baggage <= 8){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 8)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
    	exd3baggage = p3baggage-8;
	}
	else if (p3baggage <= 8){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 8)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
    	exd4baggage = p4baggage-8;
	}
	else if (p4baggage <= 8){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 8)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
    	exd5baggage = p5baggage-8;
	}
	else if (p5baggage <= 8){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 8)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
    	exd6baggage = p6baggage-8;
	}
	else if (p6baggage <= 8){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd1baggage = p1baggage-8;
	}
	else if (p1baggage <= 8){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd2baggage = p2baggage-8;
	}
	else if (p2baggage <= 8){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd3baggage = p3baggage-8;
	}
	else if (p3baggage <= 8){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd4baggage = p4baggage-8;
	}
	else if (p4baggage <= 8){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd5baggage = p5baggage-8;
	}
	else if (p5baggage <= 8){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd6baggage = p6baggage-8;
	}
	else if (p6baggage <= 8){
		exd6baggage = 0;
    }
 
	if ((p7baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd7baggage = p7baggage-8;
	}
	else if (p7baggage <= 8){
		exd7baggage = 0;
    }
 
    if ((p8baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd8baggage = p8baggage-8;
	}
	else if (p8baggage <= 8){
		exd8baggage = 0;
    }
 
    if ((p9baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd9baggage = p9baggage-8;
	}
	else if (p9baggage <= 8){
		exd9baggage = 0;
    }
 
    if ((p10baggage > 8)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	exd10baggage = p10baggage-8;
	}
	else if (p10baggage <= 8){
		exd10baggage = 0;
    }
 
    if ((p1baggage > 8)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
    	exd1baggage = p1baggage-8;
	}
	else if (p1baggage <= 8){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 8)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
    	exd2baggage = p2baggage-8;
	}
	else if (p2baggage <= 8){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 8)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
    	exd3baggage = p3baggage-8;
	}
	else if (p3baggage <= 8){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 8)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
    	exd4baggage = p4baggage-8;
	}
	else if (p4baggage <= 8){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 8)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
    	exd5baggage = p5baggage-8;
	}
	else if (p5baggage <= 8){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 8)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
    	exd6baggage = p6baggage-8;
	}
	else if (p6baggage <= 8){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd1baggage = p1baggage-8;
	}
	else if (p1baggage <= 8){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd2baggage = p2baggage-8;
	}
	else if (p2baggage <= 8){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd3baggage = p3baggage-8;
	}
	else if (p3baggage <= 8){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd4baggage = p4baggage-8;
	}
	else if (p4baggage <= 8){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd5baggage = p5baggage-8;
	}
	else if (p5baggage <= 8){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd6baggage = p6baggage-8;
	}
	else if (p6baggage <= 8){
		exd6baggage = 0;
    }
 
	if ((p7baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd7baggage = p7baggage-8;
	}
	else if (p7baggage <= 8){
		exd7baggage = 0;
    }
 
    if ((p8baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd8baggage = p8baggage-8;
	}
	else if (p8baggage <= 8){
		exd8baggage = 0;
    }
 
    if ((p9baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd9baggage = p9baggage-8;
	}
	else if (p9baggage <= 8){
		exd9baggage = 0;
    }
 
    if ((p10baggage > 8)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	exd10baggage = p10baggage-8;
	}
	else if (p10baggage <= 8){
		exd10baggage = 0;
    }
 
    if ((p1baggage > 8)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
    	exd1baggage = p1baggage-8;
	}
	else if (p1baggage <= 8){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 8)&&(classes == 1)&&(booking == 'C'  || booking == 'c')) {
    	exd2baggage = p2baggage-8;
	}
	else if (p2baggage <= 8){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 8)&&(classes == 1)&&(booking == 'C'  || booking == 'c')) {
    	exd3baggage = p3baggage-8;
	}
	else if (p3baggage <= 8){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 8)&&(classes == 1)&&(booking == 'C'  || booking == 'c')) {
    	exd4baggage = p4baggage-8;
	}
	else if (p4baggage <= 8){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 8)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
    	exd5baggage = p5baggage-8;
	}
	else if (p5baggage <= 8){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 8)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
    	exd6baggage = p6baggage-8;
	}
	else if (p6baggage <= 8){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd1baggage = p1baggage-8;
	}
	else if (p1baggage <= 8){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd2baggage = p2baggage-8;
	}
	else if (p2baggage <= 8){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd3baggage = p3baggage-8;
	}
	else if (p3baggage <= 8){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd4baggage = p4baggage-8;
	}
	else if (p4baggage <= 8){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd5baggage = p5baggage-8;
	}
	else if (p5baggage <= 8){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd6baggage = p6baggage-8;
	}
	else if (p6baggage <= 8){
		exd6baggage = 0;
    }
 
	if ((p7baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd7baggage = p7baggage-8;
	}
	else if (p7baggage <= 8){
		exd7baggage = 0;
    }
 
    if ((p8baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd8baggage = p8baggage-8;
	}
	else if (p8baggage <= 8){
		exd8baggage = 0;
    }
 
    if ((p9baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd9baggage = p9baggage-8;
	}
	else if (p9baggage <= 8){
		exd9baggage = 0;
    }
 
    if ((p10baggage > 8)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	exd10baggage = p10baggage-8;
	}
	else if (p10baggage <= 8){
		exd10baggage = 0;
    }
 
    if ((p1baggage > 8)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
    	exd1baggage = p1baggage-8;
	}
	else if (p1baggage <= 8){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 8)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
    	exd2baggage = p2baggage-8;
	}
	else if (p2baggage <= 8){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 8)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
    	exd3baggage = p3baggage-8;
	}
	else if (p3baggage <= 8){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 8)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
    	exd4baggage = p4baggage-8;
	}
	else if (p4baggage <= 8){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 8)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
    	exd5baggage = p5baggage-8;
	}
	else if (p5baggage <= 8){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 8)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
    	exd6baggage = p6baggage-8;
	}
	else if (p6baggage <= 8){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd1baggage = p1baggage-8;
	}
	else if (p1baggage <= 8){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd2baggage = p2baggage-8;
	}
	else if (p2baggage <= 8){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd3baggage = p3baggage-8;
	}
	else if (p3baggage <= 8){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd4baggage = p4baggage-8;
	}
	else if (p4baggage <= 8){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd5baggage = p5baggage-8;
	}
	else if (p5baggage <= 8){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd6baggage = p6baggage-8;
	}
	else if (p6baggage <= 8){
		exd6baggage = 0;
    }
 
	if ((p7baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd7baggage = p7baggage-8;
	}
	else if (p7baggage <= 8){
		exd7baggage = 0;
    }
 
    if ((p8baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd8baggage = p8baggage-8;
	}
	else if (p8baggage <= 8){
		exd8baggage = 0;
    }
 
    if ((p9baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd9baggage = p9baggage-8;
	}
	else if (p9baggage <= 8){
		exd9baggage = 0;
    }
 
    if ((p10baggage > 8)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	exd10baggage = p10baggage-8;
	}
	else if (p10baggage <= 8){
		exd10baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
	if ((p7baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd7baggage = p7baggage-10;
	}
	else if (p7baggage <= 10){
		exd7baggage = 0;
    }
 
    if ((p8baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd8baggage = p8baggage-10;
	}
	else if (p8baggage <= 10){
		exd8baggage = 0;
    }
 
    if ((p9baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd9baggage = p9baggage-10;
	}
	else if (p9baggage <= 10){
		exd9baggage = 0;
    }
 
    if ((p10baggage > 10)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	exd10baggage = p10baggage-10;
	}
	else if (p10baggage <= 10){
		exd10baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
	if ((p7baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd7baggage = p7baggage-10;
	}
	else if (p7baggage <= 10){
		exd7baggage = 0;
    }
 
    if ((p8baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd8baggage = p8baggage-10;
	}
	else if (p8baggage <= 10){
		exd8baggage = 0;
    }
 
    if ((p9baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd9baggage = p9baggage-10;
	}
	else if (p9baggage <= 10){
		exd9baggage = 0;
    }
 
    if ((p10baggage > 10)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	exd10baggage = p10baggage-10;
	}
	else if (p10baggage <= 10){
		exd10baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
	if ((p7baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd7baggage = p7baggage-10;
	}
	else if (p7baggage <= 10){
		exd7baggage = 0;
    }
 
    if ((p8baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd8baggage = p8baggage-10;
	}
	else if (p8baggage <= 10){
		exd8baggage = 0;
    }
 
    if ((p9baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd9baggage = p9baggage-10;
	}
	else if (p9baggage <= 10){
		exd9baggage = 0;
    }
 
    if ((p10baggage > 10)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	exd10baggage = p10baggage-10;
	}
	else if (p10baggage <= 10){
		exd10baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
    if ((p1baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd1baggage = p1baggage-10;
	}
	else if (p1baggage <= 10){
		exd1baggage = 0;
    }
 
    if ((p2baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd2baggage = p2baggage-10;
	}
	else if (p2baggage <= 10){
		exd2baggage = 0;
    }
 
    if ((p3baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd3baggage = p3baggage-10;
	}
	else if (p3baggage <= 10){
		exd3baggage = 0;
    }
 
    if ((p4baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd4baggage = p4baggage-10;
	}
	else if (p4baggage <= 10){
		exd4baggage = 0;
    }
 
    if ((p5baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd5baggage = p5baggage-10;
	}
	else if (p5baggage <= 10){
		exd5baggage = 0;
    }
 
    if ((p6baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd6baggage = p6baggage-10;
	}
	else if (p6baggage <= 10){
		exd6baggage = 0;
    }
 
	if ((p7baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd7baggage = p7baggage-10;
	}
	else if (p7baggage <= 10){
		exd7baggage = 0;
    }
 
    if ((p8baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd8baggage = p8baggage-10;
	}
	else if (p8baggage <= 10){
		exd8baggage = 0;
    }
 
    if ((p9baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd9baggage = p9baggage-10;
	}
	else if (p9baggage <= 10){
		exd9baggage = 0;
    }
 
    if ((p10baggage > 10)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	exd10baggage = p10baggage-10;
	}
	else if (p10baggage <= 10){
		exd10baggage = 0;
    }
 
	//insurance 
	if ((poneinsurance == 'Y' || poneinsurance == 'y')&&(classes == 1)){
    	p1insuranceout = 4500;
	}
	else if (poneinsurance == 'N' || poneinsurance == 'n')
	    p1insuranceout = 0;
 
	else if ((poneinsurance == 'Y' || poneinsurance == 'y')&&(classes == 2)){
    	p1insuranceout = 8500;
	}
	else if (poneinsurance == 'N' || poneinsurance == 'n')
	    p1insuranceout = 0;
 
	/////////////////////////////////////////////////////////////////////////
	if ((ptwoinsurance == 'Y' || ptwoinsurance == 'y')&&(classes == 1)){
    	p2insuranceout = 4500;
	}
	else if (ptwoinsurance == 'N' || ptwoinsurance == 'n')
	    p2insuranceout = 0;
 
	else if ((ptwoinsurance == 'Y' || ptwoinsurance == 'y')&&(classes == 2)){
    	p2insuranceout = 8500;
	}
	else if (ptwoinsurance == 'N' || ptwoinsurance == 'n')
	    p2insuranceout = 0;
 
	/////////////////////////////////////////////////////////////////////////
	if ((pthreeinsurance == 'Y' || pthreeinsurance == 'y')&&(classes == 1)){
    	p3insuranceout = 4500;
	}
	else if (pthreeinsurance == 'N' || pthreeinsurance == 'n')
	    p3insuranceout = 0;
 
	else if ((pthreeinsurance == 'Y' || pthreeinsurance == 'y')&&(classes == 2)){
    	p3insuranceout = 8500;
	}
	else if (pthreeinsurance == 'N' || pthreeinsurance == 'n')
	    p3insuranceout = 0;
 
	/////////////////////////////////////////////////////////////////////////
	if ((pfourinsurance == 'Y' || pfourinsurance == 'y')&&(classes == 1)){
    	p4insuranceout = 4500;
	}
	else if (pfourinsurance == 'N' || pfourinsurance == 'n')
	    p4insuranceout = 0;
 
	else if ((pfourinsurance == 'Y' || pfourinsurance == 'y')&&(classes == 2)){
    	p4insuranceout = 8500;
	}
	else if (pfourinsurance == 'N' || pfourinsurance == 'n')
	    p4insuranceout = 0;
	/////////////////////////////////////////////////////////////////////////
	if ((pfiveinsurance == 'Y' || pfiveinsurance == 'y')&&(classes == 1)){
    	p5insuranceout = 4500;
	}
	else if (pfiveinsurance == 'N' || pfiveinsurance == 'n')
	    p5insuranceout = 0;
 
	else if ((pfiveinsurance == 'Y' || pfiveinsurance == 'y')&&(classes == 2)){
    	p5insuranceout = 8500;
	}
	else if (pfiveinsurance == 'N' || pfiveinsurance == 'n')
	    p5insuranceout = 0;
	/////////////////////////////////////////////////////////////////////////
	if ((psixinsurance == 'Y' || psixinsurance == 'y')&&(classes == 1)){
    	p6insuranceout = 4500;
	}
	else if (psixinsurance == 'N' || psixinsurance == 'n')
	    p6insuranceout = 0;
 
	else if ((psixinsurance == 'Y' || psixinsurance == 'y')&&(classes == 2)){
    	p6insuranceout = 8500;
	}
	else if (psixinsurance == 'N' || psixinsurance == 'n')
	    p6insuranceout = 0;
	/////////////////////////////////////////////////////////////////////////
	if ((pseveninsurance == 'Y' || pseveninsurance == 'y')&&(classes == 1)){
    	p7insuranceout = 4500;
	}
	else if (pseveninsurance == 'N' || pseveninsurance == 'n')
	    p7insuranceout = 0;
 
	else if ((pseveninsurance == 'Y' || pseveninsurance == 'y')&&(classes == 2)){
    	p7insuranceout = 8500;
	}
	else if (pseveninsurance == 'N' || pseveninsurance == 'n')
	    p7insuranceout = 0;
	/////////////////////////////////////////////////////////////////////////
	if ((peightinsurance == 'Y' || peightinsurance == 'y')&&(classes == 1)){
    	p8insuranceout = 4500;
	}
	else if (peightinsurance == 'N' || peightinsurance == 'n')
	    p8insuranceout = 0;
 
	else if ((peightinsurance == 'Y' || peightinsurance == 'y')&&(classes == 2)){
    	p8insuranceout = 8500;
	}
	else if (peightinsurance == 'N' || peightinsurance == 'n')
	    p8insuranceout = 0;
	/////////////////////////////////////////////////////////////////////////
	if ((pnineinsurance == 'Y' || pnineinsurance == 'y')&&(classes == 1)){
    	p9insuranceout = 4500;
	}
	else if (pnineinsurance == 'N' || pnineinsurance == 'n')
	    p9insuranceout = 0;
 
	else if ((pnineinsurance == 'Y' || pnineinsurance == 'y')&&(classes == 2)){
    	p9insuranceout = 8500;
	}
	else if (pnineinsurance == 'N' || pnineinsurance == 'n')
	    p9insuranceout = 0;
	/////////////////////////////////////////////////////////////////////////
	if ((pteninsurance == 'Y' || pteninsurance == 'y')&&(classes == 1)){
    	p10insuranceout = 4500;
	}
	else if (pteninsurance == 'N' || pteninsurance == 'n')
	    p10insuranceout = 0;
 
	else if ((pteninsurance == 'Y' || pteninsurance == 'y')&&(classes == 2)){
    	p10insuranceout = 8500;
	}
	else if (pteninsurance == 'N' || pteninsurance == 'n')
	    p10insuranceout = 0;
 
	PC = "Private Class";
	BC = "Businesss Class";
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 1)&&(classes == 1)) {
		A = "Batanes";
		APCFVAL = 8650;
		APCF = "P8650,00";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<") Fare: "<<APCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 1)&&(classes == 2)) {
		A = "Batanes";
		ABCFVAL = 15000;
		ABCF = "P15,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<BC<<") Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 2)&&(classes == 1)) {
		A = "Batanes";
		APCFVAL = 8650;
		APCF = "P8650,00";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<") Fare: "<<APCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 2)&&(classes == 2)) {
		A = "Batanes";
		ABCFVAL = 15000;
		ABCF = "P15,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<BC<<") Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 3)&&(classes == 1)) {
		A = "Batanes";
		APCFVAL = 8650;
		APCF = "P8650,00";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<PC<<") Fare: "<<APCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 3)&&(classes == 2)) {
		A = "Batanes";
		ABCFVAL = 15000;
		ABCF = "P15,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<BC<<") Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 4)&&(classes == 1)) {
		A = "Batanes";
		APCFVAL = 8650;
		APCF = "P8650,00";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<")Fare: "<<APCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 4)&&(classes == 2)) {
		A = "Batanes";
		ABCFVAL = 15000;
		ABCF = "P15,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<BC<<")Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 5)&&(classes == 1)) {
		A = "Batanes";
		APCFVAL = 8650;
		APCF = "P8650,00";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<")Fare: "<<APCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 5)&&(classes == 2)) {
		A = "Batanes";
		ABCFVAL = 15000;
		ABCF = "P15,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<BC<<")Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 6)&&(classes == 1)) {
		A = "Batanes";
		APCFVAL = 8650;
		APCF = "P8650,00";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<")Fare: "<<APCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 6)&&(classes == 2)) {
		A = "Batanes";
		ABCFVAL = 15000;
		ABCF = "P15,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<BC<<")Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 7)&&(classes == 1)) {
		A = "Batanes";
		ABCFVAL = 8650;
		ABCF = "P8650,00";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<")Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 8)&&(classes == 1)) {
		A = "Batanes";
		ABCFVAL = 8650;
		ABCF = "P8,650";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<")Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 9)&&(classes == 1)) {
		A = "Batanes";
		ABCFVAL = 8650;
		ABCF = "P8,650";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<")Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 10)&&(classes == 1)) {
		A = "Batanes";
		ABCFVAL = 8650;
		ABCF = "P8,650";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<")Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
    cout<<"Passenger 10: " "\t      "<<p10lessdisfacout<<"\t      "<<p10VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd10baggage<<"\t        "<<p10insuranceout<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 1)&&(classes == 1)) {
		B = "Bacolod";
		BPCFVAL = 4543;
		BPCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<PC<<") Fare: "<<ABCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 1)&&(classes == 2)) {
		A = "Bacolod";
		BBCFVAL = 9500;
		BBCF = "P9,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<BC<<") Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 2)&&(classes == 1)) {
		B = "Bacolod";
		BPCFVAL = 4543;
		BPCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<PC<<") Fare: "<<BPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 2)&&(classes == 2)) {
		B = "Bacolod";
		BBCFVAL = 9500;
		BBCF = "P9,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<BC<<") Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 3)&&(classes == 1)) {
		B = "Bacolod";
		BPCFVAL = 4543;
		BPCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<PC<<") Fare: "<<BPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 3)&&(classes == 2)) {
		B = "Bacolod";
		BBCFVAL = 9500;
		BBCF = "P9,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<BC<<") Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 4)&&(classes == 1)) {
		B = "Bacolod";
		BPCFVAL = 4543;
		BPCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<")Fare: "<<BPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 4)&&(classes == 2)) {
		B = "Bacolod";
		BBCFVAL = 9500;
		BBCF = "P9,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<BC<<")Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 5)&&(classes == 1)) {
		B = "Bacolod";
		BPCFVAL = 4543;
		BPCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<PC<<")Fare: "<<BPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 5)&&(classes == 2)) {
		B = "Bacolod";
		BBCFVAL = 9500;
		BBCF = "P9,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<BC<<")Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 6)&&(classes == 1)) {
		B = "Bacolod";
		BPCFVAL = 4543;
		BPCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<PC<<")Fare: "<<BPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 6)&&(classes == 2)) {
		B = "Bacolod";
		BBCFVAL = 9500;
		BBCF = "P9,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<BC<<")Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 7)&&(classes == 1)) {
		B = "Bacolod";
		BBCFVAL = 4543;
		BBCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<BC<<")Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 8)&&(classes == 1)) {
		B = "Bacolod";
		BBCFVAL = 4543;
		BBCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<PC<<")Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 9)&&(classes == 1)) {
		B = "Bacolod";
		BBCFVAL = 4543;
		BBCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<PC<<")Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 10)&&(classes == 1)) {
		A = "Bacolod";
		BBCFVAL = 4543;
		BBCF = "P4,543";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<A<<" ("<<PC<<")Fare: "<<BBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
    cout<<"Passenger 10: " "\t      "<<p10lessdisfacout<<"\t      "<<p10VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd10baggage<<"\t        "<<p10insuranceout<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 1)&&(classes == 1)) {
		C = "Palawan";
		CPCFVAL = 5882;
		CPCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<PC<<") Fare: "<<CPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 1)&&(classes == 2)) {
		C = "Palawan";
		CBCFVAL = 9500;
		CBCF = "P13, 200";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<BC<<") Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 2)&&(classes == 1)) {
		C = "Palawan";
		CPCFVAL = 5882;
		CPCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<PC<<") Fare: "<<CPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 2)&&(classes == 2)) {
		C = "Palawan";
		CBCFVAL = 9500;
		CBCF = "P13, 200";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<BC<<") Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 3)&&(classes == 1)) {
		C = "Palawan";
		CPCFVAL = 5882;
		CPCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<B<<" ("<<PC<<") Fare: "<<CPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 3)&&(classes == 2)) {
		C = "Palawan";
		CBCFVAL = 13200;
		CBCF = "P13, 200";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<BC<<") Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 4)&&(classes == 1)) {
		C = "Palawan";
		CPCFVAL = 5882;
		CPCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<PC<<")Fare: "<<CPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 4)&&(classes == 2)) {
		C = "Palawan";
		CBCFVAL = 13200;
		CBCF = "P13, 200";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<BC<<")Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 5)&&(classes == 1)) {
		C = "Palawan";
		CPCFVAL = 5882;
		CPCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<PC<<")Fare: "<<CPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 5)&&(classes == 2)) {
		C = "Palawan";
		CBCFVAL = 13200;
		CBCF = "P13, 200";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<BC<<")Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 6)&&(classes == 1)) {
		C = "Palawan";
		CPCFVAL = 5882;
		CPCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<PC<<")Fare: "<<CPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 6)&&(classes == 2)) {
		C = "Palawan";
		CBCFVAL = 13200;
		CBCF = "P13, 200";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<BC<<")Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 7)&&(classes == 1)) {
		C = "Palawan";
		CBCFVAL = 5882;
		CBCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<PC<<")Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 8)&&(classes == 1)) {
		C = "Palawan";
		CBCFVAL = 5882;
		CBCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<PC<<")Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 9)&&(classes == 1)) {
		C = "Palawan";
		CBCFVAL = 5882;
		CBCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<PC<<")Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 10)&&(classes == 1)) {
		C = "Palawan";
		CBCFVAL = 5882;
		CBCF = "P5,882";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<C<<" ("<<PC<<")Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
    cout<<"Passenger 10: " "\t      "<<p10lessdisfacout<<"\t      "<<p10VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd10baggage<<"\t        "<<p10insuranceout<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 1)&&(classes == 1)) {
		D = "Davao";
		DPCFVAL = 4096;
		DPCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<") Fare: "<<DPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 1)&&(classes == 2)) {
		D = "Davao";
		DBCFVAL = 9230;
		DBCF = "P9,230";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<BC<<") Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 2)&&(classes == 1)) {
		D = "Davao";
		DPCFVAL = 4096;
		DPCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<") Fare: "<<DPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 2)&&(classes == 2)) {
		D = "Davao";
		DBCFVAL = 9230;
		DBCF = "P9,230";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<BC<<") Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 3)&&(classes == 1)) {
		C = "Davao";
		DPCFVAL = 4096;
		DPCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<") Fare: "<<DPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 3)&&(classes == 2)) {
		D = "Davao";
		DBCFVAL = 9230;
		DBCF = "P9,230";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<BC<<") Fare: "<<CBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 4)&&(classes == 1)) {
		D = "Davao";
		DPCFVAL = 4096;
		DPCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<")Fare: "<<DPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 4)&&(classes == 2)) {
		D = "Davao";
		DBCFVAL = 9230;
		DBCF = "P9,230";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<BC<<")Fare: "<<DBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 5)&&(classes == 1)) {
		D = "Davao";
		DPCFVAL = 4096;
		DPCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<")Fare: "<<DPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 5)&&(classes == 2)) {
		D = "Davao";
		DBCFVAL = 9230;
		DBCF = "P9,230";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<BC<<")Fare: "<<DBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 6)&&(classes == 1)) {
		D = "Davao";
		DPCFVAL = 4096;
		DPCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<")Fare: "<<DPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 6)&&(classes == 2)) {
		D = "Davao";
		DBCFVAL = 9230;
		DBCF = "P9,230";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<BC<<")Fare: "<<DBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 7)&&(classes == 1)) {
		D = "Davao";
		DBCFVAL = 4096;
		DBCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<")Fare: "<<DBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 8)&&(classes == 1)) {
		D = "Davao";
		DBCFVAL = 4096;
		DBCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<")Fare: "<<DBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 9)&&(classes == 1)) {
		D = "Davao";
		DBCFVAL = 4096;
		DBCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<")Fare: "<<DBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 10)&&(classes == 1)) {
		D = "Davao";
		DBCFVAL = 4096;
		DBCF = "P4,096";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<D<<" ("<<PC<<")Fare: "<<DBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
    cout<<"Passenger 10: " "\t      "<<p10lessdisfacout<<"\t      "<<p10VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd10baggage<<"\t        "<<p10insuranceout<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 1)&&(classes == 1)) {
		E = "Malaysia";
		EPCFVAL = 6199;
		EPCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<PC<<") Fare: "<<EPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 1)&&(classes == 2)) {
		E = "Malaysia";
		EBCFVAL = 12150;
		EBCF = "P12,150";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<") Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 2)&&(classes == 1)) {
		E = "Malaysia";
		EPCFVAL = 6199;
		EPCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<PC<<") Fare: "<<EPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 2)&&(classes == 2)) {
		E = "Malaysia";
		EBCFVAL = 12150;
		EBCF = "P12,150";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<") Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 3)&&(classes == 1)) {
		E = "Malaysia";
		EPCFVAL = 6199;
		EPCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<PC<<") Fare: "<<EPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 3)&&(classes == 2)) {
		E = "Malaysia";
		EBCFVAL = 12150;
		EBCF = "P12,150";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<") Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 4)&&(classes == 1)) {
		E = "Malaysia";
		EPCFVAL = 6199;
		EPCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<PC<<")Fare: "<<EPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 4)&&(classes == 2)) {
		E = "Malaysia";
		EBCFVAL = 12150;
		EBCF = "P12,150";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<")Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 5)&&(classes == 1)) {
		E = "Malaysia";
		EPCFVAL = 6199;
		EPCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<PC<<")Fare: "<<EPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 5)&&(classes == 2)) {
		E = "Malaysia";
		EBCFVAL = 12150;
		EBCF = "P12,150";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<")Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 6)&&(classes == 1)) {
		E = "Malaysia";
		EPCFVAL = 6199;
		EPCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<PC<<")Fare: "<<EPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 6)&&(classes == 2)) {
		E = "Malaysia";
		EBCFVAL = 12150;
		EBCF = "P12,150";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<")Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 7)&&(classes == 1)) {
		E = "Malaysia";
		EBCFVAL = 6199;
		EBCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<")Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 8)&&(classes == 1)) {
		E = "Malaysia";
		EBCFVAL = 6199;
		EBCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<")Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 9)&&(classes == 1)) {
		E = "Malaysia";
		EBCFVAL = 6199;
		EBCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<")Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 10)&&(classes == 1)) {
		E = "Malaysia";
		EBCFVAL = 6199;
		EBCF = "P6,199";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<E<<" ("<<BC<<")Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
    cout<<"Passenger 10: " "\t      "<<p10lessdisfacout<<"\t      "<<p10VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd10baggage<<"\t        "<<p10insuranceout<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 1)&&(classes == 1)) {
		F = "Indonesia";
		FPCFVAL = 5699;
		FPCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<PC<<") Fare: "<<FPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 1)&&(classes == 2)) {
		F = "Indonesia";
		FBCFVAL = 10850;
		FBCF = "P10,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<BC<<") Fare: "<<FBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 2)&&(classes == 1)) {
		F = "Indonesia";
		FPCFVAL = 5699;
		FPCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<PC<<") Fare: "<<FPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 2)&&(classes == 2)) {
		F = "Indonesia";
		FBCFVAL = 10850;
		FBCF = "P10,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<BC<<") Fare: "<<FBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 3)&&(classes == 1)) {
		F = "Indonesia";
		FPCFVAL = 5699;
		FPCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<PC<<") Fare: "<<FPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 3)&&(classes == 2)) {
		F = "Indonesia";
		FBCFVAL = 10850;
		FBCF = "P10,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<BC<<") Fare: "<<FBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 4)&&(classes == 1)) {
		F = "Indonesia";
		FPCFVAL = 5699;
		FPCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<PC<<")Fare: "<<FPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 4)&&(classes == 2)) {
		F = "Indonesia";
		FBCFVAL = 10850;
		FBCF = "P10,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<BC<<")Fare: "<<FBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 5)&&(classes == 1)) {
		F = "Indonesia";
		FPCFVAL = 5699;
		FPCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<PC<<")Fare: "<<FPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 5)&&(classes == 2)) {
		F = "Indonesia";
		FBCFVAL = 10850;
		FBCF = "P10,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<BC<<")Fare: "<<FBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 6)&&(classes == 1)) {
		F = "Indonesia";
		FPCFVAL = 5699;
		FPCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<PC<<")Fare: "<<FPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 6)&&(classes == 2)) {
		F = "Indonesia";
		FBCFVAL = 10850;
		FBCF = "P10,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<BC<<")Fare: "<<EBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 7)&&(classes == 1)) {
		F = "Indonesia";
		FBCFVAL = 5699;
		FBCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<BC<<")Fare: "<<FBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 8)&&(classes == 1)) {
		F = "Indonesia";
		FBCFVAL = 5699;
		FBCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<PC<<")Fare: "<<FBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 9)&&(classes == 1)) {
		F = "Indonesia";
		FBCFVAL = 5699;
		FBCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<PC<<")Fare: "<<FBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 10)&&(classes == 1)) {
		F = "Indonesia";
		FBCFVAL = 5699;
		FBCF = "P5,699";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<F<<" ("<<PC<<")Fare: "<<FBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
    cout<<"Passenger 10: " "\t      "<<p10lessdisfacout<<"\t      "<<p10VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd10baggage<<"\t        "<<p10insuranceout<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 1)&&(classes == 1)) {
		G = "Singapore";
		GPCFVAL = 6899;
		GPCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<") Fare: "<<GPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 1)&&(classes == 2)) {
		G = "Singapore";
		GBCFVAL = 13110;
		GBCF = "P13,110";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<BC<<") Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 2)&&(classes == 1)) {
		G = "Singapore";
		GPCFVAL = 6899;
		GPCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<") Fare: "<<GPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 2)&&(classes == 2)) {
		G = "Singapore";
		GBCFVAL = 13110;
		GBCF = "P13,110";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<BC<<") Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 3)&&(classes == 1)) {
		G = "Singapore";
		GPCFVAL = 6899;
		GPCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<") Fare: "<<GPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 3)&&(classes == 2)) {
		G = "Singapore";
		GBCFVAL = 13110;
		GBCF = "P13,110";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<BC<<") Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 4)&&(classes == 1)) {
		G = "Singapore";
		GPCFVAL = 6899;
		GPCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<")Fare: "<<GPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 4)&&(classes == 2)) {
		G = "Singapore";
		GBCFVAL = 13110;
		GBCF = "P13,110";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<BC<<")Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 5)&&(classes == 1)) {
		G = "Singapore";
		GPCFVAL = 6899;
		GPCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<")Fare: "<<GPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 5)&&(classes == 2)) {
		G = "Singapore";
		GBCFVAL = 13110;
		GBCF = "P13,110";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<BC<<")Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 6)&&(classes == 1)) {
		G = "Singapore";
		GPCFVAL = 6899;
		GPCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<")Fare: "<<GPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 6)&&(classes == 2)) {
		G = "Singapore";
		GBCFVAL = 13110;
		GBCF = "P13,110";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<BC<<")Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 7)&&(classes == 1)) {
		G = "Singapore";
		GBCFVAL = 6899;
		GBCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<")Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 8)&&(classes == 1)) {
		G = "Singapore";
		GBCFVAL = 6899;
		GBCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<")Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 9)&&(classes == 1)) {
		G = "Singapore";
		GBCFVAL = 6899;
		GBCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<")Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 10)&&(classes == 1)) {
		G = "Singapore";
		GBCFVAL = 6899;
		GBCF = "P6,899";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<G<<" ("<<PC<<")Fare: "<<GBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
    cout<<"Passenger 10: " "\t      "<<p10lessdisfacout<<"\t      "<<p10VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd10baggage<<"\t        "<<p10insuranceout<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 1)&&(classes == 1)) {
		H = "South Korea";
		HPCFVAL = 12500;
		HPCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<") Fare: "<<HPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 1)&&(classes == 2)) {
		H = "South Korea";
		HBCFVAL = 23850;
		HBCF = "P23,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<BC<<") Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 2)&&(classes == 1)) {
		H = "South Korea";
		HPCFVAL = 12500;
		HPCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<") Fare: "<<HPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 2)&&(classes == 2)) {
		H = "South Korea";
		HBCFVAL = 23850;
		HBCF = "P23,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<BC<<") Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 3)&&(classes == 1)) {
		H = "South Korea";
		HPCFVAL = 12500;
		HPCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<") Fare: "<<HPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 3)&&(classes == 2)) {
		H = "South Korea";
		HBCFVAL = 23850;
		HBCF = "P23,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<BC<<") Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 4)&&(classes == 1)) {
		H = "South Korea";
		HPCFVAL = 12500;
		HPCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<")Fare: "<<HPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 4)&&(classes == 2)) {
		H = "South Korea";
		HBCFVAL = 23850;
		HBCF = "P23,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<BC<<")Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 5)&&(classes == 1)) {
		H = "South Korea";
		HPCFVAL = 12500;
		HPCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<")Fare: "<<HPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 5)&&(classes == 2)) {
		H = "South Korea";
		HBCFVAL = 23850;
		HBCF = "P23,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<BC<<")Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 6)&&(classes == 1)) {
		H = "South Korea";
		HPCFVAL = 12500;
		HPCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<")Fare: "<<HPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 6)&&(classes == 2)) {
		H = "South Korea";
		HBCFVAL = 23850;
		HBCF = "P23,850";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<BC<<")Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 7)&&(classes == 1)) {
		H = "South Korea";
		HBCFVAL = 12500;
		HBCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<")Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 8)&&(classes == 1)) {
		H = "South Korea";
		HBCFVAL = 12500;
		HBCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<")Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 9)&&(classes == 1)) {
		H = "South Korea";
		HBCFVAL = 12500;
		HBCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<")Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 10)&&(classes == 1)) {
		H = "South Korea";
		HBCFVAL = 12500;
		HBCF = "P12,500";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<H<<" ("<<PC<<")Fare: "<<HBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
    cout<<"Passenger 10: " "\t      "<<p10lessdisfacout<<"\t      "<<p10VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd10baggage<<"\t        "<<p10insuranceout<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 1)&&(classes == 1)) {
		I = "Japan";
		IPCFVAL = 24800;
		IPCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<") Fare: "<<IPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 1)&&(classes == 2)) {
		I = "Japan";
		IBCFVAL = 31450;
		IBCF = "P31,450";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<BC<<") Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 2)&&(classes == 1)) {
		I = "Japan";
		IPCFVAL = 24800;
		IPCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<") Fare: "<<IPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 2)&&(classes == 2)) {
		I = "Japan";
		IBCFVAL = 31450;
		IBCF = "P31,450";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<BC<<") Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 3)&&(classes == 1)) {
		I = "Japan";
		IPCFVAL = 24800;
		IPCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<") Fare: "<<IPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 3)&&(classes == 2)) {
		I = "Japan";
		IBCFVAL = 31450;
		IBCF = "P31,450";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<BC<<") Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 4)&&(classes == 1)) {
		I = "Japan";
		IPCFVAL = 24800;
		IPCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<")Fare: "<<IPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 4)&&(classes == 2)) {
		I = "Japan";
		IBCFVAL = 31450;
		IBCF = "P31,450";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<BC<<")Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 5)&&(classes == 1)) {
		I = "Japan";
		IPCFVAL = 24800;
		IPCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<")Fare: "<<IPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 5)&&(classes == 2)) {
		I = "Japan";
		IBCFVAL = 31450;
		IBCF = "P31,450";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<BC<<")Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 6)&&(classes == 1)) {
		I = "Japan";
		IPCFVAL = 24800;
		IPCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<")Fare: "<<IPCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 6)&&(classes == 2)) {
		I = "Japan";
		IBCFVAL = 31450;
		IBCF = "P31,450";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<BC<<")Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 7)&&(classes == 1)) {
		I = "Japan";
		IBCFVAL = 24800;
		IBCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<")Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 8)&&(classes == 1)) {
		I = "Japan";
		IBCFVAL = 24800;
		IBCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<")Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 9)&&(classes == 1)) {
		I = "Japan";
		IBCFVAL = 24800;
		IBCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<")Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 10)&&(classes == 1)) {
		I = "Japan";
		IBCFVAL = 24800;
		IBCF = "P24,800";
	cout<<"================================================================================================================" <<endl;
	cout<<"                             Receipt of all passenger/s Reserved  ("<<GroupResOut<<")                         " <<endl;
    cout<<"================================================================================================================" <<endl;
    cout<<"To: "<<I<<" ("<<PC<<")Fare: "<<IBCF<<endl;
    cout<<endl;
    cout<<"             (13 and below Discount) (VAT) (Senior Citizen) (Group Reservation) (Exceeded Baggage) (insurance)" <<endl;
    cout<<endl;
    cout<<"Passenger 1: " "\t      "<<p1lessdisfacout<<"\t      "<<p1VATout<<"\t "<<p1sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd1baggage<<"\t        "<<p1insuranceout<<endl;
    cout<<"Passenger 2: " "\t      "<<p2lessdisfacout<<"\t      "<<p2VATout<<"\t "<<p2sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd2baggage<<"\t        "<<p2insuranceout<<endl;
    cout<<"Passenger 3: " "\t      "<<p3lessdisfacout<<"\t      "<<p3VATout<<"\t "<<p3sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd3baggage<<"\t        "<<p3insuranceout<<endl;
    cout<<"Passenger 4: " "\t      "<<p4lessdisfacout<<"\t      "<<p4VATout<<"\t "<<p4sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd4baggage<<"\t        "<<p4insuranceout<<endl;
    cout<<"Passenger 5: " "\t      "<<p5lessdisfacout<<"\t      "<<p5VATout<<"\t "<<p5sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd5baggage<<"\t        "<<p5insuranceout<<endl;
    cout<<"Passenger 6: " "\t      "<<p6lessdisfacout<<"\t      "<<p6VATout<<"\t "<<p6sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd6baggage<<"\t        "<<p6insuranceout<<endl;
    cout<<"Passenger 7: " "\t      "<<p7lessdisfacout<<"\t      "<<p7VATout<<"\t "<<p7sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd7baggage<<"\t        "<<p7insuranceout<<endl;
    cout<<"Passenger 8: " "\t      "<<p8lessdisfacout<<"\t      "<<p8VATout<<"\t "<<p8sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd8baggage<<"\t        "<<p8insuranceout<<endl;
    cout<<"Passenger 9: " "\t      "<<p9lessdisfacout<<"\t      "<<p9VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd9baggage<<"\t        "<<p9insuranceout<<endl;
    cout<<"Passenger 10: " "\t      "<<p10lessdisfacout<<"\t      "<<p10VATout<<"\t "<<p9sencidisfacout<<"\t           "<<GroupReservOut<<"\t               "<<exd10baggage<<"\t        "<<p10insuranceout<<endl;
	}
 
	cout<<endl;
	cout<<"All payments are cash basis: " <<endl;
	cout<<endl;
 
		cout<<"One way trip(1) or Round trip(2): " <<endl;
 
	switch (passengers) //WayTrip
	{
		case 1:
			cout<<"Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			break;
		case 2:
			cout<<"First Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			cout<<"Second Passenger Way trip (1/2): ";
			cin>>p2waytrip;
			break;
		case 3:
			cout<<"First Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			cout<<"Second Passenger Way trip (1/2): ";
			cin>>p2waytrip;
			cout<<"Third Passenger Way trip (1/2): ";
			cin>>p3waytrip;
			break;
		case 4:
			cout<<"First Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			cout<<"Second Passenger Way trip (1/2): ";
			cin>>p2waytrip;
			cout<<"Third Passenger Way trip (1/2): ";
			cin>>p3waytrip;
			cout<<"Fourth Passenger Way trip (1/2): ";
			cin>>p4waytrip;
			break;
		case 5:
			cout<<"First Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			cout<<"Second Passenger Way trip (1/2): ";
			cin>>p2waytrip;
			cout<<"Third Passenger Way trip (1/2): ";
			cin>>p3waytrip;
			cout<<"Fourth Passenger Way trip (1/2): ";
			cin>>p4waytrip;
			cout<<"Fifth Passenger Way trip (1/2): ";
			cin>>p5waytrip;
			break;
		case 6:
			cout<<"First Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			cout<<"Second Passenger Way trip (1/2): ";
			cin>>p2waytrip;
			cout<<"Third Passenger Way trip (1/2): ";
			cin>>p3waytrip;
			cout<<"Fourth Passenger Way trip (1/2): ";
			cin>>p4waytrip;
			cout<<"Fifth Passenger Way trip (1/2): ";
			cin>>p5waytrip;
			cout<<"Sixth Passenger Way trip (1/2): ";
			cin>>p6waytrip;
			break;
		case 7:
			cout<<"First Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			cout<<"Second Passenger Way trip (1/2): ";
			cin>>p2waytrip;
			cout<<"Third Passenger Way trip (1/2): ";
			cin>>p3waytrip;
			cout<<"Fourth Passenger Way trip (1/2): ";
			cin>>p4waytrip;
			cout<<"Fifth Passenger Way trip (1/2): ";
			cin>>p5waytrip;
			cout<<"Sixth Passenger Way trip (1/2): ";
			cin>>p6waytrip;
			cout<<"Seventh Passenger Way trip (1/2): ";
			cin>>p7waytrip;
			break;
		case 8:
			cout<<"First Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			cout<<"Second Passenger Way trip (1/2): ";
			cin>>p2waytrip;
			cout<<"Third Passenger Way trip (1/2): ";
			cin>>p3waytrip;
			cout<<"Fourth Passenger Way trip (1/2): ";
			cin>>p4waytrip;
			cout<<"Fifth Passenger Way trip (1/2): ";
			cin>>p5waytrip;
			cout<<"Sixth Passenger Way trip (1/2): ";
			cin>>p6waytrip;
			cout<<"Seventh Passenger Way trip (1/2): ";
			cin>>p7waytrip;
			cout<<"Eighth Passenger Way trip (1/2): ";
			cin>>p8waytrip;
			break;
		case 9:
			cout<<"First Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			cout<<"Second Passenger Way trip (1/2): ";
			cin>>p2waytrip;
			cout<<"Third Passenger Way trip (1/2): ";
			cin>>p3waytrip;
			cout<<"Fourth Passenger Way trip (1/2): ";
			cin>>p4waytrip;
			cout<<"Fifth Passenger Way trip (1/2): ";
			cin>>p5waytrip;
			cout<<"Sixth Passenger Way trip (1/2): ";
			cin>>p6waytrip;
			cout<<"Seventh Passenger Way trip (1/2): ";
			cin>>p7waytrip;
			cout<<"Eighth Passenger Way trip (1/2): ";
			cin>>p8waytrip;
			cout<<"ninth Passenger Way trip (1/2): ";
			cin>>p9waytrip;
			break;
		case 10:
			cout<<"First Passenger Way trip (1/2): ";
			cin>>p1waytrip;
			cout<<"Second Passenger Way trip (1/2): ";
			cin>>p2waytrip;
			cout<<"Third Passenger Way trip (1/2): ";
			cin>>p3waytrip;
			cout<<"Fourth Passenger Way trip (1/2): ";
			cin>>p4waytrip;
			cout<<"Fifth Passenger Way trip (1/2): ";
			cin>>p5waytrip;
			cout<<"Sixth Passenger Way trip (1/2): ";
			cin>>p6waytrip;
			cout<<"Seventh Passenger Way trip (1/2): ";
			cin>>p7waytrip;
			cout<<"Eighth Passenger Way trip (1/2): ";
			cin>>p8waytrip;
			cout<<"ninth Passenger Way trip (1/2): ";
			cin>>p9waytrip;
			cout<<"Tenth Passenger Way trip (1/2): ";
			cin>>p10waytrip;
			break;
	}
 
	cout<<endl;
 
	while ((p1waytrip != 1 && p1waytrip != 2)&&(passengers >= 1))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"First Passenger Way trip (1/2): ";
        cin >> p1waytrip;
        cout<<endl;
    }
 
    while ((p2waytrip != 1 && p2waytrip != 2)&&(passengers > 1))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"Second Passenger Way trip (1/2): ";
        cin >> p2waytrip;
        cout<<endl;
    }
 
    while ((p3waytrip != 1 && p3waytrip != 2)&&(passengers > 2))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"Third Passenger Way trip (1/2): ";
        cin >> p3waytrip;
        cout<<endl;
    }
 
    while ((p4waytrip != 1 && p4waytrip != 2)&&(passengers > 3))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"Fourth Passenger Way trip (1/2): ";
        cin >> p4waytrip;
        cout<<endl;
    }
 
    while ((p5waytrip != 1 && p5waytrip != 2)&&(passengers > 4))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"fifth Passenger Way trip (1/2): ";
        cin >> p5waytrip;
        cout<<endl;
    }
 
    while ((p6waytrip != 1 && p6waytrip != 2)&&(passengers > 5))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"Sixth Passenger Way trip (1/2): ";
        cin >> p6waytrip;
        cout<<endl;
    }
 
    while ((p7waytrip != 1 && p7waytrip != 2)&&(passengers > 6))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"Seventh Passenger Way trip (1/2): ";
        cin >> p7waytrip;
        cout<<endl;
    }
 
    while ((p8waytrip != 1 && p8waytrip != 2)&&(passengers > 7))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"Eighth Passenger Way trip (1/2): ";
        cin >> p8waytrip;
        cout<<endl;
    }
 
    while ((p9waytrip != 1 && p9waytrip != 2)&&(passengers > 8))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"ninth Passenger Way trip (1/2): ";
        cin >> p9waytrip;
        cout<<endl;
    }
 
    while ((p10waytrip != 1 && p10waytrip != 2)&&(passengers > 9))
    {
        cout << "Invalid Input, Use 1 or 2 to answer..." << endl;
        cout<<"Tenth Passenger Way trip (1/2): ";
        cin >> p10waytrip;
        cout<<endl;
    }
 
 
 
 
	cout<<endl;
	cout<<endl;
 
	if ((p1waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p1finalval = 8650;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}	
 
    else if ((p1waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')){
    	p1finalval = 17300;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 1)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
    	p1finalval = 15500;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 2)&&(classes == 2)&&(booking == 'A' || booking == 'a')){
		p1finalval = 31100;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	if ((p2waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p2finalval = 8650;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p2finalval = 17300;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 1)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
		p2finalval = 15500;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	else if ((p2waytrip == 2)&&(classes == 2)&&(booking == 'A' || booking == 'A')){
		p2finalval = 31100;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	if ((p3waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p3finalval = 8650;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p3finalval = 17300;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 1)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
		p3finalval = 15500;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
 
	else if ((p3waytrip == 2)&&(classes == 2)&&(booking == 'A' || booking == 'a')){
		p3finalval = 31100;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	if ((p4waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p4finalval = 8650;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p4finalval = 17300;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 1)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
		p4finalval = 15500;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	else if ((p4waytrip == 2)&&(classes == 2)&&(booking == 'A' || booking == 'a')){
		p4finalval = 31100;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	if ((p5waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p5finalval = 8650;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p5finalval = 17300;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 1)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
		p5finalval = 15500;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
	else if ((p5waytrip == 2)&&(classes == 2)&&(booking == 'A' || booking == 'a')){
		p5finalval = 31100;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
 
	if ((p6waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p6finalval = 8650;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p6finalval = 17300;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 1)&&(classes == 2)&&(booking == 'A' || booking == 'a')) {
		p6finalval = 15500;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
 
	else if ((p6waytrip == 2)&&(classes == 2)&&(booking == 'A' || booking == 'a')){
		p6finalval = 31100;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	if ((p7waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p7finalval = 8650;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	else if ((p7waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')){
		p7finalval = 15500;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	if ((p8waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p8finalval = 8650;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	else if ((p8waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')){
		p8finalval = 15500;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	if ((p9waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p9finalval = 8650;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	else if ((p9waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')){
		p9finalval = 15500;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
 
	if ((p10waytrip == 1)&&(classes == 1)&&(booking == 'A' || booking == 'a')) {
		p10finalval = 8650;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	else if ((p10waytrip == 2)&&(classes == 1)&&(booking == 'A' || booking == 'a')){
		p10finalval = 15500;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	if ((p1waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p1finalval = 4543;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}	
 
    else if ((p1waytrip == 2)&&(classes == 1)&&(booking == 'B' || booking == 'b')){
    	p1finalval = 9086;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 1)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
    	p1finalval = 9500;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 2)&&(classes == 2)&&(booking == 'B' || booking == 'b')){
		p1finalval = 19000;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	if ((p2waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p2finalval = 4543;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p2finalval = 9086;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 1)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
		p2finalval = 9500;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	else if ((p2waytrip == 2)&&(classes == 2)&&(booking == 'B' || booking == 'b')){
		p2finalval = 19000;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	if ((p3waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p3finalval = 4543;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 2)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p3finalval = 9086;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 1)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
		p3finalval = 9500;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
 
	else if ((p3waytrip == 2)&&(classes == 2)&&(booking == 'B' || booking == 'b')){
		p3finalval = 19000;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	if ((p4waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p4finalval = 4543;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 2)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p4finalval = 9086;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 1)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
		p4finalval = 9500;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	else if ((p4waytrip == 2)&&(classes == 2)&&(booking == 'B' || booking == 'b')){
		p4finalval = 19000;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	if ((p5waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p5finalval = 4543;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 2)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p5finalval = 9086;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 1)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
		p5finalval = 9500;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
	else if ((p5waytrip == 2)&&(classes == 2)&&(booking == 'B' || booking == 'b')){
		p5finalval = 19000;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	if ((p6waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p6finalval = 4543;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p6finalval = 9086;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 1)&&(classes == 2)&&(booking == 'B' || booking == 'b')) {
		p6finalval = 9500;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
 
	else if ((p6waytrip == 2)&&(classes == 2)&&(booking == 'B' || booking == 'b')){
		p6finalval = 19000;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	if ((p7waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p7finalval = 4543;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	else if ((p7waytrip == 2)&&(classes == 1)&&(booking == 'B' || booking == 'b')){
		p7finalval = 9086;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	if ((p8waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p8finalval = 4543;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	else if ((p8waytrip == 2)&&(classes == 1)&&(booking == 'B' || booking == 'b')){
		p8finalval = 9086;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	if ((p9waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p9finalval = 4543;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	else if ((p9waytrip == 2)&&(classes == 1)&&(booking == 'B' || booking == 'b')){
		p9finalval = 9086;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	if ((p10waytrip == 1)&&(classes == 1)&&(booking == 'B' || booking == 'b')) {
		p10finalval = 4543;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	else if ((p10waytrip == 2)&&(classes == 2)&&(booking == 'B' ||booking == 'b')){
		p10finalval = 9086;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	if ((p1waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p1finalval = 5882;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}	
 
    else if ((p1waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')){
    	p1finalval = 11764;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 1)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
    	p1finalval = 13200;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 2)&&(classes == 2)&&(booking == 'C' || booking == 'c')){
		p1finalval = 26400;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	if ((p2waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p2finalval = 5882;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p2finalval = 11764;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 1)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
		p2finalval = 13200;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	else if ((p2waytrip == 2)&&(classes == 2)&&(booking == 'C' || booking == 'c')){
		p2finalval = 26400;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	if ((p3waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p3finalval = 5882;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p3finalval = 11764;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 1)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
		p3finalval = 13200;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
 
	else if ((p3waytrip == 2)&&(classes == 2)&&(booking == 'C' || booking == 'c')){
		p3finalval = 26400;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	if ((p4waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p4finalval = 5882;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p4finalval = 11764;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 1)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
		p4finalval = 13200;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	else if ((p4waytrip == 2)&&(classes == 2)&&(booking == 'C' || booking == 'c')){
		p4finalval = 26400;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	if ((p5waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p5finalval = 5882;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p5finalval = 11764;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 1)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
		p5finalval = 13200;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
	else if ((p5waytrip == 2)&&(classes == 2)&&(booking == 'C' || booking == 'c')){
		p5finalval = 26400;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	if ((p6waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p6finalval = 5882;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p6finalval = 11764;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 1)&&(classes == 2)&&(booking == 'C' || booking == 'c')) {
		p6finalval = 13200;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
 
	else if ((p6waytrip == 2)&&(classes == 2)&&(booking == 'C' || booking == 'c')){
		p6finalval = 26400;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	if ((p7waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p7finalval = 5882;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	else if ((p7waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')){
		p7finalval = 11764;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	if ((p8waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p8finalval = 5882;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	else if ((p8waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')){
		p8finalval = 11764;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	if ((p9waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p9finalval = 5882;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	else if ((p9waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')){
		p9finalval = 11764;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
 
	if ((p10waytrip == 1)&&(classes == 1)&&(booking == 'C' || booking == 'c')) {
		p10finalval = 5882;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	else if ((p10waytrip == 2)&&(classes == 1)&&(booking == 'C' || booking == 'c')){
		p10finalval = 11764;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	if ((p1waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p1finalval = 4096;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}	
 
    else if ((p1waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')){
    	p1finalval = 8192;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 1)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
    	p1finalval = 9230;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 2)&&(classes == 2)&&(booking == 'D' || booking == 'd')){
		p1finalval = 18460;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	if ((p2waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p2finalval = 4096;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p2finalval = 8192;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 1)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
		p2finalval = 9230;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	else if ((p2waytrip == 2)&&(classes == 2)&&(booking == 'D' || booking == 'd')){
		p2finalval = 18460;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	if ((p3waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p3finalval = 4096;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p3finalval = 8192;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 1)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
		p3finalval = 9230;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
 
	else if ((p3waytrip == 2)&&(classes == 2)&&(booking == 'D' || booking == 'd')){
		p3finalval = 18460;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	if ((p4waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p4finalval = 4096;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p4finalval = 8192;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 1)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
		p4finalval = 9230;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	else if ((p4waytrip == 2)&&(classes == 2)&&(booking == 'D' || booking == 'd')){
		p4finalval = 18460;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	if ((p5waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p5finalval = 4096;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p5finalval = 8192;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 1)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
		p5finalval = 9230;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
	else if ((p5waytrip == 2)&&(classes == 2)&&(booking == 'D' || booking == 'd')){
		p5finalval = 18460;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	if ((p6waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p6finalval = 4096;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p6finalval = 8192;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 1)&&(classes == 2)&&(booking == 'D' || booking == 'd')) {
		p6finalval = 9230;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
 
	else if ((p6waytrip == 2)&&(classes == 2)&&(booking == 'D' || booking == 'd')){
		p6finalval = 18460;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	if ((p7waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p7finalval = 4096;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	else if ((p7waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')){
		p7finalval = 8192;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	if ((p8waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p8finalval = 4096;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	else if ((p8waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')){
		p8finalval = 8192;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	if ((p9waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p9finalval = 4096;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	else if ((p9waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')){
		p9finalval = 8192;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
 
	if ((p10waytrip == 1)&&(classes == 1)&&(booking == 'D' || booking == 'd')) {
		p10finalval = 4096;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	else if ((p10waytrip == 2)&&(classes == 1)&&(booking == 'D' || booking == 'd')){
		p10finalval = 8192;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	if ((p1waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p1finalval = 6199;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}	
 
    else if ((p1waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')){
    	p1finalval = 12398;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 1)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
    	p1finalval = 12150;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 2)&&(classes == 2)&&(booking == 'E' || booking == 'e')){
		p1finalval = 24300;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	if ((p2waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p2finalval = 6199;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p2finalval = 12398;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 1)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
		p2finalval = 12150;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	else if ((p2waytrip == 2)&&(classes == 2)&&(booking == 'E' || booking == 'e')){
		p2finalval = 24300;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
 
	if ((p3waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p3finalval = 6199;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p3finalval = 12398;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 1)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
		p3finalval = 12150;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
 
	else if ((p3waytrip == 2)&&(classes == 2)&&(booking == 'E' || booking == 'e')){
		p3finalval = 24300;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	if ((p4waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p4finalval = 6199;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p4finalval = 12398;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 1)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
		p4finalval = 12150;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	else if ((p4waytrip == 2)&&(classes == 2)&&(booking == 'E' || booking == 'e')){
		p4finalval = 24300;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	if ((p5waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p5finalval = 6199;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p5finalval = 12398;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 1)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
		p5finalval = 12150;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
	else if ((p5waytrip == 2)&&(classes == 2)&&(booking == 'E' || booking == 'e')){
		p5finalval = 24300;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	if ((p6waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p6finalval = 6199;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p6finalval = 12398;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 1)&&(classes == 2)&&(booking == 'E' || booking == 'e')) {
		p6finalval = 12150;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
 
	else if ((p6waytrip == 2)&&(classes == 2)&&(booking == 'E' || booking == 'e')){
		p6finalval = 24300;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	if ((p7waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p7finalval = 6199;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	else if ((p7waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')){
		p7finalval = 12398;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	if ((p8waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p8finalval = 6199;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	else if ((p8waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')){
		p8finalval = 12398;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	if ((p9waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p9finalval = 6199;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	else if ((p9waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')){
		p9finalval = 12398;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
 
	if ((p10waytrip == 1)&&(classes == 1)&&(booking == 'E' || booking == 'e')) {
		p10finalval = 6199;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	else if ((p10waytrip == 2)&&(classes == 1)&&(booking == 'E' || booking == 'e')){
		p10finalval = 12398;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	if ((p1waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p1finalval = 5699;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}	
 
    else if ((p1waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')){
    	p1finalval = 11398;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 1)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
    	p1finalval = 10850;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 2)&&(classes == 2)&&(booking == 'F' || booking == 'f')){
		p1finalval = 21700;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	if ((p2waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p2finalval = 5699;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p2finalval = 11398;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 1)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
		p2finalval = 10850;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 2)&&(booking == 'F' || booking == 'f')){
		p2finalval = 21700;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	if ((p3waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p3finalval = 5699;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p3finalval = 11398;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 1)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
		p3finalval = 10850;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
 
	else if ((p3waytrip == 2)&&(classes == 2)&&(booking == 'F' || booking == 'f')){
		p3finalval = 21700;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	if ((p4waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p4finalval = 5699;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p4finalval = 11398;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 1)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
		p4finalval = 10850;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	else if ((p4waytrip == 2)&&(classes == 2)&&(booking == 'F' || booking == 'f')){
		p4finalval = 21700;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	if ((p5waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p5finalval = 5699;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p5finalval = 11398;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 1)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
		p5finalval = 10850;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
	else if ((p5waytrip == 2)&&(classes == 2)&&(booking == 'F' || booking == 'f')){
		p5finalval = 21700;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	if ((p6waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p6finalval = 5699;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p6finalval = 11398;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 1)&&(classes == 2)&&(booking == 'F' || booking == 'f')) {
		p6finalval = 10850;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
 
	else if ((p6waytrip == 2)&&(classes == 2)&&(booking == 'F' || booking == 'f')){
		p6finalval = 21700;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	if ((p7waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p7finalval = 5699;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	else if ((p7waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')){
		p7finalval = 11398;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	if ((p8waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p8finalval = 5699;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	else if ((p8waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')){
		p8finalval = 11398;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	if ((p9waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p9finalval = 5699;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	else if ((p9waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')){
		p9finalval = 11398;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
 
	if ((p10waytrip == 1)&&(classes == 1)&&(booking == 'F' || booking == 'f')) {
		p10finalval = 5699;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	else if ((p10waytrip == 2)&&(classes == 1)&&(booking == 'F' || booking == 'f')){
		p10finalval = 11398;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	if ((p1waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p1finalval = 6899;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}	
 
    else if ((p1waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')){
    	p1finalval = 13798;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 1)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
    	p1finalval = 13110;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 2)&&(classes == 2)&&(booking == 'G' || booking == 'g')){
		p1finalval = 26220;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	if ((p2waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p2finalval = 6899;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p2finalval = 13798;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 1)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
		p2finalval = 13110;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 2)&&(booking == 'G' || booking == 'g')){
		p2finalval = 26220;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	if ((p3waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p3finalval = 6899;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p3finalval = 13798;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 1)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
		p3finalval = 13110;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
 
	else if ((p3waytrip == 2)&&(classes == 2)&&(booking == 'G' || booking == 'g')){
		p3finalval = 26220;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	if ((p4waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p4finalval = 6899;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p4finalval = 13798;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 1)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
		p4finalval = 13110;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	else if ((p4waytrip == 2)&&(classes == 2)&&(booking == 'G' || booking == 'g')){
		p4finalval = 26220;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	if ((p5waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p5finalval = 6899;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p5finalval = 13798;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 1)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
		p5finalval = 13110;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
	else if ((p5waytrip == 2)&&(classes == 2)&&(booking == 'G' || booking == 'g')){
		p5finalval = 26220;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	if ((p6waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p6finalval = 6899;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p6finalval = 13798;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 1)&&(classes == 2)&&(booking == 'G' || booking == 'g')) {
		p6finalval = 13110;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
 
	else if ((p6waytrip == 2)&&(classes == 2)&&(booking == 'G' || booking == 'g')){
		p6finalval = 26220;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	if ((p7waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p7finalval = 6899;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	else if ((p7waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')){
		p7finalval = 13798;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	if ((p8waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p8finalval = 6899;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	else if ((p8waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')){
		p8finalval = 13798;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	if ((p9waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p9finalval = 6899;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	else if ((p9waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')){
		p9finalval = 13798;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
 
	if ((p10waytrip == 1)&&(classes == 1)&&(booking == 'G' || booking == 'g')) {
		p10finalval = 6899;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	else if ((p10waytrip == 2)&&(classes == 1)&&(booking == 'G' || booking == 'g')){
		p10finalval = 13798;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	if ((p1waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p1finalval = 12500;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}	
 
    else if ((p1waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')){
    	p1finalval = 25000;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 1)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
    	p1finalval = 23850;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 2)&&(classes == 2)&&(booking == 'H' || booking == 'h')){
		p1finalval = 47700;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	if ((p2waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p2finalval = 12500;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p2finalval = 25000;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 1)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
		p2finalval = 23850;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 2)&&(booking == 'H' || booking == 'h')){
		p2finalval = 47700;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	if ((p3waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p3finalval = 12500;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p3finalval = 25000;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 1)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
		p3finalval = 23850;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
 
	else if ((p3waytrip == 2)&&(classes == 2)&&(booking == 'H' || booking == 'h')){
		p3finalval = 47700;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	if ((p4waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p4finalval = 12500;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p4finalval = 25000;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 1)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
		p4finalval = 23850;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	else if ((p4waytrip == 2)&&(classes == 2)&&(booking == 'H' || booking == 'h')){
		p4finalval = 47700;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	if ((p5waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p5finalval = 12500;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p5finalval = 25000;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 1)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
		p5finalval = 23850;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
	else if ((p5waytrip == 2)&&(classes == 2)&&(booking == 'H' || booking == 'h')){
		p5finalval = 47700;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	if ((p6waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p6finalval = 12500;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p6finalval = 25000;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 1)&&(classes == 2)&&(booking == 'H' || booking == 'h')) {
		p6finalval = 23850;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 2)&&(booking == 'H' || booking == 'h')){
		p6finalval = 47700;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	if ((p7waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p7finalval = 12500;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	else if ((p7waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')){
		p7finalval = 25000;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	if ((p8waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p8finalval = 12500;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	else if ((p8waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')){
		p8finalval = 25000;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	if ((p9waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p9finalval = 12500;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	else if ((p9waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')){
		p9finalval = 25000;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
 
	if ((p10waytrip == 1)&&(classes == 1)&&(booking == 'H' || booking == 'h')) {
		p10finalval = 12500;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	else if ((p10waytrip == 2)&&(classes == 1)&&(booking == 'H' || booking == 'h')){
		p10finalval = 25000;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	if ((p1waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p1finalval = 24800;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}	
 
    else if ((p1waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')){
    	p1finalval = 49600;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 1)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
    	p1finalval = 31450;
    	cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	else if ((p1waytrip == 2)&&(classes == 2)&&(booking == 'I' || booking == 'i')){
		p1finalval = 62900;
		cout<<"Passenger 1 class fare: "<<p1finalval<<endl;
	}
 
	if ((p2waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p2finalval = 24800;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p2finalval = 49600;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 1)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
		p2finalval = 31450;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	else if ((p2waytrip == 2)&&(classes == 2)&&(booking == 'I' || booking == 'i')){
		p2finalval = 62900;
		cout<<"Passenger 2 class fare: "<<p2finalval<<endl;
	}
 
	if ((p3waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p3finalval = 24800;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p3finalval = 49600;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	else if ((p3waytrip == 1)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
		p3finalval = 31450;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
 
	else if ((p3waytrip == 2)&&(classes == 2)&&(booking == 'I' || booking == 'i')){
		p3finalval = 62900;
		cout<<"Passenger 3 class fare: "<<p3finalval<<endl;
	}
 
	if ((p4waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p4finalval = 24800;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p4finalval = 49600;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
	else if ((p4waytrip == 1)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
		p4finalval = 31450;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	else if ((p4waytrip == 2)&&(classes == 2)&&(booking == 'I' || booking == 'i')){
		p4finalval = 62900;
		cout<<"Passenger 4 class fare: "<<p4finalval<<endl;
	}
 
 
	if ((p5waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p5finalval = 24800;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p5finalval = 49600;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	else if ((p5waytrip == 1)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
		p5finalval = 31450;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
 
	else if ((p5waytrip == 2)&&(classes == 2)&&(booking == 'I' || booking == 'i')){
		p5finalval = 62900;
		cout<<"Passenger 5 class fare: "<<p5finalval<<endl;
	}
 
	if ((p6waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p6finalval = 24800;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p6finalval = 49600;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 1)&&(classes == 2)&&(booking == 'I' || booking == 'i')) {
		p6finalval = 31450;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	else if ((p6waytrip == 2)&&(classes == 2)&&(booking == 'I' || booking == 'i')){
		p6finalval = 62900;
		cout<<"Passenger 6 class fare: "<<p6finalval<<endl;
	}
 
	if ((p7waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p7finalval = 24800;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	else if ((p7waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')){
		p7finalval = 49600;
		cout<<"Passenger 7 class fare: "<<p7finalval<<endl;
	}
 
 
	if ((p8waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p8finalval = 24800;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	else if ((p8waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')){
		p8finalval = 49600;
		cout<<"Passenger 8 class fare: "<<p8finalval<<endl;
	}
 
	if ((p9waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p9finalval = 24800;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
	else if ((p9waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')){
		p9finalval = 49600;
		cout<<"Passenger 9 class fare: "<<p9finalval<<endl;
	}
 
 
	if ((p10waytrip == 1)&&(classes == 1)&&(booking == 'I' || booking == 'i')) {
		p10finalval = 24800;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	else if ((p10waytrip == 2)&&(classes == 1)&&(booking == 'I' || booking == 'i')){
		p10finalval = 49600;
		cout<<"Passenger 10 class fare: "<<p10finalval<<endl;
	}
 
	cout<<endl;
	cout<<endl;
 
	switch (passengers) //payments
	{
		case 1:
			cout<<"Passenger Payment: ";
			cin>>p1payment;
			break;
		case 2:
			cout<<"First Passenger Payment: ";
			cin>>p1payment;
			cout<<"Second Passenger Payment: ";
			cin>>p2payment;
			break;
		case 3:
			cout<<"First Passenger Payment: ";
			cin>>p1payment;
			cout<<"Second Passenger Payment: ";
			cin>>p2payment;
			cout<<"Third Passenger Payment: ";
			cin>>p3payment;
			break;
		case 4:
			cout<<"First Passenger Payment: ";
			cin>>p1payment;
			cout<<"Second Passenger Payment: ";
			cin>>p2payment;
			cout<<"Third Passenger Payment: ";
			cin>>p3payment;
			cout<<"Fourth Passenger Payment: ";
			cin>>p4payment;
			break;
		case 5:
			cout<<"First Passenger Payment: ";
			cin>>p1payment;
			cout<<"Second Passenger Payment: ";
			cin>>p2payment;
			cout<<"Third Passenger Payment: ";
			cin>>p3payment;
			cout<<"Fourth Passenger Payment: ";
			cin>>p4payment;
			cout<<"Fifth Passenger Payment: ";
			cin>>p5payment;
			break;
		case 6:
			cout<<"First Passenger Payment: ";
			cin>>p1payment;
			cout<<"Second Passenger Payment: ";
			cin>>p2payment;
			cout<<"Third Passenger Payment: ";
			cin>>p3payment;
			cout<<"Fourth Passenger Payment: ";
			cin>>p4payment;
			cout<<"Fifth Passenger Payment: ";
			cin>>p5payment;
			cout<<"Sixth Passenger Payment: ";
			cin>>p6payment;
			break;
		case 7:
			cout<<"First Passenger Payment: ";
			cin>>p1payment;
			cout<<"Second Passenger Payment: ";
			cin>>p2payment;
			cout<<"Third Passenger Payment: ";
			cin>>p3payment;
			cout<<"Fourth Passenger Payment: ";
			cin>>p4payment;
			cout<<"Fifth Passenger Payment: ";
			cin>>p5payment;
			cout<<"Sixth Passenger Payment: ";
			cin>>p6payment;
			cout<<"Seventh Passenger Payment: ";
			cin>>p7payment;
			break;
		case 8:
			cout<<"First Passenger Payment: ";
			cin>>p1payment;
			cout<<"Second Passenger Payment: ";
			cin>>p2payment;
			cout<<"Third Passenger Payment: ";
			cin>>p3payment;
			cout<<"Fourth Passenger Payment: ";
			cin>>p4payment;
			cout<<"Fifth Passenger Payment: ";
			cin>>p5payment;
			cout<<"Sixth Passenger Payment: ";
			cin>>p6payment;
			cout<<"Seventh Passenger Payment: ";
			cin>>p7payment;
			cout<<"Eighth Passenger Payment: ";
			cin>>p8payment;
			break;
		case 9:
			cout<<"First Passenger Payment: ";
			cin>>p1payment;
			cout<<"Second Passenger Payment: ";
			cin>>p2payment;
			cout<<"Third Passenger Payment: ";
			cin>>p3payment;
			cout<<"Fourth Passenger Payment: ";
			cin>>p4payment;
			cout<<"Fifth Passenger Payment: ";
			cin>>p5payment;
			cout<<"Sixth Passenger Payment: ";
			cin>>p6payment;
			cout<<"Seventh Passenger Payment: ";
			cin>>p7payment;
			cout<<"Eighth Passenger Payment: ";
			cin>>p8payment;
			cout<<"ninth Passenger Payment: ";
			cin>>p9payment;
			break;
		case 10:
			cout<<"First Passenger Payment: ";
			cin>>p1payment;
			cout<<"Second Passenger Payment: ";
			cin>>p2payment;
			cout<<"Third Passenger Payment: ";
			cin>>p3payment;
			cout<<"Fourth Passenger Payment: ";
			cin>>p4payment;
			cout<<"Fifth Passenger Payment: ";
			cin>>p5payment;
			cout<<"Sixth Passenger Payment: ";
			cin>>p6payment;
			cout<<"Seventh Passenger Payment: ";
			cin>>p7payment;
			cout<<"Eighth Passenger Payment: ";
			cin>>p8payment;
			cout<<"ninth Passenger Payment: ";
			cin>>p9payment;
			cout<<"Tenth Passenger Payment: ";
			cin>>p10payment;
			break;
	}
 
	if ((booking == 'A' || booking == 'A')&&(classes == 1)) {
	p1exdbagfee = exd1baggage*1250;
	p2exdbagfee = exd2baggage*1250;
	p3exdbagfee = exd3baggage*1250;
	p4exdbagfee = exd4baggage*1250;
	p5exdbagfee = exd5baggage*1250;
	p6exdbagfee = exd6baggage*1250;
	p7exdbagfee = exd7baggage*1250;
	p8exdbagfee = exd8baggage*1250;
	p9exdbagfee = exd9baggage*1250;
	p10exdbagfee = exd10baggage*1250;
	}
 
 
	else if 
	((booking == 'B' || booking == 'b')&&(classes == 1)) {
	p1exdbagfee = exd1baggage*1250;
	p2exdbagfee = exd2baggage*1250;
	p3exdbagfee = exd3baggage*1250;
	p4exdbagfee = exd4baggage*1250;
	p5exdbagfee = exd5baggage*1250;
	p6exdbagfee = exd6baggage*1250;
	p7exdbagfee = exd7baggage*1250;
	p8exdbagfee = exd8baggage*1250;
	p9exdbagfee = exd9baggage*1250;
	p10exdbagfee = exd10baggage*1250;
	}
 
	else if 
	((booking == 'C' || booking == 'c')&&(classes == 1)) {
	p1exdbagfee = exd1baggage*1250;
	p2exdbagfee = exd2baggage*1250;
	p3exdbagfee = exd3baggage*1250;
	p4exdbagfee = exd4baggage*1250;
	p5exdbagfee = exd5baggage*1250;
	p6exdbagfee = exd6baggage*1250;
	p7exdbagfee = exd7baggage*1250;
	p8exdbagfee = exd8baggage*1250;
	p9exdbagfee = exd9baggage*1250;
	p10exdbagfee = exd10baggage*1250;
	}
 
	else if 
	((booking == 'D' || booking == 'd')&&(classes == 1)) {
	p1exdbagfee = exd1baggage*1250;
	p2exdbagfee = exd2baggage*1250;
	p3exdbagfee = exd3baggage*1250;
	p4exdbagfee = exd4baggage*1250;
	p5exdbagfee = exd5baggage*1250;
	p6exdbagfee = exd6baggage*1250;
	p7exdbagfee = exd7baggage*1250;
	p8exdbagfee = exd8baggage*1250;
	p9exdbagfee = exd9baggage*1250;
	p10exdbagfee = exd10baggage*1250;
	}
 
	else if 
	((booking == 'E' || booking == 'e')&&(classes == 1)) {
	p1exdbagfee = exd1baggage*1250;
	p2exdbagfee = exd2baggage*1250;
	p3exdbagfee = exd3baggage*1250;
	p4exdbagfee = exd4baggage*1250;
	p5exdbagfee = exd5baggage*1250;
	p6exdbagfee = exd6baggage*1250;
	p7exdbagfee = exd7baggage*1250;
	p8exdbagfee = exd8baggage*1250;
	p9exdbagfee = exd9baggage*1250;
	p10exdbagfee = exd10baggage*1250;
	}
 
	else if 
	((booking == 'F' || booking == 'f')&&(classes == 1)) {
	p1exdbagfee = exd1baggage*1250;
	p2exdbagfee = exd2baggage*1250;
	p3exdbagfee = exd3baggage*1250;
	p4exdbagfee = exd4baggage*1250;
	p5exdbagfee = exd5baggage*1250;
	p6exdbagfee = exd6baggage*1250;
	p7exdbagfee = exd7baggage*1250;
	p8exdbagfee = exd8baggage*1250;
	p9exdbagfee = exd9baggage*1250;
	p10exdbagfee = exd10baggage*1250;
	}
 
	else if 
	((booking == 'G' || booking == 'g')&&(classes == 1)) {
	p1exdbagfee = exd1baggage*1250;
	p2exdbagfee = exd2baggage*1250;
	p3exdbagfee = exd3baggage*1250;
	p4exdbagfee = exd4baggage*1250;
	p5exdbagfee = exd5baggage*1250;
	p6exdbagfee = exd6baggage*1250;
	p7exdbagfee = exd7baggage*1250;
	p8exdbagfee = exd8baggage*1250;
	p9exdbagfee = exd9baggage*1250;
	p10exdbagfee = exd10baggage*1250;
	}
 
	else if 
	((booking == 'H' || booking == 'h')&&(classes == 1)) {
	p1exdbagfee = exd1baggage*1250;
	p2exdbagfee = exd2baggage*1250;
	p3exdbagfee = exd3baggage*1250;
	p4exdbagfee = exd4baggage*1250;
	p5exdbagfee = exd5baggage*1250;
	p6exdbagfee = exd6baggage*1250;
	p7exdbagfee = exd7baggage*1250;
	p8exdbagfee = exd8baggage*1250;
	p9exdbagfee = exd9baggage*1250;
	p10exdbagfee = exd10baggage*1250;
	}
 
	else if 
	((booking == 'I' || booking == 'i')&&(classes == 1)) {
	p1exdbagfee = exd1baggage*1250;
	p2exdbagfee = exd2baggage*1250;
	p3exdbagfee = exd3baggage*1250;
	p4exdbagfee = exd4baggage*1250;
	p5exdbagfee = exd5baggage*1250;
	p6exdbagfee = exd6baggage*1250;
	p7exdbagfee = exd7baggage*1250;
	p8exdbagfee = exd8baggage*1250;
	p9exdbagfee = exd9baggage*1250;
	p10exdbagfee = exd10baggage*1250;
	}
 
	if ((booking == 'A' || booking == 'a')&&(classes == 2)) {
	p1exdbagfee = exd1baggage*1450;
	p2exdbagfee = exd2baggage*1450;
	p3exdbagfee = exd3baggage*1450;
	p4exdbagfee = exd4baggage*1450;
	p5exdbagfee = exd5baggage*1450;
	p6exdbagfee = exd6baggage*1450;
	p7exdbagfee = exd7baggage*1450;
	p8exdbagfee = exd8baggage*1450;
	p9exdbagfee = exd9baggage*1450;
	p10exdbagfee = exd10baggage*1450;
	}
 
	else if 
	((booking == 'B' || booking == 'b')&&(classes == 2)) {
	p1exdbagfee = exd1baggage*1450;
	p2exdbagfee = exd2baggage*1450;
	p3exdbagfee = exd3baggage*1450;
	p4exdbagfee = exd4baggage*1450;
	p5exdbagfee = exd5baggage*1450;
	p6exdbagfee = exd6baggage*1450;
	p7exdbagfee = exd7baggage*1450;
	p8exdbagfee = exd8baggage*1450;
	p9exdbagfee = exd9baggage*1450;
	p10exdbagfee = exd10baggage*1450;
	}
 
	else if 
	((booking == 'C' || booking == 'c')&&(classes == 2)) {
	p1exdbagfee = exd1baggage*1450;
	p2exdbagfee = exd2baggage*1450;
	p3exdbagfee = exd3baggage*1450;
	p4exdbagfee = exd4baggage*1450;
	p5exdbagfee = exd5baggage*1450;
	p6exdbagfee = exd6baggage*1450;
	p7exdbagfee = exd7baggage*1450;
	p8exdbagfee = exd8baggage*1450;
	p9exdbagfee = exd9baggage*1450;
	p10exdbagfee = exd10baggage*1450;
	}
 
	else if 
	((booking == 'D' || booking == 'd')&&(classes == 2)) {
	p1exdbagfee = exd1baggage*1450;
	p2exdbagfee = exd2baggage*1450;
	p3exdbagfee = exd3baggage*1450;
	p4exdbagfee = exd4baggage*1450;
	p5exdbagfee = exd5baggage*1450;
	p6exdbagfee = exd6baggage*1450;
	p7exdbagfee = exd7baggage*1450;
	p8exdbagfee = exd8baggage*1450;
	p9exdbagfee = exd9baggage*1450;
	p10exdbagfee = exd10baggage*1450;
	}
 
	else if 
	((booking == 'E' || booking == 'e')&&(classes == 2)) {
	p1exdbagfee = exd1baggage*1450;
	p2exdbagfee = exd2baggage*1450;
	p3exdbagfee = exd3baggage*1450;
	p4exdbagfee = exd4baggage*1450;
	p5exdbagfee = exd5baggage*1450;
	p6exdbagfee = exd6baggage*1450;
	p7exdbagfee = exd7baggage*1450;
	p8exdbagfee = exd8baggage*1450;
	p9exdbagfee = exd9baggage*1450;
	p10exdbagfee = exd10baggage*1450;
	}
 
	else if 
	((booking == 'F' || booking == 'f')&&(classes == 2)) {
	p1exdbagfee = exd1baggage*1450;
	p2exdbagfee = exd2baggage*1450;
	p3exdbagfee = exd3baggage*1450;
	p4exdbagfee = exd4baggage*1450;
	p5exdbagfee = exd5baggage*1450;
	p6exdbagfee = exd6baggage*1450;
	p7exdbagfee = exd7baggage*1450;
	p8exdbagfee = exd8baggage*1450;
	p9exdbagfee = exd9baggage*1450;
	p10exdbagfee = exd10baggage*1450;
	}
 
	else if 
	((booking == 'G' || booking == 'g')&&(classes == 2)) {
	p1exdbagfee = exd1baggage*1450;
	p2exdbagfee = exd2baggage*1450;
	p3exdbagfee = exd3baggage*1450;
	p4exdbagfee = exd4baggage*1450;
	p5exdbagfee = exd5baggage*1450;
	p6exdbagfee = exd6baggage*1450;
	p7exdbagfee = exd7baggage*1450;
	p8exdbagfee = exd8baggage*1450;
	p9exdbagfee = exd9baggage*1450;
	p10exdbagfee = exd10baggage*1450;
	}
 
	else if 
	((booking == 'H' || booking == 'h')&&(classes == 2)) {
	p1exdbagfee = exd1baggage*1450;
	p2exdbagfee = exd2baggage*1450;
	p3exdbagfee = exd3baggage*1450;
	p4exdbagfee = exd4baggage*1450;
	p5exdbagfee = exd5baggage*1450;
	p6exdbagfee = exd6baggage*1450;
	p7exdbagfee = exd7baggage*1450;
	p8exdbagfee = exd8baggage*1450;
	p9exdbagfee = exd9baggage*1450;
	p10exdbagfee = exd10baggage*1450;
	}
 
	else if 
	((booking == 'I' || booking == 'i')&&(classes == 2)) {
	p1exdbagfee = exd1baggage*1450;
	p2exdbagfee = exd2baggage*1450;
	p3exdbagfee = exd3baggage*1450;
	p4exdbagfee = exd4baggage*1450;
	p5exdbagfee = exd5baggage*1450;
	p6exdbagfee = exd6baggage*1450;
	p7exdbagfee = exd7baggage*1450;
	p8exdbagfee = exd8baggage*1450;
	p9exdbagfee = exd9baggage*1450;
	p10exdbagfee = exd10baggage*1450;
	}
 
	cout<<endl;
 
 
 
 
	cout<<endl;
 
	    p1discounts = GroupResDisFac+p1sencidisfac+p1lessdisfac;
		p1totalfees = p1finalval+p1insuranceout+p1exdbagfee;
		p1semicharge = p1discounts*p1totalfees;
		p1finalcharge = p1totalfees-p1semicharge;
		p1totalVAT = p1VAT*p1finalcharge;
		p1totalcharge = p1finalcharge+p1totalVAT;
 
		p2discounts = GroupResDisFac+p2sencidisfac+p2lessdisfac;
		p2totalfees = p2finalval+p2insuranceout+p2exdbagfee;
		p2semicharge = p2discounts*p2totalfees;
		p2finalcharge = p2totalfees-p2semicharge;
		p2totalVAT = p2VAT*p2finalcharge;
		p2totalcharge = p2finalcharge+p2totalVAT;
 
		p3discounts = GroupResDisFac+p3sencidisfac+p3lessdisfac;
		p3totalfees = p3finalval+p3insuranceout+p3exdbagfee;
		p3semicharge = p3discounts*p3totalfees;
		p3finalcharge = p3totalfees-p3semicharge;
		p3totalVAT = p3VAT*p3finalcharge;
		p3totalcharge = p3finalcharge+p3totalVAT;
 
		p4discounts = GroupResDisFac+p4sencidisfac+p4lessdisfac;
		p4totalfees = p4finalval+p4insuranceout+p4exdbagfee;
		p4semicharge = p4discounts*p4totalfees;
		p4finalcharge = p4totalfees-p4semicharge;
		p4totalVAT = p4VAT*p4finalcharge;
		p4totalcharge = p4finalcharge+p4totalVAT;
 
		p5discounts = GroupResDisFac+p5sencidisfac+p5lessdisfac;
		p5totalfees = p5finalval+p5insuranceout+p5exdbagfee;
		p5semicharge = p5discounts*p5totalfees;
		p5finalcharge = p5totalfees-p5semicharge;
		p5totalVAT = p5VAT*p5finalcharge;
		p5totalcharge = p5finalcharge+p5totalVAT;
 
		p6discounts = GroupResDisFac+p6sencidisfac+p6lessdisfac;
		p6totalfees = p6finalval+p6insuranceout+p6exdbagfee;
		p6semicharge = p6discounts*p6totalfees;
		p6finalcharge = p6totalfees-p6semicharge;
		p6totalVAT = p6VAT*p6finalcharge;
		p6totalcharge = p6finalcharge+p6totalVAT;
 
		p7discounts = GroupResDisFac+p7sencidisfac+p7lessdisfac;
		p7totalfees = p7finalval+p7insuranceout+p7exdbagfee;
		p7semicharge = p7discounts*p7totalfees;
		p7finalcharge = p7totalfees-p7semicharge;
		p7totalVAT = p7VAT*p7finalcharge;
		p7totalcharge = p7finalcharge+p7totalVAT;
 
		p8discounts = GroupResDisFac+p8sencidisfac+p8lessdisfac;
		p8totalfees = p8finalval+p8insuranceout+p8exdbagfee;
		p8semicharge = p8discounts*p8totalfees;
		p8finalcharge = p8totalfees-p8semicharge;
		p8totalVAT = p8VAT*p8finalcharge;
		p8totalcharge = p8finalcharge+p8totalVAT;
 
		p9discounts = GroupResDisFac+p9sencidisfac+p9lessdisfac;
		p9totalfees = p9finalval+p9insuranceout+p8exdbagfee;
		p9semicharge = p9discounts*p9totalfees;
		p9finalcharge = p9totalfees-p9semicharge;
		p9totalVAT = p9VAT*p9finalcharge;
		p9totalcharge = p9finalcharge+p9totalVAT;
 
		p10discounts = GroupResDisFac+p10sencidisfac+p10lessdisfac;
		p10totalfees = p10finalval+p10insuranceout+p10exdbagfee;
		p10semicharge = p10discounts*p10totalfees;
		p10finalcharge = p10totalfees-p10semicharge;
		p10totalVAT = p10VAT*p10finalcharge;
		p10totalcharge = p10finalcharge+p10totalVAT;
 
		cout<<endl;
 
	while ((p1payment < p1totalcharge)&&(passengers >= 1)) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p1totalcharge << endl;
			cout<<"Passenger 1 payment: ";
			cin>>p1payment;
			cout<<endl;
		}
 
	while ((p2payment < p2totalcharge)&&(passengers > 1)) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p2totalcharge << endl;
			cout<<"Passenger 2 payment: ";
			cin>>p2payment;
			cout<<endl;
		}
 
	while ((p3payment < p3totalcharge)&&(passengers > 2)) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p3totalcharge << endl;
			cout<<"Passenger 3 payment: ";
			cin>>p3payment;
			cout<<endl;
		}
 
	while ((p4payment < p4totalcharge)&&(passengers > 3)) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p4totalcharge << endl;
			cout<<"Passenger 4 payment: ";
			cin>>p4payment;
			cout<<endl;
		}
 
	while ((p5payment < p5totalcharge)&&(passengers > 4)) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p5totalcharge << endl;
			cout<<"Passenger 5 payment: ";
			cin>>p5payment;
			cout<<endl;
		}
 
	while ((p6payment < p6totalcharge&&(passengers > 5))) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p6totalcharge << endl;
			cout<<"Passenger 6 payment: ";
			cin>>p6payment;
			cout<<endl;
		}
 
	while ((p7payment < p7totalcharge)&&(passengers > 6)) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p7totalcharge << endl;
			cout<<"Passenger 7 payment: ";
			cin>>p7payment;
			cout<<endl;
		}
 
	while ((p8payment < p8totalcharge)&&(passengers > 7)) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p8totalcharge << endl;
			cout<<"Passenger 8 payment: ";
			cin>>p8payment;
			cout<<endl;
		}
 
	while ((p9payment < p9totalcharge)&&(passengers > 8)) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p9totalcharge << endl;
			cout<<"Passenger 9 payment: ";
			cin>>p9payment;
			cout<<endl;
		}
 
	while ((p10payment < p10totalcharge)&&(passengers > 9)) {
			cout<<"Invalid Amount, Your Paymnet should be greater than or equal to " << p10totalcharge << endl;
			cout<<"Passenger 10 payment: ";
			cin>>p10payment;
			cout<<endl;
		}
 
		p1change = p1payment-p1totalcharge;
		p2change = p2payment-p2totalcharge;
		p3change = p3payment-p3totalcharge;
	    p4change = p4payment-p4totalcharge;
        p5change = p5payment-p5totalcharge;
        p6change = p6payment-p6totalcharge;
        p7change = p7payment-p7totalcharge;
        p8change = p8payment-p8totalcharge;
        p9change = p9payment-p9totalcharge;
        p10change = p10payment-p10totalcharge;
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 1)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t              "<<p1totalcharge<<"\t              "<<p1change<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 1)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 2)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")\t      "<<p1totalcharge<<"\t     "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")\t      "<<p2totalcharge<<"\t     "<<p2change<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 2)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 3)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 3)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 4)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 4)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 5)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 5)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 6)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	if ((booking == 'A' || booking == 'a')&&(passengers == 7)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 8)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 9)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
	}
 
	else if ((booking == 'A' || booking == 'a')&&(passengers == 10)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
		cout<<"Passenger 10:"<<pn10<<"("<<p10<<")              "<<p10totalcharge<<"            "<<p10change<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 1)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t              "<<p1totalcharge<<"\t              "<<p1change<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 1)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 2)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t        "<<p1totalcharge<<"\t           "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")""\t        "<<p2totalcharge<<"\t           "<<p2change<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 2)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 3)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 3)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 4)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 4)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 5)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 5)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 6)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	if ((booking == 'B' || booking == 'b')&&(passengers == 7)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 8)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
	}
 
	else if ((booking == 'B')&&(passengers == 9)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
	}
 
	else if ((booking == 'B' || booking == 'b')&&(passengers == 10)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
		cout<<"Passenger 10:"<<pn10<<"("<<p10<<")              "<<p10totalcharge<<"            "<<p10change<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 1)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t              "<<p1totalcharge<<"\t              "<<p1change<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 1)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 2)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t        "<<p1totalcharge<<"\t           "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")""\t        "<<p2totalcharge<<"\t           "<<p2change<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 2)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 3)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 3)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 4)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 4)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 5)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 5)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 6)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	if ((booking == 'C' || booking == 'c')&&(passengers == 7)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 8)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 9)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
	}
 
	else if ((booking == 'C' || booking == 'c')&&(passengers == 10)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
		cout<<"Passenger 10:"<<pn10<<"("<<p10<<")              "<<p10totalcharge<<"            "<<p10change<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 1)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t              "<<p1totalcharge<<"\t              "<<p1change<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 1)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 2)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t        "<<p1totalcharge<<"\t           "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")""\t        "<<p2totalcharge<<"\t           "<<p2change<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 2)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 3)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 3)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 4)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 4)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 5)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 5)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 6)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	if ((booking == 'D' || booking == 'd')&&(passengers == 7)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 8)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 9)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
	}
 
	else if ((booking == 'D' || booking == 'd')&&(passengers == 10)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
		cout<<"Passenger 10:"<<pn10<<"("<<p10<<")              "<<p10totalcharge<<"            "<<p10change<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 1)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t              "<<p1totalcharge<<"\t              "<<p1change<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 1)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 2)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t        "<<p1totalcharge<<"\t           "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")""\t        "<<p2totalcharge<<"\t           "<<p2change<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 2)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 3)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 3)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 4)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 4)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 5)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 5)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 6)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	if ((booking == 'E' || booking == 'e')&&(passengers == 7)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 8)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 9)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
	}
 
	else if ((booking == 'E' || booking == 'e')&&(passengers == 10)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
		cout<<"Passenger 10:"<<pn10<<"("<<p10<<")              "<<p10totalcharge<<"            "<<p10change<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 1)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t              "<<p1totalcharge<<"\t              "<<p1change<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 1)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 2)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t        "<<p1totalcharge<<"\t           "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")""\t        "<<p2totalcharge<<"\t           "<<p2change<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 2)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 3)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 3)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 4)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 4)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 5)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 5)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 6)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	if ((booking == 'F' || booking == 'f')&&(passengers == 7)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 8)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 9)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
	}
 
	else if ((booking == 'F' || booking == 'f')&&(passengers == 10)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
		cout<<"Passenger 10:"<<pn10<<"("<<p10<<")              "<<p10totalcharge<<"            "<<p10change<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 1)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t              "<<p1totalcharge<<"\t              "<<p1change<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 1)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 2)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t        "<<p1totalcharge<<"\t           "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")""\t        "<<p2totalcharge<<"\t           "<<p2change<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 2)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 3)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 3)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 4)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 4)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 5)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 5)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 6)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	if ((booking == 'G' || booking == 'g')&&(passengers == 7)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 8)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 9)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
	}
 
	else if ((booking == 'G' || booking == 'g')&&(passengers == 10)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
		cout<<"Passenger 10:"<<pn10<<"("<<p10<<")              "<<p10totalcharge<<"            "<<p10change<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 1)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t              "<<p1totalcharge<<"\t              "<<p1change<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 1)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 2)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t        "<<p1totalcharge<<"\t           "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")""\t        "<<p2totalcharge<<"\t           "<<p2change<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 2)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 3)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 3)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 4)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 4)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 5)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 5)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 6)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	if ((booking == 'H' || booking == 'h')&&(passengers == 7)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 8)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 9)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
	}
 
	else if ((booking == 'H' || booking == 'h')&&(passengers == 10)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
		cout<<"Passenger 10:"<<pn10<<"("<<p10<<")              "<<p10totalcharge<<"            "<<p10change<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 1)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t              "<<p1totalcharge<<"\t              "<<p1change<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 1)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 2)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")""\t        "<<p1totalcharge<<"\t           "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")""\t        "<<p2totalcharge<<"\t           "<<p2change<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 2)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 1:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 3)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 3)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 4)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 4)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 5)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 5)&&(classes == 2)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 6)&&(classes == 1)){
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
	}
 
	if ((booking == 'I' || booking == 'i')&&(passengers == 7)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 8)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 9)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
	}
 
	else if ((booking == 'I' || booking == 'i')&&(passengers == 10)&&(classes == 1)) {
		cout<<"==========================================================================================" <<endl;
		cout<<"            Name(age)          Total Charges       Change" <<endl;
		cout<<"Passenger 1:"<<pn1<<"("<<p1<<")              "<<p1totalcharge<<"            "<<p1change<<endl;
		cout<<"Passenger 2:"<<pn2<<"("<<p2<<")              "<<p2totalcharge<<"            "<<p2change<<endl;
		cout<<"Passenger 3:"<<pn3<<"("<<p3<<")              "<<p3totalcharge<<"            "<<p3change<<endl;
		cout<<"Passenger 4:"<<pn4<<"("<<p4<<")              "<<p4totalcharge<<"            "<<p4change<<endl;
		cout<<"Passenger 5:"<<pn5<<"("<<p5<<")              "<<p5totalcharge<<"            "<<p5change<<endl;
		cout<<"Passenger 6:"<<pn6<<"("<<p6<<")              "<<p6totalcharge<<"            "<<p6change<<endl;
		cout<<"Passenger 7:"<<pn7<<"("<<p7<<")              "<<p7totalcharge<<"            "<<p7change<<endl;
		cout<<"Passenger 8:"<<pn8<<"("<<p8<<")              "<<p8totalcharge<<"            "<<p8change<<endl;
		cout<<"Passenger 9:"<<pn9<<"("<<p9<<")              "<<p9totalcharge<<"            "<<p9change<<endl;
		cout<<"Passenger 10:"<<pn10<<"("<<p10<<")              "<<p10totalcharge<<"            "<<p10change<<endl;
	}
 
	cout<<endl;
 
	cout<<"Do you want to reserve again? (Y/N): ";
	cin>>ResAgain;
 
	switch (ResAgain)
	{
		case 'N': case 'n':
			cout<<endl;
			cout<<"Thank You For your Reservation" <<endl;
			break;
		case 'Y': case 'y':
			goto again;
			break;
	}
	return 0;
}