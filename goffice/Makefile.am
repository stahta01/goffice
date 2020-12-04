AUTOMAKE_OPTIONS = subdir-objects

-include $(INTROSPECTION_MAKEFILE)
INTROSPECTION_GIRS =
INTROSPECTION_SCANNER_ARGS = \
	--add-include-path="${INTROSPECTION_GIRDIR}" \
	-v --warn-all --accept-unprefixed -DGOFFICE_DISABLE_DEPRECATED \
	--namespace GOffice --nsversion="@GOFFICE_API_VER@" \
	--identifier-filter-cmd="$(top_srcdir)/tools/introspection-identifier-filter" \
	--identifier-prefix="GO"  --identifier-prefix="Go" \
	--symbol-prefix="go" --symbol-prefix="libgoffice"

INTROSPECTION_COMPILER_ARGS = \
	--includedir=$(srcdir) \
	--includedir=. \
	--includedir="${INTROSPECTION_GIRDIR}"

#####################################
#app directory files

noinst_HEADERS = \
	app/file-priv.h \
	goffice-debug.h

app_SOURCES =					\
	app/go-doc.c				\
	app/go-doc-control.c			\
	app/go-view.c				\
						\
	app/go-plugin.c				\
	app/go-plugin-loader.c			\
	app/go-plugin-loader-module.c		\
	app/go-plugin-service.c			\
						\
	app/file.c				\
	app/error-info.c			\
	app/io-context.c			\
	app/go-cmd-context.c			\
	app/go-conf.c

appdir = $(goffice_include_dir)/app
app_api_headers =				\
	$(top_srcdir)/goffice/app/goffice-app.h			\
						\
	$(top_srcdir)/goffice/app/go-doc.h				\
	$(top_srcdir)/goffice/app/go-doc-impl.h			\
	$(top_srcdir)/goffice/app/go-doc-control.h			\
	$(top_srcdir)/goffice/app/go-doc-control-impl.h		\
	$(top_srcdir)/goffice/app/go-view.h				\
	$(top_srcdir)/goffice/app/go-plugin.h				\
	$(top_srcdir)/goffice/app/go-plugin-loader.h			\
	$(top_srcdir)/goffice/app/go-plugin-loader-module.h		\
	$(top_srcdir)/goffice/app/go-plugin-service.h			\
	$(top_srcdir)/goffice/app/go-plugin-service-impl.h		\
	$(top_srcdir)/goffice/app/file.h				\
	$(top_srcdir)/goffice/app/error-info.h			\
	$(top_srcdir)/goffice/app/io-context.h			\
	$(top_srcdir)/goffice/app/io-context-priv.h			\
	$(top_srcdir)/goffice/app/go-cmd-context.h			\
	$(top_srcdir)/goffice/app/go-cmd-context-impl.h		\
	$(top_srcdir)/goffice/app/go-conf.h

app_HEADERS = 	\
	$(app_api_headers) \
	$(top_srcdir)/goffice/app/module-plugin-defs.h

# This list should be empty when we reach a stable phase.
app_UNUSED = \
	app/go-app.h \
	app/go-error-stack.h \
	app/go-object.c \
	app/go-object.h \
	app/go-service.c \
	app/go-service.h \
	app/go-service-impl.h

EXTRA_DIST = $(app_UNUSED)		\
	app/go-conf-keyfile.c		\
	app/go-conf-gsettings.c		\
	app/go-conf-win32.c

#####################################
# canvas directory files

canvas_SOURCES =	\
	canvas/goc-arc.c		\
	canvas/goc-canvas.c		\
	canvas/goc-circle.c		\
	canvas/goc-ellipse.c		\
	canvas/goc-graph.c		\
	canvas/goc-group.c		\
	canvas/goc-item.c		\
	canvas/goc-image.c		\
	canvas/goc-line.c		\
	canvas/goc-path.c		\
	canvas/goc-pixbuf.c		\
	canvas/goc-polyline.c		\
	canvas/goc-polygon.c		\
	canvas/goc-rectangle.c		\
	canvas/goc-styled-item.c	\
	canvas/goc-text.c		\
	canvas/goc-utils.c

canvas_gtk_SOURCES= \
	canvas/goc-component.c	\
	canvas/goc-widget.c

