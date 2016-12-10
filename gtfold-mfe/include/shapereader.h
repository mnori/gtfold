#ifndef _SHAPEREADER_H_
#define _SHAPEREADER_H_

extern double* SHAPEarray;
extern int* SHAPEenergies;

void readSHAPEarray(const char* filename, int seqlength, double shapeM, double shapeB);
void free_shapeArray(int len);
void print_shapeArray(int len);
int calcShapeEnergy(double shapeNumber, double shapeM, double shapeB);
double shapeModel(double SHAPE_value);

#ifdef __cplusplus
extern "C"{
#endif

int getShapeEnergy(int position);

#ifdef __cplusplus
}
#endif

#endif
