#' @describeIn rqcReadQualityBoxPlot calculates necessary statistics
#' @export
rqcReadQualityBoxCalc <- function(rqcResultSet)
{
    probs <- c(0, 0.1, 0.25, 0.5, 0.75, 0.9, 1)
    f <- function(x) {
        quantile(Rle(x$average, x$count), probs)
    }
    
    df <- perReadQuality(rqcResultSet)
    res <- ddply(df, c("filename", "group"), f)
    names(res)[c(-1,-2)] <- c("min", "ymin", "lower", "middle", "upper", "ymax", "max")
    res
}
