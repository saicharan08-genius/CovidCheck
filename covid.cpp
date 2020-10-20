#include <iostream>
#include <string>

using namespace std;

string covstr;

string covstr1;

int covScr;

int covScr1;

int totalCovScr;

void
covidcheck1 ()
{
  cout << "Did you travel overseas in the past 6 to 10 months?" << endl;
  cin >> covstr;
  if (covstr.find ("yes") >= 0 || covstr.find ("Yes") >= 0
      || covstr.find ("ya") >= 0 || covstr.find ("Ya") >= 0
      || covstr.find ("yeah") >= 0 || covstr.find ("Yeah") >= 0
      || covstr.find ("yep") >= 0 || covstr.find ("Yep") >= 0
      || covstr.find ("yup") >= 0 || covstr.find ("Yup") >= 0)
    {
      covScr = covScr + 1;
    }
  else
    {
      covScr = covScr - 1;
    }
}

void
covidcheck2 ()
{
  cout << "Did you come in contact with a covid positive person?" << endl;
  cin >> covstr1;
  if (covstr.find ("yes") >= 0 || covstr.find ("Yes") >= 0
      || covstr.find ("ya") >= 0 || covstr.find ("Ya") >= 0
      || covstr.find ("yeah") >= 0 || covstr.find ("Yeah") >= 0
      || covstr.find ("yep") >= 0 || covstr.find ("Yep") >= 0
      || covstr.find ("yup") >= 0 || covstr.find ("Yup") >= 0)
    {
      covScr1 = covScr1 + 1;
    }
  else
    {
      covScr1 = covScr1 - 1;
    }
}

void
calcCovScore ()
{
  totalCovScr = covScr1 + covScr;
  if (totalCovScr == 2)
    {
      cout << "High covid-19 risk" << endl;
    }
  else if (totalCovScr == 0)
    {
      cout << "Moderate covid-19 risk" << endl;
    }
  else if (totalCovScr == -2)
    {
      cout << "Low covid-19 risk" << endl;
    }
}

void
whoInfo ()
{
  cout << "        WHO       COVID-19    GUIDLINES" << endl;
  cout << "1.Wash hands properly" << endl;
  cout << "use hand sanitizers frequently" << endl;
  cout << "Refrain from going to crowded places" << endl;
  cout << "Always were a mask" << endl;
  cout << "Practice social distancing" << endl;
  cout << "#stayhome #staysafe" << endl;
  cout << "source : who.int" << endl;
}

int
main ()
{
  covidcheck1 ();
  covidcheck2 ();
  calcCovScore ();
  whoInfo ();

  return 0;
}
