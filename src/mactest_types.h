#ifndef mactest_TYPES_H
#define mactest_TYPES_H

#include <Rcpp.h>
#include <RcppParallel.h>

// defined in some headers in windows and Mac, conflicts with R headers
#ifdef TRUE
  #undef TRUE
#endif
#ifdef FALSE
  #undef FALSE
#endif

using myvector = std::vector<std::string>;

#endif
