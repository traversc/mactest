#include <Rcpp.h>
#include <RcppParallel.h>
#include "mactest_types.h"

//' Test function
//'
//' @return hello
// [[Rcpp::export]]
myvector test() {
    return myvector{"hello"};
}