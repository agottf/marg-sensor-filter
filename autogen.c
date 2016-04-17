/******************************************************************************
 *                     Code generated with sympy 0.7.6.1                      *
 *                                                                            *
 *              See http://www.sympy.org/ for more information.               *
 *                                                                            *
 *                         This file is part of 'imu'                         *
 ******************************************************************************/
#include "autogen.h"
#include <math.h>

void gradient_descent(double a_x, double a_y, double a_z, double alpha, double b_x, double b_z, double m_x, double m_y, double m_z, double q_0, double q_1, double q_2, double q_3, double *out_1694602195383427280) {

   out_1694602195383427280[0] = -alpha*(2*q_0*(-a_z + pow(q_0, 2) - pow(q_1, 2) - pow(q_2, 2) + pow(q_3, 2)) - 2*q_1*(-a_y - 2*q_0*q_1 + 2*q_2*q_3) + 2*q_2*(-a_x + 2*q_0*q_2 + 2*q_1*q_3) + (2*b_x*q_0 + 2*b_z*q_2)*(-m_x + q_0*(b_x*q_0 + b_z*q_2) - q_1*(-b_x*q_1 - b_z*q_3) + q_2*(-b_x*q_2 + b_z*q_0) - q_3*(b_x*q_3 - b_z*q_1)) + (-2*b_x*q_2 + 2*b_z*q_0)*(-m_z + q_0*(-b_x*q_2 + b_z*q_0) + q_1*(b_x*q_3 - b_z*q_1) - q_2*(b_x*q_0 + b_z*q_2) - q_3*(-b_x*q_1 - b_z*q_3)) + (2*b_x*q_3 - 2*b_z*q_1)*(-m_y + q_0*(b_x*q_3 - b_z*q_1) - q_1*(-b_x*q_2 + b_z*q_0) - q_2*(-b_x*q_1 - b_z*q_3) + q_3*(b_x*q_0 + b_z*q_2))) + q_0;
   out_1694602195383427280[1] = -alpha*(-2*q_0*(-a_y - 2*q_0*q_1 + 2*q_2*q_3) - 2*q_1*(-a_z + pow(q_0, 2) - pow(q_1, 2) - pow(q_2, 2) + pow(q_3, 2)) + 2*q_3*(-a_x + 2*q_0*q_2 + 2*q_1*q_3) + (2*b_x*q_1 + 2*b_z*q_3)*(-m_x + q_0*(b_x*q_0 + b_z*q_2) - q_1*(-b_x*q_1 - b_z*q_3) + q_2*(-b_x*q_2 + b_z*q_0) - q_3*(b_x*q_3 - b_z*q_1)) + (2*b_x*q_2 - 2*b_z*q_0)*(-m_y + q_0*(b_x*q_3 - b_z*q_1) - q_1*(-b_x*q_2 + b_z*q_0) - q_2*(-b_x*q_1 - b_z*q_3) + q_3*(b_x*q_0 + b_z*q_2)) + (2*b_x*q_3 - 2*b_z*q_1)*(-m_z + q_0*(-b_x*q_2 + b_z*q_0) + q_1*(b_x*q_3 - b_z*q_1) - q_2*(b_x*q_0 + b_z*q_2) - q_3*(-b_x*q_1 - b_z*q_3))) + q_1;
   out_1694602195383427280[2] = -alpha*(2*q_0*(-a_x + 2*q_0*q_2 + 2*q_1*q_3) - 2*q_2*(-a_z + pow(q_0, 2) - pow(q_1, 2) - pow(q_2, 2) + pow(q_3, 2)) + 2*q_3*(-a_y - 2*q_0*q_1 + 2*q_2*q_3) + (-2*b_x*q_0 - 2*b_z*q_2)*(-m_z + q_0*(-b_x*q_2 + b_z*q_0) + q_1*(b_x*q_3 - b_z*q_1) - q_2*(b_x*q_0 + b_z*q_2) - q_3*(-b_x*q_1 - b_z*q_3)) + (2*b_x*q_1 + 2*b_z*q_3)*(-m_y + q_0*(b_x*q_3 - b_z*q_1) - q_1*(-b_x*q_2 + b_z*q_0) - q_2*(-b_x*q_1 - b_z*q_3) + q_3*(b_x*q_0 + b_z*q_2)) + (-2*b_x*q_2 + 2*b_z*q_0)*(-m_x + q_0*(b_x*q_0 + b_z*q_2) - q_1*(-b_x*q_1 - b_z*q_3) + q_2*(-b_x*q_2 + b_z*q_0) - q_3*(b_x*q_3 - b_z*q_1))) + q_2;
   out_1694602195383427280[3] = -alpha*(2*q_1*(-a_x + 2*q_0*q_2 + 2*q_1*q_3) + 2*q_2*(-a_y - 2*q_0*q_1 + 2*q_2*q_3) + 2*q_3*(-a_z + pow(q_0, 2) - pow(q_1, 2) - pow(q_2, 2) + pow(q_3, 2)) + (2*b_x*q_0 + 2*b_z*q_2)*(-m_y + q_0*(b_x*q_3 - b_z*q_1) - q_1*(-b_x*q_2 + b_z*q_0) - q_2*(-b_x*q_1 - b_z*q_3) + q_3*(b_x*q_0 + b_z*q_2)) + (2*b_x*q_1 + 2*b_z*q_3)*(-m_z + q_0*(-b_x*q_2 + b_z*q_0) + q_1*(b_x*q_3 - b_z*q_1) - q_2*(b_x*q_0 + b_z*q_2) - q_3*(-b_x*q_1 - b_z*q_3)) + (-2*b_x*q_3 + 2*b_z*q_1)*(-m_x + q_0*(b_x*q_0 + b_z*q_2) - q_1*(-b_x*q_1 - b_z*q_3) + q_2*(-b_x*q_2 + b_z*q_0) - q_3*(b_x*q_3 - b_z*q_1))) + q_3;

}

