#include <Rcpp.h>
#include <RcppParallel.h>
#include "mactest_types.h"

// [[Rcpp::export]]
myvector test() {
    return myvector{"hello"};
}