canvasdir = $(goffice_include_dir)/canvas
canvas_HEADERS =	\
	$(top_srcdir)/goffice/canvas/goc-arc.h		\
	$(top_srcdir)/goffice/canvas/goc-canvas.h		\
	$(top_srcdir)/goffice/canvas/goc-circle.h		\
	$(top_srcdir)/goffice/canvas/goc-component.h		\
	$(top_srcdir)/goffice/canvas/goc-ellipse.h		\
	$(top_srcdir)/goffice/canvas/goc-graph.h		\
	$(top_srcdir)/goffice/canvas/goc-group.h		\
	$(top_srcdir)/goffice/canvas/goc-item.h		\
	$(top_srcdir)/goffice/canvas/goc-image.h		\
	$(top_srcdir)/goffice/canvas/goc-line.h		\
	$(top_srcdir)/goffice/canvas/goc-path.h		\
	$(top_srcdir)/goffice/canvas/goc-pixbuf.h		\
	$(top_srcdir)/goffice/canvas/goc-polyline.h		\
	$(top_srcdir)/goffice/canvas/goc-polygon.h		\
	$(top_srcdir)/goffice/canvas/goc-rectangle.h		\
	$(top_srcdir)/goffice/canvas/goc-structs.h		\
	$(top_srcdir)/goffice/canvas/goc-styled-item.h	\
	$(top_srcdir)/goffice/canvas/goc-text.h		\
	$(top_srcdir)/goffice/canvas/goc-utils.h		\
	$(top_srcdir)/goffice/canvas/goc-widget.h		\
	$(top_srcdir)/goffice/canvas/goffice-canvas.h

#####################################
# component directory files

component_SOURCES =				\
	component/go-component.c		\
	component/go-component-factory.c	\
	component/go-component-mime-dialog.c

componentdir = $(goffice_include_dir)/component
component_HEADERS =				\
	$(top_srcdir)/goffice/component/goffice-component.h		\
	$(top_srcdir)/goffice/component/go-component.h		\
	$(top_srcdir)/goffice/component/go-component-factory.h	\
	$(top_srcdir)/goffice/component/go-component-mime-dialog.h

#####################################
# data directory files

data_SOURCES =	\
	data/go-data.c 		\
	data/go-data-simple.c

go_datadir = $(goffice_include_dir)/data
go_data_HEADERS =				\
	$(top_srcdir)/goffice/data/goffice-data.h			\
	$(top_srcdir)/goffice/data/go-data.h				\
	$(top_srcdir)/goffice/data/go-data-impl.h			\
	$(top_srcdir)/goffice/data/go-data-simple.h

#####################################
# graph directory files

graph_SOURCES =					\
	graph/gog-object.c			\
	graph/gog-object-xml.c			\
	graph/gog-styled-object.c		\
	graph/gog-outlined-object.c		\
	graph/gog-view.c			\
						\
	graph/gog-graph.c			\
	graph/gog-chart.c			\
						\
	graph/gog-chart-map.c			\
	graph/gog-chart-map-3d.c		\
	graph/gog-3d-box.c			\
						\
	graph/gog-axis.c			\
	graph/gog-axis-line.c			\
	graph/gog-axis-color-map.c		\
	graph/gog-legend.c			\
	graph/gog-color-scale.c			\
	graph/gog-label.c			\
	graph/gog-grid.c			\
	graph/gog-grid-line.c			\
						\
	graph/gog-theme.c			\
						\
	graph/gog-plot.c			\
	graph/gog-plot-engine.c			\
	graph/gog-series.c			\
	graph/gog-error-bar.c			\
	graph/gog-trend-line.c			\
	graph/gog-reg-curve.c			\
	graph/gog-smoothed-curve.c		\
	graph/gog-series-labels.c		\
	graph/gog-series-lines.c		\
	graph/gog-data-set.c			\
						\
	graph/gog-renderer.c

graph_gtk_SOURCES =				\
	graph/gog-guru.c			\
	graph/gog-data-allocator.c		\
	graph/gog-child-button.c

graph_lasem_SOURCES = \
	graph/gog-equation.c

