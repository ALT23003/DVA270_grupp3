#include <nrfx.h>
#include <nrf5340_application.h>
#include <nrfx_config.h>
#include <nrf.h>
#include <nrfx_bsdriver.h>
#include <assert.h>
#include <stdio.h>
#include <Daniel_GPIO.h> //Ni behöver alltså inte inkludera er egna UARTE write, förutsätt att det finns en uarte_write, uarte_init osv osv
#include "13.h" //inkludera er header fil.
#include "grupp1.h" //inkludera er header fil.
#include "header17.h"//Grupp 17;Spelet går ut på att komma till rätt okänd koordinat mha. förflyttning med j,k,l,i


/* By Daniel Morberg*/



int main(void)
{


int keypress = get_key();
  switch(keypress){
    case 1:
    //anrop till grupp 1's funktion
      break;
    case 13:
    start_game_grupp13();       /* i assume that systick and uarte is initiated, and that nonblocking uarte is also initiated
                                the goal of the game is to eat 10 "O" characters and at the same time avoid the "I" character*/
      break;
    break;
    case 17:
    start_game_grupp17();
    break;
    
  //osv osv
  }
 
}

