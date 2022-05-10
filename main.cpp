#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include <fstream>
#include <string>
#include<string.h>
#include "login.h"
HH
using namespace std;

void Order_Dis(struct Types_of_Pizza pizzaCart[12],struct Cost_of_Pizza costOnSize[12],char itemNames[18][100],int sidesCost[4],int drinksCost[4]);
struct Types_of_Pizza{
 int Small_Qty,Med_Qty,Lg_Qty,others,Fresh_Crispt_Pan,Cheese_Bursting,Thin_wheat_crusting;
};
struct Cost_of_Pizza{
 int SM_Cost,MED_Cost,LG_Cost,Fresh_Crisp_Pan_Cost,Cheese_Bursting_Cost,Thin_wheat_crusting_cost;
};

    int main()
    {
        login obj;
        obj.firstpart();

    /*char* fna;
    fna = &fname[0];
    //cout << fna;

    char* lna;
    lna = &lname[0];
    //cout << lna;

    char* mnu;
    mnu = &mno[0];
    //cout << mnu;

    char* addre;
    addre = &addr[0];
    //cout << addre;

    char* passwo;
    passwo = &passw[0];
    //cout << passwo;



/*############################### login complete #########################################*/



 int i=0,c=1,j=4,mainChoice,cost[12]={250,300,400,300,360,450,250,290,400,300,400,600},totalCost=0,a[10];
 char name[20];
 char itemNames[18][100]={
  "Orange juice",
  "Fruit beer",
  "Cold coffee",
  "Hot chocolate",
  "Cheese pizza",
  "Margherita pizza",
  "Meat pizza",
  "Veggie pizza",
  "Spring rolls",
  "Burger",
  "French fries",
  "Hakka noodles",
  "Small size",
  "Medium size",
  "Large size",
  "Crispy Pan",
  "Cheese brust",
  "Wheat thin crust"
 };
 int sidesCost[4]={100,150,120,130};
 int drinksCost[4]={150,200,100,150};

 struct Types_of_Pizza pizzaCart[12];
 struct Cost_of_Pizza costOnSize[12];
 for(i=0;i<12;i++)
 {
  pizzaCart[i].Small_Qty=0;
  pizzaCart[i].Med_Qty=0;
  pizzaCart[i].Lg_Qty=0;
  pizzaCart[i].Fresh_Crispt_Pan=0;
  pizzaCart[i].Thin_wheat_crusting=0;
  pizzaCart[i].Cheese_Bursting=0;
  pizzaCart[i].others=0;

 }
 i=0;
 while(i<12)
 {
  costOnSize[j].SM_Cost=cost[i++];
  costOnSize[j].MED_Cost=cost[i++];
  costOnSize[j].LG_Cost=cost[i++];
  costOnSize[j].Fresh_Crisp_Pan_Cost=30;
  costOnSize[j].Cheese_Bursting_Cost=95;
  costOnSize[j].Thin_wheat_crusting_cost=40;
  j++;
 }

/*########################################################### cart items complete ######################################################################*/


/*########################################################### graphics start ######################################################################*/

int h=GetSystemMetrics(SM_CYSCREEN);
int w=GetSystemMetrics(SM_CXSCREEN);
initwindow(w,h,"",-3,-3);

menu:

    //cout<<" ";
        readimagefile("img/menu1.jpg",0,0,1535,800);
        while(1)
        {

            if(GetAsyncKeyState(VK_NUMPAD1))
                {
sides:
                    readimagefile("img/sides.jpg",0,0,1535,800);
                    delay(400);

                    while(1)
                    {

                        if(GetAsyncKeyState(VK_NUMPAD1))
                        {
                            delay(400);
                            readimagefile("img/sr.jpg",0,0,1535,800);
                            //delay(200);

                            while(1)
                            {

                                if(GetAsyncKeyState(VK_BACK))
                                {
                                    goto sides;
                                }


                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[8].others++;    ////////////////////////////
                                    setcolor(14);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    delay(2000);
                                    setcolor(0);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    /*readimagefile("img/sre.jpg",0,0,1535,800);
                                    setcolor(14);
                                    settextstyle(4,0,8);
                                    outtextxy(920,210,"ADDED");
                                    outtextxy(1020,300,"TO");
                                    outtextxy(950,390,"CART");
                                    setcolor(RED);
                                    settextstyle(9,0,6);
                                    outtextxy(990,500,"ENTER");
                                    while(1)
                                    {
                                        if(GetAsyncKeyState(VK_RETURN))
                                    {
                                        goto sides;
                                    }
                                    }*/


                                }

                                if(GetAsyncKeyState(VK_ESCAPE))
                                {
                                    goto exit;
                                }


                            }
                        }


                        if(GetAsyncKeyState(VK_NUMPAD2))
                        {
                            readimagefile("img/br.jpg",0,0,1535,800);

                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[9].others++;   ///////////////////////////
                                    setcolor(14);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    delay(2000);
                                    setcolor(0);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    /*readimagefile("img/bre.jpg",0,0,1535,800);
                                    setcolor(14);
                                    settextstyle(4,0,8);
                                    outtextxy(920,210,"ADDED");
                                    outtextxy(1020,300,"TO");
                                    outtextxy(950,390,"CART");
                                    setcolor(RED);
                                    settextstyle(9,0,6);
                                    outtextxy(990,500,"ENTER");
                                    while(1)
                                    {
                                        if(GetAsyncKeyState(VK_RETURN))
                                    {
                                        goto sides;
                                    }
                                    }*/

                                }

                                if(GetAsyncKeyState(VK_BACK))
                                {
                                    goto sides;
                                }

                                if(GetAsyncKeyState(VK_ESCAPE))
                                {
                                    goto exit;
                                }

                                /*if(GetAsyncKeyState('M'))
                                {
                                goto menu;
                                }*/
                            }

                        }


                        if(GetAsyncKeyState(VK_NUMPAD3))
                        {

                            readimagefile("img/ff.jpg",0,0,1535,800);

                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[10].others++;  ///////////////////////////
                                    setcolor(14);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    delay(2000);
                                    setcolor(0);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    /*readimagefile("img/ffe.jpg",0,0,1535,800);
                                    setcolor(14);
                                    settextstyle(4,0,8);
                                    outtextxy(920,210,"ADDED");
                                    outtextxy(1020,300,"TO");
                                    outtextxy(950,390,"CART");
                                    setcolor(RED);
                                    settextstyle(9,0,6);
                                    outtextxy(990,500,"ENTER");
                                    while(1)
                                    {
                                        if(GetAsyncKeyState(VK_RETURN))
                                    {
                                        goto sides;
                                    }
                                    }*/

                                }

                                if(GetAsyncKeyState(VK_BACK))
                                {
                                    goto sides;
                                }

                                if(GetAsyncKeyState(VK_ESCAPE))
                                {
                                    goto exit;
                                }

                                /*if(GetAsyncKeyState('M'))
                                {
                                    goto menu;
                                }*/
                            }

                        }


                        if(GetAsyncKeyState(VK_NUMPAD4))
                        {
                            readimagefile("img/hn.jpg",0,0,1535,800);

                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[11].others++; /////////////////////
                                    setcolor(14);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    delay(2000);
                                    setcolor(0);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    /*readimagefile("img/hne.jpg",0,0,1535,800);
                                    setcolor(14);
                                    settextstyle(4,0,8);
                                    outtextxy(920,210,"ADDED");
                                    outtextxy(1020,300,"TO");
                                    outtextxy(950,390,"CART");
                                    setcolor(RED);
                                    settextstyle(9,0,6);
                                    outtextxy(990,500,"ENTER");
                                    while(1)
                                    {
                                        if(GetAsyncKeyState(VK_RETURN))
                                    {
                                        goto sides;
                                    }
                                    }*/

                                }

                                if(GetAsyncKeyState(VK_BACK))
                                {
                                    goto sides;
                                }

                                if(GetAsyncKeyState(VK_ESCAPE))
                                {
                                    goto exit;
                                }

                            }

                        }



                    if(GetAsyncKeyState(VK_BACK))
                    {
                        goto menu;
                    }

                    /*if(GetAsyncKeyState('M'))
                    {
                        goto menu;
                    }*/

                    if(GetAsyncKeyState(VK_NUMPAD8))
                    {
                        Order_Dis(pizzaCart,costOnSize,itemNames,sidesCost,drinksCost);
                        goto sides;
                    }

                    if(GetAsyncKeyState(VK_ESCAPE))
                    goto exit;
                    }
                }


            if(GetAsyncKeyState(VK_NUMPAD2))
            {
pizza:
    delay(400);
            readimagefile("img/pi.jpg",0,0,1535,800);
            delay(1000);
            while(1)
            {
                if(GetAsyncKeyState(VK_NUMPAD1))
                {
                    readimagefile("img/cp.jpg",0,0,1535,800);

                    while(1)
                    {

                        /*if(GetAsyncKeyState('M'))
                    {
                    goto menu;
                    }*/

                    if(GetAsyncKeyState(VK_NUMPAD1))
                    {
                    delay(400);
                    readimagefile("img/cpe.jpg",0,0,1535,800);
                    setcolor(15);
                    settextstyle(4,0,3);
                    outtextxy(830,200,"SIZE : 1.Small  2.Medium  3.Large");
                    while(1)
                    {
                        if(GetAsyncKeyState(VK_NUMPAD1))
                        {
                            delay(400);
                            pizzaCart[4].Small_Qty++;     ////////////////////////
                            setcolor(10);
                            settextstyle(4,0,4);
                            outtextxy(930,230,"Small");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[4].Fresh_Crispt_Pan++;       /////////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    /*setcolor(14);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    delay(2000);
                                    setcolor(0);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");*/
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[4].Cheese_Bursting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[4].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }
                        }

                            if(GetAsyncKeyState(VK_NUMPAD2))
                        {
                            delay(400);
                            pizzaCart[4].Med_Qty++;      //////////////////////////
                            setcolor(10);
                            outtextxy(930,230,"Medium");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[4].Fresh_Crispt_Pan++;  //////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[4].Cheese_Bursting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[4].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }

                        }

                        if(GetAsyncKeyState(VK_NUMPAD3))
                        {
                            delay(400);
                            pizzaCart[4].Lg_Qty ++;  /////////////////////
                            setcolor(10);
                            outtextxy(930,230,"Large");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[4].Fresh_Crispt_Pan++;  //////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[4].Cheese_Bursting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[4].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }

                    }
                    }
                    }

                    if(GetAsyncKeyState(VK_BACK))
                    {
                        goto pizza;
                    }

                    if(GetAsyncKeyState(VK_ESCAPE))
                    {
                        goto exit;
                    }
                    }

                }

                if(GetAsyncKeyState(VK_BACK))
                    {
                        goto menu;
                    }

                if(GetAsyncKeyState(VK_NUMPAD2))
                {
                    readimagefile("img/mp.jpg",0,0,1535,800);
                    while(1)
                    {

                        /*if(GetAsyncKeyState('M'))
                    {
                    goto menu;
                    }*/

                    if(GetAsyncKeyState(VK_NUMPAD1))
                    {
                        delay(400);
                    readimagefile("img/mpe.jpg",0,0,1535,800);
                    setcolor(15);
                    settextstyle(4,0,3);
                    outtextxy(830,200,"SIZE : 1.Small  2.Medium  3.Large");
                    while(1)
                    {
                        if(GetAsyncKeyState(VK_NUMPAD1))
                        {
                            delay(400);
                            pizzaCart[5].Small_Qty++;     ////////////////////////

                            setcolor(10);
                            settextstyle(4,0,4);
                            outtextxy(930,230,"Small");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[5].Fresh_Crispt_Pan++;       /////////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[5].Cheese_Bursting++; /////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[5].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }
                        }

                            if(GetAsyncKeyState(VK_NUMPAD2))
                        {
                            delay(400);
                            pizzaCart[5].Med_Qty++;      //////////////////////////

                            setcolor(10);
                            outtextxy(930,230,"Medium");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[5].Fresh_Crispt_Pan++;       /////////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[5].Cheese_Bursting++; /////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[5].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }

                        }

                        if(GetAsyncKeyState(VK_NUMPAD3))
                        {
                            delay(400);
                            pizzaCart[5].Lg_Qty ++;  /////////////////////

                            setcolor(10);
                            outtextxy(930,230,"Large");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[5].Fresh_Crispt_Pan++;       /////////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[5].Cheese_Bursting++; /////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[5].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }

                    }
                    }
                    }

                    if(GetAsyncKeyState(VK_BACK))
                    {
                        goto pizza;
                    }

                    if(GetAsyncKeyState(VK_ESCAPE))
                    {
                        goto exit;
                    }
                    }
                }

                if(GetAsyncKeyState(VK_NUMPAD3))
                {
                    readimagefile("img/mep.jpg",0,0,1535,800);
                    while(1)
                    {

                        /*if(GetAsyncKeyState('M'))
                    {
                    goto menu;
                    }*/

                    if(GetAsyncKeyState(VK_NUMPAD1))
                    {
                        delay(400);
                    readimagefile("img/mepe.jpg",0,0,1535,800);
                    setcolor(15);
                    settextstyle(4,0,3);
                    outtextxy(830,200,"SIZE : 1.Small  2.Medium  3.Large");
                    while(1)
                    {
                        if(GetAsyncKeyState(VK_NUMPAD1))
                        {
                            delay(400);
                            pizzaCart[6].Small_Qty++;     ////////////////////////

                            setcolor(10);
                            settextstyle(4,0,4);
                            outtextxy(930,230,"Small");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[6].Fresh_Crispt_Pan++;       /////////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[6].Cheese_Bursting++; /////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[6].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }
                        }

                            if(GetAsyncKeyState(VK_NUMPAD2))
                        {
                            delay(400);
                            pizzaCart[6].Med_Qty++;      //////////////////////////

                            setcolor(10);
                            outtextxy(930,230,"Medium");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[6].Fresh_Crispt_Pan++;       /////////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[6].Cheese_Bursting++; /////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[6].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }

                        }

                        if(GetAsyncKeyState(VK_NUMPAD3))
                        {
                            delay(400);
                            pizzaCart[6].Lg_Qty ++;  /////////////////////

                            setcolor(10);
                            outtextxy(930,230,"Large");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[6].Fresh_Crispt_Pan++;       /////////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[6].Cheese_Bursting++; /////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[6].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }

                    }
                    }
                    }

                    if(GetAsyncKeyState(VK_BACK))
                    {
                        goto pizza;
                    }

                    if(GetAsyncKeyState(VK_ESCAPE))
                    {
                        goto exit;
                    }
                    }
                }

                if(GetAsyncKeyState(VK_NUMPAD4))
                {
                    readimagefile("img/vp.jpg",0,0,1535,800);
                    while(1)
                    {

                        /*if(GetAsyncKeyState('M'))
                    {
                    goto menu;
                    }*/

                    if(GetAsyncKeyState(VK_NUMPAD1))
                    {
                        delay(400);
                    readimagefile("img/vpe.jpg",0,0,1535,800);
                    setcolor(15);
                    settextstyle(4,0,3);
                    outtextxy(830,200,"SIZE : 1.Small  2.Medium  3.Large");
                    while(1)
                    {
                        if(GetAsyncKeyState(VK_NUMPAD1))
                        {
                            delay(400);
                            pizzaCart[7].Small_Qty++;     ////////////////////////

                            setcolor(10);
                            settextstyle(4,0,4);
                            outtextxy(930,230,"Small");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[7].Fresh_Crispt_Pan++;       /////////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[7].Cheese_Bursting++; /////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[7].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }
                        }

                            if(GetAsyncKeyState(VK_NUMPAD2))
                        {
                            delay(400);
                            pizzaCart[7].Med_Qty++;      //////////////////////////

                            setcolor(10);
                            outtextxy(930,230,"Medium");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[7].Fresh_Crispt_Pan++;       /////////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[7].Cheese_Bursting++; /////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[7].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }

                        }

                        if(GetAsyncKeyState(VK_NUMPAD3))
                        {
                            delay(400);
                            pizzaCart[7].Lg_Qty ++;  /////////////////////

                            setcolor(10);
                            outtextxy(930,230,"Large");
                            setcolor(15);
                            outtextxy(830,290,"Need special crusts ?");
                            //settextstyle(4,0,3);
                            outtextxy(820,320,"1. Crispy pan");
                            outtextxy(820,350,"2. Cheese burst");
                            outtextxy(820,380,"3. Wheat thin crust");
                            outtextxy(820,410,"4. No need");
                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[7].Fresh_Crispt_Pan++;       /////////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Crispy pan");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD2))
                                {
                                    pizzaCart[7].Cheese_Bursting++; /////////////////

                                    setcolor(10);
                                    outtextxy(930,440,"Cheese brust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD3))
                                {
                                    pizzaCart[7].Thin_wheat_crusting++; /////////////////
                                    setcolor(10);
                                    outtextxy(930,440,"Wheat thin crust");
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                                if(GetAsyncKeyState(VK_NUMPAD4))
                                {
                                    delay(500);
                                    setcolor(14);
                                    outtextxy(890,500,"Added successfully");
                                    delay(2000);
                                    goto pizza;
                                }
                            }

                    }
                    }
                    }

                    if(GetAsyncKeyState(VK_BACK))
                    {
                        goto pizza;
                    }

                    if(GetAsyncKeyState(VK_ESCAPE))
                    {
                        goto exit;
                    }
                    }
                }

                /*if(GetAsyncKeyState('M'))
                {
                    goto menu;
                }*/

                if(GetAsyncKeyState(VK_NUMPAD8))
                {
                    Order_Dis(pizzaCart,costOnSize,itemNames,sidesCost,drinksCost);
                    goto pizza;
                }

                if(GetAsyncKeyState(VK_ESCAPE))
                    goto exit;

            }

            }

            if(GetAsyncKeyState(VK_NUMPAD3))
                {
drinks:
                    readimagefile("img/drinks.jpg",0,0,1535,800);
                    delay(500);
                    while(1)
                    {

                        if(GetAsyncKeyState(VK_NUMPAD1))
                        {
                            delay(400);
                            readimagefile("img/oj.jpg",0,0,1535,800);

                        while(1)
                            {

                                /*if(GetAsyncKeyState('M'))
                                {
                                    goto menu;
                                }*/


                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[0].others++;    /////////////////////

                                    setcolor(14);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    delay(2000);
                                    setcolor(0);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");

                                }

                                if(GetAsyncKeyState(VK_BACK))
                                {
                                    goto drinks;
                                }

                                if(GetAsyncKeyState(VK_ESCAPE))
                                {
                                    goto exit;
                                }

                                /*if(GetAsyncKeyState('M'))
                    {
                    goto menu;
                    }*/
                            }
                        }

                        if(GetAsyncKeyState(VK_NUMPAD2))
                        {
                            readimagefile("img/fb.jpg",0,0,1535,800);

                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[1].others++;    ////////////////////////////////
                                    setcolor(14);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    delay(2000);
                                    setcolor(0);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                }

                                if(GetAsyncKeyState(VK_BACK))
                                {
                                    goto drinks;
                                }

                                if(GetAsyncKeyState(VK_ESCAPE))
                                {
                                    goto exit;
                                }


                            }
                        }

                        if(GetAsyncKeyState(VK_NUMPAD3))
                        {
                            readimagefile("img/cc.jpg",0,0,1535,800);

                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[2].others++;          //////////////////////////
                                    /*readimagefile("img/sre.jpg",0,0,1535,800);
                                    setcolor(14);
                                    settextstyle(4,0,8);
                                    outtextxy(920,210,"ADDED");
                                    outtextxy(1020,300,"TO");
                                    outtextxy(950,390,"CART");
                                    setcolor(RED);
                                    settextstyle(9,0,6);
                                    outtextxy(990,500,"ENTER");*/
                                    setcolor(14);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    delay(2000);
                                    setcolor(0);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                }

                                if(GetAsyncKeyState(VK_BACK))
                                {
                                    goto drinks;
                                }

                                if(GetAsyncKeyState(VK_ESCAPE))
                                {
                                    goto exit;
                                }


                            }
                        }

                        if(GetAsyncKeyState(VK_NUMPAD4))
                        {
                            readimagefile("img/hc.jpg",0,0,1535,800);

                            while(1)
                            {
                                if(GetAsyncKeyState(VK_NUMPAD1))
                                {
                                    pizzaCart[3].others++;    ////////////////////////////////////////
                                    /*readimagefile("img/sre.jpg",0,0,1535,800);
                                    setcolor(14);
                                    settextstyle(4,0,8);
                                    outtextxy(920,210,"ADDED");
                                    outtextxy(1020,300,"TO");
                                    outtextxy(950,390,"CART");
                                    setcolor(RED);
                                    settextstyle(9,0,6);
                                    outtextxy(990,500,"ENTER");*/
                                    setcolor(14);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");
                                    delay(2000);
                                    setcolor(0);
                                    settextstyle(8,0,6);
                                    outtextxy(330,800,"ADDED  TO  CART  SUCCESSFULLY");

                                }

                                if(GetAsyncKeyState(VK_BACK))
                                {
                                    goto drinks;
                                }

                                if(GetAsyncKeyState(VK_ESCAPE))
                                {
                                    goto exit;
                                }


                            }
                        }

                        if(GetAsyncKeyState(VK_BACK))
                                {
                                    goto menu;
                                }

                                if(GetAsyncKeyState(VK_ESCAPE))
                                {
                                    goto exit;
                                }

                                if(GetAsyncKeyState(VK_NUMPAD8))
                                {
                                    Order_Dis(pizzaCart,costOnSize,itemNames,sidesCost,drinksCost);
                                    goto drinks;
                                }
                    }

                }

            if(GetAsyncKeyState(VK_NUMPAD8))
            {
                Order_Dis(pizzaCart,costOnSize,itemNames,sidesCost,drinksCost);
                goto menu;
            }


            if(GetAsyncKeyState(VK_ESCAPE))
            {
            goto exit;
            }
        }


