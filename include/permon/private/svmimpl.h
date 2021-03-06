#if !defined(__SVMIMPL_H)
#define	__SVMIMPL_H

#include <permon/private/qpsimpl.h>
#include <permonsvm.h>

struct _p_PermonSVM {
    PETSCHEADER(int);
    PetscBool autoPostSolve;
    PetscBool setupcalled;
    PetscBool setfromoptionscalled;
    
    PetscReal C, LogCMin, LogCMax, LogCBase;
    PetscInt nfolds;
    PermonSVMLossType loss_type;

    PetscBool warm_start;

    Mat Xt;
    Vec y;
    Vec y_inner;
    PetscScalar y_map[2];
    Mat D;
    
    Vec w;
    PetscScalar b;
    
    QPS qps;
};

#endif 

