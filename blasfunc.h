
 char* blas_name[]={
   "func0",
//level 1 
   "sasum_", "dasum_", "scasum_", "dzasum_",
   "saxpy_", "daxpy_", "caxpy_", "zaxpy_",
   "scopy_", "dcopy_", "ccopy_", "zcopy_",
   "sdot_", "ddot_",
   "sdsdot_", "dsdot_",
   "cdotc_", "zdotc_",
   "cdotu_", "zdotu_", 
   "snrm2_", "dnrm2_", "scnrm2_", "dznrm2_",
   "srot_", "drot_", "crot_", "zrot_", "csrot_", "zdrot_",
   "srotg_", "drotg_", "crotg_", "zrotg_", 
   "srotm_", "drotm_", 
   "srotmg_", "drotmg_", 
   "sscal_", "dscal_", "cscal_", "zscal_", "csscal_", "zdscal_",
   "sswap_", "dswap_", "cswap_", "zswap_", 
   "samax_", "damax_", "camax_", "zamax_", 
   "samin_", "damin_", "camin_", "zamin_", 
   "scabs1_", "dcabs1_",
//level 2 
   "sgbmv_", "dgbmv_", "cgbmv_", "zgbmv_",
   "sgemv_", "dgemv_", "cgemv_", "zgemv_",
   "sger_", "dger_",
   "cgerc_", "zgerc_",
   "cgeru_", "zgeru_",
   "chbmv_", "zhbmv_",
   "chemv_", "zhemv_",
   "cher_", "zher_",
   "cher2_", "zher2_",
   "chpmv_", "zhpmv_",
   "chpr_", "zhpr_",
   "chpr2_", "zhpr2_",
   "ssbmv_", "dsbmv_",
   "sspmv_", "dspmv_",
   "sspr_", "dspr_",
   "sspr2_", "dspr2_",
   "ssymv_", "dsymv_",
   "ssyr_", "dsyr_",
   "ssyr2_", "dsyr2_",
   "stbmv_", "dtbmv_", "ctbmv_", "ztbmv_",
   "stbsv_", "dtbsv_", "ctbsv_", "ztbsv_",
   "stpmv_", "dtpmv_", "ctpmv_", "ztpmv_",
   "stpsv_", "dtpsv_", "ctpsv_", "ztpsv_",
   "strmv_", "dtrmv_", "ctrmv_", "ztrmv_",
   "strsv_", "dtrsv_", "ctrsv_", "ztrsv_",
// level 3 
   "sgemm_", "dgemm_", "cgemm_", "zgemm_",
   "chemm_", "zhemm_", 
   "cherk_", "zherk_",
   "cher2k_", "zher2k_", 
   "ssymm_", "dsymm_", "csymm_", "zsymm_", 
   "ssyrk_", "dsyrk_", "csyrk_", "zsyrk_",
   "ssyr2k_", "dsyr2k_", "csyr2k_", "zsyr2k_",
   "strmm_", "dtrmm_", "ctrmm_", "ztrmm_",
   "strsm_", "dtrsm_", "ctrsm_", "ztrsm_"
};

//for (int i=sasum; i<=ztrsm; i++) printf ("%d  %s\n",i, blas_name[i]);