void madgwick(double a_x, double a_y, double a_z, double b_x, double b_z, double beta, double dt, double m_x, double m_y, double m_z, double q_0, double q_1, double q_2, double q_3, double w_x, double w_y, double w_z, double *out_5344619444326987472) {

   out_5344619444326987472[0] = dt*(-beta*(2*q_0*(-a_z + pow(q_0, 2) - pow(q_1, 2) - pow(q_2, 2) + pow(q_3, 2)) - 2*q_1*(-a_y - 2*q_0*q_1 + 2*q_2*q_3) + 2*q_2*(-a_x + 2*q_0*q_2 + 2*q_1*q_3) + (2*b_x*q_0 + 2*b_z*q_2)*(-m_x + q_0*(b_x*q_0 + b_z*q_2) - q_1*(-b_x*q_1 - b_z*q_3) + q_2*(-b_x*q_2 + b_z*q_0) - q_3*(b_x*q_3 - b_z*q_1)) + (-2*b_x*q_2 + 2*b_z*q_0)*(-m_z + q_0*(-b_x*q_2 + b_z*q_0) + q_1*(b_x*q_3 - b_z*q_1) - q_2*(b_x*q_0 + b_z*q_2) - q_3*(-b_x*q_1 - b_z*q_3)) + (2*b_x*q_3 - 2*b_z*q_1)*(-m_y + q_0*(b_x*q_3 - b_z*q_1) - q_1*(-b_x*q_2 + b_z*q_0) - q_2*(-b_x*q_1 - b_z*q_3) + q_3*(b_x*q_0 + b_z*q_2))) - 0.5*q_1*w_x - 0.5*q_2*w_y - 0.5*q_3*w_z) + q_0;
   out_5344619444326987472[1] = dt*(-beta*(-2*q_0*(-a_y - 2*q_0*q_1 + 2*q_2*q_3) - 2*q_1*(-a_z + pow(q_0, 2) - pow(q_1, 2) - pow(q_2, 2) + pow(q_3, 2)) + 2*q_3*(-a_x + 2*q_0*q_2 + 2*q_1*q_3) + (2*b_x*q_1 + 2*b_z*q_3)*(-m_x + q_0*(b_x*q_0 + b_z*q_2) - q_1*(-b_x*q_1 - b_z*q_3) + q_2*(-b_x*q_2 + b_z*q_0) - q_3*(b_x*q_3 - b_z*q_1)) + (2*b_x*q_2 - 2*b_z*q_0)*(-m_y + q_0*(b_x*q_3 - b_z*q_1) - q_1*(-b_x*q_2 + b_z*q_0) - q_2*(-b_x*q_1 - b_z*q_3) + q_3*(b_x*q_0 + b_z*q_2)) + (2*b_x*q_3 - 2*b_z*q_1)*(-m_z + q_0*(-b_x*q_2 + b_z*q_0) + q_1*(b_x*q_3 - b_z*q_1) - q_2*(b_x*q_0 + b_z*q_2) - q_3*(-b_x*q_1 - b_z*q_3))) + 0.5*q_0*w_x + 0.5*q_2*w_z - 0.5*q_3*w_y) + q_1;
   out_5344619444326987472[2] = dt*(-beta*(2*q_0*(-a_x + 2*q_0*q_2 + 2*q_1*q_3) - 2*q_2*(-a_z + pow(q_0, 2) - pow(q_1, 2) - pow(q_2, 2) + pow(q_3, 2)) + 2*q_3*(-a_y - 2*q_0*q_1 + 2*q_2*q_3) + (-2*b_x*q_0 - 2*b_z*q_2)*(-m_z + q_0*(-b_x*q_2 + b_z*q_0) + q_1*(b_x*q_3 - b_z*q_1) - q_2*(b_x*q_0 + b_z*q_2) - q_3*(-b_x*q_1 - b_z*q_3)) + (2*b_x*q_1 + 2*b_z*q_3)*(-m_y + q_0*(b_x*q_3 - b_z*q_1) - q_1*(-b_x*q_2 + b_z*q_0) - q_2*(-b_x*q_1 - b_z*q_3) + q_3*(b_x*q_0 + b_z*q_2)) + (-2*b_x*q_2 + 2*b_z*q_0)*(-m_x + q_0*(b_x*q_0 + b_z*q_2) - q_1*(-b_x*q_1 - b_z*q_3) + q_2*(-b_x*q_2 + b_z*q_0) - q_3*(b_x*q_3 - b_z*q_1))) + 0.5*q_0*w_y - 0.5*q_1*w_z + 0.5*q_3*w_x) + q_2;
   out_5344619444326987472[3] = dt*(-beta*(2*q_1*(-a_x + 2*q_0*q_2 + 2*q_1*q_3) + 2*q_2*(-a_y - 2*q_0*q_1 + 2*q_2*q_3) + 2*q_3*(-a_z + pow(q_0, 2) - pow(q_1, 2) - pow(q_2, 2) + pow(q_3, 2)) + (2*b_x*q_0 + 2*b_z*q_2)*(-m_y + q_0*(b_x*q_3 - b_z*q_1) - q_1*(-b_x*q_2 + b_z*q_0) - q_2*(-b_x*q_1 - b_z*q_3) + q_3*(b_x*q_0 + b_z*q_2)) + (2*b_x*q_1 + 2*b_z*q_3)*(-m_z + q_0*(-b_x*q_2 + b_z*q_0) + q_1*(b_x*q_3 - b_z*q_1) - q_2*(b_x*q_0 + b_z*q_2) - q_3*(-b_x*q_1 - b_z*q_3)) + (-2*b_x*q_3 + 2*b_z*q_1)*(-m_x + q_0*(b_x*q_0 + b_z*q_2) - q_1*(-b_x*q_1 - b_z*q_3) + q_2*(-b_x*q_2 + b_z*q_0) - q_3*(b_x*q_3 - b_z*q_1))) + 0.5*q_0*w_z + 0.5*q_1*w_y - 0.5*q_2*w_x) + q_3;

}
