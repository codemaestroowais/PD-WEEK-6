#include<iostream>
using namespace std;
float price(string day, string fruitName, double quantity);
main()
{
    string day;
    string fruitName;
    double quantity;
    float totalPrice;
    cout<<"Day: ";
    cin>>day;
    if(day!="Sunday" && day!="Monday" && day!="Tuesday" && day!="Wednesday" && day!="Thursday" && day!="Friday" && day!="Saturday")
    {
        cout<<"Error";
        return 0;
    }

    cout<<"Fruit Name: ";
    cin>>fruitName;
    if(fruitName!="banana" && fruitName!="apple" && fruitName!="orange" && fruitName!="grapefruit" && fruitName!="kiwi" && fruitName!="pineapple" && fruitName!="grapes")
    {
        cout<<"Error";
        return 0;
    }  
    cout<<"Quantity: ";
    cin>>quantity;
    totalPrice=price(day, fruitName, quantity);
    cout<<"Total Price: "<<totalPrice;

}
float price(string day, string fruitName, double quantity)
{
    float price;
    if(fruitName=="banana" && (day=="Sunday" || day=="Saturday"))
    {
    price=2.7*quantity;
    }
    if(fruitName=="apple" && (day=="Sunday" || day=="Saturday"))
    {
    price=1.25*quantity;
    
    }
    if(fruitName=="orange" && (day=="Sunday" || day=="Saturday"))
    {
    price=0.90*quantity;
    }
    if(fruitName=="grapefruit" && (day=="Sunday" || day=="Saturday"))
    {
    price=1.60*quantity;
    }
    if(fruitName=="kiwi" && (day=="Sunday" || day=="Saturday"))
    {
    price=3.0*quantity;
    }
    if(fruitName=="pineapple" && (day=="Sunday" || day=="Saturday"))
    {
    price=5.60*quantity;
    }
    if(fruitName=="grapes" && (day=="Sunday" || day=="Saturday"))
    {
    price=4.20*quantity;
    }
    if(fruitName=="banana" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday"))
    {
    price=2.5*quantity;
    }
    if(fruitName=="apple" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday"))
    {
    price=1.20*quantity;
    
    }
    if(fruitName=="orange" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday"))
    {
    price=0.85*quantity;
    }
    if(fruitName=="grapefruit" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday"))
    {
    price=1.45*quantity;
    }
    if(fruitName=="kiwi" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday"))
    {
    price=2.70*quantity;
    }
    if(fruitName=="pineapple" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday"))
    {
    price=5.50*quantity;
    }
    if(fruitName=="grapes" && (day=="Monday" || day=="Tuesday" || day=="Wednesday" || day=="Thursday" || day=="Friday"))
    {
    price=3.85*quantity;
    }

    return price;

}

