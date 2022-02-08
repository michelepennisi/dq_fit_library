/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
 * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/

// Your description goes here...

#include "Riostream.h"

#include "Pol4ExpPdf.h"
#include "RooAbsReal.h"
#include "RooAbsCategory.h"
#include <math.h>
#include "TMath.h"

ClassImp(Pol4ExpPdf);

 Pol4ExpPdf::Pol4ExpPdf(const char *name, const char *title,
                        RooAbsReal& _x,
                        RooAbsReal& _P0,
                	      RooAbsReal& _P1,
                        RooAbsReal& _P2,
                        RooAbsReal& _P3,
                        RooAbsReal& _P4,
                        RooAbsReal& _P5) :
   RooAbsPdf(name,title),
   x("x","x",this,_x),
   P0("P0","P0",this,_P0),
   P1("P1","P1",this,_P1),
   P2("P2","P2",this,_P2),
   P3("P3","P3",this,_P3),
   P4("P4","P4",this,_P4),
   P5("P5","P5",this,_P5)
 {
 }


 Pol4ExpPdf::Pol4ExpPdf(const Pol4ExpPdf& other, const char* name) :
   RooAbsPdf(other,name),
   x("x",this,other.x),
   P0("P0",this,other.P0),
   P1("P1",this,other.P1),
   P2("P2",this,other.P2),
   P3("P3",this,other.P3),
   P4("P4",this,other.P4),
   P5("P5",this,other.P5)
 {
 }



 Double_t Pol4ExpPdf::evaluate() const
 {
   return (P0 + P1*x + P2*x*x + P3*x*x*x + P4*x*x*x*x) * TMath::Exp(-P5*x);
 }
