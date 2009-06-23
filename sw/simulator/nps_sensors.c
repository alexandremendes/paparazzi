#include "nps_sensors.h"

#include "airframe.h"
#include NPS_SENSORS_PARAMS

struct NpsSensors sensors;

void nps_sensors_init(double time) {

  struct DoubleEulers body_to_imu_eulers = 
    { NPS_BODY_TO_IMU_PHI, NPS_BODY_TO_IMU_THETA, NPS_BODY_TO_IMU_PSI };
  DOUBLE_RMAT_OF_EULERS(sensors.body_to_imu_rmat, body_to_imu_eulers);

  nps_sensor_gyro_init(&sensors.gyro, time);
  nps_sensor_accel_init(&sensors.accel, time);

}

void nps_sensors_run_step(double time) {
  nps_sensor_gyro_run_step(&sensors.gyro, time, &sensors.body_to_imu_rmat);
  nps_sensor_accel_run_step(&sensors.accel, time, &sensors.body_to_imu_rmat);
}


bool_t nps_sensors_gyro_available(void) {
  if (sensors.gyro.data_available) {
    sensors.gyro.data_available = FALSE;
    return TRUE;
  }
  return FALSE;
}
