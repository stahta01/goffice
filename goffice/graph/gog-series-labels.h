/* vim: set sw=8: -*- Mode: C; tab-width: 8; indent-tabs-mode: t; c-basic-offset: 8 -*- */
/*
 * gog-series-labels.h
 *
 * Copyright (C) 2011 Jean Brefort (jean.brefort@normalesup.org)
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of the
 * License, or (at your option) any later version.
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

#ifndef GOG_SERIES_LABELS_H
#define GOG_SERIES_LABELS_H

#include <goffice/goffice.h>

G_BEGIN_DECLS

typedef struct  {
	GOString *str;
	int legend_pos;
} GogSeriesLabelElt;

struct _GogSeriesLabels {
	GogOutlinedObject base;

	/* private */
	GogSeriesLabelsPos position;
	GogSeriesLabelsPos default_pos;
	unsigned allowed_pos;
	unsigned offset; /* position offset in pixels */
	char *format;
	GogDatasetElement custom_labels;
	unsigned n_elts;
	GogSeriesLabelElt *elements;
};

#define GOG_TYPE_SERIES_LABELS		(gog_series_labels_get_type ())
#define GOG_SERIES_LABELS(o)		(G_TYPE_CHECK_INSTANCE_CAST ((o), GOG_TYPE_SERIES_LABELS, GogSeriesLabels))
#define GOG_IS_SERIES_LABELS(o)		(G_TYPE_CHECK_INSTANCE_TYPE ((o), GOG_TYPE_SERIES_LABELS))

GType gog_series_labels_get_type (void);

void gog_series_labels_set_allowed_position (GogSeriesLabels *lbls, unsigned allowed);
void gog_series_labels_set_position (GogSeriesLabels *lbls, GogSeriesLabelsPos pos);
void gog_series_labels_set_default_position (GogSeriesLabels *lbls, GogSeriesLabelsPos pos);
GogSeriesLabelsPos gog_series_labels_get_position (GogSeriesLabels const *lbls);
GogSeriesLabelElt const *gog_series_labels_scalar_get_element (GogSeriesLabels const *lbls);
GogSeriesLabelElt const *gog_series_labels_vector_get_element (GogSeriesLabels const *lbls, unsigned n);

G_END_DECLS

#endif  /* GOG_SERIES_LABELS_H */