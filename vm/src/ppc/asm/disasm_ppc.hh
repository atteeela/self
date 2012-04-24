# ifdef __ppc__
/* Sun-$Revision: 30.9 $ */

/* Copyright 1992-2006 Sun Microsystems, Inc. and Stanford University.
   See the LICENSE file for license information. */

# if  defined(FAST_COMPILER) || defined(SIC_COMPILER)

# pragma once

# ifdef INTERFACE_PRAGMAS
  # pragma interface
# endif


// Sparc disassembler for code generated by Self compilers
// Extends GNU disassembler with Self-specific features
// Urs 12/92

# define CORE_ADDR          pc_t
  // function for printing annotated code
  void print_code(nmethod* nm, CORE_ADDR start, CORE_ADDR end);


# endif // defined(FAST_COMPILER) || defined(SIC_COMPILER)
# endif // __ppc__
