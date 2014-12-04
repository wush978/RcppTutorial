#include <Rcpp.h>
using namespace Rcpp;

// [[Rcpp::export]]
void convertToDataFrame(List x) {
  // do something to x's attribute and make it a data.frame
  x.attr("class") = wrap("data.frame");
  x.attr("row.names") = ??
  x.attr(?) = ?
}

/**** R
x1 <- list(a = 1:10, b = letters[1:10], c = rnorm(10))

# convertToDataFrame(x1)
# x1
# ## like a data.frame

x2 <- list(a = 1:10, b = letters[1:9], c = rnorm(11))

# convertToDataFrame(x2)
# x2
# ## some error

*/

