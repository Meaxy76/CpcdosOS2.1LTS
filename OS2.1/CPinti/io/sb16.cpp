/*	
	======================================
	==      CPinti ---> Input/Output    ==
	==                Sound blaster 16  ==
	======================================
	
	Made by Meaxy Kusama
	
	Description
		Module lecture CPinti Core(tm) pour Cpcdos OSx.
	
	Creation 
		28/02/2023
		
	Optimisation

	Update	
    
*/
#include <stdio.h>
#include <errno.h>
#include <string.h>

// Call for outportb
#include <pc.h>

#include "cpinti.h"
#include "io.h"
#include "debug.h" 
#include "core.h"


namespace cpinti
{
    namespace sb16
    {
        #define DSP_RESET 0x226
        #define DSP_READ 0x22A
        #define DSP_WRITE 0x22C
        #define DSP_READ_STATUS 0x22E
        #define DSP_INT_ACK 0x22F

        #define REG_ADDRESS 0x224
        #define REF_DATA 0x225

        #define DIRECT_DAC 0x10
        #define ENABLE_SPEAKER 0xD1
        int dsp_reset(){
            printf("SB16\n");
                uint32_t buf[4];
                *buf = 128;
                outp(1, DSP_RESET);

                outp(0, DSP_RESET);

                if(inp(DSP_READ) != 0xAA){
                    std::string Erreur_STR = std::to_string((unsigned long) strerror(errno));
					cpinti_dbg::CPINTI_DEBUG("[ERREUR] Impossible d'initialiser Sound Blaster 16 '", 
											 "[ERROR] Unable to initialise Sound Blaser 16 '",
										 "gestionnaire_fichier", "Lire_Fichier_complet()",
							Ligne_saute, Alerte_erreur, Date_avec, Ligne_r_normal);
                }
                return 0;
        }

    }
}