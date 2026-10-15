#include <vector>
#include<utility>
<template T>

int Busquedabinaria(val X, val[]V, int ini, int fin){

	if (ini > fin){
		return "No se encuentra el array";
	}

	int medio = (ini + fin)/2;

	if (V[medio] == X){

		return medio;

	}else if(V[medio] > X){
		return BusquedaBinaria(X, V, ini, medio - 1);
	}else{
		return BusquedaBinaria(X, V, medio +1, fin);
	}



}

void QuickSort(val[] V, int ini, int fin){
	if(ini < fin){
		int pivot = Partition(V, ini, fin)
		QuickSort(V, ini, pivot - 1 )
		QuickSort(v, pivot + 1, fin)
	}
}

void Partition(val[] V, int ini, int fin){
	val x = V[fin];
	int i = ini;
	for(int j = 0; j < (fin-1); j++){
		if(V[j] <= x){
			swap(V[i], V[j]);
			i = i + 1;
		}
	}
	swap(V[i], V[j]);
	return i;
}
