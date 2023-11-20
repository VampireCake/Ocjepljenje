#include <bits/stdc++.h>

using namespace std;

    int brojIgraca(){
        int igraci;
        bool jedanIgrac = true;
        while(jedanIgrac){
            cin>>igraci;
            if (igraci<=6 && igraci>=2){
                jedanIgrac = false;
            }
            else{
                cout<<"Nije dovoljno igrača za igru ili ih je previše!"<<endl;
            }
        }
        return igraci;
    }

    int unosBrojaKarte(){
        int brojKarte;
        bool dobarBroj = true;
        while(dobarBroj){
            cin>>brojKarte;
            if (brojKarte>=1 && brojKarte<=14 && brojKarte!=11){
                dobarBroj = false;
            }
            else{
                cout<<"Ovaj broj ne može biti na karti"<<endl;
            }
        }
        return brojKarte;
    }

    char unosZnakaKarte(){
        char znakKarte;
        bool dobarZnak = true;
        while(dobarZnak){
            cin>>znakKarte;
            if (znakKarte!='c' || znakKarte!='d' || znakKarte!='h' || znakKarte!='s'){
                dobarZnak = false;
            }
            else{
                cout<<"Ovaj znak ne može biti na karti"<<endl;
            }
        }
        return znakKarte;
    }

    
    bool sviZnakoviIsti (char ruka[5]) {
        bool JesteSZI;
        if (ruka[0]==ruka[1] && ruka[0]==ruka[2] && ruka[0]==ruka[3] && ruka[0]==ruka[4]){
            JesteSZI = true;
        }
        else{
            JesteSZI = false;
        }
        return JesteSZI;
    }

    bool royalFlush (int redoslijed[5]){
        bool jesteRF;
        if(redoslijed[0] == 1 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14){
            jesteRF = true;
        }
        else{
            jesteRF = false;
        }
        return jesteRF;
    }

    bool straightFlush(int redoslijed[5]){
        bool jesteSF;
        int prvaKarta = redoslijed[0];
        if((redoslijed[0] == prvaKarta && redoslijed[1] == prvaKarta + 1 && redoslijed[2] == prvaKarta + 2 && redoslijed[3] == prvaKarta + 3 && redoslijed[4] == prvaKarta + 4)||
        (redoslijed[0] == 7 && redoslijed[1] == 8 && redoslijed[2] == 9 && redoslijed[3] == 10 && redoslijed[4] == 12)||
        (redoslijed[0] == 8 && redoslijed[1] == 9 && redoslijed[2] == 10 && redoslijed[3] == 12 && redoslijed[4] == 13)||
        (redoslijed[0] == 9 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)){
            jesteSF = true;
        }
        else{
            jesteSF = false;
        }
        return jesteSF;
    }
    
    bool fourOfAKind(int redoslijed[5]){
        bool jesteFOAK;
        if(redoslijed[0]==redoslijed[3] || redoslijed[1]==redoslijed[4]){
            jesteFOAK = true;
        }
        else{
            jesteFOAK = false;
        }
        return jesteFOAK;
    }

    bool fullHouse(int redoslijed[5]){
        bool jesteFH;
        if((redoslijed[0] == redoslijed[2] && redoslijed[3]==redoslijed[4]) || (redoslijed[0]==redoslijed[1] && redoslijed[2]==redoslijed[4])){
            jesteFH = true;
        }
        else{
            jesteFH = false;
        }
        return jesteFH;
    }

    bool straight(int redoslijed[5]){
        bool jesteS;
        int prvaKarta = redoslijed[0];
        if((redoslijed[0] == prvaKarta && redoslijed[1] == prvaKarta + 1 && redoslijed[2] == prvaKarta + 2 && redoslijed[3] == prvaKarta + 3 && redoslijed[4] == prvaKarta + 4)||
           (redoslijed[0] == 7 && redoslijed[1] == 8 && redoslijed[2] == 9 && redoslijed[3] == 10 && redoslijed[4] == 12)||
           (redoslijed[0] == 8 && redoslijed[1] == 9 && redoslijed[2] == 10 && redoslijed[3] == 12 && redoslijed[4] == 13)||
           (redoslijed[0] == 9 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)||
           (redoslijed[0] == 1 && redoslijed[1] == 10 && redoslijed[2] == 12 && redoslijed[3] == 13 && redoslijed[4] == 14)){
            jesteS = true;
        }
        else{
            jesteS = false;
        }
        return jesteS;
    }

    bool threeOfAKind(int redoslijed[5]){
        bool jesteTOAK;
        if(redoslijed[0] == redoslijed[2] || redoslijed[1] == redoslijed[3] || redoslijed[2] == redoslijed[4]){
            jesteTOAK = true;
        }
        else{
            jesteTOAK = false;
        }
        return jesteTOAK;
    }

    bool twoPair(int redoslijed[5]){
        bool jesteTP;
        if((redoslijed[0]==redoslijed[1] && redoslijed[2]==redoslijed[3])||
           (redoslijed[0]==redoslijed[1] && redoslijed[3]==redoslijed[4])||
           (redoslijed[1]==redoslijed[2] && redoslijed[3]==redoslijed[4])){
            jesteTP = true;
        }
        else{
            jesteTP = false;
        }
        return jesteTP;
    }

    bool onePair(int redoslijed[5]){
        bool jesteOP;
        if(redoslijed[0]==redoslijed[1] || redoslijed[1]==redoslijed[2] || redoslijed[2]==redoslijed[3] || redoslijed[3]==redoslijed[4]){
            jesteOP = true;
        }
        else{
            jesteOP = false;
        }
        return jesteOP;
    }

    int highCard(int redoslijed[5]){
        return redoslijed[4];
    }


    float kojiFH(int nekiFH[5]){
        float tajFH;
        if(nekiFH[0]==nekiFH[2]){
            tajFH = 1.3;
        }
        if(nekiFH[2]==nekiFH[4]){
            tajFH = 3.5;
        }
        return tajFH;
    }

    int snagaFH(int nekiFH[5]){
        return nekiFH[2];
    }

    int snaga2FH(int nekiFH[5], float tajFH){
        if(tajFH==1.3){
            return nekiFH[4];
        }
        else{
            return nekiFH[0];
        }
    }

    // fje fullhouse, TOAK, two pair i pair trebaju da kazu gdje se nalazi ta kombinacija (koja je velicina)
