#include <iostream>
#include <memory>
#include <cstring>

#include <cstdio> // Pour le printf()

// Ce programme va simplement utiliser les fonctions de la libC et libC++ pour afficher
//  du texte sur l'ecran avec std::cout et printf()

namespace SB16
{	
	/* Inclure le wrapper (TOUJOURS DANS UN NAMESPACE!) */
	#include "../INCLUDE/cpcdos.h" // Inutile pour cette exemple

    void dsp_reset(){

    }

    void activate_sb16(){

    }

    void deactivate_sb16(){
        
    }
}