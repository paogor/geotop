#ifdef USE_NETCDF_ONGOING


long ncgt_add_output_var(int ncid, DOUBLEMATRIX *m, double time, short nlimdim, const char* dimension_time,const char* dimension_z,const char* dimension_x,const char* dimension_y, long counter, short reinitialize, short upgrade, short rotate_y, double number_novalue);

int ncgt_var_update(void *m, void * m0, double Dt, short nlimdim, double novalue);

long ncgt_add_output_var_cumtime(int ncid, void *m, double time, short nlimdim, const char* dimension_time,const char* dimension_z,const char* dimension_x,
		const char* dimension_y, long counter, short reinitialize, short update, short rotate_y, double number_novalue);

int ncgt_var_set_to_zero(void * m0, short nlimdim, double novalue);



void* ncgt_new_output_var(void * m0, short nlimdim, double novalue, char*);

#endif
