/* 
*****************************************************************
*****************************************************************
*******                                                  ********
****** (C) Copyright 1988-2003  by AMTEC ENGINEERING INC. *******
*******                                                  ********
*****************************************************************
*****************************************************************
*/
#if defined EXTERN
#undef EXTERN
#endif
#if defined GEOM2MODULE
#define EXTERN
#else
#define EXTERN extern
#endif

#if defined TECPLOTKERNEL
/* CORE SOURCE CODE REMOVED */
#endif /* TECPLOTKERNEL */

EXTERN FieldDataType_e GetGeomFieldDataType(Geom_s *Geom);
