/*
 * spdif_ctrl.h
 *
 *  Created on: Jan 28, 2015
 *      Author: Ed
 */

#ifndef SPDIF_CTRL_H_
#define SPDIF_CTRL_H_

#ifdef __XC__
interface spdif_sr_ctl {
  void set_sample_rate(unsigned sr);
};
#endif

#endif /* SPDIF_CTRL_H_ */
