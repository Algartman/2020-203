﻿#include "garinma.h"

/**
 * Введение в дисциплину
 */
void garinma::lab1()
{
  cout << "hello world!" << endl;
}


/**
 * Метод Гаусса с выбором главного элемента
 */
void garinma::lab2()
{
	double tmp;
for (int k = 0; k < N; k++) { 
  int m=k;
    for(int i=k+1;i<N;i++)
      if(abs(A[i][k]) > abs(A[m][k]))
        m=i;
  for(int i=0;i<N;i++)
  std::swap(A[k][i],A[m][i]);
  std::swap(b[k],b[m]);


tmp = A[k][k];
for (int j = 0; j < N; j++)    //Прямой ход
  A[k][j] = A[k][j] / tmp;
b[k] =b[k]/tmp;

for (int i = k + 1; i < N; i++) {
  tmp = A[i][k];
  for (int j = 0; j < N; j++) {
    A[i][j] =A[i][j]- A[k][j] * tmp;
  }
b[i] =b[i]- b[k] * tmp;
}
}

for (int k = N - 1; k > 0; k--)  //Обратный ход
{
  for (int i = k - 1; i >= 0; i--)
    {
       tmp = A[i][k];
       for (int j = 0; j < N; j++)
           A[i][j] =A[i][j]- A[k][j] * tmp;
       b[i] =b[i] - b[k] * tmp;
    }
}
for(int i=0; i<N; i++)
x[i]=b[i];
}








/**
 * Метод прогонки
 */
void garinma::lab3()
{

}



/**
 * Метод простых итераций
 */
void garinma::lab4()
{

}



/**
 * Метод Якоби или Зейделя
 */
void garinma::lab5()
{

}



/**
 * Метод минимальных невязок
 */
void garinma::lab6()
{

}



/**
 * Метод сопряженных градиентов
 */
void garinma::lab7()
{

}


void garinma::lab8()
{

}


void garinma::lab9()
{

}


std::string garinma::get_name()
{
  return "Garin M.A.";
}