graphdir = $(goffice_include_dir)/graph
graph_HEADERS =					\
	$(top_srcdir)/goffice/graph/goffice-graph.h			\
	$(top_srcdir)/goffice/graph/gog-object.h			\
	$(top_srcdir)/goffice/graph/gog-object-xml.h			\
	$(top_srcdir)/goffice/graph/gog-styled-object.h		\
	$(top_srcdir)/goffice/graph/gog-outlined-object.h		\
	$(top_srcdir)/goffice/graph/gog-view.h			\
	$(top_srcdir)/goffice/graph/gog-graph.h			\
	$(top_srcdir)/goffice/graph/gog-graph-impl.h			\
	$(top_srcdir)/goffice/graph/gog-chart.h			\
	$(top_srcdir)/goffice/graph/gog-chart-impl.h			\
	$(top_srcdir)/goffice/graph/gog-chart-map.h			\
	$(top_srcdir)/goffice/graph/gog-chart-map-3d.h		\
	$(top_srcdir)/goffice/graph/gog-3d-box.h			\
	$(top_srcdir)/goffice/graph/gog-axis.h			\
	$(top_srcdir)/goffice/graph/gog-axis-line.h			\
	$(top_srcdir)/goffice/graph/gog-axis-color-map.h		\
	$(top_srcdir)/goffice/graph/gog-legend.h			\
	$(top_srcdir)/goffice/graph/gog-color-scale.h			\
	$(top_srcdir)/goffice/graph/gog-label.h			\
	$(top_srcdir)/goffice/graph/gog-grid.h			\
	$(top_srcdir)/goffice/graph/gog-grid-line.h			\
	$(top_srcdir)/goffice/graph/gog-theme.h			\
	$(top_srcdir)/goffice/graph/gog-plot.h			\
	$(top_srcdir)/goffice/graph/gog-plot-impl.h			\
	$(top_srcdir)/goffice/graph/gog-plot-engine.h			\
	$(top_srcdir)/goffice/graph/gog-series.h			\
	$(top_srcdir)/goffice/graph/gog-series-impl.h			\
	$(top_srcdir)/goffice/graph/gog-error-bar.h			\
	$(top_srcdir)/goffice/graph/gog-trend-line.h			\
	$(top_srcdir)/goffice/graph/gog-reg-curve.h			\
	$(top_srcdir)/goffice/graph/gog-smoothed-curve.h		\
	$(top_srcdir)/goffice/graph/gog-series-labels.h		\
	$(top_srcdir)/goffice/graph/gog-series-lines.h		\
	$(top_srcdir)/goffice/graph/gog-data-set.h			\
	$(top_srcdir)/goffice/graph/gog-renderer.h

graph_gtkdir = $(goffice_include_dir)/graph
graph_gtk_HEADERS =				\
	$(top_srcdir)/goffice/graph/gog-guru.h			\
	$(top_srcdir)/goffice/graph/gog-data-allocator.h		\
	$(top_srcdir)/goffice/graph/gog-child-button.h

graph_lasemdir = $(goffice_include_dir)/graph
graph_lasem_HEADERS = \
	$(top_srcdir)/goffice/graph/gog-equation.h

noinst_HEADERS += \
	graph/gog-axis-line-impl.h

#####################################
# gtk directory files

gtk_SOURCES =					\
	gtk/goffice-gtk.c			\
						\
	gtk/go-font-sel.c			\
	gtk/go-font-sel-dialog.c		\
	gtk/go-format-sel.c			\
	gtk/go-rotation-sel.c			\
	gtk/go-charmap-sel.c			\
	gtk/go-locale-sel.c			\
	gtk/go-3d-rotation-sel.c		\
	gtk/go-arrow-sel.c			\
						\
	gtk/go-optionmenu.c			\
	gtk/go-combo-box.c			\
	gtk/go-color-group.c			\
	gtk/go-color-palette.c			\
	gtk/go-combo-color.c			\
	gtk/go-combo-pixmaps.c			\
						\
	gtk/go-action-combo-color.c		\
	gtk/go-action-combo-pixmaps.c		\
	gtk/go-action-combo-stack.c		\
	gtk/go-action-combo-text.c		\
						\
	gtk/go-calendar-button.c		\
	gtk/go-palette.c			\
	gtk/go-selector.c			\
	gtk/go-color-selector.c			\
	gtk/go-gradient-selector.c		\
	gtk/go-line-selector.c			\
	gtk/go-marker-selector.c		\
	gtk/go-pattern-selector.c		\
						\
	gtk/go-graph-widget.c			\
	gtk/go-image-sel.c				\
	gtk/go-math-editor.c

