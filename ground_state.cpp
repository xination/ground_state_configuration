#include <iostream>
#include <iomanip>
#include <cstring>
#include <cctype>
#include <cstdlib>

using namespace std;

//----------GLOBAL variable-----------
char x_display[33];
char y_display[33];
char display[65];

int x_index  =   0;
int y_index  =   0;
//---------------------------------



//----------FUNCTION declaration------
void x_set_message();

void y_set_message();

void clean();
//-----------------------------------


int main()
{

    int proton_N  = 0;
    int neutron_N = 0;
    int atomic_N;

    clean(); // initial all array


    // showing welcome message

    cout << "|-----------------------------------------|\n";
    cout << "|                                         |\n";
    cout << "input the format 34P or x for another input method: ";


    // for 34P format input
    bool go_on = true;
    char element_name[5];

    char* atomic_num = new char [3];  //using new operator to create an array
    char* name= new char [3];

    cin.getline(element_name,5);
    cout <<"\n";


    // for another input method
    if( toupper(element_name[0])== 'X')
    {
        cout << "\n input the proton and neutron number:     ";
        cin >> proton_N;
        cin >> neutron_N;
        cout <<"\n\n";

        go_on = false;
    }

    int counting = 0;  // this is for determining where is alphabet, used in next if statement

    if( go_on)
    {
        for(int i=0; i<5; i++)
        {
            if( isdigit(element_name[i]) ) { atomic_num[i] = element_name[i]; counting++; }
            if( isalpha(element_name[i]) ) { name[i-counting] = toupper( element_name[i] );  }
        }



    // get the atomic number, from transfering char array to int
    atomic_N = atoi(atomic_num);

    // ps. when two string equal strcmp return 0
    if ( !strcmp(name, "H"))     { proton_N = 1; }
    if ( !strcmp(name, "HE"))    { proton_N = 2; }
    if ( !strcmp(name, "LI"))    { proton_N = 3; }
    if ( !strcmp(name, "BE"))    { proton_N = 4; }
    if ( !strcmp(name, "B"))     { proton_N = 5; }
    if ( !strcmp(name, "C"))     { proton_N = 6; }
    if ( !strcmp(name, "N"))     { proton_N = 7; }
    if ( !strcmp(name, "O"))     { proton_N = 8; }
    if ( !strcmp(name, "F"))     { proton_N = 9; }
    if ( !strcmp(name, "NE"))    { proton_N = 10; }

    if ( !strcmp(name, "NA"))    { proton_N = 11; }
    if ( !strcmp(name, "MG"))    { proton_N = 12; }
    if ( !strcmp(name, "AL"))    { proton_N = 13; }
    if ( !strcmp(name, "SI"))    { proton_N = 14; }
    if ( !strcmp(name, "P"))     { proton_N = 15; }
    if ( !strcmp(name, "S"))     { proton_N = 16; }
    if ( !strcmp(name, "Cl"))    { proton_N = 17; }
    if ( !strcmp(name, "AR"))    { proton_N = 18; }
    if ( !strcmp(name, "K"))     { proton_N = 19; }
    if ( !strcmp(name, "CA"))    { proton_N = 20; }

    if ( !strcmp(name, "SC"))    { proton_N = 21; }
    if ( !strcmp(name, "TI"))    { proton_N = 22; }
    if ( !strcmp(name, "V"))     { proton_N = 23; }
    if ( !strcmp(name, "CR"))    { proton_N = 24; }
    if ( !strcmp(name, "MN"))    { proton_N = 25; }
    if ( !strcmp(name, "FE"))    { proton_N = 26; }
    if ( !strcmp(name, "CO"))    { proton_N = 27; }
    if ( !strcmp(name, "NI"))    { proton_N = 28; }
    if ( !strcmp(name, "CU"))    { proton_N = 29; }
    if ( !strcmp(name, "ZN"))    { proton_N = 30; }

    if ( !strcmp(name, "GA"))    { proton_N = 31; }
    if ( !strcmp(name, "GE"))    { proton_N = 32; }

        neutron_N = atomic_N - proton_N;
    }

    //-------------------showing WARMing message

    if (proton_N == 0 || neutron_N == 0 ) { cout << " P or N is out of range...\n";  cout <<"reset again\n"; return 0;}
    if (proton_N > 32 ) { cout << "protron over 1p3/2 states\n"; }
    if (neutron_N > 32) { cout << "neutron over 1p3/2 states\n"; }

    //------------------------------------------------------------------------------------

    // start to display the shell model ~~

    cout << "1p3   ";
    for (int i = 29; i <33; i++)
    {

        if (proton_N >= i) {  x_set_message(); }

        else { y_set_message(); }

    }
    strcat(display,x_display); strcat(display,y_display); strcat(display,"___");
    cout <<left<<setw(38) <<display;
    clean();



    for (int i = 29; i <33; i++)
    {

        if (neutron_N >= i)  {  cout << "___*" ;    }
        else { cout << "___" ; }
    }
    cout << "___";

    cout << "\n";
    cout << "\n";





//------------------------------------------------------------------------------------
    cout << "0f7   ";
    for (int i = 21; i <29; i++)
    {
        if (proton_N >= i) {  x_set_message(); }

        else { y_set_message(); }
    }
    strcat(display,x_display); strcat(display,y_display); strcat(display,"___");
    cout <<left<<setw(38) <<display;
    clean();



    for (int i = 21; i <29; i++)
    {

        if (neutron_N >= i)  {  cout << "___*" ;    }
        else { cout << "___" ; }
    }
    cout << "__";

    cout << "\n";
    cout << "\n";
    cout << "\n";



//------------------------------------------------------------------------------------
    cout << "0d3   ";
    for (int i = 17; i <21; i++)
     {
        if (proton_N >= i) {  x_set_message(); }

        else { y_set_message(); }
    }
    strcat(display,x_display); strcat(display,y_display); strcat(display,"___");
    cout <<left<<setw(38) <<display;
    clean();

    for (int i = 17; i <21; i++)
    {

        if (neutron_N >= i)  {  cout << "___*" ;    }
        else { cout << "___" ; }
    }
    cout << "___";

    cout << "\n";
    cout << "\n";



//------------------------------------------------------------------------------------
    cout << "1s1   ";
    for (int i = 15; i <17; i++)
    {
        if (proton_N >= i) {  x_set_message(); }

        else { y_set_message(); }
    }
    strcat(display,x_display); strcat(display,y_display); strcat(display,"___");
    cout <<left<<setw(38) <<display;
    clean();

    for (int i = 15; i <17; i++)
    {

        if (neutron_N >= i)  {  cout << "___*" ;    }
        else { cout << "___" ; }
    }
    cout << "___";

    cout << "\n";
    cout << "\n";


//------------------------------------------------------------------------------------
    cout << "0d5   ";
    for (int i = 9; i <15; i++)
    {
        if (proton_N >= i) {  x_set_message(); }

        else { y_set_message(); }
    }
    strcat(display,x_display); strcat(display,y_display); strcat(display,"___");
    cout <<left<<setw(38) <<display;
    clean();

    for (int i = 9; i <15; i++)
    {

        if (neutron_N >= i)  {  cout << "___*" ;    }
        else { cout << "___" ; }
    }
    cout << "___";

    cout << "\n";
    cout << "\n";
    cout << "\n";




//------------------------------------------------------------------------------------
    cout << "0P1   ";
    for (int i = 7; i <9; i++)
    {
        if (proton_N >= i) {  x_set_message(); }

        else { y_set_message(); }
    }
    strcat(display,x_display); strcat(display,y_display); strcat(display,"___");
    cout <<left<<setw(38) <<display;
    clean();

    for (int i = 7; i <9; i++)
    {

        if (neutron_N >= i)  {  cout << "___*" ;    }
        else { cout << "___" ; }
    }
    cout << "___";

    cout << "\n";
    cout << "\n";
//------------------------------------------------------------------------------------
   cout << "0p3   ";
    for (int i = 3; i <7; i++)
    {
        if (proton_N >= i) {  x_set_message(); }

        else { y_set_message(); }
    }
    strcat(display,x_display); strcat(display,y_display); strcat(display,"___");
    cout <<left<<setw(38) <<display;
    clean();

    for (int i = 3; i <7; i++)
    {

        if (neutron_N >= i)  {  cout << "___*" ;    }
        else { cout << "___" ; }
    }
    cout << "___";



//------------------------------------------------------------------------------------
    cout << "\n";
    cout << "\n";

    cout << "0S1   ";
    for (int i = 1; i <3; i++)
    {
        if (proton_N >= i) {  x_set_message(); }

        else { y_set_message(); }
    }
    strcat(display,x_display); strcat(display,y_display); strcat(display,"___");
    cout <<left<<setw(38) <<display;
    clean();

    for (int i = 1; i <3; i++)
    {

        if (neutron_N >= i)  {  cout << "___*" ;    }
        else { cout << "___" ; }
    }
    cout << "___";

    cout << "\n";

//------------------------------------------------------------------------------------

    cout << "        proton " << proton_N <<"          " <<
    "              "<<
            "        neutron "<< neutron_N << endl;

    if (proton_N == 1 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "H"<<endl; }
    if (proton_N == 2 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "He"<<endl; }
    if (proton_N == 3 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Li"<<endl; }
    if (proton_N == 4 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Be"<<endl; }
    if (proton_N == 5 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "B"<<endl; }
    if (proton_N == 6 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "C"<<endl; }
    if (proton_N == 7 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "N"<<endl; }
    if (proton_N == 8 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "O"<<endl; }
    if (proton_N == 9 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "F"<<endl; }
    if (proton_N == 10 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Ne"<<endl; }
    if (proton_N == 11 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Na"<<endl; }
    if (proton_N == 12 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Mg"<<endl; }
    if (proton_N == 13 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Al"<<endl; }
    if (proton_N == 14 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Si"<<endl; }
    if (proton_N == 15 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "P"<<endl; }
    if (proton_N == 16 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "S"<<endl; }
    if (proton_N == 17 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Cl"<<endl; }
    if (proton_N == 18 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Ar"<<endl; }
    if (proton_N == 19 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "K"<<endl; }
    if (proton_N == 20 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Ca"<<endl; }
    if (proton_N == 21 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Sc"<<endl; }
    if (proton_N == 22 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Ti"<<endl; }
    if (proton_N == 23 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "V"<<endl; }
    if (proton_N == 24 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Cr"<<endl; }
    if (proton_N == 25 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Mn"<<endl; }
    if (proton_N == 26 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Fe"<<endl; }
    if (proton_N == 27 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Co"<<endl; }
    if (proton_N == 28 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Ni"<<endl; }
    if (proton_N == 29 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Cu"<<endl; }
    if (proton_N == 30 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Zn"<<endl; }
    if (proton_N == 31 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Ga"<<endl; }
    if (proton_N == 32 ) { cout <<right<<setw(35)<< (proton_N+neutron_N) << "Ge"<<endl; }



    return 0;
}


// display something....
// I would like to shorten the code.. so I write a function.
void x_set_message()
{
    x_display[x_index+0] = '_';
    x_display[x_index+1] = '_';
    x_display[x_index+2] = '_';
    x_display[x_index+3] = '*';
    x_index += 4;

}

// display something....
// I would like to shorten the code.. so I write a function.
void y_set_message()
{
    y_display[y_index+0] = '_';
    y_display[y_index+1] = '_';
    y_display[y_index+2] = '_';
    y_index += 3;
}



// for reset all arrays to NULL
void clean()
{
    for (int i = 0; i < 32; i ++) { x_display[i] = NULL; y_display[i] = NULL; }

    for (int j = 0; j< 64; j++) { display[j] = NULL; }

    x_index = 0;
    y_index = 0;
}
