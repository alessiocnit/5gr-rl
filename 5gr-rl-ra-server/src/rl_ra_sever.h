////////////////////////////////////////////////////////////////////////////////////////
/**
 * 	# Copyright 2020 Centre Tecnol�gic de Telecomunicacions de Catalunya (CTTC/CERCA) www.cttc.es
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.

 * Author: CTTC/CERCA CDN Ricardo Mart�nez (ricardo.martinez@cttc.es)
 */
/////////////////////////////////////////////////////////////////////////////////////////

#ifndef _RL_RA_SERVER_H
#define _RL_RA_SERVER_H


#include <glib.h>
#include <glib/gstdio.h>
#include <glib-2.0/glib/gtypes.h>

///////////////////////////////////////////////////
// IP addressing of peer functional entities
///////////////////////////////////////////////////
extern struct in_addr 5GR_RL_IpAddr;

// TCP Port for the REST API communication with the 5GR RL Core Process
#define 5GR_RL_PORT 		8081       

// External Variables
extern GMainLoop * loop;

///////////////////////////////////////////////////
// External Functions
//////////////////////////////////////////////////
void print_message (guchar *, uint16_t);
struct timeval tv_adjust_pcc (struct timeval );

#endif
