/**
 * Copyright (C) 2008-2009 Felipe Contreras.
 * Copyright (C) 1998-2006 Pidgin (see pidgin-copyright)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef MSN_SYNC_H
#define MSN_SYNC_H

typedef struct MsnSync MsnSync;

#include "session.h"

#include "cmd/table.h"

#include "ab/pn_contact.h"

struct MsnSync
{
    MsnSession *session;
    MsnTable *cbs_table;
    MsnTable *old_cbs_table;

    gint num_users;
    gint total_users;
    gint num_groups;
    gint total_groups;
    struct pn_contact *last_user;
};

void msn_sync_init (void);
void msn_sync_end (void);

MsnSync *msn_sync_new (MsnSession *session);
void msn_sync_destroy (MsnSync *sync);

#endif /* MSN_SYNC_H */
