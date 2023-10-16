#include<iostream>
using namespace std;
string stName; float marksEnglish, marksMaths, marksChemistry, marksBiology, marksSocialScience;
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

main()
{
    float average;
    string grade;
    cout<<"Enter student name: ";
    cin>>stName;
    cout<<"Enter marks for English: ";
    cin>>marksEnglish;
    cout<<"Enter marks for Maths: ";
    cin>>marksMaths;
    cout<<"Enter marks for Chemistry: ";
    cin>>marksChemistry;
    cout<<"Enter the marks for Social Science: ";
    cin>>marksSocialScience;
    cout<<"Enetr marks for Biology: ";
    cin>>marksBiology;
    cout<<"Student Name: "<<stName<<endl;
    average=calculateAverage(marksEnglish, marksMaths, marksChemistry, marksSocialScience, marksBiology);
    cout<<"Percentage: "<<average<<"%"<<endl;
    grade=calculateGrade(average);
    cout<<"Grade: "<<grade;
}
float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    float average;
    average=((marksEnglish+marksMaths+marksChemistry+marksSocialScience+marksBiology)*100)/500;
    return average;
}
string calculateGrade(float average)
{
    string grade = "A+";
    if(average>=90){
    grade="A+";
    
    }
    else if(average>=80 && average<90)
    {
        grade="A";
    }
    else if(average>=70 && average<80){
        grade="B+";
    }
    else if(average>=60 && average<70){
        grade="B";
    }
    else if(average>=50 && average<60){
        grade="C";
    }
    else if(average>=40 && average<50){
        grade="D";

    }
    else
    {
        grade="F";
    }
    return grade;
}