gtkdir = $(goffice_include_dir)/gtk
gtk_HEADERS =					\
	$(top_srcdir)/goffice/gtk/goffice-gtk.h			\
						\
	$(top_srcdir)/goffice/gtk/go-font-sel.h			\
	$(top_srcdir)/goffice/gtk/go-font-sel-dialog.h		\
	$(top_srcdir)/goffice/gtk/go-format-sel.h			\
	$(top_srcdir)/goffice/gtk/go-rotation-sel.h			\
	$(top_srcdir)/goffice/gtk/go-charmap-sel.h			\
	$(top_srcdir)/goffice/gtk/go-locale-sel.h			\
	$(top_srcdir)/goffice/gtk/go-3d-rotation-sel.h		\
	$(top_srcdir)/goffice/gtk/go-arrow-sel.h			\
						\
	$(top_srcdir)/goffice/gtk/go-optionmenu.h			\
	$(top_srcdir)/goffice/gtk/go-combo-box.h			\
	$(top_srcdir)/goffice/gtk/go-color-group.h			\
	$(top_srcdir)/goffice/gtk/go-color-palette.h			\
	$(top_srcdir)/goffice/gtk/go-combo-color.h			\
	$(top_srcdir)/goffice/gtk/go-combo-pixmaps.h			\
						\
	$(top_srcdir)/goffice/gtk/go-action-combo-color.h		\
	$(top_srcdir)/goffice/gtk/go-action-combo-pixmaps.h		\
	$(top_srcdir)/goffice/gtk/go-action-combo-stack.h		\
	$(top_srcdir)/goffice/gtk/go-action-combo-text.h		\
						\
	$(top_srcdir)/goffice/gtk/go-calendar-button.h		\
	$(top_srcdir)/goffice/gtk/go-palette.h			\
	$(top_srcdir)/goffice/gtk/go-selector.h			\
	$(top_srcdir)/goffice/gtk/go-color-selector.h			\
	$(top_srcdir)/goffice/gtk/go-gradient-selector.h		\
	$(top_srcdir)/goffice/gtk/go-line-selector.h			\
	$(top_srcdir)/goffice/gtk/go-marker-selector.h		\
	$(top_srcdir)/goffice/gtk/go-pattern-selector.h		\
						\
	$(top_srcdir)/goffice/gtk/go-graph-widget.h			\
	$(top_srcdir)/goffice/gtk/go-image-sel.h				\
	$(top_srcdir)/goffice/gtk/go-math-editor.h

#####################################
# maths directory files

math_SOURCES =					\
	math/go-accumulator.c			\
	math/go-dtoa.c				\
	math/go-math.c				\
	math/go-rangefunc.c			\
	math/go-regression.c			\
	math/go-cspline.c			\
	math/go-complex.c			\
	math/go-fft.c				\
	math/go-matrix.c			\
	math/go-matrix3x3.c			\
	math/go-quad.c				\
	math/go-R.c				\
	math/go-distribution.c

mathdir = $(goffice_include_dir)/math
math_HEADERS =					\
	$(top_srcdir)/goffice/math/goffice-math.h			\
	$(top_srcdir)/goffice/math/go-accumulator.h			\
	$(top_srcdir)/goffice/math/go-dtoa.h				\
	$(top_srcdir)/goffice/math/go-math.h				\
	$(top_srcdir)/goffice/math/go-rangefunc.h			\
	$(top_srcdir)/goffice/math/go-regression.h			\
	$(top_srcdir)/goffice/math/go-cspline.h			\
	$(top_srcdir)/goffice/math/go-complex.h			\
	$(top_srcdir)/goffice/math/go-fft.h				\
	$(top_srcdir)/goffice/math/go-matrix.h			\
	$(top_srcdir)/goffice/math/go-matrix3x3.h			\
	$(top_srcdir)/goffice/math/go-quad.h				\
	$(top_srcdir)/goffice/math/go-R.h				\
	$(top_srcdir)/goffice/math/go-distribution.h

