//3.Input Messages sent & calls. Get Mobile Bill as Shown below.
//-> if msg<=50 then rs. .10 per msg else rs. .25.
//-> if calls<=200 then .75 else .95.
//-> add Rs. 100 as rent.
//-> Calculate tax 12.5% if bill<=1000 else 22.5% & get gross bill.

#include <stdio.h>

int main()
{
    //declare variables
    int msg,call;
    float bill,gst,msg_bill,call_bill,tax,gross;
    //user Input
    printf("Welcome to Rogers !");
    printf("\n****************************************************");
    printf("\nenter number of Messages delivered and calls made:");
    scanf("%d%d",&msg,&call);
    
    //decision making
    if(msg<=50){
       msg_bill = msg*.10;
    }else
    {
        msg_bill = msg*.25;
    }
    if(call<=200){
        call_bill = call*.75;
    }else
    {
        call_bill = call*.95;
    }
    bill = (msg_bill+call_bill+100);
    
    if(bill<=1000){
        tax= bill*12.5/100;
    }else
    {
        tax=bill*22.5/100;
    }
        gross = bill+tax;
    printf("For %d Messages and %d calls $%f is your current bill",msg,call,gross);
}
