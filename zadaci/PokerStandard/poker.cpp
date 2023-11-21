#include <bits/stdc++.h>
#include "fje_poker.cpp"

using namespace std;

int main(){
    cout<<"Unesite broj igrača: ";
    int igraci = brojIgraca();
    bool ispravnaRuka = true;
    char znakKarte [5];
    int brojKarte [5];
    int kartePoRedoslijedu[5];
    float score[6]={0, 0, 0, 0, 0, 0}; 
    cout<<"Unosite svoje karte."<<endl;

    while(ispravnaRuka){
        for(int i=0; i<=4; i++){
            cout<<"Unesite znak "<< i+1 <<". karte:"<<endl;
            znakKarte[i] = unosZnakaKarte();
            cout<<"Unesite broj "<< i+1 <<". karte:"<<endl;
            brojKarte[i] = unosBrojaKarte();
            kartePoRedoslijedu[i] = brojKarte[i];
        }
        cout<<endl;

        for(int j=0; j<=4; j++){
            if((znakKarte[j]==znakKarte[j-1] && brojKarte[j]==brojKarte[j-1]) ||
               (znakKarte[j]==znakKarte[j-2] && brojKarte[j]==brojKarte[j-2]) ||
               (znakKarte[j]==znakKarte[j-3] && brojKarte[j]==brojKarte[j-3]) ||
               (znakKarte[j]==znakKarte[j-4] && brojKarte[j]==brojKarte[j-4]) ){
                cout<<"Nije moguće imati dvije iste karte u ruci, unesite ponovo karte!"<<endl;
                break;
            }
            else{
                ispravnaRuka = false;
            }
        }
    }

    sort(kartePoRedoslijedu, kartePoRedoslijedu + 5);



    // score za poredenje ko ce da win-a treba biti napisan, da ne moze biti vise istih karata

    if(sviZnakoviIsti(znakKarte)){
        if(royalFlush(kartePoRedoslijedu)){
            cout<<"Imate Royal Flush"<<endl;
            score[0] = 10;
        }
        else if (straightFlush(kartePoRedoslijedu)){
            cout<<"Imate Straight Flush"<<endl;
            score[0] = 9;
            score[1] = snagaSF(kartePoRedoslijedu);
        }
        else{
            cout<<"Imate Flush"<<endl;
            score[0] = 6;
            score[1] = snaga1F(kartePoRedoslijedu);
            score[2] = snaga2F(kartePoRedoslijedu);
            score[3] = snaga3F(kartePoRedoslijedu);
            score[4] = snaga4F(kartePoRedoslijedu);
            score[5] = snaga5F(kartePoRedoslijedu);
        }

    }
    else{
        if(fourOfAKind(kartePoRedoslijedu)){
            cout<<"Imate Four Of A Kind"<<endl;
            score[0] = 8;
            score[1] = snagaFOAK(kartePoRedoslijedu);
            score[2] = snaga2FOAK(kartePoRedoslijedu, kojiFOAK(kartePoRedoslijedu));
        }

        else{
            if(fullHouse(kartePoRedoslijedu)){
                cout<<"Imate Full House"<<endl;
                score[0] = 7;
                score[1] = snagaFH(kartePoRedoslijedu);
            }
            else if(straight(kartePoRedoslijedu)){
                cout<<"Imate Straight"<<endl;
                score[0] = 5;
                score[1] = snagaS(kartePoRedoslijedu);
            }
            else{
                if(threeOfAKind(kartePoRedoslijedu)){
                    cout<<"Imate Three Of A Kind"<<endl;
                    score[0] = 4;
                    score[1] = snagaTOAK(kartePoRedoslijedu);
                }
                else if(twoPair(kartePoRedoslijedu)){
                    cout<<"Imate Two Pair"<<endl;
                    score[0] = 3;
                    score[1] = snaga1TP(kartePoRedoslijedu, kojiTP(kartePoRedoslijedu));
                    score[2] = snaga2TP(kartePoRedoslijedu, kojiTP(kartePoRedoslijedu));
                    score[3] = snaga3TP(kartePoRedoslijedu, kojiTP(kartePoRedoslijedu));
                }
                else{
                    if(onePair(kartePoRedoslijedu)){
                        cout<<"Imate Pair"<<endl;
                        score[0] = 2;
                        score[1] = snaga1P(kartePoRedoslijedu, kojiP(kartePoRedoslijedu));
                        score[2] = snaga2P(kartePoRedoslijedu, kojiP(kartePoRedoslijedu));
                        score[3] = snaga3P(kartePoRedoslijedu, kojiP(kartePoRedoslijedu));
                        score[4] = snaga4P(kartePoRedoslijedu, kojiP(kartePoRedoslijedu));
                    }
                    else{
                        cout<<"Imate High Card"<<endl;
                        score[0] = 1;
                        score[1] = kartePoRedoslijedu[4];
                        score[2] = kartePoRedoslijedu[3];
                        score[3] = kartePoRedoslijedu[2];
                        score[4] = kartePoRedoslijedu[1];
                        score[5] = kartePoRedoslijedu[0];
                        if(score[1] == 7){
                            cout<<"IMATE KITU"<<endl;
                        }
                    }         //testirati TP, P,  (ne rade)/(ne radi opcije sto dalje broji karte)
                }
            }
        }
    }
    cout<<score[0]<<endl<<score[1]<<endl<<score[2]<<endl<<score[3]<<endl<<score[4]<<endl<<score[5]<<endl;
}