#####################################
# utils directory files
utils_SOURCES =					\
	utils/go-marshalers.list		\
						\
	utils/goffice-utils.c			\
	utils/go-color.c			\
	utils/go-file.c				\
	utils/go-font.c				\
						\
	utils/go-cairo.c			\
	utils/go-gradient.c			\
	utils/go-image.c			\
	utils/go-pixbuf.c			\
	utils/go-svg.c				\
	utils/go-emf.c				\
	utils/go-spectre.c			\
	utils/go-line.c				\
	utils/go-locale.c			\
	utils/go-marker.c			\
	utils/go-mml-to-itex.c		\
	utils/go-path.c				\
	utils/go-pattern.c			\
	utils/go-geometry.c			\
	utils/go-rsm.c				\
	utils/go-string.c			\
	utils/go-undo.c				\
	utils/go-unit.c				\
	utils/datetime.c			\
	utils/formats.c				\
	utils/go-format.c			\
	utils/regutf8.c				\
						\
	utils/go-glib-extras.c			\
	utils/go-libxml-extras.c		\
	utils/go-pango-extras.c			\
	utils/go-gdk-pixbuf.c			\
	utils/go-persist.c			\
	utils/go-bezier.c			\
	utils/go-editor.c			\
	utils/go-style.c			\
	utils/go-styled-object.c

utilsdir = $(goffice_include_dir)/utils
utils_HEADERS =					\
	$(top_srcdir)/goffice/utils/goffice-utils.h			\
	$(top_srcdir)/goffice/utils/go-cairo.h			\
	$(top_srcdir)/goffice/utils/go-color.h			\
	$(top_srcdir)/goffice/utils/go-file.h				\
	$(top_srcdir)/goffice/utils/go-font.h				\
	$(top_srcdir)/goffice/utils/go-gradient.h			\
	$(top_srcdir)/goffice/utils/go-image.h			\
	$(top_srcdir)/goffice/utils/go-pixbuf.h			\
	$(top_srcdir)/goffice/utils/go-svg.h				\
	$(top_srcdir)/goffice/utils/go-emf.h				\
	$(top_srcdir)/goffice/utils/go-spectre.h			\
	$(top_srcdir)/goffice/utils/go-line.h				\
	$(top_srcdir)/goffice/utils/go-locale.h			\
	$(top_srcdir)/goffice/utils/go-marker.h			\
	$(top_srcdir)/goffice/utils/go-mml-to-itex.h		\
	$(top_srcdir)/goffice/utils/go-path.h				\
	$(top_srcdir)/goffice/utils/go-pattern.h			\
	$(top_srcdir)/goffice/utils/go-unit.h				\
	$(top_srcdir)/goffice/utils/go-units.h			\
	$(top_srcdir)/goffice/utils/go-geometry.h			\
	$(top_srcdir)/goffice/utils/go-string.h			\
	$(top_srcdir)/goffice/utils/go-undo.h				\
	$(top_srcdir)/goffice/utils/datetime.h			\
	$(top_srcdir)/goffice/utils/go-format.h			\
	$(top_srcdir)/goffice/utils/regutf8.h				\
	$(top_srcdir)/goffice/utils/go-glib-extras.h			\
	$(top_srcdir)/goffice/utils/go-libxml-extras.h		\
	$(top_srcdir)/goffice/utils/go-pango-extras.h			\
	$(top_srcdir)/goffice/utils/go-gdk-pixbuf.h			\
	$(top_srcdir)/goffice/utils/go-persist.h			\
	$(top_srcdir)/goffice/utils/go-bezier.h			\
	$(top_srcdir)/goffice/utils/go-editor.h			\
	$(top_srcdir)/goffice/utils/go-rsm.h				\
	$(top_srcdir)/goffice/utils/go-style.h			\
	$(top_srcdir)/goffice/utils/go-styled-object.h

# A hint is needed to build the header first:
BUILT_SOURCES = utils/go-marshalers.h

# Another hint, see bugs #172211 and #172212:
non-intermediate: utils/go-marshalers.c

GENMARSHAL_COMMAND = $(GLIB_GENMARSHAL) --prefix=go_

.list.h:
	if ! [ -x utils ]; then mkdir utils; fi && \
	$(GENMARSHAL_COMMAND) --header $< >$@

.list.c:
	(echo '/* This file has been automatically generated.  Do not edit. */' && \
	echo '#include <goffice/goffice-config.h>' && \
	echo '#include "$*.h"' && \
	$(GENMARSHAL_COMMAND) --body $< ) >$@

lib_LTLIBRARIES = libgoffice-@GOFFICE_API_VER@.la

