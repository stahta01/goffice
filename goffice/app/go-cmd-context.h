/*
 * go-cmd-context.h:
 *
 * Copyright (C) 2004 Jody Goldberg (jody@gnome.org)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301
 * USA
 */
#ifndef GO_CMD_CONTEXT_H
#define GO_CMD_CONTEXT_H

#include <goffice/app/goffice-app.h>
#include <glib-object.h>

G_BEGIN_DECLS

#define GO_TYPE_CMD_CONTEXT        (go_cmd_context_get_type ())
#define GO_CMD_CONTEXT(o)          (G_TYPE_CHECK_INSTANCE_CAST ((o), GO_TYPE_CMD_CONTEXT, GOCmdContext))
#define GO_IS_CMD_CONTEXT(o)       (G_TYPE_CHECK_INSTANCE_TYPE ((o), GO_TYPE_CMD_CONTEXT))

GType  go_cmd_context_get_type (void);

void   go_cmd_context_error	    (GOCmdContext *cc, GError *err);
char  *go_cmd_context_get_password  (GOCmdContext *cc, char const *fname);
void   go_cmd_context_set_sensitive (GOCmdContext *cc, gboolean flag);

/* utility routines for common errors */
void   go_cmd_context_error_system  (GOCmdContext *cc, char const *msg);
void   go_cmd_context_error_import  (GOCmdContext *cc, char const *msg);
void   go_cmd_context_error_export  (GOCmdContext *cc, char const *msg);
void   go_cmd_context_error_invalid (GOCmdContext *cc,
				     char const *msg, char const *val);
void   go_cmd_context_error_info    (GOCmdContext *cc, GOErrorInfo *stack);
void   go_cmd_context_error_info_list (GOCmdContext *cc, GSList *stack);

void   go_cmd_context_progress_set	   (GOCmdContext *gcc, double f);
void   go_cmd_context_progress_message_set (GOCmdContext *gcc, char const *msg);

/* An initial set of std errors */
GQuark go_error_system  (void);
GQuark go_error_import  (void);
GQuark go_error_export  (void);
GQuark go_error_invalid (void);

G_END_DECLS

#endif /* GO_CMD_CONTEXT_H */