exit:
closegraph();
//return 0;

}


/*########################################################### cart ######################################################################*/


void Order_Dis(struct Types_of_Pizza pizzaCart[12],struct Cost_of_Pizza costOnSize[12],char itemNames[18][100],int sidesCost[4],int drinksCost[4])
{
 int totalCost=0,i;
 readimagefile("img/cart.jpg",0,0,1535,800);   //image of cart with buttons but empty cart
 delay(1000);


 int y=110;

 for(i=0;i<=11;i++)
 {
  if(pizzaCart[i].Small_Qty >0||pizzaCart[i].Med_Qty >0||pizzaCart[i].Lg_Qty >0 ||pizzaCart[i].others>0||pizzaCart[i].Fresh_Crispt_Pan >0||pizzaCart[i].Cheese_Bursting >0 ||pizzaCart[i].Thin_wheat_crusting >0)
  {
   if(i>=4&&i<=7)
    {

   outtextxy(610,y,itemNames[i]);
   y+=30;

   if(pizzaCart[i].Small_Qty >0)
   {
       char co[10];
   outtextxy(610,y,itemNames[12]);
      sprintf(co,"%d",pizzaCart[i].Small_Qty);
   outtextxy(210,y,co);
   sprintf(co,"%d",costOnSize[i].SM_Cost *pizzaCart[i].Small_Qty);
   outtextxy(1275,y,co);
   y+=30;
   }
   //printf("Small Size Quantity: %d -> Cost : %d\n",pizzaCart[i].Small_Qty,costOnSize[i].SM_Cost *pizzaCart[i].Small_Qty);


   if(pizzaCart[i].Med_Qty>0)
   {
       char co[10];
   outtextxy(610,y,itemNames[13]);
   sprintf(co,"%d",pizzaCart[i].Med_Qty);
   outtextxy(210,y,co);
   sprintf(co,"%d",costOnSize[i].MED_Cost *pizzaCart[i].Med_Qty);
   outtextxy(1275,y,co);
   y+=30;
   }
   //printf("Medium Size Quantity: %d -> Cost : %d\n",pizzaCart[i].Med_Qty,costOnSize[i].MED_Cost *pizzaCart[i].Med_Qty);

   if(pizzaCart[i].Lg_Qty>0)
   {
   char co[10];
   outtextxy(610,y,itemNames[14]);
   sprintf(co,"%d",pizzaCart[i].Lg_Qty);
   outtextxy(210,y,co);
   sprintf(co,"%d",costOnSize[i].LG_Cost *pizzaCart[i].Lg_Qty);
   outtextxy(1275,y,co);
   y+=30;
   }
   //printf("Large Size Quantity: %d -> Cost : %d\n",pizzaCart[i].Lg_Qty,costOnSize[i].LG_Cost *pizzaCart[i].Lg_Qty );

   if(pizzaCart[i].Fresh_Crispt_Pan >0)
    {
   char co[10];
   outtextxy(610,y,itemNames[15]);
   sprintf(co,"%d",pizzaCart[i].Fresh_Crispt_Pan);
   outtextxy(210,y,co);
   sprintf(co,"%d",costOnSize[i].Fresh_Crisp_Pan_Cost *pizzaCart[i].Fresh_Crispt_Pan);
   outtextxy(1275,y,co);
   y+=40;
   }
   //printf("Fresh Crispt Pan Quantity: %d -> Cost : %d\n",pizzaCart[i].Fresh_Crispt_Pan ,costOnSize[i].Fresh_Crisp_Pan_Cost *pizzaCart[i].Fresh_Crispt_Pan);

   if(pizzaCart[i].Thin_wheat_crusting >0)
    {
   char co[10];
   outtextxy(610,y,itemNames[17]);
   sprintf(co,"%d",pizzaCart[i].Thin_wheat_crusting);
   outtextxy(210,y,co);
   sprintf(co,"%d",costOnSize[i].Thin_wheat_crusting_cost *pizzaCart[i].Thin_wheat_crusting);
   outtextxy(1275,y,co);
   y+=40;
   }
   //printf("Wheat Thin Crust Quantity: %d -> Cost : %d\n",pizzaCart[i].Thin_wheat_crusting ,costOnSize[i].Thin_wheat_crusting_cost *pizzaCart[i].Thin_wheat_crusting );

   if(pizzaCart[i].Cheese_Bursting >0)
    {
   char co[10];
   outtextxy(610,y,itemNames[16]);
   sprintf(co,"%d",pizzaCart[i].Cheese_Bursting);
   outtextxy(210,y,co);
   sprintf(co,"%d",costOnSize[i].Cheese_Bursting_Cost *pizzaCart[i].Cheese_Bursting);
   outtextxy(1275,y,co);
   y+=40;
   }
   //printf("Cheese Burst Quantity: %d -> Cost : %d\n",pizzaCart[i].Cheese_Bursting ,costOnSize[i].Cheese_Bursting_Cost *pizzaCart[i].Cheese_Bursting );


   totalCost+=pizzaCart[i].Small_Qty*costOnSize[i].SM_Cost;
   totalCost+=pizzaCart[i].Med_Qty*costOnSize[i].MED_Cost;
   totalCost+=pizzaCart[i].Lg_Qty*costOnSize[i].LG_Cost;
   totalCost+=pizzaCart[i].Fresh_Crispt_Pan*costOnSize[i].Fresh_Crisp_Pan_Cost;
   totalCost+=pizzaCart[i].Cheese_Bursting*costOnSize[i].Cheese_Bursting_Cost;
   totalCost+=pizzaCart[i].Thin_wheat_crusting*costOnSize[i].Thin_wheat_crusting_cost;
  }
   else if((i>=0&&i<=3))
   {

    char cid[10];

    sprintf(cid,"%d",pizzaCart[i].others);
    setcolor(15);
    settextstyle(4,0,3);
    outtextxy(210,y,cid);
    outtextxy(610,y,itemNames[i]);
    sprintf(cid,"%d",pizzaCart[i].others*drinksCost[i]);
    outtextxy(1275,y,cid);
    y+=40;

    totalCost+=(pizzaCart[i].others)*drinksCost[i];

   }

   else
    {

    char cide[10];

    sprintf(cide,"%d",pizzaCart[i].others);
    setcolor(15);
    settextstyle(4,0,3);
    outtextxy(210,y,cide);
    outtextxy(610,y,itemNames[i]);
    sprintf(cide,"%d",pizzaCart[i].others*sidesCost[i-8]);
    outtextxy(1275,y,cide);
    y+=40;
   //printf("Id : %d\n",i);
   //printf("Item Name : %s\n",itemNames[i]);
   //printf("Quantity : %d\n",pizzaCart[i].others);
   //printf("Cost : %d\n",pizzaCart[i].others*sidesCost[i-8]);
   totalCost+=(pizzaCart[i].others)*sidesCost[i-8];

    }
 }
}

    char cart[10];
    sprintf(cart,"%d",totalCost);
    setcolor(15);
    settextstyle(4,0,4);
    outtextxy(730,690,cart);
   //printf("-------------------Total Cost : %d-----------------------\n",totalCost);

   while(1)
   {
       if(GetAsyncKeyState(VK_NUMPAD1))      //Order
       {
    char* fna;
    fna = &fname[0];
    //cout << fna;

    char* lna;
    lna = &lname[0];
    //cout << lna;

    char* mnu;
    mnu = &mno[0];
    //cout << mnu;

    char* addre;
    addre = &addr[0];
    //cout << addre;

    char* passwo;
    passwo = &passw[0];
    //cout << passwo;


     readimagefile("img/rec.jpg",0,0,1535,800);


        settextstyle(4,0,4);
        setcolor(15);
        outtextxy(50,170,"First name : ");
        setcolor(4);
        outtextxy(320,170,fna);  //fna
        setcolor(15);
        outtextxy(50,220,"Last name : ");
        setcolor(4);
        outtextxy(320,220,lna);            //lna
        setcolor(15);
        outtextxy(50,270,"Password : ");
        setcolor(4);
        outtextxy(300,270,passwo);          //passwo
        setcolor(15);
        outtextxy(50,320,"Mobile number : ");
        setcolor(4);
        outtextxy(400,320,mnu);            //mnu
        setcolor(15);
        outtextxy(50,370,"Address : ");
        setcolor(4);
        outtextxy(260,370,addre);           //addre
        setcolor(15);
        settextstyle(4,0,5);
        outtextxy(150,500,"AMOUNT : ");
        setcolor(4);
        outtextxy(480,500,cart);           //cart

delay(500);

        writeimagefile("Recipts/b.jpg",0,0,1535,800);

while(1)
{
                if(GetAsyncKeyState(VK_NUMPAD1))        //this is creating problem , don't know why
            {
                goto ani;
            }

            if(GetAsyncKeyState(VK_BACK))
            {
                goto ani;
            }
}



       }

       if(GetAsyncKeyState(VK_NUMPAD2))             //Clear cart
       {
           for(int z=0;z<12;z++)
            {
  pizzaCart[z].Small_Qty=0;
  pizzaCart[z].Med_Qty=0;
  pizzaCart[z].Lg_Qty=0;
  pizzaCart[z].Fresh_Crispt_Pan=0;
  pizzaCart[z].Thin_wheat_crusting=0;
  pizzaCart[z].Cheese_Bursting=0;
  pizzaCart[z].others=0;
            }
            Order_Dis(pizzaCart,costOnSize,itemNames,sidesCost,drinksCost);

        }

        if(GetAsyncKeyState(VK_NUMPAD3))            //Back
        {
            goto ani;
        }

        if(GetAsyncKeyState(VK_BACK))
        {
            goto ani;
        }


   }

ani:
cout<<" ";
}


