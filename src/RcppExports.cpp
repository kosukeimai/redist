// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// log_st_map
NumericVector log_st_map(const List& g, const IntegerMatrix& districts, int n_distr);
RcppExport SEXP _redist_log_st_map(SEXP gSEXP, SEXP districtsSEXP, SEXP n_distrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type districts(districtsSEXP);
    Rcpp::traits::input_parameter< int >::type n_distr(n_distrSEXP);
    rcpp_result_gen = Rcpp::wrap(log_st_map(g, districts, n_distr));
    return rcpp_result_gen;
END_RCPP
}
// n_removed
NumericVector n_removed(const List& g, const IntegerMatrix& districts, int n_distr);
RcppExport SEXP _redist_n_removed(SEXP gSEXP, SEXP districtsSEXP, SEXP n_distrSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const List& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const IntegerMatrix& >::type districts(districtsSEXP);
    Rcpp::traits::input_parameter< int >::type n_distr(n_distrSEXP);
    rcpp_result_gen = Rcpp::wrap(n_removed(g, districts, n_distr));
    return rcpp_result_gen;
END_RCPP
}
// genAlConn
List genAlConn(List aList, NumericVector cds);
RcppExport SEXP _redist_genAlConn(SEXP aListSEXP, SEXP cdsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type aList(aListSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cds(cdsSEXP);
    rcpp_result_gen = Rcpp::wrap(genAlConn(aList, cds));
    return rcpp_result_gen;
END_RCPP
}
// findBoundary
NumericVector findBoundary(List fullList, List conList);
RcppExport SEXP _redist_findBoundary(SEXP fullListSEXP, SEXP conListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type fullList(fullListSEXP);
    Rcpp::traits::input_parameter< List >::type conList(conListSEXP);
    rcpp_result_gen = Rcpp::wrap(findBoundary(fullList, conList));
    return rcpp_result_gen;
END_RCPP
}
// crsg
List crsg(List adj_list, NumericVector population, NumericVector area, NumericVector x_center, NumericVector y_center, int Ndistrict, double target_pop, double thresh, int maxiter);
RcppExport SEXP _redist_crsg(SEXP adj_listSEXP, SEXP populationSEXP, SEXP areaSEXP, SEXP x_centerSEXP, SEXP y_centerSEXP, SEXP NdistrictSEXP, SEXP target_popSEXP, SEXP threshSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type adj_list(adj_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type population(populationSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type area(areaSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x_center(x_centerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y_center(y_centerSEXP);
    Rcpp::traits::input_parameter< int >::type Ndistrict(NdistrictSEXP);
    Rcpp::traits::input_parameter< double >::type target_pop(target_popSEXP);
    Rcpp::traits::input_parameter< double >::type thresh(threshSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(crsg(adj_list, population, area, x_center, y_center, Ndistrict, target_pop, thresh, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// dist_dist_diff
double dist_dist_diff(int p, int i_dist, int j_dist, NumericVector x_center, NumericVector y_center, NumericVector x, NumericVector y);
RcppExport SEXP _redist_dist_dist_diff(SEXP pSEXP, SEXP i_distSEXP, SEXP j_distSEXP, SEXP x_centerSEXP, SEXP y_centerSEXP, SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type i_dist(i_distSEXP);
    Rcpp::traits::input_parameter< int >::type j_dist(j_distSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x_center(x_centerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y_center(y_centerSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(dist_dist_diff(p, i_dist, j_dist, x_center, y_center, x, y));
    return rcpp_result_gen;
END_RCPP
}
// cppGeneratePartitions
List cppGeneratePartitions(List adjList, int numBlocks, NumericVector popSizes, int numConstraintLow, int numConstraintHigh, double popConstraintLow, double popConstraintHigh);
RcppExport SEXP _redist_cppGeneratePartitions(SEXP adjListSEXP, SEXP numBlocksSEXP, SEXP popSizesSEXP, SEXP numConstraintLowSEXP, SEXP numConstraintHighSEXP, SEXP popConstraintLowSEXP, SEXP popConstraintHighSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type adjList(adjListSEXP);
    Rcpp::traits::input_parameter< int >::type numBlocks(numBlocksSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type popSizes(popSizesSEXP);
    Rcpp::traits::input_parameter< int >::type numConstraintLow(numConstraintLowSEXP);
    Rcpp::traits::input_parameter< int >::type numConstraintHigh(numConstraintHighSEXP);
    Rcpp::traits::input_parameter< double >::type popConstraintLow(popConstraintLowSEXP);
    Rcpp::traits::input_parameter< double >::type popConstraintHigh(popConstraintHighSEXP);
    rcpp_result_gen = Rcpp::wrap(cppGeneratePartitions(adjList, numBlocks, popSizes, numConstraintLow, numConstraintHigh, popConstraintLow, popConstraintHigh));
    return rcpp_result_gen;
END_RCPP
}
// hamming
int hamming(IntegerVector x, IntegerVector y);
RcppExport SEXP _redist_hamming(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(hamming(x, y));
    return rcpp_result_gen;
END_RCPP
}
// countpartitions
int countpartitions(List aList);
RcppExport SEXP _redist_countpartitions(SEXP aListSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type aList(aListSEXP);
    rcpp_result_gen = Rcpp::wrap(countpartitions(aList));
    return rcpp_result_gen;
END_RCPP
}
// calcPWDh
NumericMatrix calcPWDh(NumericMatrix x);
RcppExport SEXP _redist_calcPWDh(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(calcPWDh(x));
    return rcpp_result_gen;
END_RCPP
}
// calc_polsbypopper
double calc_polsbypopper(arma::uvec new_cds, arma::vec areas_vec, arma::vec boundarylist_new, arma::mat borderlength_mat, arma::vec pop_vec, List aList, bool discrete);
RcppExport SEXP _redist_calc_polsbypopper(SEXP new_cdsSEXP, SEXP areas_vecSEXP, SEXP boundarylist_newSEXP, SEXP borderlength_matSEXP, SEXP pop_vecSEXP, SEXP aListSEXP, SEXP discreteSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::uvec >::type new_cds(new_cdsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type areas_vec(areas_vecSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type boundarylist_new(boundarylist_newSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type borderlength_mat(borderlength_matSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type pop_vec(pop_vecSEXP);
    Rcpp::traits::input_parameter< List >::type aList(aListSEXP);
    Rcpp::traits::input_parameter< bool >::type discrete(discreteSEXP);
    rcpp_result_gen = Rcpp::wrap(calc_polsbypopper(new_cds, areas_vec, boundarylist_new, borderlength_mat, pop_vec, aList, discrete));
    return rcpp_result_gen;
END_RCPP
}
// segregationcalc
NumericVector segregationcalc(NumericMatrix distmat, NumericVector grouppop, NumericVector fullpop);
RcppExport SEXP _redist_segregationcalc(SEXP distmatSEXP, SEXP grouppopSEXP, SEXP fullpopSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type distmat(distmatSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type grouppop(grouppopSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type fullpop(fullpopSEXP);
    rcpp_result_gen = Rcpp::wrap(segregationcalc(distmat, grouppop, fullpop));
    return rcpp_result_gen;
END_RCPP
}
// rsg
List rsg(List adj_list, NumericVector population, int Ndistrict, double target_pop, double thresh, int maxiter);
RcppExport SEXP _redist_rsg(SEXP adj_listSEXP, SEXP populationSEXP, SEXP NdistrictSEXP, SEXP target_popSEXP, SEXP threshSEXP, SEXP maxiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type adj_list(adj_listSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type population(populationSEXP);
    Rcpp::traits::input_parameter< int >::type Ndistrict(NdistrictSEXP);
    Rcpp::traits::input_parameter< double >::type target_pop(target_popSEXP);
    Rcpp::traits::input_parameter< double >::type thresh(threshSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    rcpp_result_gen = Rcpp::wrap(rsg(adj_list, population, Ndistrict, target_pop, thresh, maxiter));
    return rcpp_result_gen;
END_RCPP
}
// sample_partition
List sample_partition(const std::vector<arma::vec> aList, const arma::mat aMat, const int num_partitions, const int num_samples, const int threads);
RcppExport SEXP _redist_sample_partition(SEXP aListSEXP, SEXP aMatSEXP, SEXP num_partitionsSEXP, SEXP num_samplesSEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<arma::vec> >::type aList(aListSEXP);
    Rcpp::traits::input_parameter< const arma::mat >::type aMat(aMatSEXP);
    Rcpp::traits::input_parameter< const int >::type num_partitions(num_partitionsSEXP);
    Rcpp::traits::input_parameter< const int >::type num_samples(num_samplesSEXP);
    Rcpp::traits::input_parameter< const int >::type threads(threadsSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_partition(aList, aMat, num_partitions, num_samples, threads));
    return rcpp_result_gen;
END_RCPP
}
// swMH
List swMH(List aList, NumericVector cdvec, NumericVector cdorigvec, NumericVector popvec, NumericVector grouppopvec, NumericVector areas_vec, NumericVector county_membership, arma::mat borderlength_mat, int nsims, double eprob, double pct_dist_parity, NumericVector beta_sequence, NumericVector beta_weights, NumericMatrix ssdmat, int lambda, double beta, double weight_population, double weight_compact, double weight_segregation, double weight_similar, double weight_countysplit, std::string adapt_beta, int adjswap, int exact_mh, int adapt_eprob, int adapt_lambda, std::string compactness_measure, double ssd_denom, int num_hot_steps, int num_annealing_steps, int num_cold_steps);
RcppExport SEXP _redist_swMH(SEXP aListSEXP, SEXP cdvecSEXP, SEXP cdorigvecSEXP, SEXP popvecSEXP, SEXP grouppopvecSEXP, SEXP areas_vecSEXP, SEXP county_membershipSEXP, SEXP borderlength_matSEXP, SEXP nsimsSEXP, SEXP eprobSEXP, SEXP pct_dist_paritySEXP, SEXP beta_sequenceSEXP, SEXP beta_weightsSEXP, SEXP ssdmatSEXP, SEXP lambdaSEXP, SEXP betaSEXP, SEXP weight_populationSEXP, SEXP weight_compactSEXP, SEXP weight_segregationSEXP, SEXP weight_similarSEXP, SEXP weight_countysplitSEXP, SEXP adapt_betaSEXP, SEXP adjswapSEXP, SEXP exact_mhSEXP, SEXP adapt_eprobSEXP, SEXP adapt_lambdaSEXP, SEXP compactness_measureSEXP, SEXP ssd_denomSEXP, SEXP num_hot_stepsSEXP, SEXP num_annealing_stepsSEXP, SEXP num_cold_stepsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< List >::type aList(aListSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cdvec(cdvecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type cdorigvec(cdorigvecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type popvec(popvecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type grouppopvec(grouppopvecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type areas_vec(areas_vecSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type county_membership(county_membershipSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type borderlength_mat(borderlength_matSEXP);
    Rcpp::traits::input_parameter< int >::type nsims(nsimsSEXP);
    Rcpp::traits::input_parameter< double >::type eprob(eprobSEXP);
    Rcpp::traits::input_parameter< double >::type pct_dist_parity(pct_dist_paritySEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta_sequence(beta_sequenceSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type beta_weights(beta_weightsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ssdmat(ssdmatSEXP);
    Rcpp::traits::input_parameter< int >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type weight_population(weight_populationSEXP);
    Rcpp::traits::input_parameter< double >::type weight_compact(weight_compactSEXP);
    Rcpp::traits::input_parameter< double >::type weight_segregation(weight_segregationSEXP);
    Rcpp::traits::input_parameter< double >::type weight_similar(weight_similarSEXP);
    Rcpp::traits::input_parameter< double >::type weight_countysplit(weight_countysplitSEXP);
    Rcpp::traits::input_parameter< std::string >::type adapt_beta(adapt_betaSEXP);
    Rcpp::traits::input_parameter< int >::type adjswap(adjswapSEXP);
    Rcpp::traits::input_parameter< int >::type exact_mh(exact_mhSEXP);
    Rcpp::traits::input_parameter< int >::type adapt_eprob(adapt_eprobSEXP);
    Rcpp::traits::input_parameter< int >::type adapt_lambda(adapt_lambdaSEXP);
    Rcpp::traits::input_parameter< std::string >::type compactness_measure(compactness_measureSEXP);
    Rcpp::traits::input_parameter< double >::type ssd_denom(ssd_denomSEXP);
    Rcpp::traits::input_parameter< int >::type num_hot_steps(num_hot_stepsSEXP);
    Rcpp::traits::input_parameter< int >::type num_annealing_steps(num_annealing_stepsSEXP);
    Rcpp::traits::input_parameter< int >::type num_cold_steps(num_cold_stepsSEXP);
    rcpp_result_gen = Rcpp::wrap(swMH(aList, cdvec, cdorigvec, popvec, grouppopvec, areas_vec, county_membership, borderlength_mat, nsims, eprob, pct_dist_parity, beta_sequence, beta_weights, ssdmat, lambda, beta, weight_population, weight_compact, weight_segregation, weight_similar, weight_countysplit, adapt_beta, adjswap, exact_mh, adapt_eprob, adapt_lambda, compactness_measure, ssd_denom, num_hot_steps, num_annealing_steps, num_cold_steps));
    return rcpp_result_gen;
END_RCPP
}
