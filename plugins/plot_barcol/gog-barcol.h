/*
 * go-barcol.h
 *
 * Copyright (C) 2003-2004 Jody Goldberg (jody@gnome.org)
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

#ifndef GOG_BARCOL_H
#define GOG_BARCOL_H

#include "gog-1.5d.h"

G_BEGIN_DECLS

typedef struct {
	GogPlot1_5d	base;

	gboolean horizontal;
	int	 overlap_percentage;
	int	 gap_percentage;

} GogBarColPlot;
typedef GogPlot1_5dClass GogBarColPlotClass;

#define GOG_TYPE_BARCOL_PLOT	(gog_barcol_plot_get_type ())
#define GOG_BARCOL_PLOT(o)	(G_TYPE_CHECK_INSTANCE_CAST ((o), GOG_TYPE_BARCOL_PLOT, GogBarColPlot))
#define GOG_IS_PLOT_BARCOL(o)	(G_TYPE_CHECK_INSTANCE_TYPE ((o), GOG_TYPE_BARCOL_PLOT))

GType gog_barcol_plot_get_type (void);
void  gog_barcol_plot_register_type (GTypeModule *module);
void  gog_barcol_view_register_type (GTypeModule *module);
void  gog_barcol_series_register_type (GTypeModule *module);
void  gog_barcol_series_element_register_type (GTypeModule *module);

G_END_DECLS

#endif /* GOG_BARCOL_H */
