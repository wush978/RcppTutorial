#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
SEXP dumpLevels(IntegerVector x) {
  CharacterVector l(x.attr("levels"));
  return l;
}