libgoffice_@GOFFICE_API_VER@_la_LIBADD = 			\
	$(GOFFICE_LIBS)	\
	$(GTK_MAC_LIBS)

libgoffice_@GOFFICE_API_VER@_la_LDFLAGS = -version-info $(VERSION_INFO)
if WITH_WIN32
libgoffice_@GOFFICE_API_VER@_la_DEPENDENCIES = goffice.def
libgoffice_@GOFFICE_API_VER@_la_LDFLAGS += -no-undefined -export-symbols goffice.def
endif

BUILT_SOURCES +=	goffice-paths.h embedded-stuff.c
CLEANFILES = $(BUILT_SOURCES)		\
	utils/go-marshalers.c

libgoffice_@GOFFICE_API_VER@_la_SOURCES = 	\
	goffice.c		\
	goffice-priv.h \
	$(app_SOURCES) \
	$(canvas_SOURCES) \
	$(data_SOURCES) \
	$(graph_SOURCES) \
	$(math_SOURCES) \
	$(utils_SOURCES)

if WITH_GTK
libgoffice_@GOFFICE_API_VER@_la_SOURCES += 	\
	$(canvas_gtk_SOURCES) \
	$(component_SOURCES) \
	$(graph_gtk_SOURCES) \
	$(gtk_SOURCES)
else
EXTRA_DIST += \
	$(canvas_gtk_SOURCES) \
	$(component_SOURCES) \
	$(graph_gtk_SOURCES) \
	$(gtk_SOURCES)
endif

if GOFFICE_WITH_LASEM
libgoffice_@GOFFICE_API_VER@_la_SOURCES += 	\
	$(graph_lasem_SOURCES)
else
EXTRA_DIST += \
	$(graph_lasem_SOURCES)
endif

libgoffice_@GOFFICE_API_VER@_ladir = $(goffice_include_dir)
libgoffice_@GOFFICE_API_VER@_la_HEADERS = 	\
	goffice-features.h	\
	goffice.h

# Depends on this Makefile, because it uses make variables.
goffice-paths.h: Makefile
	@echo 'creating $@'
	@( \
	echo '/* This file has been automatically generated.  Do not edit. */'; \
	echo ''; \
	echo '#ifndef GOFFICE_PATHS_H'; \
	echo '#define GOFFICE_PATHS_H'; \
	echo ''; \
	echo '#define GOFFICE_DATADIR "$(goffice_datadir)"'; \
	echo '#define GOFFICE_LIBDIR "$(goffice_libdir)"'; \
	echo '#define GOFFICE_ICONDIR "$(goffice_icondir)"'; \
	echo '#define GOFFICE_LOCALEDIR "$(goffice_localedir)"'; \
	echo '#define GOFFICE_EXTERNPLUGINDIR "$(goffice_externplugindir)"'; \
	echo ''; \
	echo '#endif /* GOFFICE_PATHS_H */'; \
	) >$@

include $(top_srcdir)/goffice.mk

ALL_HDRS = $(top_srcdir)/goffice/goffice.h $(app_HEADERS) \
	$(canvas_HEADERS) \
	$(go_data_HEADERS) \
	$(graph_HEADERS) \
	$(math_HEADERS) \
	$(utils_HEADERS)

if WITH_GTK
ALL_HDRS += \
	$(canvas_gtk_HEADERS) \
	$(component_HEADERS) \
	$(graph_gtk_HEADERS) \
	$(gtk_HEADERS)
endif

if GOFFICE_WITH_LASEM
ALL_HDRS += \
	$(graph_lasem_HEADERS)
endif


if WITH_WIN32
LIB_PUBLIC_HDRS = $(libgoffice_@GOFFICE_API_VER@_la_HEADERS)


goffice.def: $(ALL_HDRS) $(top_srcdir)/tools/dumpdef.pl
	cat $(top_builddir)/goffice/goffice-config.h $(ALL_HDRS) | \
	sed -e 's/^#[ 	]*include[ 	]\+.*$$//g' | \
	$(CPP) $(AM_CPPFLAGS) "-DGO_VAR_DECL=__declspec(dllexport)" -P - > xgen-localdef.1
	@PERL@ $(top_srcdir)/tools/dumpdef.pl \
		xgen-localdef.1 > xgen-localdef.2
	(cmp -s xgen-localdef.2 local.def || cp xgen-localdef.2 local.def)
	rm -f xgen-localdef.1 xgen-localdef.2
	echo EXPORTS > $@ && \
	grep -E -v '^(go_plugin_init|go_plugin_shutdown)$$' local.def | sort >> $@

