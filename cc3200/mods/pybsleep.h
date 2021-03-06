/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Daniel Campora
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef PYBSLEEP_H_
#define PYBSLEEP_H_

/******************************************************************************
 DEFINE CONSTANTS
 ******************************************************************************/
#define PYB_PWR_MODE_ACTIVE_IDLE                (0x00)
#define PYB_PWR_MODE_LPDS                       (0x01)
#define PYB_PWR_MODE_HIBERNATE                  (0x02)

/******************************************************************************
 DEFINE TYPES
 ******************************************************************************/
typedef void (*WakeUpCB_t)(const mp_obj_t self);

/******************************************************************************
 DECLARE EXPORTED VARIABLES
 ******************************************************************************/
extern const mp_obj_base_t pyb_sleep_obj;

/******************************************************************************
 DECLARE FUNCTIONS
 ******************************************************************************/
void pyblsleep_init0 (void);
void pybsleep_add (const mp_obj_t obj, WakeUpCB_t wakeup);
void pybsleep_remove (const mp_obj_t obj);
void pybsleep_set_wlan_wake_callback (mp_obj_t cb_obj);
void pybsleep_set_gpio_wake_callback (mp_obj_t cb_obj);
void pybsleep_set_timer_wake_callback (mp_obj_t cb_obj);

#endif /* PYBSLEEP_H_ */
