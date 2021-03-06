/*
 * $Id: booz_imu.h 4370 2009-12-10 20:41:46Z aibara $
 *  
 * Copyright (C) 2008-2009 Antoine Drouin <poinix@gmail.com>
 *
 * This file is part of paparazzi.
 *
 * paparazzi is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * paparazzi is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with paparazzi; see the file COPYING.  If not, write to
 * the Free Software Foundation, 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA. 
 */

#include "booz_imu.h"
#include "booz_ahrs.h"
#include "booz_actuators.h"


///////////////////////////////////////////
//
//	IMU
//
///////////////////////////////////////////

int32_t booz2_face_reinj_1;

/* must be defined by underlying hardware */
void booz_imu_impl_init(void)
{
}

void booz_imu_periodic(void)
{
}


///////////////////////////////////////////
//
//	AHRS
//
///////////////////////////////////////////

struct BoozAhrs booz_ahrs;
struct BoozAhrsFloat booz_ahrs_float;

void booz_ahrs_init(void)
{
}

void booz_ahrs_align(void)
{
}

void booz_ahrs_propagate(void)
{
}

void booz_ahrs_update_accel(void)
{
}

void booz_ahrs_update_mag(void)
{
}

struct BoozAhrsAligner booz_ahrs_aligner;

void booz_ahrs_aligner_init(void)
{
}

void booz_ahrs_aligner_run(void)
{
}

///////////////////////////////////////////
//
//	ACTUATORS
//
///////////////////////////////////////////

void actuators_init(void)
{
}


void actuators_set(bool_t motors_on)
{
}