if HAVE_LIBEXE
goffice_mslibdir = $(DESTDIR)$(libdir)
goffice_mslib_DATA = goffice-0.lib

goffice-0.lib: libgoffice-@GOFFICE_API_VER@.la goffice.def
	lib -name:libgoffice-0-$(VERSION_IFACE).dll -def:goffice.def -out:$@
endif
endif

# Note: Files also need to be listed in the relevant subdirectory
embedded_stuff_compress = \
	graph/gog-3d-box-prefs.ui		\
	graph/gog-axis-prefs.ui			\
	graph/gog-axis-color-map-prefs.ui	\
	graph/gog-color-scale-prefs.ui	\
	graph/gog-equation-prefs.ui		\
	graph/gog-error-bar-prefs.ui		\
	graph/gog-graph-prefs.ui		\
	graph/gog-guru-type-selector.ui		\
	graph/gog-guru.ui			\
	graph/gog-object-prefs.ui		\
	graph/gog-plot-prefs.ui			\
	graph/gog-reg-curve-prefs.ui		\
	graph/gog-reg-eqn-prefs.ui		\
	graph/gog-series-labels-prefs.ui	\
	graph/gog-series-prefs.ui		\
	graph/gog-theme-editor.ui		\
	graph/new-theme-prefs.ui		\
	gtk/go-3d-rotation-sel.ui		\
	gtk/go-arrow-sel.ui			\
	gtk/go-font-sel.ui			\
	gtk/go-format-sel.ui			\
	gtk/go-image-save-dialog-extra.ui	\
	gtk/go-image-sel.ui			\
	gtk/go-rotation-sel.ui			\
	utils/go-style-prefs.ui

embedded_stuff_raw = \
	gtk/goffice-old.css			\
	gtk/goffice.css				\
	utils/svg-patterns.xml			\
	utils/unknown_image.png			\
	graph/bar-none.png 			\
	graph/bar-vplus.png 			\
	graph/bar-vminus.png 			\
	graph/bar-vboth.png			\
	graph/bar-hplus.png 			\
	graph/bar-hminus.png 			\
	graph/bar-hboth.png

embedded_stuff = $(embedded_stuff_compress) $(embedded_stuff_raw)

EXTRA_DIST += $(embedded_stuff)

embedded-stuff.c: $(top_srcdir)/tools/embedder $(embedded_stuff)
	cd $(srcdir) && @PERL@ $(abs_top_srcdir)/tools/embedder \
		--id-prefix=go: \
		--static \
		--register-function=go_register_ui_files \
		--register-file-function=go_rsm_register_file \
		COMPRESS $(embedded_stuff_compress) \
		NOCOMPRESS $(embedded_stuff_raw) \
		>$(abs_builddir)/$@


if HAVE_INTROSPECTION

INTROSPECTION_GIRS += GOffice-@GOFFICE_API_VER@.gir

GOffice-@GOFFICE_API_VER@.gir: \
	$(INTROSPECTION_SCANNER) \
	libgoffice-@GOFFICE_API_VER@.la
GOffice_@GOFFICE_API_VER_@_gir_INCLUDES = \
	GObject-2.0 \
	Gio-2.0 \
	libxml2-2.0 \
	cairo-1.0 \
	Pango-1.0 \
	Gtk-3.0 \
	Gsf-1
GOffice_@GOFFICE_API_VER_@_gir_CFLAGS = $(AM_CPPFLAGS)
GOffice_@GOFFICE_API_VER_@_gir_LIBS = libgoffice-@GOFFICE_API_VER@.la
GOffice_@GOFFICE_API_VER_@_gir_FILES = \
	$(libgoffice_@GOFFICE_API_VER@_la_SOURCES) \
	$(ALL_HDRS)

girdir = $(GIRDIR)
gir_DATA = $(INTROSPECTION_GIRS)

typelibsdir = $(TYPELIBDIR)
typelibs_DATA = $(INTROSPECTION_GIRS:.gir=.typelib)

CLEANFILES += $(gir_DATA) $(typelibs_DATA)

endif # HAVE_INTROSPECTION
