/**<
Patrick Roche
Exercise 10
555 Timer Astable multivibrator Calculations*/

/**< Preprocessor Directives */
#include <iostream>

using namespace std;

int main();
void timer555(double res1, double res2, double cap1, double *pfo1, double *pdc1);

/**< Main Function */
int main()
{
    double r1, r2, c1, fo, dc;

    double *pfo, *pdc;

    pfo = &fo;
    pdc = &dc;

    cout << "enter values for r1, r2 and c1\n" << endl;
    cin >> r1 >> r2 >> c1 ;

    while (r1 <= 0 || r2 <= 0 || c1 <=0)
    {
        cout << "enter values for r1, r2 and c1 >0\n" << endl;
        cin >> r1 >> r2 >> c1 ;
    }

    timer555(r1, r2, c1, pfo, pdc);

    cout << "Output Frequency = " << fo << "Hz" << endl;
    cout << "Duty Cycle = " << dc << "%" << endl;

    return 0;
}

void timer555(double res1, double res2, double cap1, double *pfo1, double *pdc1)
{
    *pfo1 = 1.44/((res1 + (2*res2))*cap1);

    *pdc1 = (res1 + res2)/(res1 + (2*res2))*100;

    return;
}
