/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

// class declaration include file below retrieved from workspace code storage
#include "Pol6.h"
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

ClassImp(Pol6) 

Pol6::Pol6(const char *name, const char *title, 
	   RooAbsReal& x,RooAbsReal& p0,RooAbsReal& p1,RooAbsReal& p2,
	   RooAbsReal& p3,RooAbsReal& p4,RooAbsReal& p5,RooAbsReal& p6):
  RooAbsReal(name,title), 
  x_("x","",this,x),
  p0_("p0","",this,p0),
  p1_("p1","",this,p1), 
  p2_("p2","",this,p2),
  p3_("p3","",this,p3),
  p4_("p4","",this,p4),
  p5_("p5","",this,p5),
  p6_("p6","",this,p6)
{ 
} 


 Pol6::Pol6(const Pol6& other, const char* name) :  
   RooAbsReal(other,name), 
   x_("x",this,other.x_),
   p0_("p0",this,other.p0_),
   p1_("p1",this,other.p1_), 
   p2_("p2",this,other.p2_),
   p3_("p3",this,other.p3_),
   p4_("p4",this,other.p4_),
   p5_("p5",this,other.p5_), 
   p6_("p6",this,other.p6_)
 { 
 } 



 Double_t Pol6::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   return p0_+ p1_*x_+ p2_*x_*x_ + p3_*x_*x_*x_ 
     + p4_*x_*x_*x_*x_ + p5_*x_*x_*x_*x_*x_ + p6_*x_*x_*x_*x_*x_*x_;
 } 


