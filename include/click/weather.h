/************************************************************************************************************************
 Copyright (c) 2016, Imagination Technologies Limited and/or its affiliated group companies.
 All rights reserved.
 Redistribution and use in source and binary forms, with or without modification, are permitted provided that the
 following conditions are met:
     1. Redistributions of source code must retain the above copyright notice, this list of conditions and the
        following disclaimer.
     2. Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the
        following disclaimer in the documentation and/or other materials provided with the distribution.
     3. Neither the name of the copyright holder nor the names of its contributors may be used to endorse or promote
        products derived from this software without specific prior written permission.
 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,
 INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
 SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, 
 WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE 
 USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
************************************************************************************************************************/

#ifndef __LETMECREATE_WEATHER_CLICK_H__
#define __LETMECREATE_WEATHER_CLICK_H__
#include <stdint.h>

/**
 * @brief Reads current values of temperature, pressure, humidity from sensor.
 *
 * @param mikrobus_index Index of the mikrobus used by the click (see #MIKROBUS_INDEX)
 * @param[out] temperature measured by sensor, or NULL if not interested in this value.
 * @param[out] pressure measured by sensor, or NULL if not interested in this value.
 * @param[out] humidity measured by sensor, or NULL if not interested in this value.
 * @return 0 if success otherwise -1
 */
uint8_t weather_click_read_measurements(uint8_t mikrobus_index, double* temperature, double* pressure, double* humidity);

/**
 * @brief Setups sensor configuration as recommended for indoor measurement in Bosh BME 280 data sheet.
 * @param mikrobus_index Index of the mikrobus used by the click (see #MIKROBUS_INDEX)
 * @return 0 if success otherwise -1
 */
uint8_t weather_click_enable(uint8_t mikrobus_index);


#endif /* WEATHER_H_ */