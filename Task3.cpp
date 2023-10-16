#include<iostream>
using namespace std;
string findZodiacSign(int day, string month);
int day;
string month;
main()
{
    string sign;
    cout<<"Enter the day of birth: ";
    cin>>day;
    cout<<"Enter the month of birth (e.g., January, February): ";
    cin>>month;
    sign=findZodiacSign(day, month);
    cout<<"Zodiac Sign: "<<sign;
}
string findZodiacSign(int day, string month){
    string sign = "Aries";
    if(month=="March" && day>=20 || month=="April" && day<=19){
        
        sign="Aries";
        return sign;
    }
    else if(month=="April" && day>19 || month=="May" && day<=20){
        sign="Taurus";
        return sign;
    }
    else if(month=="May" && day>20 || month=="June" && day<=20){
        sign="Gemini";
        return sign;
    }
    else if(month=="June" && day>20 || month=="July" && day<=22){
        sign="Cancer";
        return sign;
    }
    else if(month=="July" && day>22 || month=="August" && day<=22){
        sign="Leo";
        return sign;
    }
    else if(month=="August" && day>22 || month=="September" && day<=22){
        sign="Virgo";
        return sign;
    }
    else if(month=="September" && day>22 || month=="October" && day<=22){
        sign="Libra";
        return sign;
    }
    else if(month=="October" && day>22 || month=="November" && day<=21){
        sign="Scorpio";
        return sign;
    }
    else if(month=="November" && day>21 || month=="December" && day<=21){
        sign="Sagittarius";
        return sign;
    }
    else if(month=="December" && day>21 || month=="January" && day<=19){
        sign="Capricon";
        return sign;
    }
    else if(month=="January" && day>19 || month=="Februry" && day<=18){
        sign="Aquarius";
        return sign;
    }
    return sign;
}