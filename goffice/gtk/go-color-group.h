/*
 * go-color-group.h - Utility to keep a shared memory of custom colors
 * between arbitrary widgets.
 * Copyright 2000, Michael Levy
 * Copyright 2001, Almer S. Tigelaar
 *
 * Authors:
 *   Michael Levy (mlevy@genoscope.cns.fr)
 * Revised and polished by:
 *   Almer S. Tigelaar <almer@gnome.org>
 * Rewritten yet again by
 *   Jody Goldberg <jody@gnome.org>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) version 3.
 *
 * This library is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301
 * USA.
 */

#ifndef _GO_COLOR_GROUP_H_
#define _GO_COLOR_GROUP_H_

#include <goffice/goffice.h>

G_BEGIN_DECLS

#define GO_COLOR_GROUP_HISTORY_SIZE	8

typedef struct {
	GObject  parent;

        char	  *name;
	gpointer   context;

        GOColor	history[GO_COLOR_GROUP_HISTORY_SIZE];
} GOColorGroup;

#define GO_TYPE_COLOR_GROUP     (go_color_group_get_type ())
#define GO_COLOR_GROUP(obj)     (G_TYPE_CHECK_INSTANCE_CAST ((obj), GO_TYPE_COLOR_GROUP, GOColorGroup))
#define GO_IS_COLOR_GROUP(obj)  (G_TYPE_CHECK_INSTANCE_TYPE ((obj), GO_TYPE_COLOR_GROUP))

GType         go_color_group_get_type  (void);
GOColorGroup *go_color_group_find      (char const *name, gpointer context);
GOColorGroup *go_color_group_fetch     (char const *name, gpointer context);
void          go_color_group_add_color (GOColorGroup *cg, GOColor c);

G_END_DECLS

#endif /* _GO_COLOR_GROUP_H_ */
