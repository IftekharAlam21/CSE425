#!/bin/bash

while :
do 
	echo "Enter Your Choice:"
   echo "Press 1 to Search By Industry"
   echo "Press 2 to Search By Level"
   echo "Press 3 to Search By Line Code"
   echo "Press 4 toSearch By Value"
   read INPUT
   case $INPUT in
         1)     echo "Enter the desired Industry "
                read varname
                if  A=$(grep "$varname" survey.csv)
                        then echo "$A" 
                fi
                ;;
         2)     echo "Enter the Level "
                read varname
                if  B=$(grep "$varname" survey.csv)
                        then echo "$B" 
                fi
                ;;
         3)     echo "Enter the Code number "
                read varname
                if  C=$(grep "$varname" survey.csv)
                        then echo "$C" 
                fi
                ;;
         4)     echo "Enter the Value "
                read varname
                if  D=$(grep "$varname" survey.csv)
                        then echo "$D" 
                fi
                ;;
 esac
done            

