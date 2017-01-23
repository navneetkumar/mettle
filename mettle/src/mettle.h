/**
 * Copyright 2015 Rapid7
 * @brief mettle main object
 * @file mettle.h
 */

#ifndef _METTLE_H_
#define _METTLE_H_

#include "channel.h"
#include "process.h"

#include <ev.h>
#include <sigar.h>

struct mettle * mettle(void);

int mettle_start(struct mettle *m);

const char *mettle_get_fqdn(struct mettle *m);

const char *mettle_get_machine_id(struct mettle *m);

int mettle_set_uuid_base64(struct mettle *m, char *uuid_b64);

sigar_t *mettle_get_sigar(struct mettle *m);

struct ev_loop * mettle_get_loop(struct mettle *m);

struct tlv_dispatcher *mettle_get_tlv_dispatcher(struct mettle *m);

void mettle_free(struct mettle *);

int mettle_add_server_uri(struct mettle *m, const char *uri);

int mettle_add_tcp_sock(struct mettle *m, int fd);

struct channelmgr * mettle_get_channelmgr(struct mettle *m);

struct procmgr * mettle_get_procmgr(struct mettle *m);

void escalate();

#endif
