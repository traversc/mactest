install:
	find . -iname "*.a" -exec rm {} \;
	find . -iname "*.o" -exec rm {} \;
	find . -iname "*.so" -exec rm {} \;
	Rscript -e "devtools::load_all(); roxygen2::roxygenise('.');"
	Rscript -e "library(Rcpp); compileAttributes('.');"
	R CMD INSTALL .
