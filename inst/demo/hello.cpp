#include <Rcpp.h>
using namespace Rcpp;

//[[Rcpp::export]]
void hello() {
  Rcout << "Hello Rcpp" << std::endl;
}