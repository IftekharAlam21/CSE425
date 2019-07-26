#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
        ifstream survey("survey.csv"); //the csv is passed into survey object

        vector<string> description(12835);
        vector<string> industry(12835);
        vector<string> level(12835);
        vector<string> sizee(12835);
        vector<string> code(12835);
        vector<string> value(12835);


        //variable declaring
        int vecSize = 12835;
        int counter = 0;
        int userChoice = 0;
        int i;

        //storing the values of each category
       while(survey.good()){
        for(i=0 ; i <vecSize; i++){
        getline(survey,description[i],',');
        getline(survey,industry[i],',');
        getline(survey,level[i],',');
        getline(survey,sizee[i],',');
        getline(survey,code[i],',');
        getline(survey,value[i],'\n');


        }
       }


        //Give choice to users
        cout << " Enter your choice of search category :\n";
        cout << " Press 1 to search by Industry\n";
        cout << " Press 2 to search by level \n";
        cout << " Press 3 to search by size \n";
        cout << " Press 4 to search by code \n";
        cout << " Press 5 to search by value \n";

        cin >> userChoice;

        if(userChoice == 1)
        {
            string match;
            cout<< "Enter the Industry detail:";
            cin.ignore();
            getline(cin, match);

            for( size_t j = 0 ; j < industry.size(); ++j )
            {
                size_t found = industry[j].find(match);

                if (found != string::npos)
                {
                cout<< description[j] << " , " ;
                cout<< industry[j] << " , " ;
                cout<< level[j] << " , " ;
                cout<< sizee[j] << " , " ;
                cout<< code[j] << " , " ;
                cout<< value[j] << endl;
                }


            }
        }

        else if(userChoice == 2)

        {
            string match;
            cout<< "Enter the Level:";
            cin.ignore();
            getline(cin, match);

            for( size_t j = 0 ; j < level.size(); ++j )
            {
                size_t found = level[j].find(match);

                if (found != string::npos)
                {
                cout<< description[j] << " , " ;
                cout<< industry[j] << " , " ;
                cout<< level[j] << " , " ;
                cout<< sizee[j] << " , " ;
                cout<< code[j] << " , " ;
                cout<< value[j] << endl;
                }


            }
        }

        else if(userChoice == 3)

        {
            string match;
            cout<< "Enter the Size:";
            cin.ignore();
            getline(cin, match);

            for( size_t j = 0 ; j < sizee.size(); ++j )
            {
                size_t found = sizee[j].find(match);

                if (found != string::npos)
                {
                cout<< description[j] << " , " ;
                cout<< industry[j] << " , " ;
                cout<< level[j] << " , " ;
                cout<< sizee[j] << " , " ;
                cout<< code[j] << " , " ;
                cout<< value[j] << endl;
                }


            }
        }

        else if(userChoice == 4)

        {
            string match;
            cout<< "Enter the Line Code:";
            cin.ignore();
            getline(cin, match);

            for( size_t j = 0 ; j < code.size(); ++j )
            {
                size_t found = code[j].find(match);

                if (found != string::npos)
                {
                cout<< description[j] << " , " ;
                cout<< industry[j] << " , " ;
                cout<< level[j] << " , " ;
                cout<< sizee[j] << " , " ;
                cout<< code[j] << " , " ;
                cout<< value[j] << endl;
                }


            }
        }
        else if(userChoice == 5)

        {
            string match;
            cout<< "Enter the Value:";
            cin.ignore();
            getline(cin, match);

            for( size_t j = 0 ; j < value.size(); ++j )
            {
                size_t found = value[j].find(match);

                if (found != string::npos)
                {
                cout<< description[j] << " , " ;
                cout<< industry[j] << " , " ;
                cout<< level[j] << " , " ;
                cout<< sizee[j] << " , " ;
                cout<< code[j] << " , " ;
                cout<< value[j] << endl;
                }


            }
        }
}
