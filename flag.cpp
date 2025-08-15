#include <iostream>
#include <windows.h>
#include <iomanip>
using namespace std;

    void Indian_Flag(int n){

            for(int i = 0; i < n; i++){
                cout << "\033[1;43m||\033[0;m" << "\t\t\t";
                for(int j = 0; j < i; j++){
                    cout << " ";
                }
                for(int k = 0; k < (n * 5); k++){
                    // For 4 th Orange line
                    if(i < 4) cout << "\033[1;38;5;208m*\033[0;m";
                    // For 4th White line
                    else if((i > 3) && i <= 7) {
                            // For Wheel Of Ashoka
                            if(i == 4 && (k >= 28 && k <= 32)) cout << "\033[1;34mO\033[0;m";
                            else if(i == 5 && (k >= 26 && k <= 34)) cout << "\033[1;34mO\033[0;m";
                            else if (i == 6 && (k >= 26 && k <= 34)) cout << "\033[1;34mO\033[0;m";
                            else if(i == 7 && (k >= 27 && k <= 31)) cout << "\033[1;34mO\033[0;m";
                            else cout << "\033[1;37m*\033[0;m";
                    }
                    // For 4 th line of Green
                    else cout << "\033[1;32m*\033[0;m";                    
                    }
                    // Border
                    cout << setfill(' ') << setw((141-i)) << "\033[1;33m"  << " || "<< "\033[0;m " << endl;
                    Sleep(1000);
            }
            //Flag pole and Shayari
            for(int i = n; i < 3*n; i++){
                cout << "\033[1;43m||\033[0;m" << "\t\t\t";
                for(int j = 0; j < (n*5)+i; j++){
                    cout << " ";
                }
                for(int k = (n * 5) -1; k < (n * 5); k++){
                    if(i == 4 && k >= 17 || k <= 21){
                        cout <<"\033[1;34m*\033[0m";
                    }
                    cout <<"\033[1;37m*\033[0m";
                    if (i == 15){
                        cout << " \t\t \033[1;36m  15 AUGUST 1947 \033[0;m";
                        Sleep(1000);
                        
                    }
                    if (i == 17){
                        cout << "\t\t\033[1;31m  79th INDEPENDENCE DAY \033[0;m";
                        Sleep(2000);
                    }
                    if (i == 23){
                        cout << "\t\t\033[1;38;5;208m  Tiranga Hai Hamari Jaan, Tiranga Hai Hamari Shaan,";
                        cout << " Bharat Mata Ki Jai Ho, Yahi Hai Hamara Maan. \033[0;m";
                        Sleep(1000);
                    }
                    if (i == 25){
                        cout << "\t\t\033[1;37m  Dil Diya Hai, Jaan Bhi Denge, Ae Watan Tere Liye.";
                        cout << " Azaadi Ka Ye Jashn Hai, Tirange Ka Sammaan Hai, \033[0;m";
                        Sleep(1000);
                    }
                    if (i == 27){
                        cout << "\t\033[1;32m Hum Bhartiya Hain, Yahi Hamari Pehchaan Hai.";
                        cout <<"Khoon Se Likhi Ye Kahani Hai, Bharat Meri Jaani Hai. \033[0;m";
                        Sleep(2000);
                    }
                }
                if(i != 15 && i != 17 && i != 23 && i != 25 && i != 27){
                    cout << setfill(' ') << setw((140-i)) << "\033[1;33m"  << " || "<< "\033[0;m " << endl;
                }
                else{
                    cout << endl;
                }
            }
            Sleep(2000);
            for(int i = 3*n; i < (4*n - 8); i++){
                if(i == 38) cout << "\033[1;43m||\033[0;m" << "\t\t \033[1;35mAMIT KUMAR\033[0;m" << endl;
                Sleep(1000);
                if (i == 37){
                   cout << "\033[1;43m||\033[0;m" << "\t\033[1;38m Sabhi Deshwasiyon Ko Swatantrata Diwas Ki Hardik Shubhkamnayein!!";
                   cout <<"\n\033[1;43m||\033[0;m" << "\t\033[1;34mJo Desh Par Qurbaan Ho Gaye, Hum Unko Salaam Karte Hain!. \033[0;m" << endl;
                   Sleep(2000);
                }
                if(i != 38 && i != 37){
                    cout << "\033[1;43m||\033[0;m" << setfill(' ') << setw((223)) << "\033[1;33m"  << " || "<< "\033[0;m " << endl;
                    Sleep(1000);
                }
            }
            Sleep(2000);
        }
    

int main(){
    // Clear all Screen After Display
    system("CLS");
    cout << "\033[1;41m " << setfill(' ') << setw(110) <<" LOADING PROGRAM... " << setw(110) << " \033[0m\n";
    Sleep(6000); 
    cout << "\033[1;43m" << left << setfill('=') << setw(220) << " " << "\033[0;m" << endl;
    Sleep(3000);
    for(int i = 0; i <5; i++){
        if(i == 3){
            cout << "\033[1;43m||\033[0;m";
            cout <<"\033[1;45m" << setfill('=') << setw(95)<<" "<< " HAPPY INDEPENDENCE DAY "<<setw(95) << " " << "\033[0;m" << endl;
            Sleep(2000);
        }
        if(i != 3){
            cout << "\033[1;43m||\033[0;m" << setfill(' ') << setw((223)) << "\033[1;33m"  << " || "<< "\033[0;m " << endl;
            Sleep(1000);
        }

    }
    //Function Calling
    Indian_Flag(12);
    cout << "\033[1;43m" << left << setfill('=') << setw(220) << " " << "\033[0;m" << endl;
    Sleep(2000);
    return 0;
}