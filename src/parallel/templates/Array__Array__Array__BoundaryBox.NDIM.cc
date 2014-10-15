/*
 * File:        Array__Array__Array__BoundaryBox.NDIM.cc
 * Copyrights:  (c) 2005 The Trustees of Princeton University and Board of
 *                  Regents of the University of Texas.  All rights reserved.
 *              (c) 2009 Kevin T. Chu.  All rights reserved.
 * Revision:    $Revision$
 * Modified:    $Date$
 * Description: Explicit template instantiation of LSMLIB classes 
 */

#include "SAMRAI_config.h"
#include "BoundaryBox.h"
#include "BoundaryBox.C"
#include "tbox/Array.h"
#include "tbox/Array.C"

namespace SAMRAI {

template class tbox::Array< tbox::Array< 
  tbox::Array< hier::BoundaryBox<NDIM> > 
> >;

}