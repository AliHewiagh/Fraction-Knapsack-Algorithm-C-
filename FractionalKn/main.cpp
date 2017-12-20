//
//  main.cpp
//  FractionalKn
//
//  Created by Ali Hewaigh on 1/10/17.
//  Copyright (c) 2017 Ali Hewaigh. All rights reserved.
//
//#include <set>
//#include <iomanip>
#include<iostream>
#include<queue>


using namespace std;

void main(
{
    
    
    cout<<"hi";
    
}
/*

void generate(vector<float> &, int, int, int);
int itemNum = 0;

class Item{


public:
    string item;
    float benefit;
    float weight;
    float density;


};



class knapsack : public Item{
public:
    float totalWeight;
    float lastOne;

};


int s;


int main()

{




    cout<<endl<<endl;
    cout<<"    Enter Number Of Items   -->>  ";
    cin >> itemNum;
    cout<<endl;
    int Max;
    cout<<"    Enter Maximum Wieght    -->>  ";
    cin >> Max;
   cout<<endl<<endl;






   Item itArray[300];



   Item itCopy[300];



   knapsack lastArray[300];





     string con;
     srand(time(NULL));




    for(int i = 0 ; i < itemNum ; i++){


        con = to_string(i+1);
        itArray[i].item = "Item."+con;
        itCopy[i].item = itArray[i].item;
        int random = rand() % (30 - 1 + 1) + 1;
        itArray[i].benefit = random;
        itCopy[i].benefit =  itArray[i].benefit ;
        int random2 = rand() % (Max - 1 + 1) + 1;
        itArray[i].weight = random2;
        itCopy[i].weight = itArray[i].weight;
        itArray[i].density = itArray[i].benefit/itArray[i].weight;
        itCopy[i].density = itArray[i].density;

    }




    cout<<endl;
    cout<<"______________________________________________________________________"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"                           ORGINAL TABLE   "<<endl;
    cout<<"______________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"Items   |    Weight    |     Benfits       |      Density"<<endl;
    cout<<endl;

    for(int i = 0 ; i < itemNum ; i++){

        cout<< itArray[i].item <<"  |     "<<setprecision(0) << fixed<<itArray[i].weight<<"                "<< itArray[i].benefit <<"                  "<<setprecision(2) << fixed<< itArray[i].density<<endl;



    }






        priority_queue<float , vector<float> > pq;



          for(int i = 0 ; i < itemNum ; i++){

              pq.push(itArray[i].density);


           }

         for(int i = 0 ; i < itemNum ; i++){


        itArray[i].density = pq.top();
        pq.pop();

    }



    for(int i = 0 ; i < itemNum ; i++){

        for(int j = 0 ; j < itemNum ; j++)
        {


           if(itArray[i].density == itCopy[j].density){


               itArray[i].item = itCopy[j].item;
               itArray[i].benefit = itCopy[j].benefit;
               itArray[i].weight = itCopy[j].weight;


             }


        }

    }

    cout<<endl;
    cout<<"______________________________________________________________________"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"                        BASED HEAP ARRANGMENT "<<endl;
    cout<<"______________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"Items   |    Weight    |     Benfits       |      Density"<<endl;
    cout<<endl;

    for(int i = 0 ; i < itemNum ; i++){


        cout<< itArray[i].item <<"  |     "<<setprecision(0) << fixed<<itArray[i].weight<<"                "<< itArray[i].benefit <<"                  "<<setprecision(2) << fixed<< itArray[i].density<<endl;


    }


        int total = 0;
    bool finish1 = true;
    int count = 0;

    for(int i = 0 ; i < itemNum && finish1; i++){

        if(itArray[i].weight + total <= Max){

            lastArray[i].item = itArray[i].item;
            lastArray[i].weight = itArray[i].weight;
            lastArray[i].benefit = itArray[i].benefit;
            lastArray[i].totalWeight = lastArray[i].weight + total;
            total = lastArray[i].totalWeight;
            lastArray[i].density = 1;
            if(i == 0){

                lastArray[i].lastOne = itArray[i].density;
                count++;

            }else{
                lastArray[i].lastOne = lastArray[i-1].lastOne + lastArray[i].benefit;
                count++;

            }
            if(total == Max){

                finish1 = false;

            }


        }else{

            lastArray[i].item = itArray[i].item;
            lastArray[i].weight = Max - total;
            lastArray[i].benefit = lastArray[i].weight/itArray[i].weight;
            lastArray[i].totalWeight = lastArray[i].weight + total;
            lastArray[i].lastOne = lastArray[i-1].lastOne + lastArray[i].benefit;

            s = i;
            count++;
            finish1 = false;

        }




    }

    cout<<endl;
    cout<<"______________________________________________________________________"<<endl;
    cout<<"----------------------------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"                         KNAPSACK TABLE  "<<endl;
    cout<<"______________________________________________________________________"<<endl;
    cout<<endl;
    cout<<"Items   |    Weight    |     Benfits     |     Total_Weight    |    Total Benfits"<<endl;
    cout<<endl;


    for(int i = 0 ; i < count ; i++){


        cout<<lastArray[i].item <<"  |    "<<lastArray[i].weight<<"            "<<lastArray[i].benefit<<"             "<<lastArray[i].totalWeight<<"                    "<<lastArray[i].lastOne<<endl;



    }
    cout<< endl;

    cout<<" The portion of the "<<lastArray[s].item<<" is "<<lastArray[s].weight<< " from the total weight "<< itArray[s].weight <<endl;
    cout<<" Dedacted Weight is "<<itArray[s].weight - lastArray[s].weight<<endl;






}

*/
