// License       : License.txt
// Specifications: Spec-00000057.pdf
/*-- File Header Comment Start -----------------------------------------------*/
// File Name        : BD1020HFV_00000057.cpp
// BSL              : 00000057
// Model number     : ROHM BD1020HFV
// Spec               Component type       : ADC
//                    OS                   : Arduino
//                    Calculation          : Floating-point
//                    Conversion type      : Linear
//                    Moving average filter: Moving average filter select
//                    Diagnosis            : Range (Min to Max)
// Reason for change: 01.00.00 : 24/10/'22 : New Release
// Nickname         : Blue Dragon
/*-- File Header Comment End -------------------------------------------------*/

#include "BD1020HFV.h"

// Main Function
pp2ap_adc_t BD1020HFV_00000057( void )
{
        pp2ap_adc_t res = pp_00000057( tbl_BD1020HFV );
        return( res );
}
